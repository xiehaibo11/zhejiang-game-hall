
/* lua_cocos2dx_Node_getNumberOfRunningActionsByTag(lua_State*) */

void lua_cocos2dx_Node_getNumberOfRunningActionsByTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Node *this;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Node *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.Node:getNumberOfRunningActionsByTag");
    if ((uVar3 & 1) != 0) {
      lVar4 = cocos2d::Node::getNumberOfRunningActionsByTag(this,local_3c);
      tolua_pushnumber((double)lVar4,param_1);
      uVar5 = 1;
      goto LAB_007ed8a4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_Node_getNumberOfRunningActionsByTag\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getNumberOfRunningActionsByTag",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_007ed8a4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

