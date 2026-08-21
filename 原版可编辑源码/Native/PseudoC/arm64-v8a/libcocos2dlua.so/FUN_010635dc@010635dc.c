
undefined8
FUN_010635dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
            undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01066efc(*param_1,param_3,"resource.frk/");
  if (lVar1 == 0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0;
    *param_4 = lVar1;
    *param_5 = 0;
  }
  return uVar2;
}

