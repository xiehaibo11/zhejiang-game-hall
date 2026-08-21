
/* lua_cocos2dx_DrawNode_drawCubicBezier(lua_State*) */

undefined4 lua_cocos2dx_DrawNode_drawCubicBezier(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DrawNode *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  Color4F aCStack_a0 [20];
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (DrawNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 6) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    cocos2d::Color4F::Color4F(aCStack_a0);
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&uStack_70,"cc.DrawNode:drawCubicBezier");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_78,"cc.DrawNode:drawCubicBezier");
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)&uStack_80,"cc.DrawNode:drawCubicBezier");
    uVar6 = luaval_to_vec2(param_1,5,(Vec2 *)&local_88,"cc.DrawNode:drawCubicBezier");
    uVar7 = luaval_to_uint32(param_1,6,&local_8c,"cc.DrawNode:drawCubicBezier");
    uVar8 = luaval_to_color4f(param_1,7,aCStack_a0,"cc.DrawNode:drawCubicBezier");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) &&
       ((((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0)))) {
      cocos2d::DrawNode::drawCubicBezier
                (this,(Vec2 *)&uStack_70,(Vec2 *)&local_78,(Vec2 *)&uStack_80,(Vec2 *)&local_88,
                 local_8c,aCStack_a0);
      uVar9 = 1;
      lua_settop(param_1,1);
      goto LAB_00837710;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_DrawNode_drawCubicBezier\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.DrawNode:drawCubicBezier",iVar2 + -1,6);
  }
  uVar9 = 0;
LAB_00837710:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

