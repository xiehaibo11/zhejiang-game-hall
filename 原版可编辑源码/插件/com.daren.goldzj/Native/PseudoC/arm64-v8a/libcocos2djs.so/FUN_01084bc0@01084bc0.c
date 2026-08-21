
undefined8 FUN_01084bc0(undefined8 param_1,ulong *param_2,long *param_3,long *param_4,int param_5)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  Factory *this;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *local_80;
  
  uVar13 = *param_2;
  iVar6 = *(int *)(*param_4 + 3);
  this = (Factory *)(uVar13 & 0xffffffff00000000);
  uVar3 = iVar6 >> 1;
  piVar4 = (int *)(uVar13 + 0xb);
  if (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x423) {
    piVar4 = (int *)(*param_3 + 3);
  }
  if (0x7fffffd - uVar3 < (uint)(*piVar4 >> 1)) {
    puVar9 = (undefined8 *)v8::internal::Factory::NewRangeError(this,0xbe,0,0,0);
    v8::internal::Isolate::Throw((Isolate *)this,*puVar9,0);
    return 0;
  }
  local_80 = (ulong *)v8::internal::Factory::TryNewFixedArray(this,(*piVar4 >> 1) + uVar3,0);
  if (local_80 == (ulong *)0x0) {
    uVar13 = *param_2;
    piVar4 = (int *)(uVar13 + 0xb);
    if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x423) {
      piVar4 = (int *)(*param_3 + 3);
    }
    if (*piVar4 >> 1 != 0) {
      lVar15 = 0;
      iVar12 = 0;
      puVar2 = (uint *)(*param_3 + 7);
      uVar19 = *puVar2;
      if ((uVar19 & 1) != 0) goto LAB_01084cf4;
      do {
        iVar12 = iVar12 + 1;
        do {
          lVar15 = lVar15 + 4;
          if ((ulong)(uint)(*piVar4 >> 1) * 4 - lVar15 == 0) goto LAB_01084d08;
          uVar19 = *(uint *)((long)puVar2 + (long)(int)lVar15);
          if ((uVar19 & 1) == 0) break;
LAB_01084cf4:
        } while (uVar19 == *(uint *)((uVar13 & 0xffffffff00000000) + 0xa8));
      } while( true );
    }
    iVar12 = 0;
LAB_01084d08:
    local_80 = (ulong *)v8::internal::Factory::NewFixedArray(this,iVar12 + uVar3,0);
  }
  uVar13 = *param_2;
  lVar15 = *param_3;
  piVar4 = (int *)(uVar13 + 0xb);
  if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x423) {
    piVar4 = (int *)(lVar15 + 3);
  }
  iVar12 = *piVar4;
  uVar17 = *(ulong *)(this + 0x8890) >> 9;
  if (0x3fff < uVar17) {
    uVar17 = 0x4000;
  }
  if (uVar17 < 0x201) {
    uVar17 = 0x200;
  }
  if (iVar12 >> 1 == 0) {
    iVar20 = 0;
  }
  else {
    iVar20 = 0;
    uVar21 = 0;
    while( true ) {
      piVar4 = (int *)(uVar13 + 0xb);
      if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x423) {
        piVar4 = (int *)(lVar15 + 3);
      }
      if ((uVar21 < (uint)(*piVar4 >> 1)) &&
         ((uVar19 = *(uint *)(lVar15 + ((int)uVar21 << 2) + 7), (uVar19 & 1) == 0 ||
          (uVar19 != *(uint *)(this + 0xa8))))) {
        if (param_5 == 0) {
          puVar10 = (ulong *)v8::internal::Factory::SizeToString(this,uVar21,uVar21 < uVar17 << 1);
        }
        else if (uVar21 >> 0x1e == 0) {
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar10 = *(ulong **)(this + 0x95a0);
            if (puVar10 == *(ulong **)(this + 0x95a8)) {
              puVar10 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
            }
            *(ulong **)(this + 0x95a0) = puVar10 + 1;
            *puVar10 = uVar21 << 1;
          }
          else {
            puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(this + 0x95b8),uVar21 << 1);
          }
        }
        else {
          puVar10 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                       (this);
          *(double *)(*puVar10 + 3) = (double)uVar21;
        }
        uVar22 = *local_80;
        uVar13 = *puVar10;
        lVar15 = uVar22 + (long)(iVar20 << 2);
        *(int *)(lVar15 + 7) = (int)uVar13;
        if ((uVar13 & 1) != 0) {
          uVar14 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
          lVar15 = lVar15 + 7;
          if (((uint)uVar14 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar22,lVar15,uVar13);
            uVar14 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar22 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar22,lVar15,uVar13);
          }
        }
        iVar20 = iVar20 + 1;
      }
      uVar21 = uVar21 + 1;
      if (uVar21 == (uint)(iVar12 >> 1)) break;
      uVar13 = *param_2;
      lVar15 = *param_3;
    }
  }
  lVar15 = *param_4;
  uVar13 = *local_80;
  uVar19 = uVar3;
  if (iVar6 < 0) {
    iVar6 = *(int *)(uVar13 + 3) >> 1;
    uVar19 = *(int *)(lVar15 + 3) >> 1;
    uVar7 = iVar6 - iVar20;
    if (uVar7 <= uVar19) {
      uVar19 = uVar7;
    }
    uVar7 = iVar6 - (uVar19 + iVar20);
    if (0 < (int)uVar7) {
      uVar5 = *(undefined4 *)(this + 0xa8);
      lVar1 = uVar13 + (long)(int)((uVar19 + iVar20) * 4);
      uVar17 = (ulong)uVar7;
      if (uVar7 < 8) {
        uVar22 = 0;
      }
      else {
        uVar22 = uVar17 & 0xfffffff8;
        puVar9 = (undefined8 *)(lVar1 + 0x17);
        uVar21 = uVar22;
        do {
          puVar9[-1] = CONCAT44(uVar5,uVar5);
          puVar9[-2] = CONCAT44(uVar5,uVar5);
          puVar9[1] = CONCAT44(uVar5,uVar5);
          *puVar9 = CONCAT44(uVar5,uVar5);
          uVar21 = uVar21 - 8;
          puVar9 = puVar9 + 4;
        } while (uVar21 != 0);
        if (uVar22 == uVar17) goto LAB_01084fcc;
      }
      lVar18 = uVar22 - uVar17;
      puVar16 = (undefined4 *)(lVar1 + 7 + uVar22 * 4);
      do {
        bVar8 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        *puVar16 = uVar5;
        puVar16 = puVar16 + 1;
      } while (bVar8);
    }
  }
LAB_01084fcc:
  if (uVar19 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar13,uVar13 + (long)(iVar20 << 2) + 7,lVar15 + 7,uVar19,4);
  }
  uVar11 = v8::internal::FixedArray::ShrinkOrEmpty(this,local_80,iVar20 + uVar3);
  return uVar11;
}

