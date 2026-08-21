
undefined8 FUN_00c2fd8c(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)luaL_checklstring(param_1,1,0);
  pcVar1 = getenv(pcVar1);
  lua_pushstring(param_1,pcVar1);
  return 1;
}

