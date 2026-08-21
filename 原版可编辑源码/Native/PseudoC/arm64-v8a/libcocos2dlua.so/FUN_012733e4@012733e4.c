
int FUN_012733e4(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong local_10;
  ulong local_8;
  
  uVar2 = FUN_01272fb8(param_2);
  uVar3 = FUN_01272b1c(uVar2,param_1);
  FUN_01272bdc(uVar2,uVar3,param_2 + 8,&local_10);
  uVar2 = FUN_01272fb8(param_3);
  uVar3 = FUN_01272b1c(uVar2,param_1);
  FUN_01272bdc(uVar2,uVar3,param_3 + 8,&local_8);
  iVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    iVar1 = 1;
  }
  return iVar1;
}

