
ulong * FUN_010ad170(undefined8 param_1,ulong *param_2,ulong *param_3,long *param_4,int param_5,
                    uint param_6)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  Factory *this;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  double dVar23;
  
  uVar13 = *param_2;
  iVar5 = *(int *)(*param_4 + 3);
  this = (Factory *)(uVar13 & 0xffffffff00000000);
  uVar21 = iVar5 >> 1;
  piVar3 = (int *)(uVar13 + 0xb);
  if (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x423) {
    piVar3 = (int *)(*param_3 + 3);
  }
  if (0x7fffffd - uVar21 < (uint)(*piVar3 >> 1)) {
    puVar9 = (undefined8 *)v8::internal::Factory::NewRangeError(this,0xbe,0,0,0);
    v8::internal::Isolate::Throw((Isolate *)this,*puVar9,0);
    return (ulong *)0x0;
  }
  iVar2 = (*piVar3 >> 1) + uVar21;
  puVar10 = (ulong *)v8::internal::Factory::TryNewFixedArray(this,iVar2,0);
  if (puVar10 == (ulong *)0x0) {
    puVar10 = (ulong *)v8::internal::Factory::NewFixedArray(this,iVar2,0);
  }
  uVar13 = *param_3;
  uVar14 = *param_2;
  piVar3 = (int *)(uVar14 + 0xb);
  if (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0x423) {
    piVar3 = (int *)(uVar13 + 3);
  }
  iVar2 = *piVar3;
  uVar17 = *(ulong *)(this + 0x8890) >> 9;
  if (0x3fff < uVar17) {
    uVar17 = 0x4000;
  }
  if (uVar17 < 0x201) {
    uVar17 = 0x200;
  }
  if (iVar2 >> 1 != 0) {
    iVar20 = 0;
    uVar22 = 0;
    do {
      if (uVar22 < *(uint *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb)) + 7)) {
LAB_010ad32c:
        if (param_5 == 0) {
          puVar11 = (ulong *)v8::internal::Factory::SizeToString(this,uVar22,uVar22 < uVar17 << 1);
        }
        else if (uVar22 >> 0x1e == 0) {
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar11 = *(ulong **)(this + 0x95a0);
            if (puVar11 == *(ulong **)(this + 0x95a8)) {
              puVar11 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
            }
            *(ulong **)(this + 0x95a0) = puVar11 + 1;
            *puVar11 = uVar22 << 1;
          }
          else {
            puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(this + 0x95b8),uVar22 << 1);
          }
        }
        else {
          puVar11 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                       (this);
          *(double *)(*puVar11 + 3) = (double)uVar22;
        }
        uVar13 = *puVar10;
        uVar14 = *puVar11;
        lVar12 = uVar13 + (long)(iVar20 << 2);
        *(int *)(lVar12 + 7) = (int)uVar14;
        if ((uVar14 & 1) != 0) {
          uVar15 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
          lVar12 = lVar12 + 7;
          if (((uint)uVar15 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar13,lVar12,uVar14);
            uVar15 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar13,lVar12,uVar14);
          }
        }
        iVar20 = iVar20 + 1;
      }
      else {
        uVar6 = (*(int *)(uVar13 + 0xf) >> 1) - 1;
        uVar14 = (*(ulong *)(*(long *)(this + 0x490) + 7) ^ uVar22 ^ 0xffffffffffffffff) +
                 (*(ulong *)(*(long *)(this + 0x490) + 7) ^ uVar22) * 0x40000;
        uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
        uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
        uVar14 = (ulong)(uVar6 & ((uint)(uVar14 >> 0x16) ^ (uint)uVar14) & 0x3fffffff);
        lVar12 = uVar13 + 7;
        uVar7 = *(uint *)(((long)(uVar14 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar12);
        if (uVar7 != *(uint *)(this + 0xa0)) {
          iVar19 = 1;
          do {
            if (uVar7 != (uint)*(undefined8 *)(this + 0xa8)) {
              if ((uVar7 & 1) == 0) {
                dVar23 = (double)((int)uVar7 >> 1);
              }
              else {
                dVar23 = *(double *)((uVar13 & 0xffffffff00000000 | (ulong)uVar7) + 3);
              }
              if ((int)dVar23 == (int)uVar22) {
                if ((param_6 == 0) ||
                   ((param_6 & 7 &
                    *(uint *)(((long)(uVar14 * 0xc00000000 + 0x1800000000) >> 0x20) + lVar12) >> 4)
                    == 0)) goto LAB_010ad32c;
                break;
              }
            }
            uVar14 = (ulong)((int)uVar14 + iVar19 & uVar6);
            uVar7 = *(uint *)(((long)(uVar14 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar12);
            iVar19 = iVar19 + 1;
          } while (uVar7 != *(uint *)(this + 0xa0));
        }
      }
      uVar22 = uVar22 + 1;
      if (uVar22 == (uint)(iVar2 >> 1)) goto LAB_010ad544;
      uVar14 = *param_2;
      uVar13 = *param_3;
    } while( true );
  }
  iVar20 = 0;
LAB_010ad544:
  lVar12 = *param_4;
  uVar13 = *puVar10;
  if (iVar5 < 0) {
    iVar5 = *(int *)(uVar13 + 3) >> 1;
    uVar21 = *(int *)(lVar12 + 3) >> 1;
    uVar7 = iVar5 - iVar20;
    if (uVar7 <= uVar21) {
      uVar21 = uVar7;
    }
    uVar7 = iVar5 - (uVar21 + iVar20);
    if (0 < (int)uVar7) {
      uVar4 = *(undefined4 *)(this + 0xa8);
      lVar1 = uVar13 + (long)(int)((uVar21 + iVar20) * 4);
      uVar14 = (ulong)uVar7;
      if (uVar7 < 8) {
        uVar22 = 0;
      }
      else {
        uVar22 = uVar14 & 0xfffffff8;
        puVar9 = (undefined8 *)(lVar1 + 0x17);
        uVar17 = uVar22;
        do {
          puVar9[-1] = CONCAT44(uVar4,uVar4);
          puVar9[-2] = CONCAT44(uVar4,uVar4);
          puVar9[1] = CONCAT44(uVar4,uVar4);
          *puVar9 = CONCAT44(uVar4,uVar4);
          uVar17 = uVar17 - 8;
          puVar9 = puVar9 + 4;
        } while (uVar17 != 0);
        if (uVar22 == uVar14) goto LAB_010ad5dc;
      }
      lVar18 = uVar22 - uVar14;
      puVar16 = (undefined4 *)(lVar1 + 7 + uVar22 * 4);
      do {
        bVar8 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        *puVar16 = uVar4;
        puVar16 = puVar16 + 1;
      } while (bVar8);
    }
  }
LAB_010ad5dc:
  if (uVar21 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar13,uVar13 + (long)(iVar20 << 2) + 7,lVar12 + 7,uVar21,4);
  }
  return puVar10;
}

