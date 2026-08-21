
void cpArbiterPreStep(float param_1,float param_2,float param_3,float *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar4 = param_4[0x16];
  if (0 < (int)fVar4) {
    lVar2 = *(long *)(param_4 + 10);
    lVar3 = *(long *)(param_4 + 0xc);
    uVar8 = *(undefined8 *)(param_4 + 0x1a);
    fVar10 = *param_4;
    uVar15 = *(undefined8 *)(lVar2 + 0x28);
    uVar16 = *(undefined8 *)(lVar3 + 0x28);
    fVar11 = *(float *)(lVar2 + 0x1c);
    fVar12 = *(float *)(lVar3 + 0x1c);
    fVar13 = *(float *)(lVar2 + 0x44);
    fVar14 = *(float *)(lVar3 + 0x44);
    fVar9 = (float)((ulong)uVar8 >> 0x20);
    lVar5 = 0;
    lVar6 = 0;
    fVar17 = *(float *)(lVar3 + 0x14) + *(float *)(lVar2 + 0x14);
    do {
      lVar6 = lVar6 + 1;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x18) + lVar5);
      *(undefined4 *)((long)puVar1 + 0x24) = 0;
      lVar5 = lVar5 + 0x38;
      fVar18 = (float)*puVar1;
      fVar20 = (float)puVar1[1];
      fVar7 = (float)uVar8;
      fVar19 = (float)((ulong)*puVar1 >> 0x20);
      fVar22 = fVar9 * fVar18 - fVar7 * fVar19;
      fVar21 = (float)((ulong)puVar1[1] >> 0x20);
      fVar23 = fVar9 * fVar20 - fVar7 * fVar21;
      fVar25 = fVar7 * fVar18 - -fVar9 * fVar19;
      fVar26 = fVar7 * fVar20 - -fVar9 * fVar21;
      fVar24 = (float)NEON_fminnm(((((float)uVar16 - (float)uVar15) + fVar20) - fVar18) * fVar7 +
                                  param_2 + ((((float)((ulong)uVar16 >> 0x20) -
                                              (float)((ulong)uVar15 >> 0x20)) + fVar21) - fVar19) *
                                            fVar9,0);
      *(float *)(puVar1 + 2) = 1.0 / (fVar17 + fVar11 * fVar22 * fVar22 + fVar12 * fVar23 * fVar23);
      *(float *)((long)puVar1 + 0x14) =
           1.0 / (fVar17 + fVar11 * fVar25 * fVar25 + fVar12 * fVar26 * fVar26);
      *(float *)(puVar1 + 5) = -(fVar24 * param_3 * (1.0 / param_1));
      *(float *)(puVar1 + 3) =
           (((-*(float *)(lVar2 + 0x34) - fVar13 * fVar18) + *(float *)(lVar3 + 0x34) +
            fVar14 * fVar20) * fVar9 +
           fVar7 * (((*(float *)(lVar3 + 0x30) - *(float *)(lVar2 + 0x30)) + fVar13 * fVar19) -
                   fVar14 * fVar21)) * fVar10;
    } while (lVar6 < (int)fVar4);
  }
  return;
}

