
/* v8::internal::JSFunction::GetName(v8::internal::Handle<v8::internal::JSFunction>) */

void v8::internal::JSFunction::GetName(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  Isolate *pIVar5;
  undefined8 local_88;
  undefined8 local_7c;
  Isolate *local_70;
  ulong local_68;
  undefined8 uStack_60;
  ulong *local_58;
  undefined8 uStack_50;
  ulong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar4 = (ulong)*(uint *)((long)param_1 + 4);
  pIVar5 = (Isolate *)(uVar4 << 0x20);
  uVar2 = *(ulong *)(pIVar5 + 0x820);
  local_68 = uVar4 << 0x20 | 0x820;
  uVar3 = 2;
  if (*(short *)((uVar4 << 0x20 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x40) {
    uVar3 = (*(int *)(uVar2 + 7) << 1 ^ 0xffffffffU) & 2;
  }
  local_7c = 0xc000000000;
  local_70 = pIVar5;
  local_88._0_4_ = uVar3;
  if ((*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) & 0xffe0) == 0x20
     ) {
    local_68 = StringTable::LookupString(pIVar5);
  }
  uStack_60 = 0;
  uStack_50 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_58 = param_1;
  local_48 = param_1;
  LookupIterator::Start<false>((LookupIterator *)&local_88);
  if (local_88._4_4_ == 4) {
    uVar2 = *(ulong *)(local_70 + 0xa0);
  }
  else {
    puVar1 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_88);
    uVar2 = *puVar1;
  }
  if (((uVar2 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)))) {
    local_88 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb);
    uVar2 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_88);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar2);
    }
  }
  return;
}

