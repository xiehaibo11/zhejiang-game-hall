
/* dtNavMeshHeaderSwapEndian(unsigned char*, int) */

undefined4 dtNavMeshHeaderSwapEndian(uchar *param_1,int param_2)

{
  int iVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == 0x56414e44) {
    uVar4 = '\0';
    if (*(int *)(param_1 + 4) != 0x7000000) {
      return 0;
    }
  }
  else {
    if ((iVar1 != 0x444e4156) || (*(int *)(param_1 + 4) != 7)) {
      return 0;
    }
    uVar4 = '\a';
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
  param_1[0x2e] = param_1[0x2d];
  param_1[0x2c] = param_1[0x2f];
  uVar2 = param_1[0x30];
  param_1[0x2f] = uVar3;
  param_1[0x2d] = uVar4;
  uVar4 = param_1[0x31];
  param_1[0x31] = param_1[0x32];
  param_1[0x30] = param_1[0x33];
  uVar3 = param_1[0x34];
  param_1[0x33] = uVar2;
  param_1[0x32] = uVar4;
  uVar4 = param_1[0x36];
  param_1[0x36] = param_1[0x35];
  param_1[0x34] = param_1[0x37];
  uVar2 = param_1[0x38];
  param_1[0x37] = uVar3;
  param_1[0x35] = uVar4;
  uVar4 = param_1[0x39];
  param_1[0x39] = param_1[0x3a];
  param_1[0x38] = param_1[0x3b];
  uVar3 = param_1[0x3c];
  param_1[0x3b] = uVar2;
  param_1[0x3a] = uVar4;
  uVar4 = param_1[0x3e];
  param_1[0x3e] = param_1[0x3d];
  param_1[0x3c] = param_1[0x3f];
  uVar2 = param_1[0x40];
  param_1[0x3f] = uVar3;
  param_1[0x3d] = uVar4;
  uVar4 = param_1[0x41];
  param_1[0x41] = param_1[0x42];
  param_1[0x40] = param_1[0x43];
  uVar3 = param_1[0x44];
  param_1[0x43] = uVar2;
  param_1[0x42] = uVar4;
  uVar4 = param_1[0x46];
  param_1[0x46] = param_1[0x45];
  param_1[0x44] = param_1[0x47];
  uVar2 = param_1[0x48];
  param_1[0x47] = uVar3;
  param_1[0x45] = uVar4;
  uVar4 = param_1[0x49];
  param_1[0x49] = param_1[0x4a];
  param_1[0x48] = param_1[0x4b];
  uVar3 = param_1[0x4c];
  param_1[0x4b] = uVar2;
  param_1[0x4a] = uVar4;
  uVar4 = param_1[0x4e];
  param_1[0x4e] = param_1[0x4d];
  param_1[0x4c] = param_1[0x4f];
  uVar2 = param_1[0x50];
  param_1[0x4f] = uVar3;
  param_1[0x4d] = uVar4;
  uVar4 = param_1[0x51];
  param_1[0x51] = param_1[0x52];
  param_1[0x50] = param_1[0x53];
  uVar3 = param_1[0x54];
  param_1[0x53] = uVar2;
  param_1[0x52] = uVar4;
  uVar4 = param_1[0x56];
  param_1[0x56] = param_1[0x55];
  param_1[0x54] = param_1[0x57];
  uVar2 = param_1[0x58];
  param_1[0x57] = uVar3;
  param_1[0x55] = uVar4;
  uVar4 = param_1[0x59];
  param_1[0x59] = param_1[0x5a];
  param_1[0x58] = param_1[0x5b];
  uVar3 = param_1[0x5c];
  param_1[0x5b] = uVar2;
  param_1[0x5a] = uVar4;
  uVar4 = param_1[0x5e];
  param_1[0x5e] = param_1[0x5d];
  param_1[0x5c] = param_1[0x5f];
  uVar2 = param_1[0x60];
  param_1[0x5f] = uVar3;
  param_1[0x5d] = uVar4;
  uVar4 = param_1[0x62];
  param_1[0x62] = param_1[0x61];
  param_1[0x60] = param_1[99];
  param_1[99] = uVar2;
  param_1[0x61] = uVar4;
  return 1;
}

