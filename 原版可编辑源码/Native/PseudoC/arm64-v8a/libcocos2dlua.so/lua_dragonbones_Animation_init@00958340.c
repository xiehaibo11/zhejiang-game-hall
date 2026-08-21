
/* lua_dragonbones_Animation_init(lua_State*) */

undefined4 lua_dragonbones_Animation_init(lua_State *param_1)

{
  int iVar1;
  Animation *this;
  ulong uVar2;
  Armature *pAVar3;
  
  this = (Animation *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"db.Armature",0), (uVar2 & 1) != 0)) {
      pAVar3 = (Armature *)tolua_tousertype(param_1,2,0);
      dragonBones::Animation::init(this,pAVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,&DAT_012d3099,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Animation:init",iVar1 + -1,1);
  }
  return 0;
}

