
undefined8
FUN_00a535c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00a52e14(&PTR_MD5_Init_01c6e520,param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    FUN_00a52fa8(lVar1,param_3,param_4);
    FUN_00a52fc8(lVar1,param_5);
    uVar2 = 0;
  }
  return uVar2;
}

