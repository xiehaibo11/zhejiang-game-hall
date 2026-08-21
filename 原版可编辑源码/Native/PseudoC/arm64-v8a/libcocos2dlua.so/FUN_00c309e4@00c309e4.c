
undefined8 FUN_00c309e4(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = strchr(param_2,0x2d);
  if (pcVar1 != (char *)0x0) {
    param_2 = pcVar1 + 1;
  }
  uVar2 = luaL_gsub(param_1,param_2,&DAT_01412068,&DAT_01412070);
  uVar2 = lua_pushfstring(param_1,param_3,uVar2);
  lua_remove(param_1,0xfffffffe);
  return uVar2;
}

