
/* v8::internal::JSFunction::GetDebugName(v8::internal::Handle<v8::internal::JSFunction>) */

void v8::internal::JSFunction::GetDebugName(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_78;
  int local_74;
  undefined8 local_6c;
  long local_60;
  ulong local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar3 = (ulong)*(uint *)(param_1 + 4);
  local_60 = uVar3 << 0x20;
  uVar2 = *(ulong *)(local_60 + 0x608);
  local_58 = uVar3 << 0x20 | 0x608;
  local_78 = 2;
  if (*(short *)((uVar3 << 0x20 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x40) {
    local_78 = (*(int *)(uVar2 + 7) << 1 ^ 0xffffffffU) & 2;
  }
  local_6c = 0xc000000000;
  if ((*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) & 0xffe0) == 0x20
     ) {
    local_58 = StringTable::LookupString();
  }
  uStack_50 = 0;
  uStack_40 = 0;
  local_28 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_48 = param_1;
  local_38 = param_1;
  LookupIterator::Start<false>((LookupIterator *)&local_78);
  if (local_74 == 4) {
    uVar2 = *(ulong *)(local_60 + 0xa0);
  }
  else {
    puVar1 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_78);
    uVar2 = *puVar1;
  }
  if (((uVar2 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)))) {
    GetName(param_1);
  }
  return;
}

