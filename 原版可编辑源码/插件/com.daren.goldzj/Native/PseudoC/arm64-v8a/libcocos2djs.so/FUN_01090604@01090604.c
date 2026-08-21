
undefined8 FUN_01090604(undefined8 param_1,ulong *param_2,long *param_3,long *param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  Factory *this;
  ulong uVar23;
  ulong *local_68;
  
  uVar12 = *param_2;
  iVar4 = *(int *)(*param_4 + 3);
  this = (Factory *)(uVar12 & 0xffffffff00000000);
  uVar1 = iVar4 >> 1;
  piVar2 = (int *)(uVar12 + 0xb);
  if (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x423) {
    piVar2 = (int *)(*param_3 + 3);
  }
  if (0x7fffffd - uVar1 < (uint)(*piVar2 >> 1)) {
    puVar8 = (undefined8 *)v8::internal::Factory::NewRangeError(this,0xbe,0,0,0);
    v8::internal::Isolate::Throw((Isolate *)this,*puVar8,0);
    return 0;
  }
  local_68 = (ulong *)v8::internal::Factory::TryNewFixedArray(this,(*piVar2 >> 1) + uVar1,0);
  if (local_68 == (ulong *)0x0) {
    uVar12 = *param_2;
    lVar11 = *param_3;
    piVar2 = (int *)(uVar12 + 0xb);
    if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x423) {
      piVar2 = (int *)(lVar11 + 3);
    }
    uVar21 = *piVar2 >> 1;
    uVar12 = (ulong)uVar21;
    if (uVar21 == 0) {
      iVar17 = 0;
    }
    else {
      if (uVar21 == 1) {
        uVar15 = 0;
        iVar17 = 0;
      }
      else {
        uVar15 = uVar12 & 0xfffffffe;
        iVar18 = 0;
        iVar17 = 0;
        iVar22 = 0xf;
        uVar19 = uVar15;
        do {
          iVar5 = iVar22 + -8;
          lVar13 = (long)iVar22;
          iVar22 = iVar22 + 0x10;
          if (*(long *)(lVar11 + iVar5) != -0x8000000080001) {
            iVar18 = iVar18 + 1;
          }
          if (*(long *)(lVar11 + lVar13) != -0x8000000080001) {
            iVar17 = iVar17 + 1;
          }
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
        iVar17 = iVar17 + iVar18;
        if (uVar15 == uVar12) goto LAB_01090798;
      }
      lVar13 = uVar12 - uVar15;
      uVar21 = (int)uVar15 << 3 | 7;
      do {
        lVar20 = (long)(int)uVar21;
        uVar21 = uVar21 + 8;
        if (*(long *)(lVar11 + lVar20) != -0x8000000080001) {
          iVar17 = iVar17 + 1;
        }
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
LAB_01090798:
    local_68 = (ulong *)v8::internal::Factory::NewFixedArray(this,iVar17 + uVar1,0);
  }
  uVar12 = *param_2;
  lVar11 = *param_3;
  piVar2 = (int *)(uVar12 + 0xb);
  if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x423) {
    piVar2 = (int *)(lVar11 + 3);
  }
  iVar17 = *piVar2;
  uVar19 = *(ulong *)(this + 0x8890) >> 9;
  if (0x3fff < uVar19) {
    uVar19 = 0x4000;
  }
  if (uVar19 < 0x201) {
    uVar19 = 0x200;
  }
  if (iVar17 >> 1 == 0) {
    iVar22 = 0;
  }
  else {
    iVar22 = 0;
    uVar15 = 0;
    while( true ) {
      piVar2 = (int *)(uVar12 + 0xb);
      if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x423) {
        piVar2 = (int *)(lVar11 + 3);
      }
      if ((uVar15 < (uint)(*piVar2 >> 1)) &&
         (*(long *)(lVar11 + ((long)((int)uVar15 << 3) | 7U)) != -0x8000000080001)) {
        if (param_5 == 0) {
          puVar9 = (ulong *)v8::internal::Factory::SizeToString(this,uVar15,uVar15 < uVar19 << 1);
        }
        else if (uVar15 >> 0x1e == 0) {
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar9 = *(ulong **)(this + 0x95a0);
            if (puVar9 == *(ulong **)(this + 0x95a8)) {
              puVar9 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
            }
            *(ulong **)(this + 0x95a0) = puVar9 + 1;
            *puVar9 = uVar15 << 1;
          }
          else {
            puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(this + 0x95b8),uVar15 << 1);
          }
        }
        else {
          puVar9 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                      (this);
          *(double *)(*puVar9 + 3) = (double)uVar15;
        }
        uVar12 = *puVar9;
        uVar23 = *local_68;
        lVar11 = uVar23 + (long)(iVar22 << 2);
        *(int *)(lVar11 + 7) = (int)uVar12;
        if ((uVar12 & 1) != 0) {
          uVar14 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
          lVar11 = lVar11 + 7;
          if (((uint)uVar14 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar23,lVar11,uVar12);
            uVar14 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar23,lVar11,uVar12);
          }
        }
        iVar22 = iVar22 + 1;
      }
      uVar15 = uVar15 + 1;
      if (uVar15 == (uint)(iVar17 >> 1)) break;
      uVar12 = *param_2;
      lVar11 = *param_3;
    }
  }
  lVar11 = *param_4;
  uVar12 = *local_68;
  uVar21 = uVar1;
  if (iVar4 < 0) {
    iVar4 = *(int *)(uVar12 + 3) >> 1;
    uVar21 = *(int *)(lVar11 + 3) >> 1;
    uVar6 = iVar4 - iVar22;
    if (uVar6 <= uVar21) {
      uVar21 = uVar6;
    }
    uVar6 = iVar4 - (uVar21 + iVar22);
    if (0 < (int)uVar6) {
      uVar3 = *(undefined4 *)(this + 0xa8);
      lVar13 = uVar12 + (long)(int)((uVar21 + iVar22) * 4);
      uVar19 = (ulong)uVar6;
      if (uVar6 < 8) {
        uVar23 = 0;
      }
      else {
        uVar23 = uVar19 & 0xfffffff8;
        puVar8 = (undefined8 *)(lVar13 + 0x17);
        uVar15 = uVar23;
        do {
          puVar8[-1] = CONCAT44(uVar3,uVar3);
          puVar8[-2] = CONCAT44(uVar3,uVar3);
          puVar8[1] = CONCAT44(uVar3,uVar3);
          *puVar8 = CONCAT44(uVar3,uVar3);
          uVar15 = uVar15 - 8;
          puVar8 = puVar8 + 4;
        } while (uVar15 != 0);
        if (uVar23 == uVar19) goto LAB_01090a5c;
      }
      lVar20 = uVar23 - uVar19;
      puVar16 = (undefined4 *)(lVar13 + 7 + uVar23 * 4);
      do {
        bVar7 = lVar20 != -1;
        lVar20 = lVar20 + 1;
        *puVar16 = uVar3;
        puVar16 = puVar16 + 1;
      } while (bVar7);
    }
  }
LAB_01090a5c:
  if (uVar21 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar12,uVar12 + (long)(iVar22 << 2) + 7,lVar11 + 7,uVar21,4);
  }
  uVar10 = v8::internal::FixedArray::ShrinkOrEmpty(this,local_68,iVar22 + uVar1);
  return uVar10;
}

