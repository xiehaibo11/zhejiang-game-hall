
/* lua_dragonbones_Animation_gotoAndStopByFrame(lua_State*) */

undefined4 lua_dragonbones_Animation_gotoAndStopByFrame(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Animation *this;
  ulong uVar5;
  AnimationState *pAVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Animation *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.Animation:gotoAndStopByFrame");
    uVar4 = luaval_to_uint32(param_1,3,&local_54,"db.Animation:gotoAndStopByFrame");
    if ((uVar3 & uVar4 & 1) != 0) {
      pAVar6 = (AnimationState *)
               dragonBones::Animation::gotoAndStopByFrame(this,(basic_string *)&local_50,local_54);
      if (pAVar6 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar7 = getLuaTypeName<dragonBones::AnimationState>(pAVar6,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar6,pcVar7);
      }
      goto LAB_0095a628;
    }
    tolua_error(param_1,&DAT_012d3655,0);
LAB_0095a5d8:
    uVar8 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.Animation:gotoAndStopByFrame",iVar2 + -1,1);
      uVar8 = 0;
      goto LAB_0095a5ec;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.Animation:gotoAndStopByFrame");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,&DAT_012d3655,0);
      goto LAB_0095a5d8;
    }
    pAVar6 = (AnimationState *)
             dragonBones::Animation::gotoAndStopByFrame(this,(basic_string *)&local_50,0);
    if (pAVar6 == (AnimationState *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar7 = getLuaTypeName<dragonBones::AnimationState>(pAVar6,"db.AnimationState");
      tolua_pushusertype(param_1,pAVar6,pcVar7);
    }
LAB_0095a628:
    uVar8 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0095a5ec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

