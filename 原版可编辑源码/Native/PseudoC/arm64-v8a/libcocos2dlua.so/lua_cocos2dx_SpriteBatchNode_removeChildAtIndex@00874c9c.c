
/* lua_cocos2dx_SpriteBatchNode_removeChildAtIndex(lua_State*) */

undefined4 lua_cocos2dx_SpriteBatchNode_removeChildAtIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SpriteBatchNode *this;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_54 [4];
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (SpriteBatchNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_ssize(param_1,2,&local_50,"cc.SpriteBatchNode:removeChildAtIndex");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"cc.SpriteBatchNode:removeChildAtIndex");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      cocos2d::SpriteBatchNode::removeChildAtIndex(this,local_50,local_54[0]);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00874d80;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_SpriteBatchNode_removeChildAtIndex\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SpriteBatchNode:removeChildAtIndex",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_00874d80:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

