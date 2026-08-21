
/* lua_dragonbones_Slot_updateTransformAndMatrix(lua_State*) */

bool lua_dragonbones_Slot_updateTransformAndMatrix(lua_State *param_1)

{
  int iVar1;
  Slot *this;
  
  this = (Slot *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 009576f4 to 00a5773f has its CatchHandler @ 009576f4
                       catch() { ... } // from try @ 009576f4 with catch @ 009576f4
                       catch() { ... } // from try @ 00957744 with catch @ 009576f4 */
    dragonBones::Slot::updateTransformAndMatrix(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Slot:updateTransformAndMatrix",iVar1,0);
  }
  return iVar1 == 0;
}

