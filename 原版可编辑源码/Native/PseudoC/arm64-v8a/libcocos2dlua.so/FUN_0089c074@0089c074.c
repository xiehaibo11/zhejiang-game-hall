
undefined8 FUN_0089c074(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)tolua_tousertype(param_1,1,0);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return 0;
}

