
void FUN_00e81e48(long param_1,int param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_60;
  long lStack_58;
  int local_48;
  int local_44;
  
  if (*(char *)(*(long *)(param_1 + 0x4900) + 9) == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x48e9) == '\0';
  }
  if (((*(long *)(param_1 + 0x4948) != (long)param_2) || (bVar1)) ||
     (*(long *)(param_1 + 0x4950) != (long)param_3)) {
    FUN_00e832b8(param_1,*(long *)(param_1 + 0x4948),*(long *)(param_1 + 0x4950),param_2,param_3,
                 &local_44,&local_48);
    local_60 = (long)(local_44 + *(int *)(param_1 + 0x4948));
    lVar2 = (long)(local_44 + param_2);
    lStack_58 = (long)(local_48 + *(int *)(param_1 + 0x4950));
    lVar3 = (long)(local_48 + param_3);
    if (*(char *)(param_1 + 0x48eb) != '\0') {
      FUN_00e8345c(param_1);
      *(char *)(param_1 + 0x48eb) = '\0';
      *(undefined1 *)(param_1 + 0x48e8) = 1;
      *(long *)(param_1 + 0x4938) = lVar2;
      *(long *)(param_1 + 0x4940) = lVar3;
    }
    if (*(char *)(param_1 + 0x4978) != '\0') {
      FUN_00e8368c(param_1,param_1 + 0x10,&local_60,lVar2,lVar3,0);
    }
    *(undefined1 *)(param_1 + 0x4978) = 1;
    *(undefined4 *)(param_1 + 0x497c) = 2;
    *(long *)(param_1 + 0x4990) = lVar2;
    *(long *)(param_1 + 0x4998) = lVar3;
    *(long *)(param_1 + 0x4988) = lStack_58;
    *(long *)(param_1 + 0x4980) = local_60;
    if (bVar1) {
      FUN_00e8259c(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48f0),
                   *(undefined8 *)(param_1 + 0x48f8),*(undefined8 *)(param_1 + 0x4900),
                   *(undefined4 *)(param_1 + 0x4908),0);
    }
    *(long *)(param_1 + 0x4948) = (long)param_2;
    *(long *)(param_1 + 0x4950) = (long)param_3;
  }
  return;
}

