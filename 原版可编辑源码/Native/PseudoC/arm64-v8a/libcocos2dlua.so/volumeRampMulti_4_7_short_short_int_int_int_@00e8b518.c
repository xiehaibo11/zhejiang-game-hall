
/* void cocos2d::experimental::volumeRampMulti<4, 7, short, short, int, int, int>(short*, unsigned
   long, short const*, int*, int*, int const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<4,7,short,short,int,int,int>
               (short *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  
  if (param_4 == (int *)0x0) {
    iVar12 = *param_5;
    do {
      iVar2 = iVar12 >> 0x10;
      uVar11 = iVar2 * *param_3;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      uVar11 = iVar2 * param_3[1];
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      uVar11 = iVar2 * param_3[2];
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      uVar11 = iVar2 * param_3[3];
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      uVar11 = iVar2 * param_3[4];
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar3;
      uVar11 = iVar2 * param_3[5];
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar3;
      psVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      uVar11 = iVar2 * *psVar1;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[6] = uVar3;
      param_2 = param_2 - 1;
      param_1 = param_1 + 7;
      iVar12 = iVar12 + *param_6;
      *param_5 = iVar12;
    } while (param_2 != 0);
  }
  else {
    do {
      sVar4 = *param_3;
      iVar12 = *param_5 >> 0x10;
      uVar11 = iVar12 * sVar4;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      sVar5 = param_3[1];
      uVar11 = iVar12 * sVar5;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      sVar6 = param_3[2];
      uVar11 = iVar12 * sVar6;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      sVar7 = param_3[3];
      uVar11 = iVar12 * sVar7;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      sVar8 = param_3[4];
      uVar11 = iVar12 * sVar8;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar3;
      sVar9 = param_3[5];
      uVar11 = iVar12 * sVar9;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar3;
      sVar10 = param_3[6];
      param_3 = param_3 + 7;
      uVar11 = iVar12 * sVar10;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[6] = uVar3;
      *param_5 = *param_5 + *param_6;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((((int)sVar5 + (int)sVar4 + (int)sVar6 + (int)sVar7 + (int)sVar8 + (int)sVar9 +
                   (int)sVar10) * 0x1000) / 7 >> 0xc);
      param_2 = param_2 - 1;
      param_1 = param_1 + 7;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

