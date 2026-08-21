
/* bool 
   v8::internal::JSObject::UpdateAllocationSite<(v8::internal::AllocationSiteUpdateMode)0>(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::ElementsKind) */

bool v8::internal::JSObject::UpdateAllocationSite<(v8::internal::AllocationSiteUpdateMode)0>
               (ulong *param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  ulong local_38;
  
  uVar4 = *param_1;
  if (((*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x423) &&
      ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
     (uVar4 = Heap::IsLargeObject(), (uVar4 & 1) == 0)) {
    uVar4 = *param_1;
    pIVar8 = (Isolate *)(uVar4 & 0xffffffff00000000);
    uVar9 = uVar4 - 1;
    local_38 = uVar4;
    iVar3 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_38,(ulong)pIVar8 | (ulong)*(uint *)(uVar4 - 1));
    piVar1 = (int *)(uVar9 + (long)iVar3);
    uVar6 = uVar9 & 0xfffffffffffc0000;
    if ((((uVar6 == ((ulong)(piVar1 + 1) & 0xfffffffffffc0000)) &&
         (*piVar1 == *(int *)(pIVar8 + 0xcd8))) &&
        (((*(byte *)(uVar6 + 10) >> 3 & 1) == 0 ||
         (((uVar7 = *(ulong *)(*(long *)(uVar6 + 0x58) + 0x80), *(ulong *)(uVar6 + 0x20) <= uVar7 &&
           (uVar7 <= uVar9)) && (uVar7 < *(ulong *)(uVar6 + 0x28))))))) &&
       (((uVar4 = uVar4 + (long)iVar3, (int)uVar4 != 0 &&
         (piVar1 != *(int **)(*(long *)(pIVar8 + 0x8938) + 0x68))) &&
        ((*(uint *)(uVar4 + 3) & 1) != 0)))) {
      uVar6 = uVar4 & 0xffffffff00000000;
      uVar9 = uVar6 | *(uint *)(uVar4 + 3);
      if ((*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x55) &&
         ((*(uint *)(uVar9 + 0xf) & 0x1c000000) != 0x10000000)) {
        uVar6 = uVar6 | *(uint *)(uVar4 + 3);
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)(pIVar8 + 0x95a0);
          if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(pIVar8);
          }
          *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
          *puVar5 = uVar6;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar6);
        }
        bVar2 = AllocationSite::DigestTransitionFeedback<(v8::internal::AllocationSiteUpdateMode)0>
                          (puVar5,param_2);
        return bVar2;
      }
    }
  }
  return false;
}

