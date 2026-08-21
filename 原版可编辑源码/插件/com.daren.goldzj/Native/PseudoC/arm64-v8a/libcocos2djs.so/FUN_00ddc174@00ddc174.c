
undefined8 FUN_00ddc174(long param_1,int param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long local_30;
  long lStack_28;
  long local_20;
  long lStack_18;
  
  if (param_2 == 0x10018) {
    iVar2 = (int)param_3[3];
    uVar1 = **(undefined4 **)(param_1 + 0x350);
    if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar4 = (undefined8 *)(param_3[1] + (long)iVar2);
    }
    else {
      puVar4 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar4 + 1);
    }
    *(undefined4 *)*puVar4 = uVar1;
    return 1;
  }
  lStack_18 = param_3[3];
  local_20 = param_3[2];
  lStack_28 = param_3[1];
  local_30 = *param_3;
  uVar3 = (**(code **)(*(undefined4 **)(param_1 + 0x350) + 10))(param_1,param_2,&local_30);
  return uVar3;
}

