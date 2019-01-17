// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PngCheckListBox.pas' rev: 32.00 (Windows)

#ifndef PngchecklistboxHPP
#define PngchecklistboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.CheckLst.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <PngFunctions.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Pngchecklistbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPngCheckListBox;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TPngCheckListBox : public Vcl::Checklst::TCheckListBox
{
	typedef Vcl::Checklst::TCheckListBox inherited;
	
private:
	Vcl::Imaging::Pngimage::TPngImage* FPngUnchecked;
	Vcl::Imaging::Pngimage::TPngImage* FPngChecked;
	Pngfunctions::TPngOptions FPngOptions;
	Vcl::Imaging::Pngimage::TPngImage* FPngGrayed;
	void __fastcall SetPngChecked(Vcl::Imaging::Pngimage::TPngImage* const Value);
	void __fastcall SetPngUnchecked(Vcl::Imaging::Pngimage::TPngImage* const Value);
	void __fastcall SetPngOptions(const Pngfunctions::TPngOptions Value);
	void __fastcall SetPngGrayed(Vcl::Imaging::Pngimage::TPngImage* const Value);
	
protected:
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
	HIDESBASE int __fastcall GetCheckWidth(void);
	
public:
	__fastcall virtual TPngCheckListBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPngCheckListBox(void);
	
__published:
	__property Vcl::Imaging::Pngimage::TPngImage* PngChecked = {read=FPngChecked, write=SetPngChecked};
	__property Vcl::Imaging::Pngimage::TPngImage* PngUnchecked = {read=FPngUnchecked, write=SetPngUnchecked};
	__property Vcl::Imaging::Pngimage::TPngImage* PngGrayed = {read=FPngGrayed, write=SetPngGrayed};
	__property Pngfunctions::TPngOptions PngOptions = {read=FPngOptions, write=SetPngOptions, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TPngCheckListBox(HWND ParentWindow) : Vcl::Checklst::TCheckListBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Pngchecklistbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PNGCHECKLISTBOX)
using namespace Pngchecklistbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PngchecklistboxHPP
