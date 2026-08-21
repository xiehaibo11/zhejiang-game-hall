
undefined8 FUN_00a1856c(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00a464f4();
  if ((int)uVar2 == 0) {
    lVar1 = param_1 + (long)param_2 * 8;
    param_1 = param_1 + (long)param_2 * 0x28;
    *(undefined1 *)(param_1 + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(code **)(lVar1 + 0x278) = FUN_00a23474;
    *(code **)(lVar1 + 0x288) = FUN_00a23358;
  }
  else {
    uVar2 = 0x50;
  }
  return uVar2;
}

