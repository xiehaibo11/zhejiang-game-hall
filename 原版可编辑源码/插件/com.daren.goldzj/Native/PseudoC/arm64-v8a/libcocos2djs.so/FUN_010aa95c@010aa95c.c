
ulong * FUN_010aa95c(undefined8 param_1,ulong *param_2,long *param_3,long *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
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
  Factory *this;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  
  uVar13 = *param_2;
  iVar6 = *(int *)(*param_4 + 3);
  this = (Factory *)(uVar13 & 0xffffffff00000000);
  uVar20 = iVar6 >> 1;
  piVar3 = (int *)(uVar13 + 0xb);
  if (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x423) {
    piVar3 = (int *)(*param_3 + 3);
  }
  if (0x7fffffd - uVar20 < (uint)(*piVar3 >> 1)) {
    puVar9 = (undefined8 *)v8::internal::Factory::NewRangeError(this,0xbe,0,0,0);
    v8::internal::Isolate::Throw((Isolate *)this,*puVar9,0);
    return (ulong *)0x0;
  }
  iVar2 = (*piVar3 >> 1) + uVar20;
  puVar10 = (ulong *)v8::internal::Factory::TryNewFixedArray(this,iVar2,0);
  if (puVar10 == (ulong *)0x0) {
    puVar10 = (ulong *)v8::internal::Factory::NewFixedArray(this,iVar2,0);
  }
  uVar13 = *param_2;
  lVar12 = *param_3;
  piVar3 = (int *)(uVar13 + 0xb);
  if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x423) {
    piVar3 = (int *)(lVar12 + 3);
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
    iVar19 = 0;
    uVar21 = 0;
    do {
      uVar15 = (ulong)*(uint *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xb)) + 7);
      if (uVar21 < uVar15) {
LAB_010aab00:
        if (param_5 == 0) {
          puVar11 = (ulong *)v8::internal::Factory::SizeToString(this,uVar21,uVar21 < uVar17 << 1);
        }
        else if (uVar21 >> 0x1e == 0) {
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar11 = *(ulong **)(this + 0x95a0);
            if (puVar11 == *(ulong **)(this + 0x95a8)) {
              puVar11 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
            }
            *(ulong **)(this + 0x95a0) = puVar11 + 1;
            *puVar11 = uVar21 << 1;
          }
          else {
            puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(this + 0x95b8),uVar21 << 1);
          }
        }
        else {
          puVar11 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                       (this);
          *(double *)(*puVar11 + 3) = (double)uVar21;
        }
        uVar15 = *puVar10;
        uVar13 = *puVar11;
        lVar12 = uVar15 + (long)(iVar19 << 2);
        *(int *)(lVar12 + 7) = (int)uVar13;
        if ((uVar13 & 1) != 0) {
          uVar14 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
          lVar12 = lVar12 + 7;
          if (((uint)uVar14 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar15,lVar12,uVar13);
            uVar14 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar15,lVar12,uVar13);
          }
        }
        iVar19 = iVar19 + 1;
      }
      else {
        puVar4 = (uint *)(uVar13 + 0xb);
        if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x423) {
          puVar4 = (uint *)(lVar12 + 3);
        }
        if ((uVar21 < (uint)((int)*puVar4 >> 1)) &&
           (((uVar7 = *(uint *)(lVar12 + ((int)uVar21 << 2) + 7), (uVar7 & 1) == 0 ||
             (uVar7 != *(uint *)(this + 0xa8))) && (uVar21 + uVar15 != -1)))) goto LAB_010aab00;
      }
      uVar21 = uVar21 + 1;
      if (uVar21 == (uint)(iVar2 >> 1)) goto LAB_010aac7c;
      uVar13 = *param_2;
      lVar12 = *param_3;
    } while( true );
  }
  iVar19 = 0;
LAB_010aac7c:
  lVar12 = *param_4;
  uVar13 = *puVar10;
  if (iVar6 < 0) {
    iVar6 = *(int *)(uVar13 + 3) >> 1;
    uVar20 = *(int *)(lVar12 + 3) >> 1;
    uVar7 = iVar6 - iVar19;
    if (uVar7 <= uVar20) {
      uVar20 = uVar7;
    }
    uVar7 = iVar6 - (uVar20 + iVar19);
    if (0 < (int)uVar7) {
      uVar5 = *(undefined4 *)(this + 0xa8);
      lVar1 = uVar13 + (long)(int)((uVar20 + iVar19) * 4);
      uVar17 = (ulong)uVar7;
      if (uVar7 < 8) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar17 & 0xfffffff8;
        puVar9 = (undefined8 *)(lVar1 + 0x17);
        uVar21 = uVar15;
        do {
          puVar9[-1] = CONCAT44(uVar5,uVar5);
          puVar9[-2] = CONCAT44(uVar5,uVar5);
          puVar9[1] = CONCAT44(uVar5,uVar5);
          *puVar9 = CONCAT44(uVar5,uVar5);
          uVar21 = uVar21 - 8;
          puVar9 = puVar9 + 4;
        } while (uVar21 != 0);
        if (uVar15 == uVar17) goto LAB_010aad1c;
      }
      lVar18 = uVar15 - uVar17;
      puVar16 = (undefined4 *)(lVar1 + 7 + uVar15 * 4);
      do {
        bVar8 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        *puVar16 = uVar5;
        puVar16 = puVar16 + 1;
      } while (bVar8);
    }
  }
LAB_010aad1c:
  if (uVar20 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar13,uVar13 + (long)(iVar19 << 2) + 7,lVar12 + 7,uVar20,4);
  }
  return puVar10;
}

