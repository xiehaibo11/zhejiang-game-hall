
undefined4 FUN_00aa3be0(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  
  if ((((param_1 == 0) || (*(long *)(param_1 + 0x248) == 0)) || (*(int *)(param_1 + 0x2d4) < 0)) ||
     (lVar3 = lws_get_context(param_1), lVar3 == 0)) {
    uVar2 = 1;
  }
  else {
    iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                      (param_1,0x23,*(undefined8 *)(param_1 + 0x270),auStack_40,0);
    if (iVar1 == 0) {
      uVar2 = FUN_00aa367c(param_1,param_2,param_3,auStack_40);
      iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                        (param_1,0x24,*(undefined8 *)(param_1 + 0x270),auStack_40,0);
      if (iVar1 != 0) {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

