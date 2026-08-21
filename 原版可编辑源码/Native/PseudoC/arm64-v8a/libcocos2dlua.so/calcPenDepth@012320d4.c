
/* btMinkowskiPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver&, btConvexShape const*,
   btConvexShape const*, btTransform const&, btTransform const&, btVector3&, btVector3&, btVector3&,
   btIDebugDraw*) */

bool __thiscall
btMinkowskiPenetrationDepthSolver::calcPenDepth
          (btMinkowskiPenetrationDepthSolver *this,btVoronoiSimplexSolver *param_1,
          btConvexShape *param_2,btConvexShape *param_3,btTransform *param_4,btTransform *param_5,
          btVector3 *param_6,btVector3 *param_7,btVector3 *param_8,btIDebugDraw *param_9)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined **local_1140 [3];
  float local_1128;
  float fStack_1124;
  float fStack_1120;
  undefined4 uStack_111c;
  float local_1118;
  char local_1114;
  undefined8 local_1110;
  ulong uStack_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  undefined8 uStack_10e8;
  float local_10e0;
  float fStack_10dc;
  float local_10d8;
  undefined4 local_10d4;
  undefined8 local_10d0;
  undefined8 uStack_10c8;
  undefined8 local_10c0;
  undefined8 uStack_10b8;
  undefined8 local_10b0;
  undefined8 uStack_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined4 local_1090;
  btGjkPairDetector abStack_1088 [8];
  float local_1080;
  float fStack_107c;
  float local_1078;
  undefined4 local_1074;
  float local_1020 [248];
  float local_c40 [248];
  float local_860 [248];
  float local_480 [248];
  
  if (*(int *)(param_2 + 8) - 0x11U < 2) {
    bVar2 = *(int *)(param_3 + 8) - 0x11U < 2;
  }
  else {
    bVar2 = false;
  }
  lVar5 = 0;
  do {
    getPenetrationDirections();
    fVar20 = *(float *)((long)&DAT_01795478 + lVar5);
    fVar27 = *(float *)((long)&DAT_01795478 + lVar5 + 4);
    fVar12 = *(float *)param_4;
    fVar14 = *(float *)(param_4 + 4);
    fVar15 = *(float *)(param_4 + 0x10);
    fVar17 = *(float *)(param_4 + 0x14);
    fVar22 = *(float *)(param_4 + 8);
    fVar28 = -fVar20;
    fVar26 = *(float *)(param_4 + 0x18);
    fVar18 = *(float *)(param_4 + 0x20);
    fVar19 = *(float *)(param_4 + 0x24);
    fVar29 = *(float *)((long)&DAT_01795480 + lVar5);
    fVar16 = *(float *)(param_4 + 0x28);
    *(undefined4 *)((long)local_c40 + lVar5 + 0xc) = 0;
    *(float *)((long)local_c40 + lVar5) = (fVar12 * fVar28 - fVar15 * fVar27) - fVar18 * fVar29;
    *(float *)((long)local_c40 + lVar5 + 4) = (fVar14 * fVar28 - fVar17 * fVar27) - fVar19 * fVar29;
    *(float *)((long)local_c40 + lVar5 + 8) = (fVar22 * fVar28 - fVar26 * fVar27) - fVar16 * fVar29;
    fVar12 = *(float *)(param_5 + 4);
    fVar16 = *(float *)(param_5 + 8);
    fVar14 = *(float *)(param_5 + 0x14);
    fVar15 = *(float *)(param_5 + 0x24);
    fVar18 = *(float *)(param_5 + 0x18);
    fVar17 = *(float *)(param_5 + 0x28);
    *(float *)((long)local_1020 + lVar5) =
         fVar20 * *(float *)param_5 + fVar27 * *(float *)(param_5 + 0x10) +
         fVar29 * *(float *)(param_5 + 0x20);
    lVar1 = lVar5 + 0x10;
    *(float *)((long)local_1020 + lVar5 + 4) = fVar20 * fVar12 + fVar27 * fVar14 + fVar29 * fVar15;
    *(float *)((long)local_1020 + lVar5 + 8) = fVar20 * fVar16 + fVar27 * fVar18 + fVar29 * fVar17;
    *(undefined4 *)((long)local_1020 + lVar5 + 0xc) = 0;
    lVar5 = lVar1;
  } while (lVar1 != 0x2a0);
  iVar3 = (**(code **)(*(long *)param_2 + 0xa8))(param_2);
  if (iVar3 < 1) {
    uVar11 = 0x2a;
  }
  else {
    pfVar9 = local_c40 + 0xab;
    iVar10 = 0;
    pfVar8 = local_1020 + 0xab;
    puVar6 = (undefined8 *)&DAT_01795718;
    do {
      (**(code **)(*(long *)param_2 + 0xb0))(param_2,iVar10,&local_1110);
      fVar12 = (float)local_1110 * *(float *)(param_4 + 0x20);
      fVar14 = local_1110._4_4_ * *(float *)(param_4 + 0x24);
      local_1110 = CONCAT44((float)local_1110 * *(float *)(param_4 + 0x10) +
                            local_1110._4_4_ * *(float *)(param_4 + 0x14) +
                            (float)uStack_1108 * *(float *)(param_4 + 0x18),
                            *(float *)param_4 * (float)local_1110 +
                            *(float *)(param_4 + 4) * local_1110._4_4_ +
                            *(float *)(param_4 + 8) * (float)uStack_1108);
      uStack_1108 = (ulong)(uint)(fVar12 + fVar14 + (float)uStack_1108 * *(float *)(param_4 + 0x28))
      ;
      getPenetrationDirections();
      iVar10 = iVar10 + 1;
      puVar6[1] = uStack_1108;
      *puVar6 = local_1110;
      fVar14 = *(float *)param_4;
      fVar15 = *(float *)(param_4 + 4);
      fVar16 = *(float *)(param_4 + 0x10);
      fVar18 = *(float *)(param_4 + 0x14);
      fVar19 = *(float *)(param_4 + 8);
      fVar12 = -(float)local_1110;
      fVar20 = *(float *)(param_4 + 0x18);
      fVar22 = *(float *)(param_4 + 0x20);
      fVar26 = *(float *)(param_4 + 0x24);
      fVar17 = *(float *)(param_4 + 0x28);
      *pfVar9 = 0.0;
      pfVar9[-3] = (fVar14 * fVar12 - fVar16 * local_1110._4_4_) - fVar22 * (float)uStack_1108;
      pfVar9[-2] = (fVar15 * fVar12 - fVar18 * local_1110._4_4_) - fVar26 * (float)uStack_1108;
      pfVar9[-1] = (fVar19 * fVar12 - fVar20 * local_1110._4_4_) - fVar17 * (float)uStack_1108;
      fVar12 = *(float *)param_5;
      fVar14 = *(float *)(param_5 + 4);
      fVar19 = *(float *)(param_5 + 8);
      fVar15 = *(float *)(param_5 + 0x10);
      fVar16 = *(float *)(param_5 + 0x14);
      fVar22 = *(float *)(param_5 + 0x18);
      fVar17 = *(float *)(param_5 + 0x20);
      fVar18 = *(float *)(param_5 + 0x24);
      fVar20 = *(float *)(param_5 + 0x28);
      pfVar9 = pfVar9 + 4;
      *pfVar8 = 0.0;
      pfVar8[-3] = fVar12 * (float)local_1110 + fVar15 * local_1110._4_4_ +
                   fVar17 * (float)uStack_1108;
      pfVar8[-2] = (float)local_1110 * fVar14 + local_1110._4_4_ * fVar16 +
                   (float)uStack_1108 * fVar18;
      pfVar8[-1] = (float)local_1110 * fVar19 + local_1110._4_4_ * fVar22 +
                   (float)uStack_1108 * fVar20;
      pfVar8 = pfVar8 + 4;
      puVar6 = puVar6 + 2;
    } while (iVar3 != iVar10);
    uVar11 = (ulong)(iVar3 + 0x2a);
  }
  iVar3 = (**(code **)(*(long *)param_3 + 0xa8))(param_3);
  if (0 < iVar3) {
    uVar4 = -(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4;
    iVar10 = 0;
    puVar6 = (undefined8 *)((long)&DAT_01795478 + uVar4);
    pfVar9 = (float *)((long)local_c40 + uVar4 + 8);
    pfVar8 = (float *)((long)local_1020 + uVar4 + 8);
    do {
      (**(code **)(*(long *)param_3 + 0xb0))(param_3,iVar10,&local_1110);
      fVar12 = (float)local_1110 * *(float *)(param_5 + 0x20);
      fVar14 = local_1110._4_4_ * *(float *)(param_5 + 0x24);
      local_1110 = CONCAT44((float)local_1110 * *(float *)(param_5 + 0x10) +
                            local_1110._4_4_ * *(float *)(param_5 + 0x14) +
                            (float)uStack_1108 * *(float *)(param_5 + 0x18),
                            *(float *)param_5 * (float)local_1110 +
                            *(float *)(param_5 + 4) * local_1110._4_4_ +
                            *(float *)(param_5 + 8) * (float)uStack_1108);
      uStack_1108 = (ulong)(uint)(fVar12 + fVar14 + (float)uStack_1108 * *(float *)(param_5 + 0x28))
      ;
      getPenetrationDirections();
      iVar10 = iVar10 + 1;
      puVar6[1] = uStack_1108;
      *puVar6 = local_1110;
      fVar14 = *(float *)param_4;
      fVar15 = *(float *)(param_4 + 4);
      fVar16 = *(float *)(param_4 + 0x10);
      fVar18 = *(float *)(param_4 + 0x14);
      fVar19 = *(float *)(param_4 + 8);
      fVar12 = -(float)local_1110;
      fVar20 = *(float *)(param_4 + 0x18);
      fVar22 = *(float *)(param_4 + 0x20);
      fVar26 = *(float *)(param_4 + 0x24);
      fVar17 = *(float *)(param_4 + 0x28);
      pfVar9[1] = 0.0;
      pfVar9[-2] = (fVar14 * fVar12 - fVar16 * local_1110._4_4_) - fVar22 * (float)uStack_1108;
      pfVar9[-1] = (fVar15 * fVar12 - fVar18 * local_1110._4_4_) - fVar26 * (float)uStack_1108;
      *pfVar9 = (fVar19 * fVar12 - fVar20 * local_1110._4_4_) - fVar17 * (float)uStack_1108;
      fVar12 = *(float *)param_5;
      fVar14 = *(float *)(param_5 + 4);
      fVar19 = *(float *)(param_5 + 8);
      fVar15 = *(float *)(param_5 + 0x10);
      fVar16 = *(float *)(param_5 + 0x14);
      fVar22 = *(float *)(param_5 + 0x18);
      fVar17 = *(float *)(param_5 + 0x20);
      fVar18 = *(float *)(param_5 + 0x24);
      fVar20 = *(float *)(param_5 + 0x28);
      pfVar8[1] = 0.0;
      pfVar8[-2] = fVar12 * (float)local_1110 + fVar15 * local_1110._4_4_ +
                   fVar17 * (float)uStack_1108;
      pfVar8[-1] = (float)local_1110 * fVar14 + local_1110._4_4_ * fVar16 +
                   (float)uStack_1108 * fVar18;
      *pfVar8 = (float)local_1110 * fVar19 + local_1110._4_4_ * fVar22 + (float)uStack_1108 * fVar20
      ;
      puVar6 = puVar6 + 2;
      pfVar9 = pfVar9 + 4;
      pfVar8 = pfVar8 + 4;
    } while (iVar3 != iVar10);
    uVar11 = (ulong)(uint)((int)uVar11 + iVar3);
  }
  (**(code **)(*(long *)param_2 + 0x98))(param_2,local_c40,local_480,uVar11);
  (**(code **)(*(long *)param_3 + 0x98))(param_3,local_1020,local_860,uVar11);
  if ((int)uVar11 < 1) {
    fVar12 = 1e+18;
    fVar16 = 0.0;
    fVar15 = 0.0;
    fVar14 = 0.0;
    uVar24 = 0;
  }
  else {
    fVar12 = 1e+18;
    pfVar9 = local_480 + 2;
    pfVar8 = local_860 + 2;
    puVar7 = &DAT_01795484;
    fVar17 = 0.0;
    uVar24 = 0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    uVar25 = 0;
    do {
      getPenetrationDirections();
      uVar13 = *(undefined8 *)(puVar7 + -3);
      fVar16 = fVar17;
      if (!bVar2) {
        fVar16 = (float)puVar7[-1];
      }
      fVar18 = (float)uVar13;
      fVar19 = (float)((ulong)uVar13 >> 0x20);
      if (0.01 < fVar18 * fVar18 + fVar19 * fVar19 + fVar16 * fVar16) {
        fVar23 = pfVar9[-2];
        fVar21 = pfVar9[-1];
        fVar26 = *pfVar9;
        fVar27 = pfVar8[-2];
        fVar28 = pfVar8[-1];
        fVar29 = *pfVar8;
        fVar22 = fVar17;
        fVar20 = fVar17;
        if (!bVar2) {
          fVar22 = fVar23 * *(float *)(param_4 + 0x20) + fVar21 * *(float *)(param_4 + 0x24) +
                   fVar26 * *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x38);
          fVar20 = fVar27 * *(float *)(param_5 + 0x20) + fVar28 * *(float *)(param_5 + 0x24) +
                   fVar29 * *(float *)(param_5 + 0x28) + *(float *)(param_5 + 0x38);
        }
        fVar18 = fVar18 * ((*(float *)param_5 * fVar27 + *(float *)(param_5 + 4) * fVar28 +
                            *(float *)(param_5 + 8) * fVar29 +
                           (float)*(undefined8 *)(param_5 + 0x30)) -
                          (*(float *)param_4 * fVar23 + *(float *)(param_4 + 4) * fVar21 +
                           *(float *)(param_4 + 8) * fVar26 + (float)*(undefined8 *)(param_4 + 0x30)
                          )) +
                 fVar19 * ((*(float *)(param_5 + 0x10) * fVar27 +
                            *(float *)(param_5 + 0x14) * fVar28 +
                            *(float *)(param_5 + 0x18) * fVar29 +
                           (float)((ulong)*(undefined8 *)(param_5 + 0x30) >> 0x20)) -
                          (*(float *)(param_4 + 0x10) * fVar23 + *(float *)(param_4 + 0x14) * fVar21
                           + *(float *)(param_4 + 0x18) * fVar26 +
                          (float)((ulong)*(undefined8 *)(param_4 + 0x30) >> 0x20))) +
                 fVar16 * (fVar20 - fVar22);
        if (fVar18 < fVar12) {
          uVar24 = *puVar7;
          uVar25 = uVar13;
          fVar12 = fVar18;
          fVar14 = fVar16;
          fVar15 = fVar19;
        }
      }
      fVar16 = (float)uVar25;
      uVar11 = uVar11 - 1;
      puVar7 = puVar7 + 4;
      pfVar9 = pfVar9 + 4;
      pfVar8 = pfVar8 + 4;
    } while (uVar11 != 0);
  }
  btConvexShape::getMarginNonVirtual(param_2);
  btConvexShape::getMarginNonVirtual(param_3);
  if (0.0 <= fVar12) {
    fVar17 = (float)btConvexShape::getMarginNonVirtual(param_2);
    fVar18 = (float)btConvexShape::getMarginNonVirtual(param_3);
    fVar12 = fVar12 + fVar17 + fVar18 + 0.5;
    btGjkPairDetector::btGjkPairDetector
              (abStack_1088,param_2,param_3,param_1,(btConvexPenetrationDepthSolver *)0x0);
    uStack_1108 = *(ulong *)(param_4 + 8);
    local_1110 = *(undefined8 *)param_4;
    uStack_10f8 = *(undefined8 *)(param_4 + 0x18);
    local_1100 = *(undefined8 *)(param_4 + 0x10);
    local_10e0 = fVar16 * fVar12 + *(float *)(param_4 + 0x30);
    fStack_10dc = fVar15 * fVar12 + *(float *)(param_4 + 0x34);
    uStack_10e8 = *(undefined8 *)(param_4 + 0x28);
    local_10f0 = *(undefined8 *)(param_4 + 0x20);
    local_10d8 = fVar14 * fVar12 + *(float *)(param_4 + 0x38);
    local_10d4 = 0;
    uStack_10c8 = *(undefined8 *)(param_5 + 8);
    local_10d0 = *(undefined8 *)param_5;
    uStack_10b8 = *(undefined8 *)(param_5 + 0x18);
    local_10c0 = *(undefined8 *)(param_5 + 0x10);
    local_1080 = -fVar16;
    fStack_107c = -fVar15;
    uStack_10a8 = *(undefined8 *)(param_5 + 0x28);
    local_10b0 = *(undefined8 *)(param_5 + 0x20);
    local_1078 = -fVar14;
    uStack_1098 = *(undefined8 *)(param_5 + 0x38);
    local_10a0 = *(undefined8 *)(param_5 + 0x30);
    local_1140[0] = &PTR__Result_01733cd8;
    local_1114 = '\0';
    local_1090 = 0x5d5e0b6b;
    local_1074 = 0;
    btGjkPairDetector::getClosestPoints
              ((ClosestPointInput *)abStack_1088,(Result *)&local_1110,(btIDebugDraw *)local_1140,
               SUB81(param_9,0));
    if (local_1114 != '\0') {
      fVar12 = fVar12 - local_1118;
      *(undefined4 *)(param_7 + 0xc) = 0;
      *(float *)param_7 = local_1128 - fVar16 * fVar12;
      *(float *)(param_7 + 4) = fStack_1124 - fVar15 * fVar12;
      *(float *)(param_7 + 8) = fStack_1120 - fVar14 * fVar12;
      *(ulong *)(param_8 + 8) = CONCAT44(uStack_111c,fStack_1120);
      *(ulong *)param_8 = CONCAT44(fStack_1124,local_1128);
      *(float *)param_6 = fVar16;
      *(float *)(param_6 + 4) = fVar15;
      *(float *)(param_6 + 8) = fVar14;
      *(undefined4 *)(param_6 + 0xc) = uVar24;
    }
    bVar2 = local_1114 != '\0';
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

