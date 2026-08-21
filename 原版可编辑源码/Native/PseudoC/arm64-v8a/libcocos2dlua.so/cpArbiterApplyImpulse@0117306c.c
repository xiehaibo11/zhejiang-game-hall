
void cpArbiterApplyImpulse(long param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar2 = *(long *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x30);
    fVar6 = *(float *)(param_1 + 0x68);
    fVar7 = *(float *)(param_1 + 0x6c);
    fVar8 = *(float *)(param_1 + 4);
    fVar9 = *(float *)(param_1 + 8);
    fVar10 = *(float *)(param_1 + 0xc);
    fVar20 = *(float *)(lVar3 + 0x30);
    fVar18 = *(float *)(lVar3 + 0x34);
    fVar16 = *(float *)(lVar3 + 0x44);
    lVar4 = 0;
    lVar5 = 0x28;
    do {
      fVar11 = *(float *)(lVar2 + 0x70);
      fVar13 = *(float *)(lVar3 + 0x70);
      pfVar1 = (float *)(*(long *)(param_1 + 0x60) + lVar5);
      fVar22 = *(float *)(lVar2 + 0x74);
      fVar19 = *(float *)(lVar2 + 0x78);
      fVar14 = pfVar1[-10];
      fVar17 = pfVar1[-9];
      fVar24 = *(float *)(lVar3 + 0x74);
      fVar23 = *(float *)(lVar3 + 0x78);
      fVar12 = pfVar1[-8];
      fVar15 = pfVar1[-7];
      fVar21 = ((fVar9 - *(float *)(lVar2 + 0x30)) + fVar20 + fVar17 * *(float *)(lVar2 + 0x44)) -
               fVar15 * fVar16;
      fVar16 = ((fVar10 - *(float *)(lVar2 + 0x34)) - fVar14 * *(float *)(lVar2 + 0x44)) + fVar18 +
               fVar12 * fVar16;
      fVar20 = pfVar1[-3];
      fVar25 = pfVar1[-2];
      fVar26 = pfVar1[-1];
      fVar18 = fVar20 - pfVar1[-6] * (pfVar1[-4] + fVar7 * fVar16 + fVar6 * fVar21);
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      pfVar1[-3] = fVar18;
      fVar11 = fVar26 + pfVar1[-6] *
                        (*pfVar1 +
                        ((fVar11 - fVar13) + (fVar23 * fVar15 - fVar19 * fVar17)) * fVar6 +
                        fVar7 * (((fVar22 + fVar14 * fVar19) - fVar12 * fVar23) - fVar24));
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar16 = (float)NEON_fminnm(fVar25 + (fVar21 * fVar7 - fVar16 * fVar6) * pfVar1[-5],
                                  fVar18 * fVar8);
      pfVar1[-1] = fVar11;
      pfVar1[-2] = fVar16;
      fVar11 = fVar11 - fVar26;
      fVar16 = fVar11 * fVar6;
      fVar11 = fVar11 * fVar7;
      *(float *)(lVar2 + 0x70) = *(float *)(lVar2 + 0x70) - fVar16 * *(float *)(lVar2 + 0x14);
      *(float *)(lVar2 + 0x74) = *(float *)(lVar2 + 0x74) - fVar11 * *(float *)(lVar2 + 0x14);
      *(float *)(lVar2 + 0x78) =
           fVar19 + (fVar17 * fVar16 - fVar14 * fVar11) * *(float *)(lVar2 + 0x1c);
      *(float *)(lVar3 + 0x70) = *(float *)(lVar3 + 0x70) + fVar16 * *(float *)(lVar3 + 0x14);
      *(float *)(lVar3 + 0x74) = *(float *)(lVar3 + 0x74) + fVar11 * *(float *)(lVar3 + 0x14);
      *(float *)(lVar3 + 0x78) =
           *(float *)(lVar3 + 0x78) + (fVar11 * fVar12 - fVar16 * fVar15) * *(float *)(lVar3 + 0x1c)
      ;
      fVar20 = pfVar1[-3] - fVar20;
      fVar25 = pfVar1[-2] - fVar25;
      fVar11 = fVar20 * fVar6;
      fVar13 = fVar25 * fVar7;
      fVar16 = fVar20 * fVar7 + fVar6 * fVar25;
      fVar18 = fVar13 - fVar11;
      fVar11 = fVar11 - fVar13;
      *(float *)(lVar2 + 0x30) = *(float *)(lVar2 + 0x30) + fVar18 * *(float *)(lVar2 + 0x14);
      *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x34) - fVar16 * *(float *)(lVar2 + 0x14);
      *(float *)(lVar2 + 0x44) =
           *(float *)(lVar2 + 0x44) +
           (fVar14 * -fVar16 - fVar17 * fVar18) * *(float *)(lVar2 + 0x1c);
      fVar20 = *(float *)(lVar3 + 0x30) + fVar11 * *(float *)(lVar3 + 0x14);
      fVar18 = *(float *)(lVar3 + 0x34) + fVar16 * *(float *)(lVar3 + 0x14);
      fVar16 = *(float *)(lVar3 + 0x44) +
               (fVar16 * fVar12 - fVar11 * fVar15) * *(float *)(lVar3 + 0x1c);
      *(float *)(lVar3 + 0x30) = fVar20;
      *(float *)(lVar3 + 0x34) = fVar18;
      *(float *)(lVar3 + 0x44) = fVar16;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x38;
    } while (lVar4 < *(int *)(param_1 + 0x58));
  }
  return;
}

