
undefined8 FUN_0010145c(long *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x720))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    uVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x88))(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

