// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PngImageListEditor.pas' rev: 32.00 (Windows)

#ifndef PngimagelisteditorHPP
#define PngimagelisteditorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <PngFunctions.hpp>
#include <PngBitBtn.hpp>
#include <PngImageList.hpp>
#include <Vcl.Buttons.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Pngimagelisteditor
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPngImageListEditorDlg;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TPngImageListEditorDlg : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TComboBox* cmbBackgroundColor;
	Vcl::Stdctrls::TComboBox* cmbPreviewBackground;
	Vcl::Dialogs::TColorDialog* dlgColor;
	Vcl::Extdlgs::TOpenPictureDialog* dlgOpenPicture;
	Vcl::Stdctrls::TEdit* edtName;
	Vcl::Stdctrls::TGroupBox* gbxImageInfo;
	Vcl::Stdctrls::TGroupBox* gbxProperties;
	Vcl::Stdctrls::TLabel* lblBackgroundColor;
	Vcl::Stdctrls::TLabel* lblColorDepth;
	Vcl::Stdctrls::TLabel* lblColorDepthValue;
	Vcl::Stdctrls::TLabel* lblCompression;
	Vcl::Stdctrls::TLabel* lblCompressionValue;
	Vcl::Stdctrls::TLabel* lblDimensions;
	Vcl::Stdctrls::TLabel* lblDimensionsValue;
	Vcl::Stdctrls::TLabel* lblFiltering;
	Vcl::Stdctrls::TLabel* lblFilteringValue;
	Vcl::Stdctrls::TLabel* lblName;
	Vcl::Stdctrls::TLabel* lblTransparency;
	Vcl::Stdctrls::TLabel* lblTransparencyValue;
	Vcl::Stdctrls::TListBox* lbxImages;
	Vcl::Extctrls::TPanel* pnlActionButtons;
	Vcl::Extctrls::TPanel* pnlBackgroundColor;
	Vcl::Extctrls::TPanel* pnlMain;
	Pngbitbtn::TPngBitBtn* btnAdd;
	Pngbitbtn::TPngBitBtn* btnDelete;
	Pngbitbtn::TPngBitBtn* btnReplace;
	Pngbitbtn::TPngBitBtn* btnClear;
	Pngbitbtn::TPngBitBtn* btnUp;
	Pngbitbtn::TPngBitBtn* btnDown;
	Pngimagelist::TPngImageCollection* Images;
	Vcl::Extctrls::TPanel* pnlButtons;
	Vcl::Extctrls::TPanel* pnlModalButtons;
	Pngbitbtn::TPngBitBtn* btnOK;
	Pngbitbtn::TPngBitBtn* btnCancel;
	Vcl::Stdctrls::TCheckBox* chkUseFilenames;
	void __fastcall btnAddClick(System::TObject* Sender);
	void __fastcall btnClearClick(System::TObject* Sender);
	void __fastcall btnDeleteClick(System::TObject* Sender);
	void __fastcall btnDownClick(System::TObject* Sender);
	void __fastcall btnReplaceClick(System::TObject* Sender);
	void __fastcall btnUpClick(System::TObject* Sender);
	void __fastcall cmbBackgroundColorChange(System::TObject* Sender);
	void __fastcall cmbBackgroundColorDblClick(System::TObject* Sender);
	void __fastcall cmbBackgroundColorExit(System::TObject* Sender);
	void __fastcall cmbPreviewBackgroundChange(System::TObject* Sender);
	void __fastcall cmbPreviewBackgroundDrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall edtNameChange(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall lbxImagesClick(System::TObject* Sender);
	void __fastcall lbxImagesDblClick(System::TObject* Sender);
	void __fastcall lbxImagesDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall lbxImagesDrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall lbxImagesEnter(System::TObject* Sender);
	void __fastcall lbxImagesExit(System::TObject* Sender);
	void __fastcall lbxImagesKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall lbxImagesMeasureItem(Vcl::Controls::TWinControl* Control, int Index, int &Height);
	void __fastcall lbxImagesMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall lbxImagesStartDrag(System::TObject* Sender, Vcl::Controls::TDragObject* &DragObject);
	
private:
	int FDraggingIndex;
	int FImageHeight;
	int FImageWidth;
	int FMaxWidth;
	System::Uitypes::TColor FSelectionBodyColor;
	System::Uitypes::TColor FSelectionBorderColor;
	bool __fastcall ConformDimensions(Vcl::Imaging::Pngimage::TPngImage* Png);
	int __fastcall FirstSelected(void);
	int __fastcall LastSelected(void);
	void __fastcall DrawBackground(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, int ScrollPos, int Index, System::Uitypes::TColor BlendColor = (System::Uitypes::TColor)(0x1fffffff), bool IgnoreScrollPos = false);
	void __fastcall GetColorProc(const System::UnicodeString S);
	void __fastcall ParseBackgroundColor(System::TObject* Sender, bool CanDisplayError, bool CanChangeText);
	void __fastcall SelectBackgroundColor(System::TObject* Sender, System::Uitypes::TColor Color);
	
public:
	__property int ImageHeight = {read=FImageHeight, write=FImageHeight, nodefault};
	__property int ImageWidth = {read=FImageWidth, write=FImageWidth, nodefault};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TPngImageListEditorDlg(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TPngImageListEditorDlg(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TPngImageListEditorDlg(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TPngImageListEditorDlg(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TPngImageListEditorDlg* PngImageListEditorDlg;
}	/* namespace Pngimagelisteditor */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PNGIMAGELISTEDITOR)
using namespace Pngimagelisteditor;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PngimagelisteditorHPP
