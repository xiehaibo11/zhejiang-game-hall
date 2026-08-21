
void luaL_addstring(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  luaL_addlstring(param_1,param_2,sVar1);
  return;
}

