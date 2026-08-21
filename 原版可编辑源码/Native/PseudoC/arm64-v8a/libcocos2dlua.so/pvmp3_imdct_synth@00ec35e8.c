
void pvmp3_imdct_synth(long param_1,long param_2,uint param_3,short param_4,int param_5,int *param_6
                      )

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (0x1d < param_5) {
    param_5 = 0x1e;
  }
  param_5 = param_5 + 2;
  if (0 < param_5) {
    uVar13 = 0;
    uVar14 = 0;
    do {
      uVar6 = 0;
      if ((long)param_4 <= (long)uVar14) {
        uVar6 = param_3;
      }
      lVar12 = (uVar13 & 0xfffffffe) * 4;
      piVar1 = (int *)(param_1 + lVar12);
      if (uVar6 < 4) {
        piVar2 = (int *)(param_2 + lVar12);
        switch(uVar6) {
        case 0:
          puVar9 = &DAT_01438144;
          break;
        case 1:
          puVar9 = &DAT_014381d4;
          break;
        case 2:
          *param_6 = *piVar1;
          param_6[6] = piVar1[1];
          param_6[0xc] = piVar1[2];
          param_6[1] = piVar1[3];
          param_6[7] = piVar1[4];
          param_6[0xd] = piVar1[5];
          param_6[2] = piVar1[6];
          param_6[8] = piVar1[7];
          param_6[0xe] = piVar1[8];
          param_6[3] = piVar1[9];
          param_6[9] = piVar1[10];
          param_6[0xf] = piVar1[0xb];
          param_6[4] = piVar1[0xc];
          param_6[10] = piVar1[0xd];
          param_6[0x10] = piVar1[0xe];
          param_6[5] = piVar1[0xf];
          param_6[0xb] = piVar1[0x10];
          param_6[0x11] = piVar1[0x11];
          pvmp3_mdct_6(param_6,param_6 + 0x12);
          pvmp3_mdct_6(param_6 + 6,param_6 + 0x18);
          pvmp3_mdct_6(param_6 + 0xc,param_6 + 0x1e);
          iVar11 = *piVar2;
          iVar10 = (int)((ulong)((long)(param_6[0x18] << 1) * 0x7ee7aa80) >> 0x20);
          *piVar2 = iVar10;
          *piVar2 = (int)((ulong)((long)(param_6[0xc] << 1) * 0x10b51500) >> 0x20) + iVar10;
          *piVar1 = iVar11;
          iVar11 = piVar2[1];
          iVar10 = (int)((ulong)((long)(param_6[0x19] << 1) * 0x7641af00) >> 0x20);
          piVar2[1] = iVar10;
          piVar2[1] = (int)((ulong)((long)(param_6[0xd] << 1) * 0x30fbc540) >> 0x20) + iVar10;
          piVar1[1] = iVar11;
          iVar11 = piVar2[2];
          iVar10 = (int)((ulong)((long)(param_6[0x1a] << 1) * 0x658c9a00) >> 0x20);
          piVar2[2] = iVar10;
          piVar2[2] = (int)((ulong)((long)(param_6[0xe] << 1) * 0x4debe500) >> 0x20) + iVar10;
          piVar1[2] = iVar11;
          iVar11 = piVar2[3];
          iVar10 = (int)((ulong)((long)(param_6[0x1b] << 1) * 0x4debe500) >> 0x20);
          piVar2[3] = iVar10;
          piVar2[3] = (int)((ulong)((long)(param_6[0xf] << 1) * 0x658c9a00) >> 0x20) + iVar10;
          piVar1[3] = iVar11;
          iVar11 = piVar2[4];
          iVar10 = (int)((ulong)((long)(param_6[0x1c] << 1) * 0x30fbc540) >> 0x20);
          piVar2[4] = iVar10;
          piVar2[4] = (int)((ulong)((long)(param_6[0x10] << 1) * 0x7641af00) >> 0x20) + iVar10;
          piVar1[4] = iVar11;
          iVar11 = piVar2[5];
          iVar10 = (int)((ulong)((long)(param_6[0x1d] << 1) * 0x10b51500) >> 0x20);
          piVar2[5] = iVar10;
          piVar2[5] = (int)((ulong)((long)(param_6[0x11] << 1) * 0x7ee7aa80) >> 0x20) + iVar10;
          piVar1[5] = iVar11;
          iVar11 = (int)((ulong)((long)(*param_6 << 1) * 0x10b51500) >> 0x20);
          piVar1[6] = iVar11;
          piVar1[6] = piVar2[6] + iVar11;
          piVar2[6] = (int)((ulong)((long)(param_6[0x1e] << 1) * 0x7ee7aa80) >> 0x20);
          iVar11 = (int)((ulong)((long)(param_6[1] << 1) * 0x30fbc540) >> 0x20);
          piVar1[7] = iVar11;
          piVar1[7] = piVar2[7] + iVar11;
          piVar2[7] = (int)((ulong)((long)(param_6[0x1f] << 1) * 0x7641af00) >> 0x20);
          iVar11 = (int)((ulong)((long)(param_6[2] << 1) * 0x4debe500) >> 0x20);
          piVar1[8] = iVar11;
          piVar1[8] = piVar2[8] + iVar11;
          piVar2[8] = (int)((ulong)((long)(param_6[0x20] << 1) * 0x658c9a00) >> 0x20);
          iVar11 = (int)((ulong)((long)(param_6[3] << 1) * 0x658c9a00) >> 0x20);
          piVar1[9] = iVar11;
          piVar1[9] = piVar2[9] + iVar11;
          piVar2[9] = (int)((ulong)((long)(param_6[0x21] << 1) * 0x4debe500) >> 0x20);
          iVar11 = (int)((ulong)((long)(param_6[4] << 1) * 0x7641af00) >> 0x20);
          piVar1[10] = iVar11;
          piVar1[10] = piVar2[10] + iVar11;
          piVar2[10] = (int)((ulong)((long)(param_6[0x22] << 1) * 0x30fbc540) >> 0x20);
          iVar11 = (int)((ulong)((long)(param_6[5] << 1) * 0x7ee7aa80) >> 0x20);
          piVar1[0xb] = iVar11;
          piVar1[0xb] = piVar2[0xb] + iVar11;
          piVar2[0xb] = (int)((ulong)((long)(param_6[0x23] << 1) * 0x10b51500) >> 0x20);
          iVar11 = (int)((ulong)((long)(param_6[0x12] << 1) * 0x7ee7aa80) >> 0x20);
          piVar1[0xc] = iVar11;
          iVar11 = (int)((ulong)((long)(param_6[6] << 1) * 0x10b51500) >> 0x20) + iVar11;
          piVar1[0xc] = iVar11;
          piVar1[0xc] = iVar11 + piVar2[0xc];
          piVar2[0xc] = 0;
          iVar11 = (int)((ulong)((long)(param_6[0x13] << 1) * 0x7641af00) >> 0x20);
          piVar1[0xd] = iVar11;
          iVar11 = (int)((ulong)((long)(param_6[7] << 1) * 0x30fbc540) >> 0x20) + iVar11;
          piVar1[0xd] = iVar11;
          piVar1[0xd] = iVar11 + piVar2[0xd];
          piVar2[0xd] = 0;
          iVar11 = (int)((ulong)((long)(param_6[0x14] << 1) * 0x658c9a00) >> 0x20);
          piVar1[0xe] = iVar11;
          iVar11 = (int)((ulong)((long)(param_6[8] << 1) * 0x4debe500) >> 0x20) + iVar11;
          piVar1[0xe] = iVar11;
          piVar1[0xe] = iVar11 + piVar2[0xe];
          piVar2[0xe] = 0;
          iVar11 = (int)((ulong)((long)(param_6[0x15] << 1) * 0x4debe500) >> 0x20);
          piVar1[0xf] = iVar11;
          iVar11 = (int)((ulong)((long)(param_6[9] << 1) * 0x658c9a00) >> 0x20) + iVar11;
          piVar1[0xf] = iVar11;
          piVar1[0xf] = iVar11 + piVar2[0xf];
          piVar2[0xf] = 0;
          iVar11 = (int)((ulong)((long)(param_6[0x16] << 1) * 0x30fbc540) >> 0x20);
          piVar1[0x10] = iVar11;
          iVar11 = (int)((ulong)((long)(param_6[10] << 1) * 0x7641af00) >> 0x20) + iVar11;
          piVar1[0x10] = iVar11;
          piVar1[0x10] = iVar11 + piVar2[0x10];
          piVar2[0x10] = 0;
          iVar11 = (int)((ulong)((long)(param_6[0x17] << 1) * 0x10b51500) >> 0x20);
          piVar1[0x11] = iVar11;
          iVar11 = (int)((ulong)((long)(param_6[0xb] << 1) * 0x7ee7aa80) >> 0x20) + iVar11;
          piVar1[0x11] = iVar11;
          piVar1[0x11] = iVar11 + piVar2[0x11];
          piVar2[0x11] = 0;
          goto joined_r0x00ec3c20;
        case 3:
          puVar9 = &DAT_01438264;
        }
        pvmp3_mdct_18(piVar1,piVar2,puVar9);
      }
joined_r0x00ec3c20:
      if ((uVar14 & 1) != 0) {
        piVar1[1] = -piVar1[1];
        piVar1[3] = -piVar1[3];
        piVar1[5] = -piVar1[5];
        piVar1[7] = -piVar1[7];
        piVar1[9] = -piVar1[9];
        piVar1[0xb] = -piVar1[0xb];
        piVar1[0xd] = -piVar1[0xd];
        piVar1[0xf] = -piVar1[0xf];
        piVar1[0x11] = -piVar1[0x11];
      }
      uVar14 = uVar14 + 1;
      uVar13 = uVar13 + 0x12;
    } while ((long)uVar14 < (long)param_5);
    if (0x1f < param_5) {
      return;
    }
  }
  uVar14 = (ulong)param_5;
  lVar12 = (uVar14 + (long)param_5 * 8) * 8;
  do {
    puVar4 = (undefined4 *)(param_2 + lVar12);
    iVar11 = puVar4[1];
    uVar7 = puVar4[2];
    *(undefined4 *)(param_1 + lVar12) = *puVar4;
    if ((uVar14 & 1) == 0) {
      lVar5 = param_1 + lVar12;
      *(int *)(lVar5 + 4) = iVar11;
      *(undefined4 *)(lVar5 + 8) = uVar7;
      uVar7 = puVar4[5];
      *(undefined8 *)(lVar5 + 0xc) = *(undefined8 *)(puVar4 + 3);
      *(undefined4 *)(lVar5 + 0x14) = uVar7;
      uVar7 = puVar4[8];
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(puVar4 + 6);
      *(undefined4 *)(lVar5 + 0x20) = uVar7;
      uVar7 = puVar4[0xb];
      *(undefined8 *)(lVar5 + 0x24) = *(undefined8 *)(puVar4 + 9);
      *(undefined4 *)(lVar5 + 0x2c) = uVar7;
      uVar7 = puVar4[0xe];
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(puVar4 + 0xc);
      *(undefined4 *)(lVar5 + 0x38) = uVar7;
      iVar11 = puVar4[0x11];
      *(undefined8 *)(lVar5 + 0x3c) = *(undefined8 *)(puVar4 + 0xf);
    }
    else {
      lVar5 = param_1 + lVar12;
      *(int *)(lVar5 + 4) = -iVar11;
      *(undefined4 *)(lVar5 + 8) = uVar7;
      uVar7 = puVar4[4];
      iVar11 = puVar4[5];
      *(undefined4 *)(lVar5 + 0xc) = -puVar4[3];
      *(undefined4 *)(lVar5 + 0x10) = uVar7;
      *(int *)(lVar5 + 0x14) = -iVar11;
      uVar7 = puVar4[8];
      uVar8 = puVar4[6];
      *(undefined4 *)(lVar5 + 0x1c) = -puVar4[7];
      *(undefined4 *)(lVar5 + 0x20) = uVar7;
      *(undefined4 *)(lVar5 + 0x18) = uVar8;
      uVar7 = puVar4[10];
      iVar11 = puVar4[0xb];
      *(undefined4 *)(lVar5 + 0x24) = -puVar4[9];
      *(undefined4 *)(lVar5 + 0x28) = uVar7;
      *(int *)(lVar5 + 0x2c) = -iVar11;
      uVar7 = puVar4[0xe];
      uVar8 = puVar4[0xc];
      *(undefined4 *)(lVar5 + 0x34) = -puVar4[0xd];
      *(undefined4 *)(lVar5 + 0x38) = uVar7;
      *(undefined4 *)(lVar5 + 0x30) = uVar8;
      uVar7 = puVar4[0x10];
      iVar11 = puVar4[0x11];
      *(undefined4 *)(lVar5 + 0x3c) = -puVar4[0xf];
      *(undefined4 *)(lVar5 + 0x40) = uVar7;
      iVar11 = -iVar11;
    }
    uVar14 = uVar14 + 1;
    lVar5 = param_1 + lVar12;
    puVar3 = (undefined8 *)(param_2 + lVar12);
    param_2 = param_2 + 0x48;
    param_1 = param_1 + 0x48;
    *(int *)(lVar5 + 0x44) = iVar11;
    puVar3[8] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
  } while ((long)uVar14 < 0x20);
  return;
}

