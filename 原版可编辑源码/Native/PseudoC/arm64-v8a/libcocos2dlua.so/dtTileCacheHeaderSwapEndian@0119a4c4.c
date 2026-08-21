
/* dtTileCacheHeaderSwapEndian(unsigned char*, int) */

undefined4 dtTileCacheHeaderSwapEndian(uchar *param_1,int param_2)

{
  int iVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == 0x524c5444) {
    uVar4 = '\0';
    if (*(int *)(param_1 + 4) != 0x1000000) {
      return 0;
    }
  }
  else {
    if ((iVar1 != 0x44544c52) || (*(int *)(param_1 + 4) != 1)) {
      return 0;
    }
    uVar4 = '\x01';
  }
  uVar2 = param_1[3];
  param_1[3] = (uchar)iVar1;
  uVar3 = param_1[7];
  *param_1 = uVar2;
  param_1[7] = uVar4;
  uVar4 = param_1[1];
  param_1[1] = param_1[2];
  uVar2 = param_1[6];
  param_1[6] = param_1[5];
  param_1[2] = uVar4;
  uVar4 = param_1[8];
  param_1[4] = uVar3;
  param_1[5] = uVar2;
  uVar2 = param_1[9];
  param_1[9] = param_1[10];
  param_1[8] = param_1[0xb];
  uVar3 = param_1[0xc];
  param_1[0xb] = uVar4;
  param_1[10] = uVar2;
  uVar4 = param_1[0xe];
  param_1[0xe] = param_1[0xd];
  param_1[0xc] = param_1[0xf];
  uVar2 = param_1[0x10];
  param_1[0xf] = uVar3;
  param_1[0xd] = uVar4;
  uVar4 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x10] = param_1[0x13];
  uVar3 = param_1[0x14];
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar4;
  uVar4 = param_1[0x16];
  param_1[0x16] = param_1[0x15];
  param_1[0x14] = param_1[0x17];
  uVar2 = param_1[0x18];
  param_1[0x17] = uVar3;
  param_1[0x15] = uVar4;
  uVar4 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x18] = param_1[0x1b];
  uVar3 = param_1[0x1c];
  param_1[0x1b] = uVar2;
  param_1[0x1a] = uVar4;
  uVar4 = param_1[0x1e];
  param_1[0x1e] = param_1[0x1d];
  param_1[0x1c] = param_1[0x1f];
  uVar2 = param_1[0x20];
  param_1[0x1f] = uVar3;
  param_1[0x1d] = uVar4;
  uVar4 = param_1[0x21];
  param_1[0x21] = param_1[0x22];
  param_1[0x20] = param_1[0x23];
  uVar3 = param_1[0x24];
  param_1[0x23] = uVar2;
  param_1[0x22] = uVar4;
  uVar4 = param_1[0x26];
  param_1[0x26] = param_1[0x25];
  param_1[0x24] = param_1[0x27];
  uVar2 = param_1[0x28];
  param_1[0x27] = uVar3;
  param_1[0x25] = uVar4;
  uVar4 = param_1[0x29];
  param_1[0x29] = param_1[0x2a];
  param_1[0x28] = param_1[0x2b];
  uVar3 = param_1[0x2c];
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar4;
  uVar4 = param_1[0x2e];
  param_1[0x2e] = param_1[0x2f];
  param_1[0x2c] = param_1[0x2d];
  param_1[0x2d] = uVar3;
  param_1[0x2f] = uVar4;
  return 1;
}

