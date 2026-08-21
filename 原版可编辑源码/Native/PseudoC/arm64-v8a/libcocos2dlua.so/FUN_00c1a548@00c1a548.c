
void FUN_00c1a548(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = (int)param_2[2];
  uVar1 = (int)param_2[1] - iVar3;
  if (0x40 < uVar1) {
    lVar4 = *param_2;
    lVar2 = FUN_00c1a2b4(param_1,param_2[2],uVar1,(ulong)(uVar1 >> 1));
    param_2[2] = lVar2;
    *param_2 = lVar2 + (ulong)(uint)((int)lVar4 - iVar3);
    param_2[1] = lVar2 + (ulong)(uVar1 >> 1);
  }
  return;
}

