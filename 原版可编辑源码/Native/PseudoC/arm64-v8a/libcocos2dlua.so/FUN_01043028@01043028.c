
void FUN_01043028(code *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  *(uint *)(param_2 + 0x2f4) = *(uint *)(param_2 + 0x2f4) | 0x1000000;
  iVar1 = (*param_1)(param_2,param_3,param_4,param_5,param_6);
  *(uint *)(param_2 + 0x2f4) = *(uint *)(param_2 + 0x2f4) & 0xfeffffff;
  if (iVar1 != 0) {
    return;
  }
  FUN_01042eb8(param_2);
  return;
}

