
/* v8::internal::WasmScript::CheckBreakPoints(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>, int) */

ulong * v8::internal::WasmScript::CheckBreakPoints(Isolate *param_1,ulong *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  Isolate *pIVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  
  uVar9 = *param_2;
  if ((*(uint *)(uVar9 + 0x17) & 0xfffffffe) != 6) {
    return (ulong *)0x0;
  }
  uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0x23);
  if (*(int *)(uVar9 + 3) < 2) {
    return (ulong *)0x0;
  }
  pIVar3 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar3;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar7 + 1;
    *puVar7 = uVar9;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    uVar9 = *puVar7;
  }
  uVar10 = uVar9 & 0xffffffff00000000;
  uVar12 = 0;
  uVar4 = *(int *)(uVar9 + 3) >> 1;
  lVar1 = uVar9 + 7;
  uVar6 = uVar4;
  uVar5 = uVar4;
  if (3 < *(int *)(uVar9 + 3)) {
    do {
      uVar2 = uVar12 + (uVar5 >> 1);
      uVar5 = *(uint *)(lVar1 + (int)(uVar2 * 4));
      if (((uVar5 & 1) == 0) || (uVar5 != *(uint *)(param_1 + 0xa0))) {
        iVar13 = *(int *)((uVar10 | uVar5) + 3) >> 1;
      }
      else {
        iVar13 = 0x7fffffff;
      }
      if (iVar13 <= param_3) {
        uVar12 = uVar2;
        uVar2 = uVar6;
      }
      uVar6 = uVar2;
      uVar5 = uVar2 - uVar12;
    } while (1 < (int)(uVar2 - uVar12));
  }
  uVar6 = *(uint *)(lVar1 + (int)(uVar12 << 2));
  if (((uVar6 & 1) == 0) || (uVar6 != *(uint *)(param_1 + 0xa0))) {
    iVar13 = *(int *)((uVar10 | uVar6) + 3) >> 1;
  }
  else {
    iVar13 = 0x7fffffff;
  }
  if (iVar13 < param_3) {
    uVar12 = uVar12 + 1;
  }
  if ((int)uVar4 <= (int)uVar12) {
    return (ulong *)0x0;
  }
  uVar4 = *(uint *)(lVar1 + (int)(uVar12 << 2));
  uVar10 = uVar10 | uVar4;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar3;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar7 + 1;
    *puVar7 = uVar10;
    if ((uVar4 & 1) != 0) goto LAB_012087c0;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
    uVar10 = *puVar7;
    if ((uVar10 & 1) != 0) {
LAB_012087c0:
      if ((int)uVar10 == *(int *)(param_1 + 0xa0)) {
        return (ulong *)0x0;
      }
    }
  }
  if (param_3 != *(int *)(uVar10 + 3) >> 1) {
    return (ulong *)0x0;
  }
  uVar4 = *(uint *)(uVar10 + 7);
  uVar9 = uVar10 & 0xffffffff00000000 | (ulong)uVar4;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar3;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar7 + 1;
    *puVar7 = uVar9;
    if ((uVar4 & 1) == 0) goto LAB_01208868;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    uVar9 = *puVar7;
    if ((uVar9 & 1) == 0) goto LAB_01208868;
  }
  if (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) - 0x76 < 0xf) {
    return puVar7;
  }
LAB_01208868:
  puVar8 = (ulong *)Factory::NewFixedArray((Factory *)param_1,1,0);
  uVar10 = *puVar8;
  uVar9 = *puVar7;
  *(int *)(uVar10 + 7) = (int)uVar9;
  if ((uVar9 & 1) == 0) {
    return puVar8;
  }
  uVar11 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
  if (((uint)uVar11 >> 0x12 & 1) != 0) {
    Heap_MarkingBarrierSlow(uVar10,uVar10 + 7,uVar9);
    uVar11 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
  }
  if ((uVar11 & 0x18) != 0) {
    if ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 7,uVar9);
      return puVar8;
    }
    return puVar8;
  }
  return puVar8;
}

