
/* lua_dragonbones_Armature_getParent(lua_State*) */

undefined8 lua_dragonbones_Armature_getParent(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  Slot *pSVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pSVar5 = *(Slot **)(lVar2 + 0x30);
    if (pSVar5 == (Slot *)0x0) {
                    /* try { // try from 00954f00 to 00a550a7 has its CatchHandler @ 00954f00
                       catch() { ... } // from try @ 00954f00 with catch @ 00954f00
                       catch() { ... } // from try @ 00955128 with catch @ 00954f00 */
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<dragonBones::Slot>(pSVar5,"db.Slot");
                    /* catch() { ... } // from try @ 00954eb4 with catch @ 00954eec */
      tolua_pushusertype(param_1,pSVar5,pcVar4);
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 00954eb4 to 00a54eb7 has its CatchHandler @ 00954eec */
                    /* try { // try from 00954eb8 to 00a54eff has its CatchHandler @ 00954e68 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Armature:getParent",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

