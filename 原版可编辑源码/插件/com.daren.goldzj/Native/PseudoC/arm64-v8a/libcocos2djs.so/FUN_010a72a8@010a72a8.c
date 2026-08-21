
void FUN_010a72a8(long param_1,ulong *param_2,long param_3)

{
  CanonicalHandleScope *this;
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  if (param_3 != -1) {
    this = *(CanonicalHandleScope **)((ulong)*(uint *)(param_1 + 4) << 0x20 | 0x95b8);
    pIVar4 = (Isolate *)((ulong)*(uint *)(param_1 + 4) << 0x20);
    uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (this == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar5;
    }
    else {
      puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar5);
    }
    puVar1 = (ulong *)v8::internal::
                      Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>
                      ::DeleteEntry(pIVar4,puVar1,
                                    param_3 - (ulong)((*(int *)(*param_2 + 3) >> 1) - 2));
    uVar3 = *param_2;
    uVar5 = *puVar1;
    *(int *)(uVar3 + 0xb) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar2 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar2 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar3,uVar3 + 0xb,uVar5);
        uVar2 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar3,uVar3 + 0xb,uVar5);
        return;
      }
    }
  }
  return;
}

