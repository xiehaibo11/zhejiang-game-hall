
/* lua_dragonbones_AnimationState_addBoneMask(lua_State*) */

undefined4 lua_dragonbones_AnimationState_addBoneMask(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  AnimationState *this;
  ulong uVar5;
  undefined4 uVar6;
  bool local_54 [4];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (AnimationState *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.AnimationState:addBoneMask");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"db.AnimationState:addBoneMask");
    if ((uVar3 & uVar4 & 1) != 0) {
      dragonBones::AnimationState::addBoneMask(this,(basic_string *)&local_50,local_54[0]);
      lua_settop(param_1,1);
      goto LAB_00955e2c;
    }
    tolua_error(param_1,&DAT_012d2a01,0);
LAB_00955e8c:
    uVar6 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.AnimationState:addBoneMask",iVar2 + -1,1);
      uVar6 = 0;
      goto LAB_00955ea0;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.AnimationState:addBoneMask");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,&DAT_012d2a01,0);
      goto LAB_00955e8c;
    }
    dragonBones::AnimationState::addBoneMask(this,(basic_string *)&local_50,true);
    lua_settop(param_1,1);
LAB_00955e2c:
    uVar6 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00955ea0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00955ec0 to 00a55f0f has its CatchHandler @ 00955ec0
                       catch() { ... } // from try @ 00955ec0 with catch @ 00955ec0
                       catch() { ... } // from try @ 00955f4c with catch @ 00955ec0
                       catch() { ... } // from try @ 00955f94 with catch @ 00955ec0 */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

