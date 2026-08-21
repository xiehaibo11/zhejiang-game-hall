
ulong * FUN_00f5e750(ulong param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined4 local_88;
  int local_84;
  undefined8 local_7c;
  ulong local_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_88 = 3;
  if ((*(short *)((param_1 | 7) + (ulong)*(uint *)(*param_3 - 1)) == 0x40) &&
     (local_88 = 3, (*(byte *)(*param_3 + 7) & 1) != 0)) {
    local_88 = 0;
  }
  local_7c = 0xc000000000;
  local_70 = param_1;
  if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) & 0xffe0)
      == 0x20) {
    param_3 = (ulong *)v8::internal::StringTable::LookupString(param_1,param_3);
  }
  uStack_60 = 0;
  uStack_50 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_68 = param_3;
  local_58 = param_2;
  local_48 = param_2;
  v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_88);
  if (local_84 == 4) {
    puVar1 = (ulong *)(local_70 + 0xa0);
    uVar2 = *puVar1;
  }
  else {
    puVar1 = (ulong *)v8::internal::Object::GetProperty((LookupIterator *)&local_88,false);
    if (puVar1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    uVar2 = *puVar1;
  }
  if (((uVar2 & 1) == 0) ||
     (((int)uVar2 != *(int *)(param_1 + 0xa0) &&
      (param_4 = puVar1,
      0x3f < *(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)))))) {
    param_4 = (ulong *)v8::internal::Object::ConvertToString(param_1);
  }
  return param_4;
}

