
void FUN_00c311d0(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,int param_5
                 )

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = getenv(param_3);
  if ((pcVar1 != (char *)0x0) && (param_5 == 0)) {
    uVar2 = luaL_gsub(param_1,pcVar1,&DAT_01412188,&DAT_01412190);
    luaL_gsub(param_1,uVar2,&DAT_01412198,param_4);
    lua_remove(param_1,0xfffffffe);
    lua_setfield(param_1,0xfffffffe,param_2);
    return;
  }
  lua_pushstring(param_1,param_4);
  lua_setfield(param_1,0xfffffffe,param_2);
  return;
}

