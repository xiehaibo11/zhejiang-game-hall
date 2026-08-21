
undefined8 FUN_008cbc40(undefined8 param_1)

{
  bool bVar1;
  long *plVar2;
  
  plVar2 = (long *)lua_touserdata(param_1,0xffffffff);
  if (plVar2 == (long *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *plVar2 == 0;
  }
  tolua_pushboolean(param_1,bVar1);
  return 1;
}

