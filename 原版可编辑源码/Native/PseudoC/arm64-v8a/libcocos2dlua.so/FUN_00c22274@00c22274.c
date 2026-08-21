
void FUN_00c22274(long *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte local_5;
  uint local_4;
  
  uVar2 = *param_2;
  if ((uVar2 >> 0x1b & 1) == 0) {
    lVar1 = 0xf0;
    if ((uVar2 & 0x800000) == 0) {
      lVar1 = 0xd8;
    }
    FUN_00c22594(param_1,*param_1 + lVar1,&local_4,param_4,0);
  }
  else {
    FUN_00c22594(param_1,*param_1 + 0x48,&local_5,param_4,0);
    local_4 = (uint)local_5;
  }
  uVar4 = uVar2 >> 0x10 & 0x7f;
  if (uVar4 * 8 < (uVar2 >> 8 & 0x7f) + (uVar2 & 0x7f)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1[2],0xe2f);
  }
  uVar3 = (1 << (ulong)(uVar2 >> 8 & 0x1f)) + -1 << (ulong)(uVar2 & 0x1f);
  uVar2 = uVar3 & local_4 << (ulong)(uVar2 & 0x1f);
  if (uVar4 == 2) {
    *(ushort *)param_3 = (ushort)*param_3 & ((ushort)uVar3 ^ 0xffff) | (ushort)uVar2;
    return;
  }
  if (uVar4 != 4) {
    if (uVar4 == 1) {
      *(byte *)param_3 = (byte)*param_3 & ((byte)uVar3 ^ 0xff) | (byte)uVar2;
    }
    return;
  }
  *param_3 = *param_3 & (uVar3 ^ 0xffffffff) | uVar2;
  return;
}

