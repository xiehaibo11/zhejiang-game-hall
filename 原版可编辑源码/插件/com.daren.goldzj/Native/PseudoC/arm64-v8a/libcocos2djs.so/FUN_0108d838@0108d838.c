
ulong * FUN_0108d838(undefined8 param_1,ulong *param_2,long *param_3,long *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  Factory *this;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar11 = *param_2;
  iVar5 = *(int *)(*param_4 + 3);
  this = (Factory *)(uVar11 & 0xffffffff00000000);
  uVar18 = iVar5 >> 1;
  piVar3 = (int *)(uVar11 + 0xb);
  if (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x423) {
    piVar3 = (int *)(*param_3 + 3);
  }
  if (0x7fffffd - uVar18 < (uint)(*piVar3 >> 1)) {
    puVar8 = (undefined8 *)v8::internal::Factory::NewRangeError(this,0xbe,0,0,0);
    v8::internal::Isolate::Throw((Isolate *)this,*puVar8,0);
    return (ulong *)0x0;
  }
  iVar2 = (*piVar3 >> 1) + uVar18;
  puVar9 = (ulong *)v8::internal::Factory::TryNewFixedArray(this,iVar2,0);
  if (puVar9 == (ulong *)0x0) {
    puVar9 = (ulong *)v8::internal::Factory::NewFixedArray(this,iVar2,0);
  }
  uVar11 = *param_2;
  lVar12 = *param_3;
  piVar3 = (int *)(uVar11 + 0xb);
  if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x423) {
    piVar3 = (int *)(lVar12 + 3);
  }
  iVar2 = *piVar3;
  uVar15 = *(ulong *)(this + 0x8890) >> 9;
  if (0x3fff < uVar15) {
    uVar15 = 0x4000;
  }
  if (uVar15 < 0x201) {
    uVar15 = 0x200;
  }
  if (iVar2 >> 1 == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = 0;
    uVar19 = 0;
    while( true ) {
      piVar3 = (int *)(uVar11 + 0xb);
      if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x423) {
        piVar3 = (int *)(lVar12 + 3);
      }
      if (uVar19 < (uint)(*piVar3 >> 1)) {
        if (param_5 == 0) {
          puVar10 = (ulong *)v8::internal::Factory::SizeToString(this,uVar19,uVar19 < uVar15 << 1);
        }
        else if (uVar19 >> 0x1e == 0) {
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar10 = *(ulong **)(this + 0x95a0);
            if (puVar10 == *(ulong **)(this + 0x95a8)) {
              puVar10 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
            }
            *(ulong **)(this + 0x95a0) = puVar10 + 1;
            *puVar10 = uVar19 << 1;
          }
          else {
            puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(this + 0x95b8),uVar19 << 1);
          }
        }
        else {
          puVar10 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                       (this);
          *(double *)(*puVar10 + 3) = (double)uVar19;
        }
        uVar20 = *puVar9;
        uVar11 = *puVar10;
        lVar12 = uVar20 + (long)(iVar17 << 2);
        *(int *)(lVar12 + 7) = (int)uVar11;
        if ((uVar11 & 1) != 0) {
          uVar13 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
          lVar12 = lVar12 + 7;
          if (((uint)uVar13 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar20,lVar12,uVar11);
            uVar13 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar20,lVar12,uVar11);
          }
        }
        iVar17 = iVar17 + 1;
      }
      uVar19 = uVar19 + 1;
      if (uVar19 == (uint)(iVar2 >> 1)) break;
      uVar11 = *param_2;
      lVar12 = *param_3;
    }
  }
  lVar12 = *param_4;
  uVar11 = *puVar9;
  if (iVar5 < 0) {
    iVar5 = *(int *)(uVar11 + 3) >> 1;
    uVar18 = *(int *)(lVar12 + 3) >> 1;
    uVar6 = iVar5 - iVar17;
    if (uVar6 <= uVar18) {
      uVar18 = uVar6;
    }
    uVar6 = iVar5 - (uVar18 + iVar17);
    if (0 < (int)uVar6) {
      uVar4 = *(undefined4 *)(this + 0xa8);
      lVar1 = uVar11 + (long)(int)((uVar18 + iVar17) * 4);
      uVar15 = (ulong)uVar6;
      if (uVar6 < 8) {
        uVar20 = 0;
      }
      else {
        uVar20 = uVar15 & 0xfffffff8;
        puVar8 = (undefined8 *)(lVar1 + 0x17);
        uVar19 = uVar20;
        do {
          puVar8[-1] = CONCAT44(uVar4,uVar4);
          puVar8[-2] = CONCAT44(uVar4,uVar4);
          puVar8[1] = CONCAT44(uVar4,uVar4);
          *puVar8 = CONCAT44(uVar4,uVar4);
          uVar19 = uVar19 - 8;
          puVar8 = puVar8 + 4;
        } while (uVar19 != 0);
        if (uVar20 == uVar15) goto LAB_0108dbb4;
      }
      lVar16 = uVar20 - uVar15;
      puVar14 = (undefined4 *)(lVar1 + 7 + uVar20 * 4);
      do {
        bVar7 = lVar16 != -1;
        lVar16 = lVar16 + 1;
        *puVar14 = uVar4;
        puVar14 = puVar14 + 1;
      } while (bVar7);
    }
  }
LAB_0108dbb4:
  if (uVar18 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar11,uVar11 + (long)(iVar17 << 2) + 7,lVar12 + 7,uVar18,4);
  }
  return puVar9;
}

