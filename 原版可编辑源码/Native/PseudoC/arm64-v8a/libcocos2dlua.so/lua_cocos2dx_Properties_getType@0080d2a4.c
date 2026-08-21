
/* lua_cocos2dx_Properties_getType(lua_State*) */

undefined4 lua_cocos2dx_Properties_getType(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  Properties *this;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (Properties *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 2) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Properties:getType");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Properties_getType\'",0);
      uVar5 = 0;
    }
    else {
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
      iVar3 = cocos2d::Properties::getType(this,pcVar1);
      tolua_pushnumber((double)iVar3,param_1);
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else if (iVar3 + -1 == 0) {
    iVar3 = cocos2d::Properties::getType(this,(char *)0x0);
    tolua_pushnumber((double)iVar3,param_1);
    uVar5 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Properties:getType",iVar3 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

