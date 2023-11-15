unit PngImageListEditor;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, CustomPngImageListEditor, PngImageList, Vcl.ExtDlgs, Vcl.StdCtrls, Vcl.Buttons, PngBitBtn,
  Vcl.ExtCtrls, System.ImageList, Vcl.ImgList, Vcl.BaseImageCollection, Vcl.ImageCollection, Vcl.VirtualImageList;

type
  TPngImageListEditorDlg = class(TCustomPngImageListEditorDlg)
    BtnImages: TVirtualImageList;
    ImageCollection1: TImageCollection;
  private
  public
  end;

implementation

{$R *.dfm}

end.
