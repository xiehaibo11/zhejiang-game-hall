
/* lua_dragonbones_Armature_getProxy(lua_State*) */

undefined8 lua_dragonbones_Armature_getProxy(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  IArmatureProxy *pIVar5;
  
                    /* try { // try from 009550f4 to 00a55127 has its CatchHandler @ 00955178 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pIVar5 = *(IArmatureProxy **)(lVar2 + 0xb0);
    if (pIVar5 == (IArmatureProxy *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<dragonBones::IArmatureProxy>(pIVar5,"db.IArmatureProxy");
      tolua_pushusertype(param_1,pIVar5,pcVar4);
    }
                    /* catch() { ... } // from try @ 009550dc with catch @ 00955174 */
    uVar3 = 1;
  }
  else {
                    /* try { // try from 00955128 to 00a551c3 has its CatchHandler @ 00954f00 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Armature:getProxy",iVar1 + -1,0);
    uVar3 = 0;
  }
                    /* catch() { ... } // from try @ 009550f4 with catch @ 00955178 */
  return uVar3;
}

