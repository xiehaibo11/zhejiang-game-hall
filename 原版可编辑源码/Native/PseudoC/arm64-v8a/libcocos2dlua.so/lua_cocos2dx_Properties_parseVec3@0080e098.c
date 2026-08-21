
/* lua_cocos2dx_Properties_parseVec3(lua_State*) */

undefined4 lua_cocos2dx_Properties_parseVec3(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  Vec3 *pVVar7;
  undefined4 uVar8;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 + -1 == 2) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Properties:parseVec3");
    pcVar1 = (char *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      pcVar1 = local_40;
    }
    if ((((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 3)) ||
        (uVar6 = luaval_is_usertype(param_1,3,"cc.Vec3",0), (uVar6 & 1) == 0)) ||
       (pVVar7 = (Vec3 *)tolua_tousertype(param_1,3,0), (uVar5 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Properties_parseVec3\'",0);
      uVar8 = 0;
    }
    else {
      uVar4 = cocos2d::Properties::parseVec3(pcVar1,pVVar7);
      tolua_pushboolean(param_1,uVar4 & 1);
      uVar8 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Properties:parseVec3",iVar3 + -1,2);
    uVar8 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

