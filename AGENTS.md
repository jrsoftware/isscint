# Isscint AI Agent Guide

## Overview

This is a fork of Scintilla (upstream: `jrsoftware/scintilla`) with modifications for Inno Setup (`jrsoftware/isscint`). It produces `Scintilla.dll` — the code editor component used by Inno Setup's IDE. The DLLs are shipped as `isscint.dll` (x86) and `isscint-x64.dll` (x64) in the issrc repository.

All Inno Setup-specific changes are on top of the upstream Scintilla source. Only the Windows build is used and tested.

## Build

Requires Visual Studio 2022 with C++ tools. Uses `nmake` via `vcvarsall.bat`.

Two settings files (not checked in) are needed:
- `compilesettings.bat` — sets `VSBUILDROOT` to VS build tools path
- `buildsettings.bat` — sets `ISSRCROOT` to the Inno Setup source root

**Compile a single architecture:**
```
compile.bat x86|x64|arm64 [noclean]
```

**Build x86+x64 and copy DLLs to issrc:**
```
build.bat [noclean] [nosynch]
```

The `noclean` flag skips `nmake clean` before building. The `nosynch` flag skips synching to the issrc `Projects\Bin` folder. The makefile is `win32\scintilla.mak`.

**Regenerate header files** after editing `include\Scintilla.iface`: run `include\facer.bat`, which calls `scripts\HFacer.py` and `scripts\ScintillaAPIFacer.py` to regenerate `include\Scintilla.h`, `include\ScintillaMessages.h`, `include\ScintillaTypes.h`, and `include\ScintillaCall.h`. Requires Python. Do not install Python or run these scripts without explicit user approval — Python and its package ecosystem carry supply chain risks.

## Architecture

Scintilla's source is split across three directories:

- **`src/`** — platform-independent core: document model (`Document`, `CellBuffer`), editor logic (`Editor`, `EditView`, `EditModel`), selections, styling, undo, search, autocompletion, calltips. This is the bulk of the code.
- **`win32/`** — Windows platform layer: `ScintillaWin` (the Win32 window subclass of `ScintillaBase`), `PlatWin` (platform abstraction), GDI/D2D surface implementations, listbox, DLL entry point (`ScintillaDLL.cxx`).
- **`include/`** — public API. `Scintilla.iface` is the canonical interface definition; header files are generated from it.

The key class hierarchy is: `Editor` → `ScintillaBase` → `ScintillaWin`. `Editor` handles all editing logic. `ScintillaBase` adds autocompletion and calltips. `ScintillaWin` handles Win32 message dispatch.

## Inno Setup-specific changes

See the `README` file for a list of modifications. The full diff is available via `git diff upstream/main`. Direct2D is disabled (`DISABLE_D2D` in `scintilla.mak`) — only GDI rendering is used.

## Updating from upstream

Upstream Scintilla releases are imported as zip snapshots from SourceForge. The upstream tracking branch is `upstream/main`. After merging, verify the Inno Setup-specific changes (listed in `README`) still apply correctly.
