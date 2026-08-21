
/* v8::internal::TransitionArray::Sort() */

void __thiscall v8::internal::TransitionArray::Sort(TransitionArray *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  uint local_94;
  uint local_84;
  ulong local_68;
  
  uVar10 = *(ulong *)this;
  if ((*(int *)(uVar10 + 3) < 4) || (uVar1 = *(int *)(uVar10 + 0xb) >> 1, (int)uVar1 < 2)) {
    return;
  }
  lVar27 = 0;
  uVar15 = uVar10 & 0xffffffff00000000;
  iVar17 = 0x17;
  uVar26 = 1;
LAB_0113e398:
  iVar25 = (int)uVar26 * 8;
  uVar4 = *(uint *)(uVar10 + ((long)(iVar25 + 8) | 7U));
  uVar19 = (ulong)uVar4;
  uVar12 = uVar10 & 0xffffffff00000000;
  uVar16 = uVar12 | uVar19;
  uVar2 = *(uint *)(uVar10 + (long)(iVar25 + 0xc) + 7);
  uVar18 = (ulong)uVar2;
  lVar9 = lVar27;
  iVar25 = iVar17;
  if ((*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x40) &&
     ((((uVar4 == *(uint *)(uVar15 + 0xb98) || (uVar4 == *(uint *)(uVar15 + 0xbe0))) ||
       (uVar4 == *(uint *)(uVar15 + 0xb68))) ||
      ((uVar4 == *(uint *)(uVar15 + 0xb48) || (uVar4 == *(uint *)(uVar15 + 0xbf0))))))) {
    local_94 = 0;
    local_84 = 0;
  }
  else {
    uVar13 = uVar12 | uVar18 & 0xfffffffffffffffd;
    uVar3 = *(int *)(((long)(int)((*(uint *)(uVar13 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                      0x1000000000 >> 0x20 | 3U) + (uVar12 | *(uint *)(uVar13 + 0x17))) >> 1;
    local_84 = uVar3 & 1;
    local_94 = uVar3 >> 3 & 7;
  }
  do {
    uVar5 = *(uint *)(uVar10 + (long)(iVar25 + -8));
    uVar22 = (ulong)uVar5;
    uVar13 = uVar10 & 0xffffffff00000000;
    uVar23 = uVar13 | uVar22;
    uVar3 = *(uint *)(uVar10 + (long)(iVar25 + -0xb) + 7);
    uVar10 = (ulong)uVar3;
    if ((*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar23 - 1)) == 0x40) &&
       (((uVar5 == *(uint *)(uVar15 + 0xb98) || (uVar5 == *(uint *)(uVar15 + 0xbe0))) ||
        ((uVar5 == *(uint *)(uVar15 + 0xb68) ||
         ((uVar5 == *(uint *)(uVar15 + 0xb48) || (uVar5 == *(uint *)(uVar15 + 0xbf0))))))))) {
      uVar24 = 0;
      uVar20 = 0;
      uVar6 = *(uint *)(uVar23 + 3);
      if ((uVar6 & 1) == 0) goto LAB_0113e568;
LAB_0113e50c:
      local_68 = uVar23;
      uVar6 = String::ComputeAndSetHash((String *)&local_68);
    }
    else {
      uVar11 = uVar13 | uVar10 & 0xfffffffffffffffd;
      uVar6 = *(int *)(((long)(int)((*(uint *)(uVar11 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                        0x1000000000 >> 0x20 | 3U) + (uVar13 | *(uint *)(uVar11 + 0x17))) >> 1;
      uVar20 = uVar6 & 1;
      uVar24 = uVar6 >> 3 & 7;
      uVar6 = *(uint *)(uVar23 + 3);
      if ((uVar6 & 1) != 0) goto LAB_0113e50c;
LAB_0113e568:
      uVar6 = uVar6 >> 3;
    }
    if ((*(uint *)(uVar16 + 3) & 1) == 0) {
      uVar7 = *(uint *)(uVar16 + 3) >> 3;
    }
    else {
      local_68 = uVar16;
      uVar7 = String::ComputeAndSetHash((String *)&local_68);
    }
    if (uVar5 == uVar4) {
      if (uVar20 == local_84) {
        if (uVar24 <= local_94) {
LAB_0113e6b4:
          iVar25 = (int)lVar9 + 1;
          goto LAB_0113e6c4;
        }
      }
      else if (uVar20 < local_84) goto LAB_0113e6b4;
    }
    else if (uVar6 <= uVar7) goto LAB_0113e6b4;
    lVar21 = (long)iVar25;
    *(uint *)(*(long *)this + lVar21) = uVar5;
    uVar23 = *(ulong *)this;
    if ((uVar5 != 3) && ((uVar5 & 1) != 0)) {
      uVar14 = uVar13 | uVar22 & 0xfffffffffffc0000;
      uVar11 = *(ulong *)(uVar14 + 8);
      lVar8 = uVar23 + lVar21;
      uVar22 = uVar13 | uVar22 & 0xfffffffffffffffd;
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar23,lVar8,uVar22);
        uVar23 = *(ulong *)this;
        uVar11 = *(ulong *)(uVar14 | 8);
        lVar8 = uVar23 + lVar21;
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar23,lVar8,uVar22);
        uVar23 = *(ulong *)this;
      }
    }
    lVar21 = (long)(iVar25 + -3) + 7;
    *(uint *)(uVar23 + lVar21) = uVar3;
    if ((uVar3 != 3) && ((uVar3 & 1) != 0)) {
      uVar22 = *(ulong *)this;
      uVar11 = uVar13 | uVar10 & 0xfffffffffffc0000;
      uVar23 = *(ulong *)(uVar11 + 8);
      uVar13 = uVar13 | uVar10 & 0xfffffffffffffffd;
      lVar8 = uVar22 + lVar21;
      if (((uint)uVar23 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar22,lVar8,uVar13);
        uVar22 = *(ulong *)this;
        uVar23 = *(ulong *)(uVar11 | 8);
        lVar8 = uVar22 + lVar21;
      }
      if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar22 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar22,lVar8,uVar13);
      }
    }
    if (lVar9 < 1) break;
    uVar10 = *(ulong *)this;
    lVar9 = lVar9 + -1;
    iVar25 = iVar25 + -8;
  } while( true );
  iVar25 = 0;
