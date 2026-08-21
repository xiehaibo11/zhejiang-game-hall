
void FUN_01088dbc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                 undefined8 *param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 extraout_x1;
  undefined1 *puVar1;
  code *pcVar2;
  
  puVar1 = &stack0xfffffffffffffff0;
  FUN_0108a0a8();
  pcVar2 = FUN_01088dc8;
  FUN_0108a0bc();
  FUN_0108998c(extraout_x1,*param_3,0,*param_5,param_4 & 0xffffffff,0,param_6 & 0xffffffff,param_8,
               puVar1,pcVar2);
  return;
}

