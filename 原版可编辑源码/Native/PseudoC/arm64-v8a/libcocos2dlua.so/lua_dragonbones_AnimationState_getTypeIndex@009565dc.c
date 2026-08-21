
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* lua_dragonbones_AnimationState_getTypeIndex(lua_State*) */

undefined8 lua_dragonbones_AnimationState_getTypeIndex(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    if ((dragonBones::AnimationState::getTypeIndex()::typeIndex & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&dragonBones::AnimationState::getTypeIndex()::typeIndex);
      if (iVar1 != 0) {
        _typeIndex = "N11dragonBones14AnimationStateE";
        __cxa_guard_release(&dragonBones::AnimationState::getTypeIndex()::typeIndex);
      }
    }
    uVar2 = NEON_ucvtf((ulong)_typeIndex & 0xffffffff);
    tolua_pushnumber(uVar2,param_1);
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "db.AnimationState:getTypeIndex",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

