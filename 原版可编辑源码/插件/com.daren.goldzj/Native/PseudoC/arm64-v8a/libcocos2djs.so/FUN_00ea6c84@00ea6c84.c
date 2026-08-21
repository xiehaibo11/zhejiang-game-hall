
ulong * FUN_00ea6c84(Isolate *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(*param_2 + 0x17);
  if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa0))) {
    uVar6 = *param_2 & 0xffffffff00000000 | (ulong)uVar1;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar6;
    }
    else {
      puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    }
  }
  else {
    puVar2 = (ulong *)v8::FunctionTemplate::New(param_1,0,0,0,0,1,0);
    pIVar3 = param_1 + *(uint *)(*puVar2 + 0x23);
    if ((int)pIVar3 == *(int *)(param_1 + 0xa0)) {
      pIVar3 = (Isolate *)
               v8::internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(param_1,puVar2);
    }
    uVar6 = *param_2;
    *(int *)(pIVar3 + 0x17) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(pIVar3,pIVar3 + 0x17,uVar6);
        uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) &&
         ((*(byte *)(((ulong)pIVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(pIVar3,pIVar3 + 0x17,uVar6);
      }
    }
    uVar4 = *param_2;
    uVar6 = *puVar2;
    *(int *)(uVar4 + 0x17) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x17,uVar6);
        uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x17,uVar6);
      }
    }
  }
  return puVar2;
}

