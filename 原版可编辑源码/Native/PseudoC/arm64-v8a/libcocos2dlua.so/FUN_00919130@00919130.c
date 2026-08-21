
undefined8 FUN_00919130(undefined8 param_1)

{
  int *piVar1;
  double dVar2;
  
  piVar1 = (int *)auxiliar_checkgroup(param_1,"udp{any}",1);
  dVar2 = (double)luaL_checknumber(param_1,2);
  *piVar1 = (int)dVar2;
  return 0;
}

