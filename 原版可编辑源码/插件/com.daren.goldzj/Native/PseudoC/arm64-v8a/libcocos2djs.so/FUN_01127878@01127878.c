
undefined8 FUN_01127878(long param_1,ulong *param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_78 [3];
  undefined8 local_6c;
  long local_60;
  ulong *local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_60 = (ulong)*(uint *)(param_1 + 4) << 0x20;
  local_78[0] = 3;
  if ((*(short *)(((ulong)*(uint *)(param_1 + 4) << 0x20 | 7) + (ulong)*(uint *)(*param_2 - 1)) ==
       0x40) && (local_78[0] = 3, (*(byte *)(*param_2 + 7) & 1) != 0)) {
    local_78[0] = 0;
  }
  local_6c = 0xc000000000;
  if ((*(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) & 0xffe0)
      == 0x20) {
    param_2 = (ulong *)v8::internal::StringTable::LookupString();
  }
  uStack_50 = 0;
  uStack_40 = 0;
  local_28 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_58 = param_2;
  local_48 = param_1;
  local_38 = param_1;
  v8::internal::LookupIterator::Start<false>((LookupIterator *)local_78);
  uVar1 = v8::internal::JSReceiver::HasProperty((LookupIterator *)local_78);
  if ((uVar1 & 0xff) == 0) {
    uVar3 = 0;
  }
  else if (uVar1 < 0x100) {
    uVar3 = 1;
  }
  else {
    lVar2 = v8::internal::Object::GetProperty((LookupIterator *)local_78,false);
    if (lVar2 == 0) {
      *param_3 = 0;
      uVar3 = 0;
    }
    else {
      *param_3 = lVar2;
      uVar3 = 1;
    }
  }
  return uVar3;
}

