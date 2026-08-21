
/* lua_dragonbones_Slot_getSlotData(lua_State*) */

undefined8 lua_dragonbones_Slot_getSlotData(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  SlotData *pSVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 00956d4c to 00a56d67 has its CatchHandler @ 00956e50 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pSVar5 = *(SlotData **)(lVar2 + 200);
    if (pSVar5 == (SlotData *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<dragonBones::SlotData>(pSVar5,"db.SlotData");
                    /* try { // try from 00956da4 to 00a56dbb has its CatchHandler @ 00956e54 */
      tolua_pushusertype(param_1,pSVar5,pcVar4);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Slot:getSlotData",iVar1 + -1,0);
    uVar3 = 0;
                    /* try { // try from 00956d80 to 00a56d97 has its CatchHandler @ 00956e58 */
  }
                    /* try { // try from 00956dbc to 00a56e7b has its CatchHandler @ 00956cac */
  return uVar3;
}

