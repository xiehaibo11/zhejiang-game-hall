
/* lua_cocos2dx_ClippingRectangleNode_setClippingRegion(lua_State*) */

undefined4 lua_cocos2dx_ClippingRectangleNode_setClippingRegion(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ClippingRectangleNode *this;
  ulong uVar3;
  undefined4 uVar4;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ClippingRectangleNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar3 = luaval_to_rect(param_1,2,aRStack_48,"cc.ClippingRectangleNode:setClippingRegion");
    if ((uVar3 & 1) != 0) {
      cocos2d::ClippingRectangleNode::setClippingRegion(this,aRStack_48);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_008358ac;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ClippingRectangleNode_setClippingRegion\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ClippingRectangleNode:setClippingRegion",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_008358ac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

