
void FUN_01099aa0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

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
  ulong *extraout_x1;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  Factory *this;
  int iVar21;
  
  FUN_0109abc8();
  FUN_0109abdc();
  uVar18 = param_4 & 0xffffffff;
  pIVar7 = (Isolate *)(*extraout_x1 & 0xffffffff00000000);
  uVar20 = (ulong)pIVar7 | (ulong)*(uint *)(*extraout_x1 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar20;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8),uVar20);
    uVar20 = *puVar8;
  }
  iVar19 = *(int *)(*extraout_x1 + 0xb);
  this = (Factory *)(*extraout_x1 & 0xffffffff00000000);
  iVar21 = iVar19 >> 1;
  iVar17 = (int)param_4;
  uVar2 = iVar21 + iVar17;
  if ((uint)(*(int *)(uVar20 + 3) >> 1) < uVar2) {
    puVar9 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray
                                (this,uVar2 + (uVar2 >> 1) + 0x10);
    uVar20 = *puVar9;
    uVar10 = *puVar8;
    iVar21 = *(int *)(uVar20 + 3) >> 1;
    uVar3 = *(int *)(uVar10 + 3) >> 1;
    uVar5 = iVar21 - iVar17;
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    uVar5 = iVar21 - (uVar3 + iVar17);
    if (0 < (int)uVar5) {
      uVar4 = *(undefined4 *)(this + 0xa8);
      lVar1 = uVar20 + (long)(int)((uVar3 + iVar17) * 4);
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
        if (uVar15 == uVar13) goto LAB_01099ce8;
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
LAB_01099ce8:
    if (uVar3 != 0) {
      v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
                ((Heap *)(this + 0x8850),uVar20,uVar20 + (long)(iVar17 << 2) + 7,uVar10 + 7,uVar3,0)
      ;
    }
    uVar10 = *extraout_x1;
    uVar20 = *puVar9;
    *(int *)(uVar10 + 7) = (int)uVar20;
    if ((uVar20 & 1) != 0) {
      uVar13 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar13 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar10,uVar10 + 7,uVar20);
        uVar13 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar10,uVar10 + 7,uVar20);
      }
    }
  }
  else {
    puVar9 = puVar8;
    if ((iVar17 == 0) && (0xc9 < iVar19)) {
      uVar10 = v8::internal::Heap::CanMoveObjectStart((Heap *)(this + 0x8850),uVar20);
      uVar20 = *puVar8;
      if ((uVar10 & 1) != 0) {
        uVar18 = v8::internal::Heap::LeftTrimFixedArray((Heap *)(this + 0x8850),uVar20,0);
        *puVar8 = uVar18;
        uVar20 = *extraout_x1;
        *(int *)(uVar20 + 7) = (int)uVar18;
        if ((uVar18 & 1) != 0) {
          uVar10 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar20,uVar20 + 7,uVar18);
            uVar10 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar20,uVar20 + 7,uVar18);
          }
        }
        goto LAB_01099e50;
      }
    }
    else if (iVar21 == 0) goto joined_r0x01099ca4;
    v8::internal::Heap::MoveRange
              ((Heap *)(this + 0x8850),uVar20,uVar20 + 7 + (long)(iVar17 << 2),uVar20 + 7,iVar21,4);
  }
joined_r0x01099ca4:
  if (iVar17 != 0) {
    uVar10 = *puVar9;
    iVar21 = 0;
    iVar19 = 8;
    uVar20 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    do {
      puVar12 = (undefined4 *)(uVar10 + 7 + (long)iVar21);
      uVar13 = *(ulong *)(*(long *)(param_3 + 8) - (long)iVar19);
      *puVar12 = (int)uVar13;
      if (((uVar20 & 0x40000) != 0 || (uVar20 & 0x18) == 0) && (uVar13 & 1) != 0) {
        uVar11 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar10,puVar12,uVar13);
          uVar11 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)(uVar10 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar10,puVar12,uVar13);
        }
      }
      iVar21 = iVar21 + 4;
      uVar3 = (int)uVar18 - 1;
      uVar18 = (ulong)uVar3;
      iVar19 = iVar19 + 8;
    } while (uVar3 != 0);
  }
LAB_01099e50:
  *(uint *)(*extraout_x1 + 0xb) = uVar2 * 2;
  return;
}

