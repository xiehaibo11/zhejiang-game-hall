
int FUN_014b489c(long param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  uint local_78;
  int local_74;
  undefined8 local_6c;
  long local_60;
  long local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar2 = *(ulong *)(param_1 + 0xb18);
  local_58 = param_1 + 0xb18;
  local_60 = (ulong)*(uint *)(param_2 + 4) << 0x20;
  local_78 = 2;
  if (*(short *)(((ulong)*(uint *)(param_2 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x40)
  {
    local_78 = (*(int *)(uVar2 + 7) << 1 ^ 0xffffffffU) & 2;
  }
  local_6c = 0xc000000000;
  if ((*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) & 0xffe0) == 0x20
     ) {
    local_58 = v8::internal::StringTable::LookupString();
  }
  uStack_50 = 0;
  uStack_40 = 0;
  local_28 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_48 = param_2;
  local_38 = param_2;
  v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_78);
  if (local_74 == 4) {
    piVar1 = (int *)(local_60 + 0xa0);
  }
  else {
    piVar1 = (int *)v8::internal::JSReceiver::GetDataProperty((LookupIterator *)&local_78);
  }
  return *piVar1 >> 1;
}

