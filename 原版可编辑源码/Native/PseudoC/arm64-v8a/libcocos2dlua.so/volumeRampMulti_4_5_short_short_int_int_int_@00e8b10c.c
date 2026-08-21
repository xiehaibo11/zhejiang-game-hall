
/* void cocos2d::experimental::volumeRampMulti<4, 5, short, short, int, int, int>(short*, unsigned
   long, short const*, int*, int*, int const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<4,5,short,short,int,int,int>
               (short *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  
  if (param_4 == (int *)0x0) {
    iVar10 = *param_5;
    do {
      iVar3 = iVar10 >> 0x10;
      uVar9 = iVar3 * *param_3;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      uVar9 = iVar3 * param_3[1];
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      uVar9 = iVar3 * param_3[2];
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      uVar9 = iVar3 * param_3[3];
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar2;
      psVar1 = param_3 + 4;
      param_3 = param_3 + 5;
      uVar9 = iVar3 * *psVar1;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 5;
      iVar10 = iVar10 + *param_6;
      *param_5 = iVar10;
    } while (param_2 != 0);
  }
  else {
    do {
      iVar3 = *param_5;
      sVar4 = *param_3;
      iVar10 = iVar3 >> 0x10;
      uVar9 = iVar10 * sVar4;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      sVar5 = param_3[1];
      uVar9 = iVar10 * sVar5;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      sVar6 = param_3[2];
      uVar9 = iVar10 * sVar6;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      sVar7 = param_3[3];
      uVar9 = iVar10 * sVar7;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar2;
      sVar8 = param_3[4];
      param_3 = param_3 + 5;
      uVar9 = iVar10 * sVar8;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar2;
      *param_5 = iVar3 + *param_6;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((((int)sVar5 + (int)sVar4 + (int)sVar6 + (int)sVar7 + (int)sVar8) * 0x1000) / 5 >>
                 0xc);
      param_2 = param_2 - 1;
      param_1 = param_1 + 5;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

