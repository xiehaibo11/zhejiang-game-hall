
/* lua_cocos2dx_studio_ComAudio_playEffect(lua_State*) */

void lua_cocos2dx_studio_ComAudio_playEffect(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ComAudio *this;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  bool local_64 [4];
  ulong local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = (ComAudio *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 0) {
    uVar4 = cocostudio::ComAudio::playEffect(this);
    tolua_pushnumber((double)uVar4,param_1);
LAB_0093bcac:
    uVar6 = 1;
  }
  else {
    if (iVar3 == 3) {
      local_58 = 0;
      local_50 = (char *)0x0;
      local_60 = 0;
      uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccs.ComAudio:playEffect");
      pcVar1 = (char *)((ulong)&local_60 | 1);
      if ((local_60 & 1) != 0) {
        pcVar1 = local_50;
      }
      if ((uVar5 & 1) == 0) {
        iVar7 = 4;
      }
      else {
        uVar5 = luaval_to_boolean(param_1,3,local_64,"ccs.ComAudio:playEffect");
        if ((uVar5 & 1) == 0) {
          iVar7 = 4;
        }
        else {
          uVar4 = cocostudio::ComAudio::playEffect(this,pcVar1,local_64[0]);
          tolua_pushnumber((double)uVar4,param_1);
          iVar7 = 1;
        }
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if (iVar7 != 4) goto LAB_0093bcac;
    }
    else if (iVar3 == 2) {
      local_58 = 0;
      local_50 = (char *)0x0;
      local_60 = 0;
      uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccs.ComAudio:playEffect");
      if ((uVar5 & 1) != 0) {
        pcVar1 = (char *)((ulong)&local_60 | 1);
        if ((local_60 & 1) != 0) {
          pcVar1 = local_50;
        }
        uVar4 = cocostudio::ComAudio::playEffect(this,pcVar1);
        tolua_pushnumber((double)uVar4,param_1);
        if ((local_60 & 1) != 0) {
          operator_delete(local_50);
        }
        goto LAB_0093bcac;
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ComAudio:playEffect",iVar3 + -1,0);
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

