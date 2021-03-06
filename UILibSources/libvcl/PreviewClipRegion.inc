
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function PreviewClipRegion_Create: TPreviewClipRegion; stdcall;
begin
  Result :=  TPreviewClipRegion.Create;
end;

procedure PreviewClipRegion_Free(AObj: TPreviewClipRegion); stdcall;
begin
  AObj.Free;
end;

procedure PreviewClipRegion_Assign(AObj: TPreviewClipRegion; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

function PreviewClipRegion_GetNamePath(AObj: TPreviewClipRegion): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure PreviewClipRegion_DisposeOf(AObj: TPreviewClipRegion); stdcall;
begin
  AObj.DisposeOf;
end;

function PreviewClipRegion_ClassType(AObj: TPreviewClipRegion): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function PreviewClipRegion_ClassName(AObj: TPreviewClipRegion): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function PreviewClipRegion_InstanceSize(AObj: TPreviewClipRegion): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function PreviewClipRegion_InheritsFrom(AObj: TPreviewClipRegion; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function PreviewClipRegion_Equals(AObj: TPreviewClipRegion; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function PreviewClipRegion_GetHashCode(AObj: TPreviewClipRegion): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function PreviewClipRegion_ToString(AObj: TPreviewClipRegion): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

procedure PreviewClipRegion_SetOnChange(AObj: TPreviewClipRegion; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    TEventClass.Remove(AObj, geChange);
    Exit;
  end;
  AObj.OnChange := TEventClass.OnChange;
  TEventClass.Add(AObj, geChange, AEventId);
end;

procedure PreviewClipRegion_GetBounds(AObj: TPreviewClipRegion; var Result: TRect); stdcall;
begin
  Result :=  AObj.Bounds;
end;

function PreviewClipRegion_GetLeft(AObj: TPreviewClipRegion): Integer; stdcall;
begin
  Result :=  AObj.Left;
end;

procedure PreviewClipRegion_SetLeft(AObj: TPreviewClipRegion; AValue: Integer); stdcall;
begin
  AObj.Left := AValue;
end;

function PreviewClipRegion_GetTop(AObj: TPreviewClipRegion): Integer; stdcall;
begin
  Result :=  AObj.Top;
end;

procedure PreviewClipRegion_SetTop(AObj: TPreviewClipRegion; AValue: Integer); stdcall;
begin
  AObj.Top := AValue;
end;

function PreviewClipRegion_GetHeight(AObj: TPreviewClipRegion): Integer; stdcall;
begin
  Result :=  AObj.Height;
end;

procedure PreviewClipRegion_SetHeight(AObj: TPreviewClipRegion; AValue: Integer); stdcall;
begin
  AObj.Height := AValue;
end;

function PreviewClipRegion_GetWidth(AObj: TPreviewClipRegion): Integer; stdcall;
begin
  Result :=  AObj.Width;
end;

procedure PreviewClipRegion_SetWidth(AObj: TPreviewClipRegion; AValue: Integer); stdcall;
begin
  AObj.Width := AValue;
end;

function PreviewClipRegion_StaticClassType: TClass; stdcall;
begin
  Result := TPreviewClipRegion;
end;

exports
  PreviewClipRegion_Create,
  PreviewClipRegion_Free,
  PreviewClipRegion_Assign,
  PreviewClipRegion_GetNamePath,
  PreviewClipRegion_DisposeOf,
  PreviewClipRegion_ClassType,
  PreviewClipRegion_ClassName,
  PreviewClipRegion_InstanceSize,
  PreviewClipRegion_InheritsFrom,
  PreviewClipRegion_Equals,
  PreviewClipRegion_GetHashCode,
  PreviewClipRegion_ToString,
  PreviewClipRegion_SetOnChange,
  PreviewClipRegion_GetBounds,
  PreviewClipRegion_GetLeft,
  PreviewClipRegion_SetLeft,
  PreviewClipRegion_GetTop,
  PreviewClipRegion_SetTop,
  PreviewClipRegion_GetHeight,
  PreviewClipRegion_SetHeight,
  PreviewClipRegion_GetWidth,
  PreviewClipRegion_SetWidth,
  PreviewClipRegion_StaticClassType;

