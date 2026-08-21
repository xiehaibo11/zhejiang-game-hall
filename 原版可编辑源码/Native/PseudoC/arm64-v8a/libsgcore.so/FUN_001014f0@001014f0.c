
undefined8 FUN_001014f0(long *param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((((param_1 != (long *)0x0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x720))();
    lVar3 = *param_1;
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(lVar3 + 0x108))(param_1,param_2,param_3,param_4);
      cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
      if (cVar1 == '\0') {
        return uVar2;
      }
      lVar3 = *param_1;
    }
    (**(code **)(lVar3 + 0x88))(param_1);
  }
  return 0;
}

