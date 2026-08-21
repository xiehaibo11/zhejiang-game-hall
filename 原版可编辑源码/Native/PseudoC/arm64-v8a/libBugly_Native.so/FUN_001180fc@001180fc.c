
uint FUN_001180fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  __pid_t _Var1;
  uint uVar2;
  
  _Var1 = getpid();
  uVar2 = FUN_001190f8(param_1,_Var1,param_2,param_3,param_4,param_5,param_6);
  return uVar2 & 1;
}