LAB_0113e6c4:
  uVar16 = (long)(iVar25 * 8 + 8) | 7;
  *(uint *)(*(long *)this + uVar16) = uVar4;
  uVar10 = *(ulong *)this;
  if ((uVar4 != 3) && ((uVar4 & 1) != 0)) {
    lVar9 = uVar10 + uVar16;
    uVar22 = uVar12 | uVar19 & 0xfffffffffffc0000;
    uVar13 = *(ulong *)(uVar22 + 8);
    uVar19 = uVar12 | uVar19 & 0xfffffffffffffffd;
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,lVar9,uVar19);
      uVar10 = *(ulong *)this;
      uVar13 = *(ulong *)(uVar22 | 8);
      lVar9 = uVar10 + uVar16;
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,lVar9,uVar19);
      uVar10 = *(ulong *)this;
    }
  }
  lVar9 = (long)(iVar25 * 8 + 0xc) + 7;
  *(uint *)(uVar10 + lVar9) = uVar2;
  if ((uVar2 != 3) && ((uVar2 & 1) != 0)) {
    uVar10 = *(ulong *)this;
    uVar19 = uVar12 | uVar18 & 0xfffffffffffc0000;
    uVar16 = *(ulong *)(uVar19 + 8);
    lVar21 = uVar10 + lVar9;
    uVar12 = uVar12 | uVar18 & 0xfffffffffffffffd;
    if (((uint)uVar16 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,lVar21,uVar12);
      uVar10 = *(ulong *)this;
      uVar16 = *(ulong *)(uVar19 | 8);
      lVar21 = uVar10 + lVar9;
    }
    if (((uVar16 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,lVar21,uVar12);
    }
  }
  uVar26 = uVar26 + 1;
  if (uVar26 == uVar1) {
    return;
  }
  uVar10 = *(ulong *)this;
  lVar27 = lVar27 + 1;
  iVar17 = iVar17 + 8;
  goto LAB_0113e398;
}

