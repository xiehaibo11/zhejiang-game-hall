
/* void cocos2d::volumeMulti<4, 8, short, short, short, int, short>(short*, unsigned long, short
   const*, int*, short const*, short) */

void cocos2d::volumeMulti<4,8,short,short,short,int,short>
               (short *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,
               short param_6)

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
  uint uVar12;
  
  if (param_4 == (int *)0x0) {
    do {
      uVar11 = (int)*param_5 * (int)*param_3;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      uVar11 = (int)*param_5 * (int)param_3[1];
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      uVar11 = (int)*param_5 * (int)param_3[2];
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      uVar11 = (int)*param_5 * (int)param_3[3];
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      uVar11 = (int)*param_5 * (int)param_3[4];
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar3;
      uVar11 = (int)*param_5 * (int)param_3[5];
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar3;
      uVar11 = (int)*param_5 * (int)param_3[6];
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[6] = uVar3;
      psVar1 = param_3 + 7;
      param_3 = param_3 + 8;
      uVar11 = (int)*param_5 * (int)*psVar1;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_2 = param_2 - 1;
      param_1[7] = uVar3;
      param_1 = param_1 + 8;
    } while (param_2 != 0);
  }
  else {
    do {
      sVar4 = *param_3;
      uVar11 = (int)*param_5 * (int)sVar4;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar3;
      sVar5 = param_3[1];
      uVar11 = (int)*param_5 * (int)sVar5;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar3;
      sVar6 = param_3[2];
      uVar11 = (int)*param_5 * (int)sVar6;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar3;
      sVar7 = param_3[3];
      uVar11 = (int)*param_5 * (int)sVar7;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar3;
      sVar8 = param_3[4];
      uVar11 = (int)*param_5 * (int)sVar8;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar3;
      sVar9 = param_3[5];
      uVar11 = (int)*param_5 * (int)sVar9;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[5] = uVar3;
      sVar10 = param_3[6];
      uVar11 = (int)*param_5 * (int)sVar10;
      uVar3 = (ushort)(uVar11 >> 0xc);
      if ((int)uVar11 >> 0x1f != (int)uVar11 >> 0x1b) {
        uVar3 = (ushort)((int)uVar11 >> 0x1f) ^ 0x7fff;
      }
      param_1[6] = uVar3;
      psVar1 = param_3 + 7;
      param_3 = param_3 + 8;
      iVar2 = (int)sVar5 + (int)sVar4 + (int)sVar6 + (int)sVar7 + (int)sVar8 + (int)sVar9 +
              (int)sVar10 + (int)*psVar1;
      uVar12 = (int)*param_5 * (int)*psVar1;
      uVar11 = iVar2 * 0x1000;
      uVar3 = (ushort)(uVar12 >> 0xc);
      if ((int)uVar12 >> 0x1f != (int)uVar12 >> 0x1b) {
        uVar3 = (ushort)((int)uVar12 >> 0x1f) ^ 0x7fff;
      }
      param_1[7] = uVar3;
      uVar12 = iVar2 * 0x1000 | 7;
      if (-1 < (int)uVar11) {
        uVar12 = uVar11;
      }
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((int)uVar12 >> 0xf) * (int)param_6;
      param_1 = param_1 + 8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

