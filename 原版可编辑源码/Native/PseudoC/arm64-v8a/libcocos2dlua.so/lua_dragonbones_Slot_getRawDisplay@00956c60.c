
/* lua_dragonbones_Slot_getRawDisplay(lua_State*) */

bool lua_dragonbones_Slot_getRawDisplay(lua_State *param_1)

{
  int iVar1;
  
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Slot:getRawDisplay",iVar1,0);
                    /* try { // try from 00956cac to 00a56d03 has its CatchHandler @ 00956cac
                       catch() { ... } // from try @ 00956cac with catch @ 00956cac
                       catch() { ... } // from try @ 00956dbc with catch @ 00956cac */
  }
  return iVar1 == 0;
}

