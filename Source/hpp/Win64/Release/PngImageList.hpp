// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PngImageList.pas' rev: 30.00 (Windows)

#ifndef PngimagelistHPP
#define PngimagelistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <PngFunctions.hpp>
#include <System.ImageList.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Pngimagelist
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPngImageList;
class DELPHICLASS TPngImageCollection;
class DELPHICLASS TPngImageCollectionItems;
class DELPHICLASS TPngImageCollectionItem;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TPngImageList : public Vcl::Controls::TImageList
{
	typedef Vcl::Controls::TImageList inherited;
	
private:
	bool FEnabledImages;
	int FLocked;
	TPngImageCollectionItems* FPngImages;
	Pngfunctions::TPngOptions FPngOptions;
	static bool FIDE_WriteData_Hack;
	int __fastcall GetHeight(void);
	int __fastcall GetWidth(void);
	HIDESBASE void __fastcall SetHeight(const int Value);
	void __fastcall SetPngOptions(const Pngfunctions::TPngOptions Value);
	HIDESBASE void __fastcall SetWidth(const int Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall CopyPngs(void);
	virtual void __fastcall DoDraw(int Index, Vcl::Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	void __fastcall InternalInsertPng(int Index, Vcl::Imaging::Pngimage::TPngImage* const Png, System::Uitypes::TColor Background = (System::Uitypes::TColor)(0x1fffffff));
	void __fastcall InternalAddPng(Vcl::Imaging::Pngimage::TPngImage* const Png, System::Uitypes::TColor Background = (System::Uitypes::TColor)(0x1fffffff));
	HICON __fastcall PngToIcon(Vcl::Imaging::Pngimage::TPngImage* const Png, System::Uitypes::TColor Background = (System::Uitypes::TColor)(0x1fffffff));
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall SetEnabledImages(const bool Value);
	virtual void __fastcall SetPngImages(TPngImageCollectionItems* const Value);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	
public:
	__fastcall virtual TPngImageList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPngImageList(void);
	HIDESBASE virtual int __fastcall Add(Vcl::Graphics::TBitmap* Image, Vcl::Graphics::TBitmap* Mask);
	HIDESBASE virtual int __fastcall AddIcon(Vcl::Graphics::TIcon* Image);
	int __fastcall AddPng(Vcl::Imaging::Pngimage::TPngImage* Image, System::Uitypes::TColor Background = (System::Uitypes::TColor)(0x1fffffff));
	HIDESBASE virtual int __fastcall AddImage(Vcl::Imglist::TCustomImageList* Value, int Index);
	HIDESBASE virtual void __fastcall AddImages(Vcl::Imglist::TCustomImageList* Value);
	HIDESBASE virtual int __fastcall AddMasked(Vcl::Graphics::TBitmap* Image, System::Uitypes::TColor MaskColor);
	HIDESBASE void __fastcall BeginUpdate(void);
	HIDESBASE virtual void __fastcall Clear(void);
	HIDESBASE virtual void __fastcall Delete(int Index);
	HIDESBASE void __fastcall EndUpdate(bool Update = true);
	HIDESBASE virtual void __fastcall Insert(int Index, Vcl::Graphics::TBitmap* Image, Vcl::Graphics::TBitmap* Mask);
	HIDESBASE virtual void __fastcall InsertIcon(int Index, Vcl::Graphics::TIcon* Image);
	void __fastcall InsertPng(int Index, Vcl::Imaging::Pngimage::TPngImage* Image, System::Uitypes::TColor Background = (System::Uitypes::TColor)(0x1fffffff));
	HIDESBASE virtual void __fastcall InsertMasked(int Index, Vcl::Graphics::TBitmap* Image, System::Uitypes::TColor MaskColor);
	HIDESBASE virtual void __fastcall Move(int CurIndex, int NewIndex);
	HIDESBASE virtual void __fastcall Replace(int Index, Vcl::Graphics::TBitmap* Image, Vcl::Graphics::TBitmap* Mask);
	HIDESBASE virtual void __fastcall ReplaceIcon(int Index, Vcl::Graphics::TIcon* Image);
	HIDESBASE virtual void __fastcall ReplaceMasked(int Index, Vcl::Graphics::TBitmap* NewImage, System::Uitypes::TColor MaskColor);
	/* static */ __property bool IDE_WriteData_Hack = {read=FIDE_WriteData_Hack, write=FIDE_WriteData_Hack, nodefault};
	
__published:
	__property bool EnabledImages = {read=FEnabledImages, write=SetEnabledImages, default=1};
	__property Height = {read=GetHeight, write=SetHeight, default=16};
	__property TPngImageCollectionItems* PngImages = {read=FPngImages, write=SetPngImages};
	__property Pngfunctions::TPngOptions PngOptions = {read=FPngOptions, write=SetPngOptions, default=1};
	__property Width = {read=GetWidth, write=SetWidth, default=16};
public:
	/* TCustomImageList.CreateSize */ inline __fastcall TPngImageList(int AWidth, int AHeight) : Vcl::Controls::TImageList(AWidth, AHeight) { }
	
};


class PASCALIMPLEMENTATION TPngImageCollection : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TPngImageCollectionItems* FItems;
	
public:
	__fastcall virtual TPngImageCollection(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPngImageCollection(void);
	
__published:
	__property TPngImageCollectionItems* Items = {read=FItems, write=FItems};
};


class PASCALIMPLEMENTATION TPngImageCollectionItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TPngImageCollectionItem* operator[](int index) { return Items[index]; }
	
private:
	System::Classes::TPersistent* FOwner;
	HIDESBASE TPngImageCollectionItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TPngImageCollectionItem* const Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TPngImageCollectionItems(System::Classes::TPersistent* AOwner);
	HIDESBASE TPngImageCollectionItem* __fastcall Add(bool DontCreatePNG = false);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	HIDESBASE TPngImageCollectionItem* __fastcall Insert(int Index, bool DontCreatePNG = false);
	__property TPngImageCollectionItem* Items[int index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TPngImageCollectionItems(void) { }
	
};


class PASCALIMPLEMENTATION TPngImageCollectionItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::Uitypes::TColor FBackground;
	System::UnicodeString FName;
	Vcl::Imaging::Pngimage::TPngImage* FPngImage;
	void __fastcall SetBackground(const System::Uitypes::TColor Value);
	void __fastcall SetPngImage(Vcl::Imaging::Pngimage::TPngImage* const Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual System::UnicodeString __fastcall GetDisplayName(void);
	
public:
	__fastcall virtual TPngImageCollectionItem(System::Classes::TCollection* Collection)/* overload */;
	__fastcall TPngImageCollectionItem(System::Classes::TCollection* Collection, bool DontCreatePNG)/* overload */;
	__fastcall virtual ~TPngImageCollectionItem(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	Vcl::Imaging::Pngimage::TPngImage* __fastcall Duplicate(void);
	
__published:
	__property System::Uitypes::TColor Background = {read=FBackground, write=SetBackground, default=-16777201};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property Vcl::Imaging::Pngimage::TPngImage* PngImage = {read=FPngImage, write=SetPngImage};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Pngimagelist */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PNGIMAGELIST)
using namespace Pngimagelist;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PngimagelistHPP
