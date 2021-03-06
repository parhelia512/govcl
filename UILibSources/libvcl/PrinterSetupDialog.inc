
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function PrinterSetupDialog_Create(AOwner: TComponent): TPrinterSetupDialog; stdcall;
begin
  Result :=  TPrinterSetupDialog.Create(AOwner);
end;

procedure PrinterSetupDialog_Free(AObj: TPrinterSetupDialog); stdcall;
begin
  AObj.Free;
end;

function PrinterSetupDialog_Execute(AObj: TPrinterSetupDialog): LongBool; stdcall;
begin
  Result :=  AObj.Execute;
end;

function PrinterSetupDialog_FindComponent(AObj: TPrinterSetupDialog; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function PrinterSetupDialog_GetNamePath(AObj: TPrinterSetupDialog): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function PrinterSetupDialog_HasParent(AObj: TPrinterSetupDialog): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure PrinterSetupDialog_Assign(AObj: TPrinterSetupDialog; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure PrinterSetupDialog_DisposeOf(AObj: TPrinterSetupDialog); stdcall;
begin
  AObj.DisposeOf;
end;

function PrinterSetupDialog_ClassType(AObj: TPrinterSetupDialog): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function PrinterSetupDialog_ClassName(AObj: TPrinterSetupDialog): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function PrinterSetupDialog_InstanceSize(AObj: TPrinterSetupDialog): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function PrinterSetupDialog_InheritsFrom(AObj: TPrinterSetupDialog; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function PrinterSetupDialog_Equals(AObj: TPrinterSetupDialog; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function PrinterSetupDialog_GetHashCode(AObj: TPrinterSetupDialog): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function PrinterSetupDialog_ToString(AObj: TPrinterSetupDialog): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function PrinterSetupDialog_GetHandle(AObj: TPrinterSetupDialog): HWND; stdcall;
begin
  Result :=  AObj.Handle;
end;

procedure PrinterSetupDialog_SetOnClose(AObj: TPrinterSetupDialog; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnClose := nil;
    TEventClass.Remove(AObj, geClose);
    Exit;
  end;
  AObj.OnClose := TEventClass.OnClose;
  TEventClass.Add(AObj, geClose, AEventId);
end;

procedure PrinterSetupDialog_SetOnShow(AObj: TPrinterSetupDialog; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnShow := nil;
    TEventClass.Remove(AObj, geShow);
    Exit;
  end;
  AObj.OnShow := TEventClass.OnShow;
  TEventClass.Add(AObj, geShow, AEventId);
end;

function PrinterSetupDialog_GetComponentCount(AObj: TPrinterSetupDialog): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function PrinterSetupDialog_GetComponentIndex(AObj: TPrinterSetupDialog): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure PrinterSetupDialog_SetComponentIndex(AObj: TPrinterSetupDialog; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function PrinterSetupDialog_GetOwner(AObj: TPrinterSetupDialog): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function PrinterSetupDialog_GetName(AObj: TPrinterSetupDialog): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure PrinterSetupDialog_SetName(AObj: TPrinterSetupDialog; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function PrinterSetupDialog_GetTag(AObj: TPrinterSetupDialog): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure PrinterSetupDialog_SetTag(AObj: TPrinterSetupDialog; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function PrinterSetupDialog_GetComponents(AObj: TPrinterSetupDialog; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function PrinterSetupDialog_StaticClassType: TClass; stdcall;
begin
  Result := TPrinterSetupDialog;
end;

exports
  PrinterSetupDialog_Create,
  PrinterSetupDialog_Free,
  PrinterSetupDialog_Execute,
  PrinterSetupDialog_FindComponent,
  PrinterSetupDialog_GetNamePath,
  PrinterSetupDialog_HasParent,
  PrinterSetupDialog_Assign,
  PrinterSetupDialog_DisposeOf,
  PrinterSetupDialog_ClassType,
  PrinterSetupDialog_ClassName,
  PrinterSetupDialog_InstanceSize,
  PrinterSetupDialog_InheritsFrom,
  PrinterSetupDialog_Equals,
  PrinterSetupDialog_GetHashCode,
  PrinterSetupDialog_ToString,
  PrinterSetupDialog_GetHandle,
  PrinterSetupDialog_SetOnClose,
  PrinterSetupDialog_SetOnShow,
  PrinterSetupDialog_GetComponentCount,
  PrinterSetupDialog_GetComponentIndex,
  PrinterSetupDialog_SetComponentIndex,
  PrinterSetupDialog_GetOwner,
  PrinterSetupDialog_GetName,
  PrinterSetupDialog_SetName,
  PrinterSetupDialog_GetTag,
  PrinterSetupDialog_SetTag,
  PrinterSetupDialog_GetComponents,
  PrinterSetupDialog_StaticClassType;

