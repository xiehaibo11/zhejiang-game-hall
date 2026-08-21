
/* void cocos2d::experimental::volumeRampMulti<4, 4, short, short, int, int, int>(short*, unsigned
   long, short const*, int*, int*, int const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<4,4,short,short,int,int,int>
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
  uint uVar8;
  int iVar9;
  
  if (param_4 == (int *)0x0) {
    iVar9 = *param_5;
    do {
      iVar3 = iVar9 >> 0x10;
      uVar8 = iVar3 * *param_3;
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      uVar8 = iVar3 * param_3[1];
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      uVar8 = iVar3 * param_3[2];
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      psVar1 = param_3 + 3;
      param_3 = param_3 + 4;
      uVar8 = iVar3 * *psVar1;
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 4;
      iVar9 = iVar9 + *param_6;
      *param_5 = iVar9;
    } while (param_2 != 0);
  }
  else {
    do {
      iVar3 = *param_5;
      sVar4 = *param_3;
      iVar9 = iVar3 >> 0x10;
      uVar8 = iVar9 * sVar4;
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      sVar5 = param_3[1];
      uVar8 = iVar9 * sVar5;
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      sVar6 = param_3[2];
      uVar8 = iVar9 * sVar6;
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      sVar7 = param_3[3];
      param_3 = param_3 + 4;
      uVar8 = iVar9 * sVar7;
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar2;
      param_2 = param_2 - 1;
      *param_5 = iVar3 + *param_6;
      param_1 = param_1 + 4;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((int)sVar5 + (int)sVar4 + (int)sVar6 + (int)sVar7 >> 2);
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

