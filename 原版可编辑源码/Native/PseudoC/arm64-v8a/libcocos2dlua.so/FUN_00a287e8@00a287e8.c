
int FUN_00a287e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00a26f00();
  if (iVar1 == 0) {
    FUN_00a43f40(param_2,0);
    if (*(int *)(param_2 + 0x18) != 0xe) {
      *(undefined4 *)(param_2 + 0x18) = 0xe;
    }
    *(undefined8 *)(param_2 + 0x10) = param_3;
    *(uint *)(param_2 + 0x1e4) = *(uint *)(param_2 + 0x1e4) | 1;
  }
  return iVar1;
}

