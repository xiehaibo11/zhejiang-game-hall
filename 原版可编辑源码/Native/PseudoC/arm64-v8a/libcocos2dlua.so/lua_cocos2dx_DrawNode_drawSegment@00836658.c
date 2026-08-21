
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_DrawNode_drawSegment(lua_State*) */

undefined4 lua_cocos2dx_DrawNode_drawSegment(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DrawNode *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  Color4F aCStack_80 [16];
  double local_70 [3];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (DrawNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    local_70[1] = 0.0;
    local_70[2] = 0.0;
    cocos2d::Color4F::Color4F(aCStack_80);
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)(local_70 + 2),"cc.DrawNode:drawSegment");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)(local_70 + 1),"cc.DrawNode:drawSegment");
    uVar5 = luaval_to_number(param_1,4,local_70,"cc.DrawNode:drawSegment");
    uVar6 = luaval_to_color4f(param_1,5,aCStack_80,"cc.DrawNode:drawSegment");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      cocos2d::DrawNode::drawSegment
                (this,(Vec2 *)(local_70 + 2),(Vec2 *)(local_70 + 1),(float)local_70[0],aCStack_80);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_00836794;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_DrawNode_drawSegment\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.DrawNode:drawSegment",iVar2 + -1,4);
  }
  uVar7 = 0;
LAB_00836794:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

