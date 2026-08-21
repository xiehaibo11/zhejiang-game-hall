
void pvmp3_imdct_synth(int *param_1,int *param_2,undefined4 param_3,short param_4,int param_5,
                      int *param_6)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  
  param_5 = param_5 + 2;
  iVar2 = param_5;
  if (0x1f < param_5) {
    iVar2 = 0x20;
  }
  if (0 < param_5) {
    uVar9 = 0;
    piVar7 = param_2;
    piVar8 = param_1;
    do {
      uVar3 = 0;
      if ((long)param_4 <= (long)uVar9) {
        uVar3 = param_3;
      }
      switch(uVar3) {
      case 0:
        puVar4 = &DAT_019980b4;
        break;
      case 1:
        puVar4 = &DAT_01998144;
        break;
      case 2:
        *param_6 = *piVar8;
        param_6[6] = piVar8[1];
        param_6[0xc] = piVar8[2];
        param_6[1] = piVar8[3];
        param_6[7] = piVar8[4];
        param_6[0xd] = piVar8[5];
        param_6[2] = piVar8[6];
        param_6[8] = piVar8[7];
        param_6[0xe] = piVar8[8];
        param_6[3] = piVar8[9];
        param_6[9] = piVar8[10];
        param_6[0xf] = piVar8[0xb];
        param_6[4] = piVar8[0xc];
        param_6[10] = piVar8[0xd];
        param_6[0x10] = piVar8[0xe];
        param_6[5] = piVar8[0xf];
        param_6[0xb] = piVar8[0x10];
        param_6[0x11] = piVar8[0x11];
        pvmp3_mdct_6(param_6,param_6 + 0x12);
        pvmp3_mdct_6(param_6 + 6,param_6 + 0x18);
        pvmp3_mdct_6(param_6 + 0xc,param_6 + 0x1e);
        iVar6 = *piVar7;
        iVar5 = (int)((ulong)((long)(param_6[0x18] << 1) * 0x7ee7aa80) >> 0x20);
        *piVar7 = iVar5;
        *piVar7 = (int)((ulong)((long)(param_6[0xc] << 1) * 0x10b51500) >> 0x20) + iVar5;
        *piVar8 = iVar6;
        iVar6 = piVar7[1];
        iVar5 = (int)((ulong)((long)(param_6[0x19] << 1) * 0x7641af00) >> 0x20);
        piVar7[1] = iVar5;
        piVar7[1] = (int)((ulong)((long)(param_6[0xd] << 1) * 0x30fbc540) >> 0x20) + iVar5;
        piVar8[1] = iVar6;
        iVar6 = piVar7[2];
        iVar5 = (int)((ulong)((long)(param_6[0x1a] << 1) * 0x658c9a00) >> 0x20);
        piVar7[2] = iVar5;
        piVar7[2] = (int)((ulong)((long)(param_6[0xe] << 1) * 0x4debe500) >> 0x20) + iVar5;
        piVar8[2] = iVar6;
        iVar6 = piVar7[3];
        iVar5 = (int)((ulong)((long)(param_6[0x1b] << 1) * 0x4debe500) >> 0x20);
        piVar7[3] = iVar5;
        piVar7[3] = (int)((ulong)((long)(param_6[0xf] << 1) * 0x658c9a00) >> 0x20) + iVar5;
        piVar8[3] = iVar6;
        iVar6 = piVar7[4];
        iVar5 = (int)((ulong)((long)(param_6[0x1c] << 1) * 0x30fbc540) >> 0x20);
        piVar7[4] = iVar5;
        piVar7[4] = (int)((ulong)((long)(param_6[0x10] << 1) * 0x7641af00) >> 0x20) + iVar5;
        piVar8[4] = iVar6;
        iVar6 = piVar7[5];
        iVar5 = (int)((ulong)((long)(param_6[0x1d] << 1) * 0x10b51500) >> 0x20);
        piVar7[5] = iVar5;
        piVar7[5] = (int)((ulong)((long)(param_6[0x11] << 1) * 0x7ee7aa80) >> 0x20) + iVar5;
        piVar8[5] = iVar6;
        iVar6 = (int)((ulong)((long)(*param_6 << 1) * 0x10b51500) >> 0x20);
        piVar8[6] = iVar6;
        piVar8[6] = piVar7[6] + iVar6;
        piVar7[6] = (int)((ulong)((long)(param_6[0x1e] << 1) * 0x7ee7aa80) >> 0x20);
        iVar6 = (int)((ulong)((long)(param_6[1] << 1) * 0x30fbc540) >> 0x20);
        piVar8[7] = iVar6;
        piVar8[7] = piVar7[7] + iVar6;
        piVar7[7] = (int)((ulong)((long)(param_6[0x1f] << 1) * 0x7641af00) >> 0x20);
        iVar6 = (int)((ulong)((long)(param_6[2] << 1) * 0x4debe500) >> 0x20);
        piVar8[8] = iVar6;
        piVar8[8] = piVar7[8] + iVar6;
        piVar7[8] = (int)((ulong)((long)(param_6[0x20] << 1) * 0x658c9a00) >> 0x20);
        iVar6 = (int)((ulong)((long)(param_6[3] << 1) * 0x658c9a00) >> 0x20);
        piVar8[9] = iVar6;
        piVar8[9] = piVar7[9] + iVar6;
        piVar7[9] = (int)((ulong)((long)(param_6[0x21] << 1) * 0x4debe500) >> 0x20);
        iVar6 = (int)((ulong)((long)(param_6[4] << 1) * 0x7641af00) >> 0x20);
        piVar8[10] = iVar6;
        piVar8[10] = piVar7[10] + iVar6;
        piVar7[10] = (int)((ulong)((long)(param_6[0x22] << 1) * 0x30fbc540) >> 0x20);
        iVar6 = (int)((ulong)((long)(param_6[5] << 1) * 0x7ee7aa80) >> 0x20);
        piVar8[0xb] = iVar6;
        piVar8[0xb] = piVar7[0xb] + iVar6;
        piVar7[0xb] = (int)((ulong)((long)(param_6[0x23] << 1) * 0x10b51500) >> 0x20);
        iVar6 = (int)((ulong)((long)(param_6[0x12] << 1) * 0x7ee7aa80) >> 0x20);
        piVar8[0xc] = iVar6;
        iVar6 = (int)((ulong)((long)(param_6[6] << 1) * 0x10b51500) >> 0x20) + iVar6;
        piVar8[0xc] = iVar6;
        piVar8[0xc] = iVar6 + piVar7[0xc];
        piVar7[0xc] = 0;
        iVar6 = (int)((ulong)((long)(param_6[0x13] << 1) * 0x7641af00) >> 0x20);
        piVar8[0xd] = iVar6;
        iVar6 = (int)((ulong)((long)(param_6[7] << 1) * 0x30fbc540) >> 0x20) + iVar6;
        piVar8[0xd] = iVar6;
        piVar8[0xd] = iVar6 + piVar7[0xd];
        piVar7[0xd] = 0;
        iVar6 = (int)((ulong)((long)(param_6[0x14] << 1) * 0x658c9a00) >> 0x20);
        piVar8[0xe] = iVar6;
        iVar6 = (int)((ulong)((long)(param_6[8] << 1) * 0x4debe500) >> 0x20) + iVar6;
        piVar8[0xe] = iVar6;
        piVar8[0xe] = iVar6 + piVar7[0xe];
        piVar7[0xe] = 0;
        iVar6 = (int)((ulong)((long)(param_6[0x15] << 1) * 0x4debe500) >> 0x20);
        piVar8[0xf] = iVar6;
        iVar6 = (int)((ulong)((long)(param_6[9] << 1) * 0x658c9a00) >> 0x20) + iVar6;
        piVar8[0xf] = iVar6;
        piVar8[0xf] = iVar6 + piVar7[0xf];
        piVar7[0xf] = 0;
        iVar6 = (int)((ulong)((long)(param_6[0x16] << 1) * 0x30fbc540) >> 0x20);
        piVar8[0x10] = iVar6;
        iVar6 = (int)((ulong)((long)(param_6[10] << 1) * 0x7641af00) >> 0x20) + iVar6;
        piVar8[0x10] = iVar6;
        piVar8[0x10] = iVar6 + piVar7[0x10];
        piVar7[0x10] = 0;
        iVar6 = (int)((ulong)((long)(param_6[0x17] << 1) * 0x10b51500) >> 0x20);
        piVar8[0x11] = iVar6;
        iVar6 = (int)((ulong)((long)(param_6[0xb] << 1) * 0x7ee7aa80) >> 0x20) + iVar6;
        piVar8[0x11] = iVar6;
        piVar8[0x11] = iVar6 + piVar7[0x11];
        piVar7[0x11] = 0;
        goto joined_r0x00e97670;
      case 3:
        puVar4 = &DAT_019981d4;
        break;
      default:
        goto switchD_00e97108_default;
      }
      pvmp3_mdct_18(piVar8,piVar7,puVar4);
switchD_00e97108_default:
joined_r0x00e97670:
      if ((uVar9 & 1) != 0) {
        piVar8[1] = -piVar8[1];
        piVar8[3] = -piVar8[3];
        piVar8[5] = -piVar8[5];
        piVar8[7] = -piVar8[7];
        piVar8[9] = -piVar8[9];
        piVar8[0xb] = -piVar8[0xb];
        piVar8[0xd] = -piVar8[0xd];
        piVar8[0xf] = -piVar8[0xf];
        piVar8[0x11] = -piVar8[0x11];
      }
      uVar9 = uVar9 + 1;
      piVar8 = piVar8 + 0x12;
      piVar7 = piVar7 + 0x12;
    } while ((long)uVar9 < (long)iVar2);
  }
  if (param_5 < 0x20) {
    iVar2 = iVar2 + 1;
    lVar1 = (long)iVar2 + (long)iVar2 * 8;
    uVar9 = (long)iVar2 - 1;
    do {
      iVar2 = param_2[lVar1 * 2 + -0x11];
      iVar6 = param_2[lVar1 * 2 + -0x10];
      param_1[lVar1 * 2 + -0x12] = param_2[lVar1 * 2 + -0x12];
      if ((uVar9 & 1) == 0) {
        param_1[lVar1 * 2 + -0x11] = iVar2;
        param_1[lVar1 * 2 + -0x10] = iVar6;
        iVar2 = param_2[lVar1 * 2 + -0xd];
        *(undefined8 *)(param_1 + lVar1 * 2 + -0xf) = *(undefined8 *)(param_2 + lVar1 * 2 + -0xf);
        param_1[lVar1 * 2 + -0xd] = iVar2;
        iVar2 = param_2[lVar1 * 2 + -10];
        *(undefined8 *)(param_1 + lVar1 * 2 + -0xc) = *(undefined8 *)(param_2 + lVar1 * 2 + -0xc);
        param_1[lVar1 * 2 + -10] = iVar2;
        iVar2 = param_2[lVar1 * 2 + -7];
        *(undefined8 *)(param_1 + lVar1 * 2 + -9) = *(undefined8 *)(param_2 + lVar1 * 2 + -9);
        param_1[lVar1 * 2 + -7] = iVar2;
        iVar2 = param_2[lVar1 * 2 + -4];
        *(undefined8 *)(param_1 + lVar1 * 2 + -6) = *(undefined8 *)(param_2 + lVar1 * 2 + -6);
        param_1[lVar1 * 2 + -4] = iVar2;
        iVar6 = param_2[lVar1 * 2 + -1];
        *(undefined8 *)(param_1 + lVar1 * 2 + -3) = *(undefined8 *)(param_2 + lVar1 * 2 + -3);
      }
      else {
        param_1[lVar1 * 2 + -0x11] = -iVar2;
        param_1[lVar1 * 2 + -0x10] = iVar6;
        iVar2 = param_2[lVar1 * 2 + -0xe];
        iVar6 = param_2[lVar1 * 2 + -0xd];
        param_1[lVar1 * 2 + -0xf] = -param_2[lVar1 * 2 + -0xf];
        param_1[lVar1 * 2 + -0xe] = iVar2;
        param_1[lVar1 * 2 + -0xd] = -iVar6;
        iVar2 = param_2[lVar1 * 2 + -10];
        iVar6 = param_2[lVar1 * 2 + -0xc];
        param_1[lVar1 * 2 + -0xb] = -param_2[lVar1 * 2 + -0xb];
        param_1[lVar1 * 2 + -10] = iVar2;
        param_1[lVar1 * 2 + -0xc] = iVar6;
        iVar2 = param_2[lVar1 * 2 + -8];
        iVar6 = param_2[lVar1 * 2 + -7];
        param_1[lVar1 * 2 + -9] = -param_2[lVar1 * 2 + -9];
        param_1[lVar1 * 2 + -8] = iVar2;
        param_1[lVar1 * 2 + -7] = -iVar6;
        iVar2 = param_2[lVar1 * 2 + -4];
        iVar6 = param_2[lVar1 * 2 + -6];
        param_1[lVar1 * 2 + -5] = -param_2[lVar1 * 2 + -5];
        param_1[lVar1 * 2 + -4] = iVar2;
        param_1[lVar1 * 2 + -6] = iVar6;
        iVar2 = param_2[lVar1 * 2 + -2];
        iVar6 = param_2[lVar1 * 2 + -1];
        param_1[lVar1 * 2 + -3] = -param_2[lVar1 * 2 + -3];
        param_1[lVar1 * 2 + -2] = iVar2;
        iVar6 = -iVar6;
      }
      uVar9 = uVar9 + 1;
      param_1[lVar1 * 2 + -1] = iVar6;
      (param_2 + lVar1 * 2 + -2)[0] = 0;
      (param_2 + lVar1 * 2 + -2)[1] = 0;
      (param_2 + lVar1 * 2 + -4)[0] = 0;
      (param_2 + lVar1 * 2 + -4)[1] = 0;
      (param_2 + lVar1 * 2 + -6)[0] = 0;
      (param_2 + lVar1 * 2 + -6)[1] = 0;
      (param_2 + lVar1 * 2 + -8)[0] = 0;
      (param_2 + lVar1 * 2 + -8)[1] = 0;
      (param_2 + lVar1 * 2 + -10)[0] = 0;
      (param_2 + lVar1 * 2 + -10)[1] = 0;
      (param_2 + lVar1 * 2 + -0xc)[0] = 0;
      (param_2 + lVar1 * 2 + -0xc)[1] = 0;
      (param_2 + lVar1 * 2 + -0xe)[0] = 0;
      (param_2 + lVar1 * 2 + -0xe)[1] = 0;
      (param_2 + lVar1 * 2 + -0x10)[0] = 0;
      (param_2 + lVar1 * 2 + -0x10)[1] = 0;
      (param_2 + lVar1 * 2 + -0x12)[0] = 0;
      (param_2 + lVar1 * 2 + -0x12)[1] = 0;
      param_1 = param_1 + 0x12;
      param_2 = param_2 + 0x12;
    } while ((long)uVar9 < 0x20);
  }
  return;
}

