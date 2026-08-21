
/* lua_cocos2dx_Properties_getVec2(lua_State*) */

undefined4 lua_cocos2dx_Properties_getVec2(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  Properties *this;
  ulong uVar5;
  ulong uVar6;
  Vec2 *pVVar7;
  undefined4 uVar8;
  ulong local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = (Properties *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 2) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Properties:getVec2");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    if ((((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 3)) ||
        (uVar6 = luaval_is_usertype(param_1,3,"cc.Vec2",0), (uVar6 & 1) == 0)) ||
       (pVVar7 = (Vec2 *)tolua_tousertype(param_1,3,0), (uVar5 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Properties_getVec2\'",0);
      uVar8 = 0;
    }
    else {
      uVar4 = cocos2d::Properties::getVec2(this,pcVar1,pVVar7);
      tolua_pushboolean(param_1,uVar4 & 1);
      uVar8 = 1;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Properties:getVec2",iVar3 + -1,2);
    uVar8 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

