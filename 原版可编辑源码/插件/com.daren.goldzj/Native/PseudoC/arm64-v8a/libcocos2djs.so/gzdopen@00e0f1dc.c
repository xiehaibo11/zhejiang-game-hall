
undefined8 gzdopen(uint param_1,undefined8 param_2)

{
  char *__s;
  undefined8 uVar1;
  
  if ((param_1 == 0xffffffff) || (__s = malloc(0x13), __s == (char *)0x0)) {
    uVar1 = 0;
  }
  else {
    snprintf(__s,0x13,"<fd:%d>",(ulong)param_1);
    uVar1 = FUN_00e0eed8(__s,param_1,param_2);
    free(__s);
  }
  return uVar1;
}

