
/* lua_dragonbones_Armature_dispose(lua_State*) */

bool lua_dragonbones_Armature_dispose(lua_State *param_1)

{
  int iVar1;
  Armature *this;
  
  this = (Armature *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    dragonBones::Armature::dispose(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Armature:dispose",iVar1,0);
  }
  return iVar1 == 0;
}

