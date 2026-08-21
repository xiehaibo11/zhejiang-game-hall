
void FUN_01096bac(undefined8 param_1,ulong *param_2,long param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong uVar18;
  Factory *this;
  int iVar19;
  
  pIVar7 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar18 = (ulong)pIVar7 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar18;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8),uVar18);
    uVar18 = *puVar8;
  }
  this = (Factory *)(*param_2 & 0xffffffff00000000);
  uVar2 = (*(int *)(*param_2 + 0xb) >> 1) + param_4;
  if (uVar2 <= (uint)(*(int *)(uVar18 + 3) >> 1)) {
    FUN_01098228(this,param_2,puVar8,param_4,0);
    puVar9 = puVar8;
    goto joined_r0x01096ce8;
  }
  puVar9 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray
                              (this,uVar2 + (uVar2 >> 1) + 0x10);
  uVar18 = *puVar9;
  uVar10 = *puVar8;
  iVar19 = *(int *)(uVar18 + 3) >> 1;
  uVar3 = *(int *)(uVar10 + 3) >> 1;
  uVar5 = iVar19 - param_4;
  if (uVar5 <= uVar3) {
    uVar3 = uVar5;
  }
  uVar5 = iVar19 - (uVar3 + param_4);
  if (0 < (int)uVar5) {
    uVar4 = *(undefined4 *)(this + 0xa8);
    lVar1 = uVar18 + (long)(int)((uVar3 + param_4) * 4);
    uVar13 = (ulong)uVar5;
    if (uVar5 < 8) {
      uVar15 = 0;
    }
    else {
      uVar15 = uVar13 & 0xfffffff8;
      puVar16 = (undefined8 *)(lVar1 + 0x17);
      uVar11 = uVar15;
      do {
        puVar16[-1] = CONCAT44(uVar4,uVar4);
        puVar16[-2] = CONCAT44(uVar4,uVar4);
        puVar16[1] = CONCAT44(uVar4,uVar4);
        *puVar16 = CONCAT44(uVar4,uVar4);
        uVar11 = uVar11 - 8;
        puVar16 = puVar16 + 4;
      } while (uVar11 != 0);
      if (uVar15 == uVar13) goto LAB_01096d2c;
    }
    lVar14 = uVar15 - uVar13;
    puVar12 = (undefined4 *)(lVar1 + 7 + uVar15 * 4);
    do {
      bVar6 = lVar14 != -1;
      lVar14 = lVar14 + 1;
      *puVar12 = uVar4;
      puVar12 = puVar12 + 1;
    } while (bVar6);
  }
LAB_01096d2c:
  if (uVar3 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar18,uVar18 + (long)(param_4 << 2) + 7,uVar10 + 7,uVar3,0);
  }
  uVar10 = *param_2;
  uVar18 = *puVar9;
  *(int *)(uVar10 + 7) = (int)uVar18;
  if ((uVar18 & 1) != 0) {
    uVar13 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar10,uVar10 + 7,uVar18);
      uVar13 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar10,uVar10 + 7,uVar18);
    }
  }
joined_r0x01096ce8:
  if (param_4 != 0) {
    uVar10 = *puVar9;
    iVar19 = 0;
    iVar17 = 8;
    uVar18 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    do {
      puVar12 = (undefined4 *)(uVar10 + 7 + (long)iVar19);
      uVar13 = *(ulong *)(*(long *)(param_3 + 8) - (long)iVar17);
      *puVar12 = (int)uVar13;
      if (((uVar18 & 0x40000) != 0 || (uVar18 & 0x18) == 0) && (uVar13 & 1) != 0) {
        uVar11 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar10,puVar12,uVar13);
          uVar11 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)(uVar10 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar10,puVar12,uVar13);
        }
      }
      iVar19 = iVar19 + 4;
      param_4 = param_4 + -1;
      iVar17 = iVar17 + 8;
    } while (param_4 != 0);
  }
  *(uint *)(*param_2 + 0xb) = uVar2 * 2;
  return;
}

