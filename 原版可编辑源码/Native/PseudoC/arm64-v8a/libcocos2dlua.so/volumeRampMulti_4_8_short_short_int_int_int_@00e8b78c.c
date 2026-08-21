
/* void cocos2d::experimental::volumeRampMulti<4, 8, short, short, int, int, int>(short*, unsigned
   long, short const*, int*, int*, int const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<4,8,short,short,int,int,int>
               (short *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  if (param_4 == (int *)0x0) {
    iVar12 = *param_5;
    do {
      iVar12 = iVar12 >> 0x10;
      uVar11 = iVar12 * *param_3;
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      uVar11 = iVar12 * param_3[1];
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      uVar11 = iVar12 * param_3[2];
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      uVar11 = iVar12 * param_3[3];
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar2;
      uVar11 = iVar12 * param_3[4];
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar2;
      uVar11 = iVar12 * param_3[5];
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar2;
      uVar11 = iVar12 * param_3[6];
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[6] = uVar2;
      psVar1 = param_3 + 7;
      param_3 = param_3 + 8;
      uVar11 = iVar12 * *psVar1;
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[7] = uVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 8;
      iVar12 = *param_5 + *param_6;
      *param_5 = iVar12;
    } while (param_2 != 0);
  }
  else {
    do {
      sVar3 = *param_3;
      iVar12 = *param_5 >> 0x10;
      uVar11 = iVar12 * sVar3;
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      sVar4 = param_3[1];
      uVar11 = iVar12 * sVar4;
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      sVar5 = param_3[2];
      uVar11 = iVar12 * sVar5;
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      sVar6 = param_3[3];
      uVar11 = iVar12 * sVar6;
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar2;
      sVar7 = param_3[4];
      uVar11 = iVar12 * sVar7;
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar2;
      sVar8 = param_3[5];
      uVar11 = iVar12 * sVar8;
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar2;
      sVar9 = param_3[6];
      uVar11 = iVar12 * sVar9;
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[6] = uVar2;
      psVar1 = param_3 + 7;
      param_3 = param_3 + 8;
      uVar11 = iVar12 * *psVar1;
      iVar12 = (int)sVar4 + (int)sVar3 + (int)sVar5 + (int)sVar6 + (int)sVar7 + (int)sVar8 +
               (int)sVar9 + (int)*psVar1;
      uVar2 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar2 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[7] = uVar2;
      uVar10 = iVar12 * 0x1000;
      *param_5 = *param_5 + *param_6;
      uVar11 = iVar12 * 0x1000 | 7;
      if (-1 < (int)uVar10) {
        uVar11 = uVar10;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * ((int)uVar11 >> 0xf);
      param_2 = param_2 - 1;
      param_1 = param_1 + 8;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

