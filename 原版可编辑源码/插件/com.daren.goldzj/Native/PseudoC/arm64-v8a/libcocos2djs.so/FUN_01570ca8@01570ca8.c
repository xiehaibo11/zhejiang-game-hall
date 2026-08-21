
ulong * FUN_01570ca8(undefined8 *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (param_1[1] == 0) {
    puVar2 = (undefined8 *)v8::internal::Factory::NewAllocationSite((Factory *)*param_1,true);
    pIVar3 = (Isolate *)*param_1;
    param_1[1] = puVar2;
    uVar6 = *puVar2;
    puVar2 = *(undefined8 **)(pIVar3 + 0x95a0);
    if (puVar2 == *(undefined8 **)(pIVar3 + 0x95a8)) {
      puVar2 = (undefined8 *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(undefined8 **)(pIVar3 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar6;
    pIVar3 = (Isolate *)*param_1;
    param_1[2] = puVar2;
    uVar5 = *(ulong *)param_1[1];
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar5;
    }
    else {
      puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar5);
    }
    if (v8::internal::FLAG_trace_creation_allocation_sites != '\0') {
      v8::internal::PrintF("*** Creating top level %s AllocationSite %p\n",&DAT_01a4d428,*puVar1);
    }
  }
  else {
    puVar1 = (ulong *)v8::internal::Factory::NewAllocationSite((Factory *)*param_1,false);
    if (v8::internal::FLAG_trace_creation_allocation_sites != '\0') {
      v8::internal::PrintF
                ("*** Creating nested %s AllocationSite (top, current, new) (%p, %p, %p)\n",
                 &DAT_01a4d474,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],*puVar1);
    }
    uVar5 = *puVar1;
    uVar7 = *(ulong *)param_1[2];
    *(int *)(uVar7 + 7) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar7,uVar7 + 7,uVar5);
        uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar7,uVar7 + 7,uVar5);
      }
    }
    *(ulong *)param_1[2] = *puVar1;
  }
  return puVar1;
}

