
undefined8 FUN_00a040a0(lua_State *param_1)

{
  int iVar1;
  Everywhere *this;
  void *pvVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,"lua_universe_network_IStream_new: expected 0 argument");
  }
  this = (Everywhere *)universe::network::Everywhere::getInstance();
  pvVar2 = (void *)universe::network::Everywhere::obtainIStream(this);
  universe::create_instance(param_1,"un.network.IStream",pvVar2);
  return 1;
}

