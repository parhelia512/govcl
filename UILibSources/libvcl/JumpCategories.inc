function JumpCategories_GetCategoryIndex(AObj: TJumpCategories; CategoryName: PChar): Integer; stdcall;
begin
  Result :=  AObj.GetCategoryIndex(CategoryName);
end;

function JumpCategories_Owner(AObj: TJumpCategories): TPersistent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function JumpCategories_Add(AObj: TJumpCategories): TCollectionItem; stdcall;
begin
  Result :=  AObj.Add;
end;

procedure JumpCategories_Assign(AObj: TJumpCategories; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure JumpCategories_BeginUpdate(AObj: TJumpCategories); stdcall;
begin
  AObj.BeginUpdate;
end;

procedure JumpCategories_Clear(AObj: TJumpCategories); stdcall;
begin
  AObj.Clear;
end;

procedure JumpCategories_ClearAndResetID(AObj: TJumpCategories); stdcall;
begin
  AObj.ClearAndResetID;
end;

procedure JumpCategories_Delete(AObj: TJumpCategories; Index: Integer); stdcall;
begin
  AObj.Delete(Index);
end;

procedure JumpCategories_EndUpdate(AObj: TJumpCategories); stdcall;
begin
  AObj.EndUpdate;
end;

function JumpCategories_FindItemID(AObj: TJumpCategories; ID: Integer): TCollectionItem; stdcall;
begin
  Result :=  AObj.FindItemID(ID);
end;

function JumpCategories_GetNamePath(AObj: TJumpCategories): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function JumpCategories_Insert(AObj: TJumpCategories; Index: Integer): TCollectionItem; stdcall;
begin
  Result :=  AObj.Insert(Index);
end;

procedure JumpCategories_DisposeOf(AObj: TJumpCategories); stdcall;
begin
  AObj.DisposeOf;
end;

function JumpCategories_ClassType(AObj: TJumpCategories): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function JumpCategories_ClassName(AObj: TJumpCategories): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function JumpCategories_InstanceSize(AObj: TJumpCategories): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function JumpCategories_InheritsFrom(AObj: TJumpCategories; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function JumpCategories_Equals(AObj: TJumpCategories; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function JumpCategories_GetHashCode(AObj: TJumpCategories): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function JumpCategories_ToString(AObj: TJumpCategories): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

procedure JumpCategories_SetOnChange(AObj: TJumpCategories; AEventId: NativeUInt); stdcall;
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

function JumpCategories_GetCapacity(AObj: TJumpCategories): Integer; stdcall;
begin
  Result :=  AObj.Capacity;
end;

procedure JumpCategories_SetCapacity(AObj: TJumpCategories; AValue: Integer); stdcall;
begin
  AObj.Capacity := AValue;
end;

function JumpCategories_GetCount(AObj: TJumpCategories): Integer; stdcall;
begin
  Result :=  AObj.Count;
end;

function JumpCategories_GetItems(AObj: TJumpCategories; Index: Integer): TJumpCategoryItem; stdcall;
begin
  Result :=  AObj.Items[Index];
end;

procedure JumpCategories_SetItems(AObj: TJumpCategories; Index: Integer; AValue: TJumpCategoryItem); stdcall;
begin
  AObj.Items[Index] := AValue;
end;

function JumpCategories_StaticClassType: TClass; stdcall;
begin
  Result := TJumpCategories;
end;

exports
  JumpCategories_GetCategoryIndex,
  JumpCategories_Owner,
  JumpCategories_Add,
  JumpCategories_Assign,
  JumpCategories_BeginUpdate,
  JumpCategories_Clear,
  JumpCategories_ClearAndResetID,
  JumpCategories_Delete,
  JumpCategories_EndUpdate,
  JumpCategories_FindItemID,
  JumpCategories_GetNamePath,
  JumpCategories_Insert,
  JumpCategories_DisposeOf,
  JumpCategories_ClassType,
  JumpCategories_ClassName,
  JumpCategories_InstanceSize,
  JumpCategories_InheritsFrom,
  JumpCategories_Equals,
  JumpCategories_GetHashCode,
  JumpCategories_ToString,
  JumpCategories_SetOnChange,
  JumpCategories_GetCapacity,
  JumpCategories_SetCapacity,
  JumpCategories_GetCount,
  JumpCategories_GetItems,
  JumpCategories_SetItems,
  JumpCategories_StaticClassType;

