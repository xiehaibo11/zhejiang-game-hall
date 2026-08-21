
/* lua_cocos2dx_Node_setNodeToParentTransform(lua_State*) */

bool lua_cocos2dx_Node_setNodeToParentTransform(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  bool bVar5;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Mat4::Mat4(aMStack_78);
    uVar4 = luaval_to_mat4(param_1,2,aMStack_78,"cc.Node:setNodeToParentTransform");
    bVar5 = (uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_Node_setNodeToParentTransform\'",0);
    }
    else {
      (**(code **)(*plVar3 + 0x408))(plVar3,aMStack_78);
      lua_settop(param_1,1);
    }
    bVar5 = !bVar5;
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:setNodeToParentTransform",iVar2 + -1,1);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

