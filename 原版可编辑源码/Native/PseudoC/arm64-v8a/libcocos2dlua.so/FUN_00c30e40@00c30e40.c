
undefined8 FUN_00c30e40(undefined8 param_1)

{
  int iVar1;
  char *__s;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  __s = (char *)luaL_checklstring(param_1,1,0);
  pcVar2 = strchr(__s,0x2e);
  if (pcVar2 != (char *)0x0) {
    lua_pushlstring(param_1,__s,(long)pcVar2 - (long)__s);
    uVar3 = lua_tolstring(param_1,0xffffffff,0);
    lua_getfield(param_1,0xffffd8ef,"cpath");
    lVar4 = lua_tolstring(param_1,0xffffffff,0);
    if (lVar4 == 0) {
      luaL_error(param_1,"\'package.%s\' must be a string","cpath");
    }
    lVar4 = FUN_00c30a5c(param_1,uVar3,lVar4,&DAT_01412068,&DAT_014120f0);
    if ((lVar4 != 0) && (iVar1 = FUN_00c30c14(param_1,lVar4,__s,0), iVar1 != 0)) {
      if (iVar1 != 2) {
        FUN_00c30454(param_1,lVar4);
      }
      lua_pushfstring(param_1,"\n\tno module \'%s\' in file \'%s\'",__s,lVar4);
    }
    return 1;
  }
  return 0;
}

