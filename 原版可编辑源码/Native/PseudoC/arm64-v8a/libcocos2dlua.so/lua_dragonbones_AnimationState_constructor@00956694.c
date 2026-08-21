
/* lua_dragonbones_AnimationState_constructor(lua_State*) */

bool lua_dragonbones_AnimationState_constructor(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  AnimationState *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x140);
    dragonBones::AnimationState::AnimationState(this);
    tolua_pushusertype(param_1,this,"db.AnimationState");
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.AnimationState:AnimationState",iVar1,0);
  }
  return iVar1 == 0;
}

