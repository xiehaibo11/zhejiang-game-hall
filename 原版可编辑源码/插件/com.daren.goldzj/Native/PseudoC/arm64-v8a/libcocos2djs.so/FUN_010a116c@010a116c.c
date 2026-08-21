
void FUN_010a116c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5)

{
  ulong extraout_x1;
  
  FUN_010a15a8();
  FUN_010a11bc(extraout_x1 & 0xffffffff00000000,
               extraout_x1 & 0xffffffff00000000 | (ulong)*(uint *)(extraout_x1 + 7),param_3,*param_5
               ,param_4 & 0xffffffff);
  return;
}

