
/* lua_dragonbones_CCFactory_constructor(lua_State*) */

bool lua_dragonbones_CCFactory_constructor(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CCFactory *this;
  
                    /* try { // try from 0095fdd0 to 00a5fe87 has its CatchHandler @ 0095fdd0
                       catch() { ... } // from try @ 0095fdd0 with catch @ 0095fdd0
                       catch() { ... } // from try @ 0095ff08 with catch @ 0095fdd0 */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x68);
    dragonBones::CCFactory::CCFactory(this);
    tolua_pushusertype(param_1,this,"db.CCFactory");
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.CCFactory:CCFactory",iVar1,0);
  }
  return iVar1 == 0;
}

