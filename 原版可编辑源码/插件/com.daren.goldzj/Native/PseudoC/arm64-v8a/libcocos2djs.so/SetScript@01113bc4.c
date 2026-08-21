
/* v8::internal::SharedFunctionInfo::SetScript(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::HeapObject>, int, bool) */

void v8::internal::SharedFunctionInfo::SetScript
               (ulong *param_1,ulong *param_2,int param_3,ulong param_4)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  Isolate *pIVar10;
  ulong uVar11;
  Heap *pHVar12;
  ulong local_60;
  undefined1 auStack_58 [8];
  
  uVar7 = *param_1;
  pIVar10 = (Isolate *)(uVar7 & 0xffffffff00000000);
  uVar8 = (ulong)pIVar10 | (ulong)*(uint *)(uVar7 + 0xf);
  if (*(short *)(((ulong)pIVar10 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x5b) {
    uVar8 = (ulong)*(uint *)(uVar8 + 0xb);
  }
  if ((int)uVar8 == (int)*param_2) {
    return;
  }
  if ((((param_4 & 1) != 0) && ((*(uint *)(uVar7 + 3) & 1) != 0)) &&
     (*(short *)(((ulong)pIVar10 | 7) +
                (ulong)*(uint *)(((ulong)pIVar10 | (ulong)*(uint *)(uVar7 + 3)) - 1)) == 0x95)) {
    uVar8 = *param_1 & 0xffffffff00000000;
    pHVar12 = (Heap *)(uVar8 | 0x8850);
    uVar7 = uVar8 | *(uint *)(*param_1 + 3);
    Heap::NotifyObjectLayoutChange(pHVar12,uVar7,auStack_58,0);
    uVar8 = *(ulong *)(uVar8 + 0x2a8);
    if ((int)uVar8 == 0) {
      *(undefined4 *)(uVar7 - 1) = 0;
    }
    else {
      Heap::VerifyObjectLayoutChange(pHVar12,uVar7,uVar8);
      *(int *)(uVar7 - 1) = (int)uVar8;
      if (((uVar8 & 1) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        Heap_MarkingBarrierSlow(uVar7,0,uVar8);
      }
    }
    Heap::CreateFillerObjectAt(pHVar12,uVar7 + 0xf,4,0,1);
  }
  uVar8 = *param_2;
  uVar7 = uVar8 & 0xffffffff00000000;
  if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x65) {
    if ((*(uint *)(uVar8 + 0x17) & 0xfffffffe) == 6) {
      uVar7 = *(ulong *)(uVar7 + 0x420);
    }
    else {
      uVar7 = uVar7 | *(uint *)(uVar8 + 0x2b);
    }
    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar7;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar7);
      uVar7 = *puVar6;
    }
    uVar8 = *param_1;
    lVar1 = uVar7 + (long)(param_3 << 2);
    uVar5 = (uint)uVar8 | 2;
    *(uint *)(lVar1 + 7) = uVar5;
    if (((uVar8 & 1) == 0) || (uVar5 == 3)) goto LAB_01113f38;
    uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    piVar2 = (int *)(lVar1 + 7);
    uVar11 = uVar8 & 0xfffffffffffffffd;
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,piVar2,uVar11);
      uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar9 & 0x18) == 0) goto LAB_01113f38;
    bVar4 = *(byte *)((uVar7 & 0xfffffffffffc0000) + 8);
  }
  else {
    uVar7 = *param_1 & 0xffffffff00000000;
    uVar8 = uVar7 | *(uint *)(*param_1 + 0xf);
    if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x5b) {
      uVar8 = uVar7 | *(uint *)(uVar8 + 0xb);
    }
    uVar7 = uVar8 & 0xffffffff00000000;
    if ((*(uint *)(uVar8 + 0x17) & 0xfffffffe) == 6) {
      uVar11 = *(ulong *)(uVar7 + 0x420);
    }
    else {
      uVar11 = uVar7 | *(uint *)(uVar8 + 0x2b);
    }
    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar11;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar11);
      uVar11 = *puVar6;
    }
    if (*(int *)(uVar11 + 3) >> 1 <= param_3) goto LAB_01113f38;
    uVar5 = *(uint *)(uVar8 + 0x17) & 0xfffffffe;
    if (uVar5 == 6) {
      uVar11 = *(ulong *)(uVar7 + 0x420);
    }
    else {
      uVar11 = uVar7 | *(uint *)(uVar8 + 0x2b);
    }
    lVar1 = (long)(param_3 << 2) + 7;
    uVar3 = *(uint *)(uVar11 + lVar1);
    if (((uVar3 == 3) || ((uVar3 & 3) != 3)) || ((uVar3 & 0xfffffffd) != (uint)*param_1))
    goto LAB_01113f38;
    if (uVar5 == 6) {
      uVar7 = *(ulong *)(uVar7 + 0x420);
    }
    else {
      uVar7 = uVar7 | *(uint *)(uVar8 + 0x2b);
    }
    uVar8 = *(ulong *)(pIVar10 + 0xa0);
    piVar2 = (int *)(uVar7 + lVar1);
    *piVar2 = (int)uVar8;
    if (((int)uVar8 == 3) || ((uVar8 & 1) == 0)) goto LAB_01113f38;
    uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    uVar11 = uVar8 & 0xfffffffffffffffd;
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,piVar2,uVar11);
      uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar9 & 0x18) == 0) goto LAB_01113f38;
    bVar4 = *(byte *)((uVar7 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar4 & 0x18) == 0) {
    Heap_GenerationalBarrierSlow(uVar7,piVar2,uVar11);
  }
LAB_01113f38:
  local_60 = *param_1;
  set_script((SharedFunctionInfo *)&local_60,*param_2);
  return;
}

