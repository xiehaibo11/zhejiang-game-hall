
void luaL_loadstring(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  luaL_loadbuffer(param_1,param_2,sVar1,param_2);
  return;
}

