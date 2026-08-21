
/* lua_dragonbones_Slot_getVisible(lua_State*) */

bool lua_dragonbones_Slot_getVisible(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0xfd));
                    /* try { // try from 00956d20 to 00a56d3f has its CatchHandler @ 00956e5c */
  }
  else {
                    /* try { // try from 00956d04 to 00a56d1b has its CatchHandler @ 00956e60 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Slot:getVisible",iVar1,0);
  }
  return iVar1 == 0;
}

