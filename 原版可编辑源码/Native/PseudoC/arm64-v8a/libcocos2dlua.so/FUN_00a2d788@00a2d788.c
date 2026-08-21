
void FUN_00a2d788(long *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(*param_1 + 0x70);
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 >> 4 & 1) != 0)) {
    FUN_00a4bfbc(*param_1,4);
    return;
  }
  return;
}

