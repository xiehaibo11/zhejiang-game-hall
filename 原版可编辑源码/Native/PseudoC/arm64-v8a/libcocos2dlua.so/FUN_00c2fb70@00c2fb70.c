
undefined8 FUN_00c2fb70(undefined8 param_1)

{
  int __category;
  long lVar1;
  char *pcVar2;
  
  lVar1 = FUN_00c29b44(param_1,1);
  pcVar2 = (char *)(lVar1 + 0x18);
  if (lVar1 == 0) {
    pcVar2 = (char *)0x0;
  }
  __category = FUN_00c29ed8(param_1,2,6,&DAT_01411ed0);
  pcVar2 = setlocale(__category,pcVar2);
  lua_pushstring(param_1,pcVar2);
  return 1;
}

