#TurboPack PNGComponents

Updated for **10.3 Rio** / VER330 / PKG 260

You can still access [10.2 Tokyo](https://github.com/TurboPack/PNGComponents/releases/tag/102Tokyo) and [10.1 Berlin](https://github.com/TurboPack/PNGComponents/releases/tag/101Berlin) versions too.

## Table of contents

1.  Introduction
2.  Package names
3.  Installation
4.  License

## 1. Introduction

PngComponents is a set of components that allows you to include in your application real PNG files.
You can read more about them in the Doku subfolder. 

This is a source-only release of TurboPack PNGComponents. It includes
designtime and runtime packages for Delphi and C++Builder and supports Win32 and Win64.

## 2. Package names

TurboPack PNGComponents package names have the following form:

## Delphi
* PNGComponentsD.bpl       (Delphi Runtime)
* PNGComponentsDDesign.bpl (Delphi Designtime)

## C++Builder
* PNGComponentsD.bpl       (C++Builder Runtime)
* PNGComponentsDDesign.bpl (C++Builder Designtime)

## 3. Installation

PNGComponents are available via the [GetIt Package Manager](http://docwiki.embarcadero.com/RADStudio/en/Installing_a_Package_Using_GetIt_Package_Manager) where you can quickly and easily install and uninstall it.

To manually  install TurboPack PNGComponents into your IDE, take the following
steps:

  1. Unzip the release files into a directory (e.g., `d:\PNGComponents`).

  2. Start RAD Studio.

  3. Add the source subdirectory (e.g., `d:\PNGComponents\source`) to the
     IDE's library path. For CBuilder, add the hpp subdirectory
     (e.g., `d:\PNGComponents\source\hpp\Win32\Debug`) to the IDE's system include path.

  3. Open & compile the runtime package specific to the IDE being
     used.
     
  4. Open & install the designtime package specific to the IDE being
     used. The IDE should notify you the components have been
     installed.
     
## 4. License

[Mozilla Public License 1.1 (MPL 1.1)](https://www.mozilla.org/en-US/MPL/1.1/)
