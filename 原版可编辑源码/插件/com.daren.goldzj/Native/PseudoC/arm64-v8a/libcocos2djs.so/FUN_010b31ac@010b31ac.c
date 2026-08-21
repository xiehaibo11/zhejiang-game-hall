
ulong * FUN_010b31ac(undefined8 param_1,ulong *param_2,undefined8 param_3,long *param_4,int param_5)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  Factory *this;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar9 = *param_2;
  iVar3 = *(int *)(*param_4 + 3);
  this = (Factory *)(uVar9 & 0xffffffff00000000);
  uVar17 = iVar3 >> 1;
  if (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x423) {
    uVar9 = (ulong)(uint)((int)*(uint *)(uVar9 + 0xb) >> 1);
LAB_010b3220:
    if (0x7fffffd - uVar17 < uVar9) {
      puVar6 = (undefined8 *)v8::internal::Factory::NewRangeError(this,0xbe,0,0,0);
      v8::internal::Isolate::Throw((Isolate *)this,*puVar6,0);
      return (ulong *)0x0;
    }
  }
  else {
    if ((*(uint *)(((ulong)this | (ulong)*(uint *)(uVar9 + 0xb)) + 0x1b) >> 2 & 1) == 0) {
      uVar9 = *(ulong *)(uVar9 + 0x1f);
      goto LAB_010b3220;
    }
    uVar9 = 0;
  }
  iVar16 = uVar17 + (int)uVar9;
  puVar7 = (ulong *)v8::internal::Factory::TryNewFixedArray(this,iVar16,0);
  if (puVar7 == (ulong *)0x0) {
    puVar7 = (ulong *)v8::internal::Factory::NewFixedArray(this,iVar16,0);
  }
  uVar9 = *param_2;
  if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x423) {
    uVar11 = (ulong)(uint)((int)*(uint *)(uVar9 + 0xb) >> 1);
  }
  else if ((*(uint *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb)) + 0x1b) >> 2 & 1)
           == 0) {
    uVar11 = *(ulong *)(uVar9 + 0x1f);
  }
  else {
    uVar11 = 0;
  }
  uVar13 = *(ulong *)(this + 0x8890) >> 9;
  if (0x3fff < uVar13) {
    uVar13 = 0x4000;
  }
  if (uVar13 < 0x201) {
    uVar13 = 0x200;
  }
  if (uVar11 == 0) {
    iVar16 = 0;
  }
  else {
    uVar18 = 0;
    iVar16 = 0;
    uVar19 = 0;
    while( true ) {
      if (((*(uint *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb)) + 0x1b) >> 2 & 1)
           == 0) && (uVar19 < *(ulong *)(uVar9 + 0x1f))) {
        if (param_5 == 0) {
          puVar8 = (ulong *)v8::internal::Factory::SizeToString(this,uVar19,uVar19 < uVar13 << 1);
        }
        else if (uVar19 >> 0x1e == 0) {
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(this + 0x95a0);
            if (puVar8 == *(ulong **)(this + 0x95a8)) {
              puVar8 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
            }
            *(ulong **)(this + 0x95a0) = puVar8 + 1;
            *puVar8 = uVar18;
          }
          else {
            puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(this + 0x95b8),uVar18);
          }
        }
        else {
          puVar8 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                      (this);
          *(double *)(*puVar8 + 3) = (double)uVar19;
        }
        uVar20 = *puVar7;
        uVar9 = *puVar8;
        lVar10 = uVar20 + (long)(iVar16 << 2);
        *(int *)(lVar10 + 7) = (int)uVar9;
        if ((uVar9 & 1) != 0) {
          uVar12 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
          lVar10 = lVar10 + 7;
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar20,lVar10,uVar9);
            uVar12 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar20,lVar10,uVar9);
          }
        }
        iVar16 = iVar16 + 1;
      }
      if (uVar11 - 1 == uVar19) break;
      uVar9 = *param_2;
      uVar19 = uVar19 + 1;
      uVar18 = uVar18 + 2;
    }
  }
  lVar10 = *param_4;
  uVar9 = *puVar7;
  if (iVar3 < 0) {
    iVar3 = *(int *)(uVar9 + 3) >> 1;
    uVar17 = *(int *)(lVar10 + 3) >> 1;
    uVar4 = iVar3 - iVar16;
    if (uVar4 <= uVar17) {
      uVar17 = uVar4;
    }
    uVar4 = iVar3 - (uVar17 + iVar16);
    if (0 < (int)uVar4) {
      uVar2 = *(undefined4 *)(this + 0xa8);
      lVar1 = uVar9 + (long)(int)((uVar17 + iVar16) * 4);
      uVar11 = (ulong)uVar4;
      if (uVar4 < 8) {
        uVar19 = 0;
      }
      else {
        uVar19 = uVar11 & 0xfffffff8;
        puVar6 = (undefined8 *)(lVar1 + 0x17);
        uVar13 = uVar19;
        do {
          puVar6[-1] = CONCAT44(uVar2,uVar2);
          puVar6[-2] = CONCAT44(uVar2,uVar2);
          puVar6[1] = CONCAT44(uVar2,uVar2);
          *puVar6 = CONCAT44(uVar2,uVar2);
          uVar13 = uVar13 - 8;
          puVar6 = puVar6 + 4;
        } while (uVar13 != 0);
        if (uVar19 == uVar11) goto LAB_010b352c;
      }
      lVar15 = uVar19 - uVar11;
      puVar14 = (undefined4 *)(lVar1 + 7 + uVar19 * 4);
      do {
        bVar5 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        *puVar14 = uVar2;
        puVar14 = puVar14 + 1;
      } while (bVar5);
    }
  }
LAB_010b352c:
  if (uVar17 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar9,uVar9 + (long)(iVar16 << 2) + 7,lVar10 + 7,uVar17,4);
  }
  return puVar7;
}

