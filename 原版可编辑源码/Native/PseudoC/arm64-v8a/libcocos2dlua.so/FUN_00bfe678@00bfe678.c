
uint FUN_00bfe678(byte *param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + -4);
  uVar2 = uVar1 & 0xff;
  if (uVar2 == 0x32) {
    uVar1 = *(uint *)(param_2 + (ulong)(uVar1 >> 0x10) * 4 + -0x20000);
    uVar2 = uVar1 & 0xff;
  }
  switch(uVar2) {
  case 0x3f:
    return param_3 + -1 + (uVar1 >> 8 & 0xff);
  default:
    return (uint)*param_1;
  case 0x41:
  case 0x43:
    return param_3 + 1 + (uVar1 >> 8 & 0xff) + (uVar1 >> 0x10 & 0xff);
  case 0x49:
    return param_3 + -1 + (uVar1 >> 0x10) + (uVar1 >> 8 & 0xff);
  }
}

