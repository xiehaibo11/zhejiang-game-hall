
undefined8 FUN_00a4d5c8(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = FUN_00a4ce50();
  if (((int)uVar2 == 0) && (*param_2 == '\0')) {
    iVar1 = FUN_00a306d0(param_1);
    if (iVar1 == 0) {
      uVar2 = *param_1;
      auVar3 = FUN_00a2e828();
      uVar2 = FUN_00a450e0(uVar2,auVar3._0_8_,auVar3._8_8_);
      return uVar2;
    }
    uVar2 = 0x2a;
  }
  return uVar2;
}

