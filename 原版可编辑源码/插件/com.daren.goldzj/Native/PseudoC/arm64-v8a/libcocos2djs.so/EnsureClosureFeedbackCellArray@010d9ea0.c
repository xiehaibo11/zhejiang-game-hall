
/* v8::internal::JSFunction::EnsureClosureFeedbackCellArray(v8::internal::Handle<v8::internal::JSFunction>)
    */

void v8::internal::JSFunction::EnsureClosureFeedbackCellArray(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  
  uVar4 = *param_1;
  pIVar8 = (Isolate *)(uVar4 & 0xffffffff00000000);
  uVar3 = *(uint *)(((ulong)pIVar8 | (ulong)*(uint *)(uVar4 + 0xb)) + 3);
  if ((uVar3 == 0x84) ||
     ((((uVar3 & 1) != 0 &&
       (*(ushort *)(((ulong)pIVar8 | 7) + (ulong)*(uint *)(((ulong)pIVar8 | (ulong)uVar3) - 1)) -
        0x95 < 2)) ||
      (*(short *)(((ulong)pIVar8 | 7) +
                 (ulong)*(uint *)(((ulong)pIVar8 |
                                  (ulong)*(uint *)(((ulong)pIVar8 | (ulong)*(uint *)(uVar4 + 0x13))
                                                  + 3)) - 1)) != 0x81)))) {
    uVar6 = *param_1;
    uVar4 = uVar6 & 0xffffffff00000000;
    uVar3 = *(uint *)((uVar4 | *(uint *)(uVar6 + 0xb)) + 3);
    if ((uVar3 == 0x84) ||
       ((((uVar3 & 1) != 0 &&
         (*(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar3) - 1)) - 0x95 < 2)) ||
        (*(short *)((uVar4 | 7) +
                   (ulong)*(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(uVar6 + 0x13)) + 3)) - 1))
         != 0x9f)))) {
      uVar4 = *param_1 & 0xffffffff00000000;
      uVar3 = *(uint *)((uVar4 | *(uint *)(*param_1 + 0xb)) + 3);
      if (((uVar3 & 1) == 0) ||
         (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar3) - 1)) != 0x57)) {
        uVar4 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb);
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar2 = *(ulong **)(pIVar8 + 0x95a0);
          if (puVar2 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar2 = (ulong *)HandleScope::Extend(pIVar8);
          }
          *(ulong **)(pIVar8 + 0x95a0) = puVar2 + 1;
          *puVar2 = uVar4;
        }
        else {
          puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar4);
        }
        puVar2 = (ulong *)ClosureFeedbackCellArray::New(pIVar8,puVar2);
        uVar3 = *(uint *)(*param_1 + 0x13);
        if (uVar3 == *(uint *)(pIVar8 + 0xe90)) {
          puVar2 = (ulong *)Factory::NewOneClosureCell((Factory *)pIVar8);
          uVar6 = *param_1;
          uVar4 = *puVar2;
          *(int *)(uVar6 + 0x13) = (int)uVar4;
          if ((uVar4 & 1) == 0) {
            return;
          }
          uVar7 = uVar4 & 0xfffffffffffc0000;
          uVar5 = *(ulong *)(uVar7 + 8);
          lVar1 = uVar6 + 0x13;
          uVar3 = (uint)uVar5;
        }
        else {
          uVar4 = *puVar2;
          uVar6 = *param_1 & 0xffffffff00000000 | (ulong)uVar3;
          *(int *)(uVar6 + 3) = (int)uVar4;
          if ((uVar4 & 1) == 0) {
            return;
          }
          uVar7 = uVar4 & 0xfffffffffffc0000;
          uVar5 = *(ulong *)(uVar7 + 8);
          lVar1 = uVar6 + 3;
          uVar3 = (uint)uVar5;
        }
        if ((uVar3 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar6,lVar1,uVar4);
          uVar5 = *(ulong *)(uVar7 | 8);
        }
        if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar4);
          return;
        }
      }
    }
  }
  return;
}

