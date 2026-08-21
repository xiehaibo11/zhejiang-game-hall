
/* lua_cocos2dx_Properties_parseColor(lua_State*) */

void lua_cocos2dx_Properties_parseColor(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  Vec4 *pVVar7;
  ulong uVar8;
  Vec3 *pVVar9;
  int iVar10;
  ulong local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 + -1 == 2) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Properties:parseColor");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    if ((((param_1 == (lua_State *)0x0) || (((uVar4 ^ 1) & 1) != 0)) ||
        (iVar5 = lua_gettop(param_1), iVar5 < 3)) ||
       ((uVar8 = luaval_is_usertype(param_1,3,"cc.Vec4",0), (uVar8 & 1) == 0 ||
        (pVVar7 = (Vec4 *)tolua_tousertype(param_1,3,0), (uVar4 & 1) == 0)))) {
      iVar10 = 2;
      iVar5 = 2;
    }
    else {
      uVar4 = cocos2d::Properties::parseColor(pcVar1,pVVar7);
      tolua_pushboolean(param_1,uVar4 & 1);
      iVar10 = 1;
      iVar5 = 1;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
      iVar5 = iVar10;
    }
    if (iVar5 == 2) {
      local_58 = 0;
      local_50 = (char *)0x0;
      local_60 = 0;
      uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Properties:parseColor");
      pcVar1 = (char *)((ulong)&local_60 | 1);
      if ((local_60 & 1) != 0) {
        pcVar1 = local_50;
      }
      if (((param_1 == (lua_State *)0x0) || (((uVar4 ^ 1) & 1) != 0)) ||
         ((iVar5 = lua_gettop(param_1), iVar5 < 3 ||
          ((uVar8 = luaval_is_usertype(param_1,3,"cc.Vec3",0), (uVar8 & 1) == 0 ||
           (pVVar9 = (Vec3 *)tolua_tousertype(param_1,3,0), (uVar4 & 1) == 0)))))) {
        iVar10 = 4;
        iVar5 = 4;
      }
      else {
        uVar4 = cocos2d::Properties::parseColor(pcVar1,pVVar9);
        tolua_pushboolean(param_1,uVar4 & 1);
        iVar10 = 1;
        iVar5 = 1;
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
        iVar5 = iVar10;
      }
      if (iVar5 == 4) goto LAB_0080df40;
    }
    uVar6 = 1;
  }
  else {
LAB_0080df40:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "cc.Properties:parseColor",iVar3 + -1,2);
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

