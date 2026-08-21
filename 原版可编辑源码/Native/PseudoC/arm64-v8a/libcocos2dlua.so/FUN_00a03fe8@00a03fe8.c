
bool FUN_00a03fe8(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  undefined8 uVar4;
  undefined8 uVar5;
  Everywhere *this_00;
  
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_network_IStream_toBufferAndRelease: expected 1 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,&DAT_012f75e0);
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
    uVar4 = universe::network::AUpdates::getBytes(this);
    uVar5 = universe::network::AUpdates::getLength(this);
    lua_pushlstring(param_1,uVar4,uVar5);
    this_00 = (Everywhere *)universe::network::Everywhere::getInstance();
    universe::network::Everywhere::release(this_00,this);
  }
  return !bVar1;
}

