
/* v8::internal::Isolate::GetDetailedStackTrace(v8::internal::Handle<v8::internal::JSObject>) */

ulong * __thiscall v8::internal::Isolate::GetDetailedStackTrace(Isolate *this,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  uint local_78;
  int local_74;
  undefined8 local_6c;
  long local_60;
  Isolate *local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar2 = *(ulong *)(this + 0xb40);
  local_58 = this + 0xb40;
  local_60 = (ulong)*(uint *)(param_2 + 4) << 0x20;
  local_78 = 2;
  if (*(short *)(((ulong)*(uint *)(param_2 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x40)
  {
    local_78 = (*(int *)(uVar2 + 7) << 1 ^ 0xffffffffU) & 2;
  }
  local_6c = 0xc000000000;
  if ((*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) & 0xffe0) == 0x20
     ) {
    local_58 = (Isolate *)StringTable::LookupString();
  }
  uStack_50 = 0;
  uStack_40 = 0;
  local_28 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_48 = param_2;
  local_38 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_78);
  if (local_74 == 4) {
    puVar1 = (ulong *)(local_60 + 0xa0);
    uVar2 = *puVar1;
  }
  else {
    puVar1 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_78);
    uVar2 = *puVar1;
  }
  if (((uVar2 & 1) == 0) ||
     (0xe < *(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) - 0x76)) {
    puVar1 = (ulong *)0x0;
  }
  return puVar1;
}

