
/* v8::internal::WasmMemoryObject::AddInstance(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmMemoryObject>,
   v8::internal::Handle<v8::internal::WasmInstanceObject>) */

void v8::internal::WasmMemoryObject::AddInstance(Isolate *param_1,ulong *param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  CanonicalHandleScope *this;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar4 = *param_2 & 0xffffffff00000000;
  uVar2 = *(uint *)(*param_2 + 0x13);
  pIVar1 = param_1 + 0x95a0;
  if (uVar2 == *(uint *)(uVar4 + 0xa0)) {
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar4 = *(ulong *)(param_1 + 0x428);
  }
  else {
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar4 = uVar4 | uVar2;
  }
  if (this == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(this,uVar4);
  }
  local_60 = 0;
  uStack_58 = param_3;
  puVar3 = (ulong *)WeakArrayList::AddToEnd(param_1,puVar3,&local_60);
  uVar6 = *param_2;
  uVar4 = *puVar3;
  *(int *)(uVar6 + 0x13) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x13,uVar4);
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x13,uVar4);
    }
  }
  uVar4 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  FUN_012528e4(param_3,puVar3);
  return;
}

