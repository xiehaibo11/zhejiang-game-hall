
undefined8 WebPDecode(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_220;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  
  if ((param_3 == (undefined8 *)0x0) || (param_1 == 0)) {
    uVar1 = 2;
  }
  else {
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    uVar1 = FUN_0113ec64(param_1,param_2,param_3,(long)param_3 + 4,param_3 + 1,(long)param_3 + 0xc,
                         param_3 + 2,0);
    if ((int)uVar1 == 0) {
      memset(auStack_218,0,0x1e8);
      local_220 = param_3 + 5;
      local_1f8 = param_3 + 0x14;
      uVar1 = FUN_0113f654(param_1,param_2,&local_220);
    }
    else if ((int)uVar1 == 7) {
      uVar1 = 3;
    }
  }
  return uVar1;
}

