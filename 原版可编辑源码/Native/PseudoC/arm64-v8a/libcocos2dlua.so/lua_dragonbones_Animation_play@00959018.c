
/* lua_dragonbones_Animation_play(lua_State*) */

undefined4 lua_dragonbones_Animation_play(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Animation *this;
  AnimationState *pAVar5;
  char *pcVar6;
  ulong uVar7;
  undefined4 uVar8;
  int local_54;
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
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"db.Animation:play");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"db.Animation:play");
    if ((uVar3 & uVar4 & 1) != 0) {
      pAVar5 = (AnimationState *)
               dragonBones::Animation::play(this,(basic_string *)&local_50,local_54);
      if (pAVar5 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar6 = getLuaTypeName<dragonBones::AnimationState>(pAVar5,"db.AnimationState");
        tolua_pushusertype(param_1,pAVar5,pcVar6);
      }
      goto LAB_00959230;
    }
    tolua_error(param_1,0x12d320e,0);
LAB_009591fc:
    uVar8 = 0;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 + -1 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_50,"");
        pAVar5 = (AnimationState *)dragonBones::Animation::play(this,(basic_string *)&local_50,-1);
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
        if (pAVar5 == (AnimationState *)0x0) {
          lua_pushnil(param_1);
          uVar8 = 1;
        }
        else {
          pcVar6 = getLuaTypeName<dragonBones::AnimationState>(pAVar5,"db.AnimationState");
          tolua_pushusertype(param_1,pAVar5,pcVar6);
          uVar8 = 1;
        }
      }
      else {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "db.Animation:play",iVar2 + -1,0);
        uVar8 = 0;
      }
      goto LAB_00959244;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar7 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"db.Animation:play");
    if ((uVar7 & 1) == 0) {
      tolua_error(param_1,0x12d320e,0);
      goto LAB_009591fc;
    }
    pAVar5 = (AnimationState *)dragonBones::Animation::play(this,(basic_string *)&local_50,-1);
    if (pAVar5 == (AnimationState *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar6 = getLuaTypeName<dragonBones::AnimationState>(pAVar5,"db.AnimationState");
      tolua_pushusertype(param_1,pAVar5,pcVar6);
    }
LAB_00959230:
    uVar8 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00959244:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

