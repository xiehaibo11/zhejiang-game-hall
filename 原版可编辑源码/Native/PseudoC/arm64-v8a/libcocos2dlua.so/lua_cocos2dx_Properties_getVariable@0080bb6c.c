
/* lua_cocos2dx_Properties_getVariable(lua_State*) */

undefined4 lua_cocos2dx_Properties_getVariable(lua_State *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  Properties *this;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  ulong local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = (Properties *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 == 3) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Properties:getVariable");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    local_70 = 0;
    local_68 = (char *)0x0;
    local_78 = 0;
    uVar6 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"cc.Properties:getVariable");
    if ((uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Properties_getVariable\'",0)
      ;
      uVar9 = 0;
    }
    else {
      pcVar2 = (char *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pcVar2 = local_68;
      }
      uVar8 = cocos2d::Properties::getVariable(this,pcVar1,pcVar2);
      tolua_pushstring(param_1,uVar8);
      uVar9 = 1;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  else {
    if (iVar4 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Properties:getVariable",iVar4 + -1,1);
      uVar9 = 0;
      goto LAB_0080bd48;
    }
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar7 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Properties:getVariable");
    if ((uVar7 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Properties_getVariable\'",0)
      ;
      uVar9 = 0;
    }
    else {
      pcVar1 = (char *)((ulong)&local_60 | 1);
      if ((local_60 & 1) != 0) {
        pcVar1 = local_50;
      }
      uVar8 = cocos2d::Properties::getVariable(this,pcVar1,(char *)0x0);
      tolua_pushstring(param_1,uVar8);
      uVar9 = 1;
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0080bd48:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

