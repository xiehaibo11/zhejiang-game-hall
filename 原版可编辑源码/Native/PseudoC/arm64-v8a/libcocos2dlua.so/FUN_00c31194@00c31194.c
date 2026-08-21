
undefined8 FUN_00c31194(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)luaL_checkudata(param_1,1,"_LOADLIB");
  if (*plVar1 != 0) {
    dlclose();
  }
  *plVar1 = 0;
  return 0;
}

