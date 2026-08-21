
void downmix_to_mono_i16_from_stereo_i16(short *param_1,short *param_2,ulong param_3)

{
  bool bVar1;
  short *psVar2;
  ulong uVar10;
  short *psVar11;
  short *psVar12;
  ulong uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  
  if (param_3 != 0) {
    if ((0xf < param_3) && ((param_2 + param_3 * 2 <= param_1 || (param_1 + param_3 <= param_2)))) {
      uVar10 = param_3 & 0xfffffffffffffff0;
      psVar11 = param_1 + 8;
      param_1 = param_1 + uVar10;
      psVar12 = param_2 + 0x10;
      uVar13 = uVar10;
      do {
        sVar14 = *psVar12;
        sVar22 = psVar12[1];
        sVar15 = psVar12[2];
        sVar23 = psVar12[3];
        sVar16 = psVar12[4];
        sVar24 = psVar12[5];
        sVar17 = psVar12[6];
        sVar25 = psVar12[7];
        sVar18 = psVar12[8];
        sVar26 = psVar12[9];
        sVar19 = psVar12[10];
        sVar27 = psVar12[0xb];
        sVar20 = psVar12[0xc];
        sVar28 = psVar12[0xd];
        sVar21 = psVar12[0xe];
        sVar29 = psVar12[0xf];
        sVar30 = psVar12[-0x10];
        sVar34 = psVar12[-0xf];
        sVar31 = psVar12[-0xe];
        sVar35 = psVar12[-0xd];
        sVar32 = psVar12[-0xc];
        sVar36 = psVar12[-0xb];
        sVar33 = psVar12[-10];
        sVar37 = psVar12[-9];
        psVar2 = psVar12 + -8;
        psVar3 = psVar12 + -7;
        psVar4 = psVar12 + -6;
        psVar5 = psVar12 + -5;
        psVar6 = psVar12 + -4;
        psVar7 = psVar12 + -3;
        psVar8 = psVar12 + -2;
        psVar9 = psVar12 + -1;
        uVar13 = uVar13 - 0x10;
        psVar12 = psVar12 + 0x20;
        *(ulong *)(psVar11 + -4) =
             CONCAT26((short)((uint)((int)*psVar9 + (int)*psVar8) >> 1),
                      CONCAT24((short)((uint)((int)*psVar7 + (int)*psVar6) >> 1),
                               CONCAT22((short)((uint)((int)*psVar5 + (int)*psVar4) >> 1),
                                        (short)((uint)((int)*psVar3 + (int)*psVar2) >> 1))));
        *(ulong *)(psVar11 + -8) =
             CONCAT26((short)((uint)((int)sVar37 + (int)sVar33) >> 1),
                      CONCAT24((short)((uint)((int)sVar36 + (int)sVar32) >> 1),
                               CONCAT22((short)((uint)((int)sVar35 + (int)sVar31) >> 1),
                                        (short)((uint)((int)sVar34 + (int)sVar30) >> 1))));
        *(ulong *)(psVar11 + 4) =
             CONCAT26((short)((uint)((int)sVar29 + (int)sVar21) >> 1),
                      CONCAT24((short)((uint)((int)sVar28 + (int)sVar20) >> 1),
                               CONCAT22((short)((uint)((int)sVar27 + (int)sVar19) >> 1),
                                        (short)((uint)((int)sVar26 + (int)sVar18) >> 1))));
        *(ulong *)psVar11 =
             CONCAT26((short)((uint)((int)sVar25 + (int)sVar17) >> 1),
                      CONCAT24((short)((uint)((int)sVar24 + (int)sVar16) >> 1),
                               CONCAT22((short)((uint)((int)sVar23 + (int)sVar15) >> 1),
                                        (short)((uint)((int)sVar22 + (int)sVar14) >> 1))));
        psVar11 = psVar11 + 0x10;
      } while (uVar13 != 0);
      bVar1 = uVar10 == param_3;
      param_3 = param_3 - uVar10;
      param_2 = param_2 + uVar10 * 2;
      if (bVar1) {
        return;
      }
    }
    do {
      param_3 = param_3 - 1;
      *param_1 = (short)((uint)((int)param_2[1] + (int)*param_2) >> 1);
      param_1 = param_1 + 1;
      param_2 = param_2 + 2;
    } while (param_3 != 0);
  }
  return;
}

