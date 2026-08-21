
/* lua_cocos2dx_studio_ComAudio_playBackgroundMusic(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAudio_playBackgroundMusic(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  ComAudio *this;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
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
    cocostudio::ComAudio::playBackgroundMusic(this);
    uVar5 = 1;
    lua_settop(param_1,1);
    goto LAB_0093b9d8;
  }
  if (iVar3 == 3) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"ccs.ComAudio:playBackgroundMusic");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    if ((uVar4 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      uVar4 = luaval_to_boolean(param_1,3,local_64,"ccs.ComAudio:playBackgroundMusic");
      if ((uVar4 & 1) == 0) {
        iVar6 = 4;
      }
      else {
        cocostudio::ComAudio::playBackgroundMusic(this,pcVar1,local_64[0]);
        iVar6 = 1;
        lua_settop(param_1,1);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar6 != 4) {
LAB_0093b9a0:
      uVar5 = 1;
      goto LAB_0093b9d8;
    }
  }
  else if (iVar3 == 2) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"ccs.ComAudio:playBackgroundMusic");
    if ((uVar4 & 1) != 0) {
      pcVar1 = (char *)((ulong)&local_60 | 1);
      if ((local_60 & 1) != 0) {
        pcVar1 = local_50;
      }
      cocostudio::ComAudio::playBackgroundMusic(this,pcVar1);
      lua_settop(param_1,1);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      goto LAB_0093b9a0;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cd206,
             iVar3 + -1,0);
  uVar5 = 0;
LAB_0093b9d8:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

