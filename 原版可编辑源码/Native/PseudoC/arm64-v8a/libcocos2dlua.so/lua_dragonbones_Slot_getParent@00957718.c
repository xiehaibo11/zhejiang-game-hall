
/* lua_dragonbones_Slot_getParent(lua_State*) */

undefined8 lua_dragonbones_Slot_getParent(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  Bone *pBVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 00957740 to 00a57743 has its CatchHandler @ 00957778 */
                    /* try { // try from 00957744 to 00a5778b has its CatchHandler @ 009576f4 */
  if (iVar1 + -1 == 0) {
    pBVar5 = *(Bone **)(lVar2 + 0x180);
    if (pBVar5 == (Bone *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* catch() { ... } // from try @ 00957740 with catch @ 00957778 */
      pcVar4 = getLuaTypeName<dragonBones::Bone>(pBVar5,"db.Bone");
                    /* try { // try from 0095778c to 00a57c03 has its CatchHandler @ 0095778c
                       catch() { ... } // from try @ 0095778c with catch @ 0095778c
                       catch() { ... } // from try @ 00957c84 with catch @ 0095778c */
      tolua_pushusertype(param_1,pBVar5,pcVar4);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Slot:getParent",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

