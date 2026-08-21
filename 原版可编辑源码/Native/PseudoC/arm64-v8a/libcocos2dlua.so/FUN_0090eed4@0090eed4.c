
undefined8 FUN_0090eed4(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return 0;
}

