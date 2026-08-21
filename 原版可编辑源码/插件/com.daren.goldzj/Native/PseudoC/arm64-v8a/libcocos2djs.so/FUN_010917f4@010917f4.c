
void FUN_010917f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                 undefined8 *param_5,ulong param_6)

{
  undefined8 extraout_x1;
  undefined1 *puVar1;
  code *pcVar2;
  
  puVar1 = &stack0xfffffffffffffff0;
  FUN_01092810();
  pcVar2 = FUN_01091800;
  FUN_01092824();
  FUN_01092348(extraout_x1,*param_3,0,*param_5,param_4 & 0xffffffff,0,0xffffffff,
               param_6 & 0xffffffff,puVar1,pcVar2);
  return;
}

