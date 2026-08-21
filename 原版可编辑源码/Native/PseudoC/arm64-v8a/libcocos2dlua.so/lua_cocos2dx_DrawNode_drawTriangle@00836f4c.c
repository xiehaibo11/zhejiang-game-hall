
/* lua_cocos2dx_DrawNode_drawTriangle(lua_State*) */

undefined4 lua_cocos2dx_DrawNode_drawTriangle(lua_State *param_1)

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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (DrawNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    cocos2d::Color4F::Color4F(aCStack_80);
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&uStack_60,"cc.DrawNode:drawTriangle");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_68,"cc.DrawNode:drawTriangle");
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)&local_70,"cc.DrawNode:drawTriangle");
    uVar6 = luaval_to_color4f(param_1,5,aCStack_80,"cc.DrawNode:drawTriangle");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      cocos2d::DrawNode::drawTriangle
                (this,(Vec2 *)&uStack_60,(Vec2 *)&local_68,(Vec2 *)&local_70,aCStack_80);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_00837088;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_DrawNode_drawTriangle\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.DrawNode:drawTriangle",iVar2 + -1,4);
  }
  uVar7 = 0;
LAB_00837088:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

