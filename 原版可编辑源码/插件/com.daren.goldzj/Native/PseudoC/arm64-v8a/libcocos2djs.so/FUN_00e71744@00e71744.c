
int FUN_00e71744(undefined8 *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_34;
  
  param_1[7] = param_3;
  uVar1 = FUN_00e13bcc(param_3,8,0,(long)param_2,0,&local_34);
  param_1[5] = uVar1;
  if (local_34 == 0) {
    uVar1 = FUN_00e13bcc(param_3,4,0,(long)param_2,0,&local_34);
    param_1[6] = uVar1;
    if (local_34 == 0) {
      *(int *)(param_1 + 4) = param_2;
      *(undefined4 *)((long)param_1 + 0x24) = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xdeadbeef;
      param_1[9] = FUN_00e71810;
      param_1[8] = FUN_00e71744;
      param_1[0xb] = FUN_00e71be0;
      param_1[10] = FUN_00e71994;
      return 0;
    }
  }
  FUN_00e139fc(param_3,param_1[5]);
  param_1[5] = 0;
  return local_34;
}

