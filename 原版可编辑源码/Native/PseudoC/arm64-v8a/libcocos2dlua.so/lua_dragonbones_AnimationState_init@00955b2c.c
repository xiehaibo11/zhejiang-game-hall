
/* lua_dragonbones_AnimationState_init(lua_State*) */

undefined4 lua_dragonbones_AnimationState_init(lua_State *param_1)

{
  int iVar1;
  AnimationState *this;
  ulong uVar2;
  AnimationConfig *pAVar3;
  Armature *unaff_x21;
  AnimationData *unaff_x22;
  byte bVar4;
  byte bVar5;
  
  this = (AnimationState *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 3) {
    if (param_1 != (lua_State *)0x0) {
      iVar1 = lua_gettop(param_1);
      if ((iVar1 < 2) || (uVar2 = luaval_is_usertype(param_1,2,"db.Armature",0), (uVar2 & 1) == 0))
      {
        bVar4 = 0;
      }
      else {
        unaff_x21 = (Armature *)tolua_tousertype(param_1,2,0);
        bVar4 = 1;
      }
      iVar1 = lua_gettop(param_1);
      if ((iVar1 < 3) ||
         (uVar2 = luaval_is_usertype(param_1,3,"db.AnimationData",0), (uVar2 & 1) == 0)) {
        bVar5 = 0;
      }
      else {
        unaff_x22 = (AnimationData *)tolua_tousertype(param_1,3,0);
        bVar5 = 1;
      }
      iVar1 = lua_gettop(param_1);
      if (((3 < iVar1) &&
          (uVar2 = luaval_is_usertype(param_1,4,"db.AnimationConfig",0), (uVar2 & 1) != 0)) &&
         (pAVar3 = (AnimationConfig *)tolua_tousertype(param_1,4,0), (bool)(bVar4 & bVar5))) {
        dragonBones::AnimationState::init(this,unaff_x21,unaff_x22,pAVar3);
        lua_settop(param_1,1);
        return 1;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_dragonbones_AnimationState_init\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",0x12d2949,
               iVar1 + -1,3);
  }
  return 0;
}

