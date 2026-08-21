
/* v8::internal::WasmExceptionPackage::GetExceptionTag(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmExceptionPackage>) */

long v8::internal::WasmExceptionPackage::GetExceptionTag(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_78;
  int local_74;
  undefined8 local_6c;
  ulong local_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar3 = *(ulong *)(param_1 + 0xbf8);
  local_58 = param_1 + 0xbf8;
  local_78 = 3;
  if ((*(short *)((param_1 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x40) &&
     (local_78 = 3, (*(byte *)(uVar3 + 7) & 1) != 0)) {
    local_78 = 0;
  }
  local_6c = 0xc000000000;
  local_60 = param_1;
  if ((*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) & 0xffe0) == 0x20
     ) {
    local_58 = StringTable::LookupString(param_1);
  }
  uStack_50 = 0;
  uStack_40 = 0;
  local_28 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_48 = param_2;
  local_38 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_78);
  if (local_74 == 4) {
    lVar2 = local_60 + 0xa0;
  }
  else {
    lVar2 = Object::GetProperty((LookupIterator *)&local_78,false);
  }
  lVar1 = param_1 + 0xa0;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  return lVar1;
}

