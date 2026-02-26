Introduction
============

Converts Olympus Digital Voice Recorder files to WAV files.


Building
========

There are three ways to have it:
- `sandec.c` which requires Wine and a DLL (`san_dec.dll`) to be found in the official Olympus Windows installer (this was the historically first implementation used with odvr and it remains here as an archive)
- `nasced.c` which is a pure Linux implementation (Makefile is configured to build this one by default)
- `sandeclib.c` which is a library that could be used by a driver code in other applications (Makefile is configured to build this one by default)

To build:
- odvr is built with `sandeclib` by default, together with the standalone `nasced.c` tool.
- You can also build them running `make` in sandec folder.

Usage
=====

`sandec [filename].raw`

Copyright
=========
Copyright (C) 2008 Robert Mazur (rm@nateo.pl)
Copyright (c) 2026, Oleg Matviichuk (ma7hway at gmail dot com)
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
