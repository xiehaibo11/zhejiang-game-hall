
/* lua_cocos2dx_Node_convertTouchToNodeSpace(lua_State*) */

void lua_cocos2dx_Node_convertTouchToNodeSpace(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Touch *pTVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pTVar3 = (Touch *)tolua_tousertype(param_1,1,0);
  if (pTVar3 == (Touch *)0x0) {
    pcVar6 = "invalid \'cobj\' in function \'lua_cocos2dx_Node_convertTouchToNodeSpace\'";
LAB_007e8e10:
    tolua_error(param_1,pcVar6,0);
  }
  else {
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 1) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Touch",0), (uVar4 & 1) != 0)) {
        tolua_tousertype(param_1,2,0);
        local_40[0] = cocos2d::Node::convertTouchToNodeSpace(pTVar3);
        vec2_to_luaval(param_1,(Vec2 *)local_40);
        uVar5 = 1;
        goto LAB_007e8e20;
      }
      pcVar6 = "invalid arguments in function \'lua_cocos2dx_Node_convertTouchToNodeSpace\'";
      goto LAB_007e8e10;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:convertTouchToNodeSpace",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_007e8e20:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

