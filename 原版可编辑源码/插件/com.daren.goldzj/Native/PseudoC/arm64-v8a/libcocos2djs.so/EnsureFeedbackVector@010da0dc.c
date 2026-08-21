
/* v8::internal::JSFunction::EnsureFeedbackVector(v8::internal::Handle<v8::internal::JSFunction>) */

void v8::internal::JSFunction::EnsureFeedbackVector(ulong *param_1)

{
  uint uVar1;
  CanonicalHandleScope *pCVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  ulong uVar10;
  
  uVar5 = *param_1;
  pIVar9 = (Isolate *)(uVar5 & 0xffffffff00000000);
  uVar1 = *(uint *)(((ulong)pIVar9 | (ulong)*(uint *)(uVar5 + 0xb)) + 3);
  if ((uVar1 == 0x84) ||
     ((((uVar1 & 1) != 0 &&
       (*(ushort *)(((ulong)pIVar9 | 7) + (ulong)*(uint *)(((ulong)pIVar9 | (ulong)uVar1) - 1)) -
        0x95 < 2)) ||
      (*(short *)(((ulong)pIVar9 | 7) +
                 (ulong)*(uint *)(((ulong)pIVar9 |
                                  (ulong)*(uint *)(((ulong)pIVar9 | (ulong)*(uint *)(uVar5 + 0x13))
                                                  + 3)) - 1)) != 0x9f)))) {
    uVar5 = *param_1 & 0xffffffff00000000;
    uVar1 = *(uint *)((uVar5 | *(uint *)(*param_1 + 0xb)) + 3);
    if (((uVar1 & 1) == 0) ||
       (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar1) - 1)) != 0x57)) {
      pCVar2 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
      uVar5 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb);
      if (pCVar2 == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar5;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup(pCVar2,uVar5);
      }
      EnsureClosureFeedbackCellArray(param_1);
      pCVar2 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
      uVar5 = *param_1 & 0xffffffff00000000;
      uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*param_1 + 0x13)) + 3);
      if (pCVar2 == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar5;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup(pCVar2,uVar5);
      }
      puVar3 = (ulong *)FeedbackVector::New(pIVar9,puVar3,puVar4);
      uVar8 = *puVar3;
      uVar7 = (ulong)*(uint *)(*param_1 + 0x13);
      uVar5 = *param_1 & 0xffffffff00000000;
      uVar10 = uVar5 | uVar7;
      *(int *)(uVar10 + 3) = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar6 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar10,uVar10 + 3,uVar8);
          uVar6 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar6 & 0x18) != 0) &&
           ((*(byte *)((uVar5 | uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar10,uVar10 + 3,uVar8);
          return;
        }
      }
    }
  }
  return;
}

