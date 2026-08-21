
undefined8 FUN_00a547f4(long param_1,byte *param_2,ulong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if ((((3 < param_3) && (*param_2 - 0x30 < 10)) && (param_2[1] - 0x30 < 10)) &&
     (param_2[2] - 0x30 < 10)) {
    if ((param_3 == 5) || (param_2[3] == 0x20)) {
      strtol((char *)param_2,(char **)0x0,10);
      iVar2 = FUN_00a2c6e4();
      iVar1 = 0;
      if (iVar2 != 1) {
        iVar1 = iVar2;
      }
      *param_4 = iVar1;
      return 1;
    }
    if ((param_2[3] == 0x2d) &&
       ((*(int *)(param_1 + 0x688) == 7 || (*(int *)(param_1 + 0x688) == 2)))) {
      *param_4 = 1;
      return 1;
    }
  }
  return 0;
}

