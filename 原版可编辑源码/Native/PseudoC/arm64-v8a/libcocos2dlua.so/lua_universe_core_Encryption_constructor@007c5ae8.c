
/* lua_universe_core_Encryption_constructor(lua_State*) */

bool lua_universe_core_Encryption_constructor(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  Encryption *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x30);
    universe::network::Encryption::setDefaultAesKey(this);
    tolua_pushusertype(param_1,this,"un.Encryption");
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "un.Encryption:Encryption",iVar1,0);
  }
  return iVar1 == 0;
}

