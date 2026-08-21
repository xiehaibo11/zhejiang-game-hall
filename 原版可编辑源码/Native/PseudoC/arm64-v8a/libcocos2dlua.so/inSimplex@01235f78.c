
/* btVoronoiSimplexSolver::inSimplex(btVector3 const&) */

byte __thiscall btVoronoiSimplexSolver::inSimplex(btVoronoiSimplexSolver *this,btVector3 *param_1)

{
  ulong uVar1;
  uint uVar2;
  btVoronoiSimplexSolver *pbVar3;
  btVoronoiSimplexSolver *pbVar14;
  long lVar25;
  btVoronoiSimplexSolver *pbVar26;
  long lVar27;
  btVoronoiSimplexSolver *pbVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  byte bVar34;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined8 uVar35;
  byte bVar42;
  byte bVar43;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined8 uVar44;
  byte bVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  btVoronoiSimplexSolver *pbVar4;
  btVoronoiSimplexSolver *pbVar5;
  btVoronoiSimplexSolver *pbVar6;
  btVoronoiSimplexSolver *pbVar7;
  btVoronoiSimplexSolver *pbVar8;
  btVoronoiSimplexSolver *pbVar9;
  btVoronoiSimplexSolver *pbVar10;
  btVoronoiSimplexSolver *pbVar11;
  btVoronoiSimplexSolver *pbVar12;
  btVoronoiSimplexSolver *pbVar13;
  btVoronoiSimplexSolver *pbVar15;
  btVoronoiSimplexSolver *pbVar16;
  btVoronoiSimplexSolver *pbVar17;
  btVoronoiSimplexSolver *pbVar18;
  btVoronoiSimplexSolver *pbVar19;
  btVoronoiSimplexSolver *pbVar20;
  btVoronoiSimplexSolver *pbVar21;
  btVoronoiSimplexSolver *pbVar22;
  btVoronoiSimplexSolver *pbVar23;
  btVoronoiSimplexSolver *pbVar24;
  
  uVar2 = *(uint *)this;
  if ((int)uVar2 < 1) {
    bVar43 = 0;
    goto LAB_012360c0;
  }
  fVar29 = *(float *)param_1;
  fVar30 = *(float *)(param_1 + 4);
  fVar31 = *(float *)(param_1 + 8);
  fVar32 = *(float *)(this + 0x134);
  if (uVar2 < 8) {
    lVar25 = 0;
LAB_01236070:
    bVar43 = 0;
  }
  else {
    uVar1 = 8;
    if ((uVar2 & 7) != 0) {
      uVar1 = (ulong)(uVar2 & 7);
    }
    lVar25 = uVar2 - uVar1;
    if (lVar25 == 0) goto LAB_01236070;
    pbVar26 = this + 0x44;
    uVar35 = 0;
    uVar44 = 0;
    lVar27 = lVar25;
    do {
      pbVar28 = pbVar26 + -0x40;
      fVar33 = *(float *)pbVar26;
      pbVar3 = pbVar26 + 4;
      pbVar4 = pbVar26 + 8;
      pbVar5 = pbVar26 + 0x10;
      pbVar6 = pbVar26 + 0x14;
      pbVar7 = pbVar26 + 0x18;
      pbVar8 = pbVar26 + 0x20;
      pbVar9 = pbVar26 + 0x24;
      pbVar10 = pbVar26 + 0x28;
      pbVar11 = pbVar26 + 0x30;
      pbVar12 = pbVar26 + 0x34;
      pbVar13 = pbVar26 + 0x38;
      pbVar14 = pbVar26 + -0x3c;
      pbVar15 = pbVar26 + -0x38;
      pbVar16 = pbVar26 + -0x30;
      pbVar17 = pbVar26 + -0x2c;
      pbVar18 = pbVar26 + -0x28;
      pbVar19 = pbVar26 + -0x20;
      pbVar20 = pbVar26 + -0x1c;
      pbVar21 = pbVar26 + -0x18;
      pbVar22 = pbVar26 + -0x10;
      pbVar23 = pbVar26 + -0xc;
      pbVar24 = pbVar26 + -8;
      lVar27 = lVar27 + -8;
      pbVar26 = pbVar26 + 0x80;
      sVar52 = -(ushort)((fVar29 - fVar33) * (fVar29 - fVar33) +
                         (fVar30 - *(float *)pbVar3) * (fVar30 - *(float *)pbVar3) +
                         (fVar31 - *(float *)pbVar4) * (fVar31 - *(float *)pbVar4) <= fVar32);
      sVar53 = -(ushort)((fVar29 - *(float *)pbVar5) * (fVar29 - *(float *)pbVar5) +
                         (fVar30 - *(float *)pbVar6) * (fVar30 - *(float *)pbVar6) +
                         (fVar31 - *(float *)pbVar7) * (fVar31 - *(float *)pbVar7) <= fVar32);
      sVar54 = -(ushort)((fVar29 - *(float *)pbVar8) * (fVar29 - *(float *)pbVar8) +
                         (fVar30 - *(float *)pbVar9) * (fVar30 - *(float *)pbVar9) +
                         (fVar31 - *(float *)pbVar10) * (fVar31 - *(float *)pbVar10) <= fVar32);
      sVar55 = -(ushort)((fVar29 - *(float *)pbVar11) * (fVar29 - *(float *)pbVar11) +
                         (fVar30 - *(float *)pbVar12) * (fVar30 - *(float *)pbVar12) +
                         (fVar31 - *(float *)pbVar13) * (fVar31 - *(float *)pbVar13) <= fVar32);
      sVar56 = -(ushort)((fVar29 - *(float *)pbVar28) * (fVar29 - *(float *)pbVar28) +
                         (fVar30 - *(float *)pbVar14) * (fVar30 - *(float *)pbVar14) +
                         (fVar31 - *(float *)pbVar15) * (fVar31 - *(float *)pbVar15) <= fVar32);
      sVar57 = -(ushort)((fVar29 - *(float *)pbVar16) * (fVar29 - *(float *)pbVar16) +
                         (fVar30 - *(float *)pbVar17) * (fVar30 - *(float *)pbVar17) +
                         (fVar31 - *(float *)pbVar18) * (fVar31 - *(float *)pbVar18) <= fVar32);
      sVar58 = -(ushort)((fVar29 - *(float *)pbVar19) * (fVar29 - *(float *)pbVar19) +
                         (fVar30 - *(float *)pbVar20) * (fVar30 - *(float *)pbVar20) +
                         (fVar31 - *(float *)pbVar21) * (fVar31 - *(float *)pbVar21) <= fVar32);
      sVar59 = -(ushort)((fVar29 - *(float *)pbVar22) * (fVar29 - *(float *)pbVar22) +
                         (fVar30 - *(float *)pbVar23) * (fVar30 - *(float *)pbVar23) +
                         (fVar31 - *(float *)pbVar24) * (fVar31 - *(float *)pbVar24) <= fVar32);
      bVar43 = (byte)uVar44 | (byte)sVar52;
      bVar45 = (byte)((ulong)uVar44 >> 8) | (byte)((ushort)sVar52 >> 8);
      bVar46 = (byte)((ulong)uVar44 >> 0x10) | (byte)sVar53;
      bVar47 = (byte)((ulong)uVar44 >> 0x18) | (byte)((ushort)sVar53 >> 8);
      bVar48 = (byte)((ulong)uVar44 >> 0x20) | (byte)sVar54;
      bVar49 = (byte)((ulong)uVar44 >> 0x28) | (byte)((ushort)sVar54 >> 8);
      bVar50 = (byte)((ulong)uVar44 >> 0x30) | (byte)sVar55;
      bVar51 = (byte)((ulong)uVar44 >> 0x38) | (byte)((ushort)sVar55 >> 8);
      uVar44 = CONCAT17(bVar51,CONCAT16(bVar50,CONCAT15(bVar49,CONCAT14(bVar48,CONCAT13(bVar47,
                                                  CONCAT12(bVar46,CONCAT11(bVar45,bVar43)))))));
      bVar34 = (byte)uVar35 | (byte)sVar56;
      bVar36 = (byte)((ulong)uVar35 >> 8) | (byte)((ushort)sVar56 >> 8);
      bVar37 = (byte)((ulong)uVar35 >> 0x10) | (byte)sVar57;
      bVar38 = (byte)((ulong)uVar35 >> 0x18) | (byte)((ushort)sVar57 >> 8);
      bVar39 = (byte)((ulong)uVar35 >> 0x20) | (byte)sVar58;
      bVar40 = (byte)((ulong)uVar35 >> 0x28) | (byte)((ushort)sVar58 >> 8);
      bVar41 = (byte)((ulong)uVar35 >> 0x30) | (byte)sVar59;
      bVar42 = (byte)((ulong)uVar35 >> 0x38) | (byte)((ushort)sVar59 >> 8);
      uVar35 = CONCAT17(bVar42,CONCAT16(bVar41,CONCAT15(bVar40,CONCAT14(bVar39,CONCAT13(bVar38,
                                                  CONCAT12(bVar37,CONCAT11(bVar36,bVar34)))))));
    } while (lVar27 != 0);
    bVar43 = bVar43 | bVar34;
    bVar46 = bVar46 | bVar37;
    uVar35 = NEON_ext(CONCAT17(bVar51 | bVar42,
                               CONCAT16(bVar50 | bVar41,
                                        CONCAT15(bVar49 | bVar40,
                                                 CONCAT14(bVar48 | bVar39,
                                                          CONCAT13(bVar47 | bVar38,
                                                                   CONCAT12(bVar46,CONCAT11(bVar45 |
                                                                                            bVar36,
                                                  bVar43))))))),(ulong)(uint)fVar29,4,1);
    bVar43 = bVar43 | (byte)uVar35 | bVar46 | (byte)((ulong)uVar35 >> 0x10);
    if (uVar1 == 0) goto LAB_012360c0;
  }
  pbVar26 = this + lVar25 * 0x10 + 8;
  lVar25 = (ulong)uVar2 - lVar25;
  do {
    pbVar13 = pbVar26 + -4;
    fVar33 = *(float *)pbVar26;
    pbVar12 = pbVar26 + 4;
    lVar25 = lVar25 + -1;
    pbVar26 = pbVar26 + 0x10;
    bVar43 = bVar43 | (fVar29 - *(float *)pbVar13) * (fVar29 - *(float *)pbVar13) +
                      (fVar30 - fVar33) * (fVar30 - fVar33) +
                      (fVar31 - *(float *)pbVar12) * (fVar31 - *(float *)pbVar12) <= fVar32;
  } while (lVar25 != 0);
LAB_012360c0:
  if ((((*(float *)(param_1 + 0xc) == *(float *)(this + 0x130)) &&
       (*(float *)(param_1 + 8) == *(float *)(this + 300))) &&
      (*(float *)(param_1 + 4) == *(float *)(this + 0x128))) &&
     (*(float *)param_1 == *(float *)(this + 0x124))) {
    bVar43 = 1;
  }
  return bVar43 & 1;
}

