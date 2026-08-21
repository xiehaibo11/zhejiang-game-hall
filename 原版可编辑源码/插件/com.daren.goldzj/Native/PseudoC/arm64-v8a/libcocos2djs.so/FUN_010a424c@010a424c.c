
void FUN_010a424c(ulong *param_1,undefined8 param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  pIVar1 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar5 = (ulong)pIVar1 | (ulong)*(uint *)(*param_1 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8),uVar5);
  }
  puVar2 = (ulong *)v8::internal::
                    Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
                    DeleteEntry((ulong)*(uint *)((long)param_1 + 4) << 0x20,puVar2,param_2);
  uVar4 = *param_1;
  uVar5 = *puVar2;
  *(int *)(uVar4 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar4,uVar4 + 7,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar4,uVar4 + 7,uVar5);
      return;
    }
  }
  return;
}

