
/* lua_cocos2dx_UserDefault_getBoolForKey(lua_State*) */

void lua_cocos2dx_UserDefault_getBoolForKey(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  UserDefault *this;
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
  this = (UserDefault *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 2) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.UserDefault:getBoolForKey")
    ;
    if ((uVar5 & 1) != 0) {
      pcVar1 = (char *)((ulong)&local_60 | 1);
      if ((local_60 & 1) != 0) {
        pcVar1 = local_50;
      }
      uVar4 = cocos2d::UserDefault::getBoolForKey(this,pcVar1);
      tolua_pushboolean(param_1,uVar4 & 1);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
LAB_0080f0a0:
      uVar6 = 1;
      goto LAB_0080f0d8;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else if (iVar3 == 3) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.UserDefault:getBoolForKey")
    ;
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    if ((uVar5 & 1) == 0) {
      iVar7 = 2;
    }
    else {
      uVar5 = luaval_to_boolean(param_1,3,local_64,"cc.UserDefault:getBoolForKey");
      if ((uVar5 & 1) == 0) {
        iVar7 = 2;
      }
      else {
        uVar4 = (*(code *)**(undefined8 **)this)(this,pcVar1,local_64[0]);
        tolua_pushboolean(param_1,uVar4 & 1);
        iVar7 = 1;
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar7 != 2) goto LAB_0080f0a0;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.UserDefault:getBoolForKey",iVar3 + -1,1);
  uVar6 = 0;
LAB_0080f0d8:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

