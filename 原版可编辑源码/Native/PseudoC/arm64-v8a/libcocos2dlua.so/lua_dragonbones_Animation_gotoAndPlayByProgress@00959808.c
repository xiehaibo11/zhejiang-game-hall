
/* lua_dragonbones_Animation_gotoAndPlayByProgress(lua_State*) */

undefined4 lua_dragonbones_Animation_gotoAndPlayByProgress(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  Animation *this;
  ulong uVar6;
  AnimationState *pAVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_6c;
  double local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Animation *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.Animation:gotoAndPlayByProgress");
    uVar4 = luaval_to_number(param_1,3,&local_68,"db.Animation:gotoAndPlayByProgress");
    uVar5 = luaval_to_int32(param_1,4,&local_6c,"db.Animation:gotoAndPlayByProgress");
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      pAVar7 = (AnimationState *)
               dragonBones::Animation::gotoAndPlayByProgress
                         (this,(basic_string *)&local_60,(float)local_68,local_6c);
      if (pAVar7 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar8 = getLuaTypeName<dragonBones::AnimationState>(pAVar7,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar7,pcVar8);
      }
      goto LAB_00959ac0;
    }
    tolua_error(param_1,0x12d3406,0);
LAB_00959a60:
    uVar9 = 0;
  }
  else {
    if (iVar2 == 3) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_60,"db.Animation:gotoAndPlayByProgress");
      uVar4 = luaval_to_number(param_1,3,&local_68,"db.Animation:gotoAndPlayByProgress");
      if ((uVar3 & uVar4 & 1) == 0) {
        tolua_error(param_1,0x12d3406,0);
        goto LAB_00959a60;
      }
      pAVar7 = (AnimationState *)
               dragonBones::Animation::gotoAndPlayByProgress
                         (this,(basic_string *)&local_60,(float)local_68,-1);
      if (pAVar7 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar8 = getLuaTypeName<dragonBones::AnimationState>(pAVar7,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar7,pcVar8);
      }
    }
    else {
      if (iVar2 != 2) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d33e3
                   ,iVar2 + -1,1);
        uVar9 = 0;
        goto LAB_00959a74;
      }
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar6 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_60,"db.Animation:gotoAndPlayByProgress");
      if ((uVar6 & 1) == 0) {
        tolua_error(param_1,0x12d3406,0);
        goto LAB_00959a60;
      }
      pAVar7 = (AnimationState *)
               dragonBones::Animation::gotoAndPlayByProgress(this,(basic_string *)&local_60,0.0,-1);
      if (pAVar7 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar8 = getLuaTypeName<dragonBones::AnimationState>(pAVar7,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar7,pcVar8);
      }
    }
LAB_00959ac0:
    uVar9 = 1;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00959a74:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

