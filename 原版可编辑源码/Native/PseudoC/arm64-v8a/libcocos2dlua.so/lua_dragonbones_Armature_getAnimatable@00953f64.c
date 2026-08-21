
/* lua_dragonbones_Armature_getAnimatable(lua_State*) */

undefined8 lua_dragonbones_Armature_getAnimatable(lua_State *param_1)

{
  IAnimatable *pIVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    pIVar1 = (IAnimatable *)((long)plVar3 + *(long *)(*plVar3 + -0x18));
    if (pIVar1 == (IAnimatable *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar5 = getLuaTypeName<dragonBones::IAnimatable>(pIVar1,"db.IAnimatable");
                    /* try { // try from 00953fe4 to 00a53fe7 has its CatchHandler @ 0095401c */
      tolua_pushusertype(param_1,pIVar1,pcVar5);
                    /* try { // try from 00953fe8 to 00a5402f has its CatchHandler @ 00953f98 */
    }
    uVar4 = 1;
  }
  else {
                    /* try { // try from 00953f98 to 00a53fe3 has its CatchHandler @ 00953f98
                       catch() { ... } // from try @ 00953f98 with catch @ 00953f98
                       catch() { ... } // from try @ 00953fe8 with catch @ 00953f98 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Armature:getAnimatable",iVar2 + -1,0);
    uVar4 = 0;
  }
  return uVar4;
}

