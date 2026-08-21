
undefined8 FUN_00b65460(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  local_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  local_50 = 5;
  if ((*(code **)(*param_3 + 0x10) == (code *)0x0) ||
     (uStack_48 = param_1, iVar1 = (**(code **)(*param_3 + 0x10))(param_3,&local_50), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

