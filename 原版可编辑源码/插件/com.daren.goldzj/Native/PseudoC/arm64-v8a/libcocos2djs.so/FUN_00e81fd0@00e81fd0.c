
void FUN_00e81fd0(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  long lVar1;
  long lVar2;
  long local_80;
  long lStack_78;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  
  FUN_00e832b8(param_1,*(undefined4 *)(param_1 + 0x4948),*(undefined4 *)(param_1 + 0x4950),param_2,
               param_3,&iStack_64,&local_68);
  FUN_00e832b8(param_1,param_4,param_5,param_6,param_7,&iStack_6c,&local_70);
  *(int *)(*(long *)(param_1 + 8) + 0x20) =
       ((param_5 - param_3 >> 0x10) * (param_2 >> 0x10) -
       (param_4 - param_2 >> 0x10) * (param_3 >> 0x10)) + *(int *)(*(long *)(param_1 + 8) + 0x20);
  local_80 = (long)(iStack_64 + *(int *)(param_1 + 0x4948));
  lStack_78 = (long)(local_68 + *(int *)(param_1 + 0x4950));
  lVar2 = (long)(iStack_64 + param_2);
  lVar1 = (long)(local_68 + param_3);
  if (*(char *)(param_1 + 0x48eb) != '\0') {
    FUN_00e8345c(param_1);
    *(char *)(param_1 + 0x48eb) = '\0';
    *(undefined1 *)(param_1 + 0x48e8) = 1;
    *(long *)(param_1 + 0x4938) = lVar2;
    *(long *)(param_1 + 0x4940) = lVar1;
  }
  if (*(char *)(param_1 + 0x4978) != '\0') {
    FUN_00e8368c(param_1,param_1 + 0x10,&local_80,lVar2,lVar1,0);
  }
  *(char *)(param_1 + 0x4978) = '\x01';
  *(undefined4 *)(param_1 + 0x497c) = 4;
  *(long *)(param_1 + 0x4990) = lVar2;
  *(long *)(param_1 + 0x4998) = lVar1;
  *(long *)(param_1 + 0x49a0) = (long)(iStack_6c + param_4);
  *(long *)(param_1 + 0x49a8) = (long)(local_70 + param_5);
  *(long *)(param_1 + 0x49b0) = (long)(iStack_6c + param_6);
  *(long *)(param_1 + 0x4988) = lStack_78;
  *(long *)(param_1 + 0x4980) = local_80;
  *(long *)(param_1 + 0x49b8) = (long)(local_70 + param_7);
  if (*(char *)(*(long *)(param_1 + 0x4900) + 9) != '\0') {
    FUN_00e8259c(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48f0),*(undefined8 *)(param_1 + 0x48f8),
                 *(long *)(param_1 + 0x4900),*(undefined4 *)(param_1 + 0x4908),0);
  }
  *(long *)(param_1 + 0x4948) = (long)param_6;
  *(long *)(param_1 + 0x4950) = (long)param_7;
  return;
}

