
undefined8 FUN_00917e8c(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)auxiliar_checkgroup(param_1,"tcp{any}",1);
  lua_pushnumber((double)(long)*piVar1,param_1);
  return 1;
}

