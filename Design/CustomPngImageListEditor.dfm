object CustomPngImageListEditorDlg: TCustomPngImageListEditorDlg
  Left = 202
  Top = 128
  BorderIcons = [biSystemMenu]
  Caption = 'Editing PngImageList'
  ClientHeight = 288
  ClientWidth = 461
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  OnClose = FormClose
  OnCreate = FormCreate
  OnResize = FormResize
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 15
  object pnlMain: TPanel
    Left = 0
    Top = 0
    Width = 461
    Height = 249
    BevelOuter = bvNone
    TabOrder = 0
    DesignSize = (
      461
      249)
    object gbxProperties: TGroupBox
      Left = 8
      Top = 4
      Width = 177
      Height = 128
      Anchors = [akLeft, akTop, akBottom]
      Caption = 'Image properties'
      TabOrder = 0
      object lblName: TLabel
        Left = 10
        Top = 20
        Width = 35
        Height = 15
        Caption = '&Name:'
        FocusControl = edtName
      end
      object lblBackgroundColor: TLabel
        Left = 10
        Top = 64
        Width = 97
        Height = 15
        Caption = '&Background color:'
        FocusControl = cmbBackgroundColor
      end
      object edtName: TEdit
        Left = 8
        Top = 35
        Width = 161
        Height = 23
        TabOrder = 0
        OnChange = edtNameChange
      end
      object cmbBackgroundColor: TComboBox
        Left = 29
        Top = 79
        Width = 140
        Height = 23
        TabOrder = 2
        OnChange = cmbBackgroundColorChange
        OnDblClick = cmbBackgroundColorDblClick
        OnExit = cmbBackgroundColorExit
      end
      object pnlBackgroundColor: TPanel
        Left = 8
        Top = 79
        Width = 20
        Height = 21
        BevelOuter = bvNone
        BorderStyle = bsSingle
        TabOrder = 1
        OnClick = cmbBackgroundColorDblClick
      end
    end
    object lbxImages: TListBox
      Left = 276
      Top = 8
      Width = 177
      Height = 209
      Style = lbOwnerDrawVariable
      Anchors = [akLeft, akTop, akRight, akBottom]
      DragCursor = crDefault
      DragMode = dmAutomatic
      MultiSelect = True
      TabOrder = 3
      OnClick = lbxImagesClick
      OnDblClick = lbxImagesDblClick
      OnDragOver = lbxImagesDragOver
      OnDrawItem = lbxImagesDrawItem
      OnEnter = lbxImagesEnter
      OnExit = lbxImagesExit
      OnKeyDown = lbxImagesKeyDown
      OnMeasureItem = lbxImagesMeasureItem
      OnMouseUp = lbxImagesMouseUp
      OnStartDrag = lbxImagesStartDrag
    end
    object cmbPreviewBackground: TComboBox
      Left = 276
      Top = 220
      Width = 177
      Height = 21
      Style = csOwnerDrawFixed
      Anchors = [akLeft, akRight, akBottom]
      ItemHeight = 15
      TabOrder = 4
      OnChange = cmbPreviewBackgroundChange
      OnDrawItem = cmbPreviewBackgroundDrawItem
      Items.Strings = (
        'Default background'
        'Checkerboard background'
        'Diamonds background'
        'Slashed background'
        'Backslashed background')
    end
    object gbxImageInfo: TGroupBox
      Left = 10
      Top = 138
      Width = 177
      Height = 105
      Anchors = [akLeft, akBottom]
      Caption = 'Image information'
      TabOrder = 1
      object lblDimensions: TLabel
        Left = 8
        Top = 20
        Width = 80
        Height = 13
        Alignment = taRightJustify
        AutoSize = False
        Caption = 'Dimensions:'
      end
      object lblColorDepth: TLabel
        Left = 8
        Top = 36
        Width = 80
        Height = 13
        Alignment = taRightJustify
        AutoSize = False
        Caption = 'Color depth:'
      end
      object lblTransparency: TLabel
        Left = 8
        Top = 52
        Width = 80
        Height = 13
        Alignment = taRightJustify
        AutoSize = False
        Caption = 'Transparency:'
      end
      object lblCompression: TLabel
        Left = 8
        Top = 68
        Width = 80
        Height = 13
        Alignment = taRightJustify
        AutoSize = False
        Caption = 'Compression:'
      end
      object lblFiltering: TLabel
        Left = 8
        Top = 84
        Width = 80
        Height = 13
        Alignment = taRightJustify
        AutoSize = False
        Caption = 'Filtering:'
      end
      object lblDimensionsValue: TLabel
        Left = 96
        Top = 20
        Width = 76
        Height = 13
        AutoSize = False
        ShowAccelChar = False
      end
      object lblColorDepthValue: TLabel
        Left = 96
        Top = 36
        Width = 76
        Height = 13
        AutoSize = False
        ShowAccelChar = False
      end
      object lblTransparencyValue: TLabel
        Left = 96
        Top = 52
        Width = 76
        Height = 13
        AutoSize = False
        ShowAccelChar = False
      end
      object lblCompressionValue: TLabel
        Left = 96
        Top = 68
        Width = 76
        Height = 13
        AutoSize = False
        ShowAccelChar = False
      end
      object lblFilteringValue: TLabel
        Left = 96
        Top = 84
        Width = 76
        Height = 13
        AutoSize = False
        ShowAccelChar = False
      end
    end
    object pnlActionButtons: TPanel
      Left = 193
      Top = 35
      Width = 75
      Height = 178
      Anchors = [akLeft]
      BevelOuter = bvNone
      TabOrder = 2
      object btnAdd: TButton
        Left = 0
        Top = 0
        Width = 75
        Height = 25
        Caption = '&Add'
        TabOrder = 0
        OnClick = btnAddClick
      end
      object btnDelete: TButton
        Left = 0
        Top = 29
        Width = 75
        Height = 25
        Caption = '&Delete'
        TabOrder = 1
        OnClick = btnDeleteClick
      end
      object btnReplace: TButton
        Left = 0
        Top = 58
        Width = 75
        Height = 25
        Caption = '&Replace'
        TabOrder = 2
        OnClick = btnReplaceClick
      end
      object btnClear: TButton
        Left = 0
        Top = 87
        Width = 75
        Height = 25
        Caption = '&Clear'
        TabOrder = 3
        OnClick = btnClearClick
      end
      object btnUp: TButton
        Left = 0
        Top = 124
        Width = 75
        Height = 25
        Caption = '&Up'
        TabOrder = 4
        OnClick = btnUpClick
      end
      object btnDown: TButton
        Left = 0
        Top = 153
        Width = 75
        Height = 25
        Caption = '&Down'
        TabOrder = 5
        OnClick = btnDownClick
      end
    end
  end
  object pnlButtons: TPanel
    Left = 0
    Top = 249
    Width = 461
    Height = 37
    BevelOuter = bvNone
    TabOrder = 1
    DesignSize = (
      461
      37)
    object pnlModalButtons: TPanel
      Left = 152
      Top = 4
      Width = 158
      Height = 25
      Anchors = [akBottom]
      BevelOuter = bvNone
      TabOrder = 0
      object btnOK: TButton
        Left = 0
        Top = 0
        Width = 75
        Height = 25
        Caption = '&OK'
        Default = True
        ModalResult = 1
        TabOrder = 0
      end
      object btnCancel: TButton
        Left = 83
        Top = 0
        Width = 75
        Height = 25
        Cancel = True
        Caption = '&Cancel'
        ModalResult = 2
        TabOrder = 1
      end
    end
    object chkUseFilenames: TCheckBox
      Left = 341
      Top = 7
      Width = 112
      Height = 17
      Anchors = [akTop, akRight]
      Caption = 'Use Filenames'
      Checked = True
      State = cbChecked
      TabOrder = 1
    end
  end
  object dlgOpenPicture: TOpenPictureDialog
    DefaultExt = 'png'
    Filter = 'Portable Network Graphics (*.png)|*.png'
    Options = [ofHideReadOnly, ofPathMustExist, ofFileMustExist, ofEnableSizing]
    Title = 'Browse for a PNG file'
    Left = 40
    Top = 251
  end
  object dlgColor: TColorDialog
    Options = [cdAnyColor]
    Left = 72
    Top = 251
  end
  object Images: TPngImageCollection
    Items = <>
    Left = 8
    Top = 251
  end
end
