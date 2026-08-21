
/* lua_cocos2dx_Node_setAdditionalTransform(lua_State*) */

undefined4 lua_cocos2dx_Node_setAdditionalTransform(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Node *this;
  ulong uVar3;
  undefined4 uVar4;
  AffineTransform aAStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Node *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_affinetransform(param_1,2,aAStack_78,"cc.Node:setAdditionalTransform");
    if ((uVar3 & 1) != 0) {
      cocos2d::Node::setAdditionalTransform(this,aAStack_78);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_008a4dec;
    }
    cocos2d::Mat4::Mat4((Mat4 *)aAStack_78);
    uVar3 = luaval_to_mat4(param_1,2,(Mat4 *)aAStack_78,"cc.Node:setAdditionalTransform");
    if ((uVar3 & 1) != 0) {
      cocos2d::Node::setAdditionalTransform(this,(Mat4 *)aAStack_78);
      lua_settop(param_1,1);
      cocos2d::Mat4::~Mat4((Mat4 *)aAStack_78);
      uVar4 = 1;
      goto LAB_008a4dec;
    }
    cocos2d::Mat4::~Mat4((Mat4 *)aAStack_78);
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Node:setAdditionalTransform",iVar2 + -1,1);
  uVar4 = 0;
LAB_008a4dec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

