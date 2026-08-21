
/* lua_cocos2dx_AtlasNode_setQuadsToDraw(lua_State*) */

undefined4 lua_cocos2dx_AtlasNode_setQuadsToDraw(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  AtlasNode *this;
  ulong uVar3;
  undefined4 uVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (AtlasNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_ssize(param_1,2,&local_40,"cc.AtlasNode:setQuadsToDraw");
    if ((uVar3 & 1) != 0) {
      cocos2d::AtlasNode::setQuadsToDraw(this,local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_008347f8;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_AtlasNode_setQuadsToDraw\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AtlasNode:setQuadsToDraw",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_008347f8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

