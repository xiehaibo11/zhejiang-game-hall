
/* void 
   btAlignedObjectArray<btBroadphasePair>::quickSortInternal<btBroadphasePairSortPredicate>(btBroadphasePairSortPredicate
   const&, int, int) */

void __thiscall
btAlignedObjectArray<btBroadphasePair>::quickSortInternal<btBroadphasePairSortPredicate>
          (btAlignedObjectArray<btBroadphasePair> *this,btBroadphasePairSortPredicate *param_1,
          int param_2,int param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar20 = (ulong)(uint)param_2;
LAB_01215e68:
  iVar9 = (int)uVar20;
  lVar13 = *(long *)(this + 0x10);
  uVar1 = iVar9 + param_3;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 1;
  }
  puVar14 = (ulong *)(lVar13 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20);
  uVar5 = *puVar14;
  uVar7 = puVar14[1];
  uVar12 = puVar14[2];
  uVar11 = (ulong)(uint)param_3;
  iVar19 = iVar9;
joined_r0x01215e94:
  uVar20 = (ulong)iVar19;
  if (uVar5 != 0) {
    puVar2 = (ulong *)(lVar13 + uVar20 * 0x20);
    puVar14 = puVar2 + 1;
    uVar16 = *puVar2;
    if (uVar16 != 0) goto LAB_01215ed0;
LAB_01215f18:
    iVar19 = -1;
    uVar17 = *puVar14;
    if (uVar17 != 0) goto LAB_01215edc;
LAB_01215f24:
    iVar10 = -1;
    if (uVar7 != 0) goto LAB_01215ee4;
    do {
      iVar18 = -1;
      puVar2 = puVar14;
      while( true ) {
        if (iVar19 <= *(int *)(uVar5 + 0x18)) {
          if ((iVar18 < iVar10) || (uVar16 != uVar5)) {
            if ((uVar16 != uVar5) || (iVar10 <= iVar18)) goto LAB_01215fe0;
          }
          else if ((uVar17 != uVar7) || (puVar2[1] <= uVar12)) goto LAB_01215fe0;
        }
        uVar20 = uVar20 + 1;
        puVar14 = puVar2 + 4;
        uVar16 = puVar2[3];
        if (uVar16 == 0) goto LAB_01215f18;
LAB_01215ed0:
        iVar19 = *(int *)(uVar16 + 0x18);
        uVar17 = *puVar14;
        if (uVar17 == 0) goto LAB_01215f24;
LAB_01215edc:
        iVar10 = *(int *)(uVar17 + 0x18);
        if (uVar7 == 0) break;
LAB_01215ee4:
        iVar18 = *(int *)(uVar7 + 0x18);
        puVar2 = puVar14;
      }
    } while( true );
  }
  puVar2 = (ulong *)(lVar13 + uVar20 * 0x20);
  puVar14 = puVar2 + 2;
  uVar16 = *puVar2;
  if (uVar16 != 0) goto LAB_01215f74;
LAB_01215fb4:
  iVar19 = -1;
  uVar17 = puVar14[-1];
  if (uVar17 != 0) goto LAB_01215f80;
LAB_01215fc0:
  iVar10 = -1;
  if (uVar7 != 0) goto LAB_01215f88;
  do {
    iVar18 = -1;
    puVar2 = puVar14;
    while( true ) {
      if (iVar19 < 0) {
        if ((iVar18 < iVar10) || (uVar16 != 0)) {
          if ((uVar16 != 0) || (iVar10 <= iVar18)) goto LAB_01215fe0;
        }
        else if ((uVar17 != uVar7) || (*puVar2 <= uVar12)) goto LAB_01215fe0;
      }
      uVar20 = uVar20 + 1;
      puVar14 = puVar2 + 4;
      uVar16 = puVar2[2];
      if (uVar16 == 0) goto LAB_01215fb4;
LAB_01215f74:
      iVar19 = *(int *)(uVar16 + 0x18);
      uVar17 = puVar14[-1];
      if (uVar17 == 0) goto LAB_01215fc0;
LAB_01215f80:
      iVar10 = *(int *)(uVar17 + 0x18);
      if (uVar7 == 0) break;
LAB_01215f88:
      iVar18 = *(int *)(uVar7 + 0x18);
      puVar2 = puVar14;
    }
  } while( true );
