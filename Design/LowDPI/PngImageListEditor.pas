unit PngImageListEditor;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, CustomPngImageListEditor, PngImageList, Vcl.ExtDlgs, Vcl.StdCtrls, Vcl.Buttons, PngBitBtn,
  Vcl.ExtCtrls, System.ImageList, Vcl.ImgList;

type
  TPngImageListEditorDlg = class(TCustomPngImageListEditorDlg)
    BtnImages: TPngImageList;
  private
  public
  end;

var
  PngImageListEditorDlg: TPngImageListEditorDlg;

implementation

{$R *.dfm}

end.
