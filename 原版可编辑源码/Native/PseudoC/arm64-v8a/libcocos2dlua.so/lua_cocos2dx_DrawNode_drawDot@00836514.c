
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_DrawNode_drawDot(lua_State*) */

undefined4 lua_cocos2dx_DrawNode_drawDot(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DrawNode *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  Color4F aCStack_68 [16];
  double local_58 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (DrawNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    local_58[1] = 0.0;
    cocos2d::Color4F::Color4F(aCStack_68);
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)(local_58 + 1),"cc.DrawNode:drawDot");
    uVar4 = luaval_to_number(param_1,3,local_58,"cc.DrawNode:drawDot");
    uVar5 = luaval_to_color4f(param_1,4,aCStack_68,"cc.DrawNode:drawDot");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      cocos2d::DrawNode::drawDot(this,(Vec2 *)(local_58 + 1),(float)local_58[0],aCStack_68);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_00836628;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_DrawNode_drawDot\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.DrawNode:drawDot",iVar2 + -1,3);
  }
  uVar6 = 0;
LAB_00836628:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