LAB_01215fe0:
  uVar11 = (ulong)(int)uVar11;
  if (uVar5 == 0) {
    puVar2 = (ulong *)(lVar13 + uVar11 * 0x20);
    puVar14 = puVar2 + 2;
    uVar16 = *puVar2;
    if (uVar16 != 0) goto LAB_012160b4;
LAB_012160f8:
    iVar19 = -1;
    if (uVar7 != 0) goto LAB_012160bc;
LAB_01216100:
    iVar10 = -1;
    uVar17 = puVar14[-1];
    if (uVar17 != 0) goto LAB_012160c8;
    do {
      iVar18 = -1;
      puVar2 = puVar14;
      while( true ) {
        if (-2 < iVar19) {
          if ((iVar18 < iVar10) || (uVar16 != 0)) {
            if ((uVar16 != 0) || (iVar10 <= iVar18)) goto LAB_01216128;
          }
          else if ((uVar7 != uVar17) || (uVar12 <= *puVar2)) goto LAB_01216128;
        }
        uVar11 = uVar11 - 1;
        puVar14 = puVar2 + -4;
        uVar16 = puVar2[-6];
        if (uVar16 == 0) goto LAB_012160f8;
LAB_012160b4:
        iVar19 = *(int *)(uVar16 + 0x18);
        if (uVar7 == 0) goto LAB_01216100;
LAB_012160bc:
        iVar10 = *(int *)(uVar7 + 0x18);
        uVar17 = puVar14[-1];
        if (uVar17 == 0) break;
LAB_012160c8:
        iVar18 = *(int *)(uVar17 + 0x18);
        puVar2 = puVar14;
      }
    } while( true );
  }
  puVar2 = (ulong *)(lVar13 + uVar11 * 0x20);
  puVar14 = puVar2 + 1;
  uVar16 = *puVar2;
  if (uVar16 != 0) goto LAB_01216010;
LAB_01216058:
  iVar19 = -1;
  if (uVar7 != 0) goto LAB_01216018;
LAB_01216060:
  iVar10 = -1;
  uVar17 = *puVar14;
  if (uVar17 != 0) goto LAB_01216024;
  do {
    iVar18 = -1;
    puVar2 = puVar14;
    while( true ) {
      if (*(int *)(uVar5 + 0x18) <= iVar19) {
        if ((iVar18 < iVar10) || (uVar5 != uVar16)) {
          if ((uVar5 != uVar16) || (iVar10 <= iVar18)) goto LAB_01216128;
        }
        else if ((uVar7 != uVar17) || (uVar12 <= puVar2[1])) goto LAB_01216128;
      }
      uVar11 = uVar11 - 1;
      puVar14 = puVar2 + -4;
      uVar16 = puVar2[-5];
      if (uVar16 == 0) goto LAB_01216058;
LAB_01216010:
      iVar19 = *(int *)(uVar16 + 0x18);
      if (uVar7 == 0) goto LAB_01216060;
LAB_01216018:
      iVar10 = *(int *)(uVar7 + 0x18);
      uVar17 = *puVar14;
      if (uVar17 == 0) break;
LAB_01216024:
      iVar18 = *(int *)(uVar17 + 0x18);
      puVar2 = puVar14;
    }
  } while( true );
LAB_01216128:
  if ((int)uVar20 <= (int)uVar11) {
    lVar15 = uVar11 * 0x20;
    puVar3 = (undefined8 *)(lVar13 + lVar15);
    uVar21 = puVar3[2];
    puVar4 = (undefined8 *)(lVar13 + uVar20 * 0x20);
    uVar6 = puVar4[2];
    uVar8 = puVar4[3];
    uVar23 = puVar4[1];
    uVar22 = *puVar4;
    puVar4[3] = puVar3[3];
    puVar4[2] = uVar21;
    uVar21 = *puVar3;
    uVar20 = (ulong)((int)uVar20 + 1);
    uVar11 = (ulong)((int)uVar11 - 1);
    puVar4[1] = puVar3[1];
    *puVar4 = uVar21;
    puVar3 = (undefined8 *)(*(long *)(this + 0x10) + lVar15);
    puVar3[1] = uVar23;
    *puVar3 = uVar22;
    puVar3[2] = uVar6;
    puVar3[3] = uVar8;
  }
  iVar10 = (int)uVar11;
  iVar19 = (int)uVar20;
  if (iVar10 < iVar19) goto code_r0x01216174;
  lVar13 = *(long *)(this + 0x10);
  goto joined_r0x01215e94;
code_r0x01216174:
  if (iVar9 < iVar10) {
    quickSortInternal<btBroadphasePairSortPredicate>(this,param_1,iVar9,iVar10);
  }
  if (param_3 <= iVar19) {
    return;
  }
  goto LAB_01215e68;
}

