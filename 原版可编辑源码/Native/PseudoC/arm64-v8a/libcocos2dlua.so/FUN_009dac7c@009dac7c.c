
undefined8 FUN_009dac7c(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  Example *this;
  
  iVar1 = lua_gettop();
  if (iVar1 != 1) {
    luaL_argerror(param_1,1,"lua_universe_Commander_removeWhenAllTaskComplete: expected 1 argument")
    ;
  }
  uVar2 = universe::is_class(param_1,1,"un.Commander");
  if ((uVar2 & 1) == 0) {
    luaL_error(param_1,"lua_universe_Commander_removeWhenAllTaskComplete: invalid \'cobj\'");
  }
  else {
    this = (Example *)universe::get_instance(param_1,1);
    universe::Example::removeWhenAllTaskComplete(this);
  }
  return 0;
}

