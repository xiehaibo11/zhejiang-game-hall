
/* v8::internal::JSSet::Clear(v8::internal::Isolate*, v8::internal::Handle<v8::internal::JSSet>) */

void v8::internal::JSSet::Clear(Isolate *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  puVar1 = (ulong *)OrderedHashTable<v8::internal::OrderedHashSet,1>::Clear(param_1,puVar1);
  uVar3 = *param_2;
  uVar4 = *puVar1;
  *(int *)(uVar3 + 0xb) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,uVar3 + 0xb,uVar4);
      uVar2 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,uVar3 + 0xb,uVar4);
      return;
    }
  }
  return;
}

