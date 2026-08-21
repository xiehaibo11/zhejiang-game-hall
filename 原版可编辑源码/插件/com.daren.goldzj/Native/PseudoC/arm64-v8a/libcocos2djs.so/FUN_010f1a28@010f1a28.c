
void FUN_010f1a28(long param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar2 = (uint)*(byte *)(param_1 + 3) - (uint)bVar1;
  }
  if ((int)uVar2 < (int)*param_2) {
    *param_2 = uVar2;
  }
  return;
}

