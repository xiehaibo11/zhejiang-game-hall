
/* lua_cocos2dx_DrawNode_drawQuadBezier(lua_State*) */

undefined4 lua_cocos2dx_DrawNode_drawQuadBezier(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DrawNode *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  Color4F aCStack_88 [20];
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (DrawNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 5) {
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    cocos2d::Color4F::Color4F(aCStack_88);
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&uStack_60,"cc.DrawNode:drawQuadBezier");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_68,"cc.DrawNode:drawQuadBezier");
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)&local_70,"cc.DrawNode:drawQuadBezier");
    uVar6 = luaval_to_uint32(param_1,5,&local_74,"cc.DrawNode:drawQuadBezier");
    uVar7 = luaval_to_color4f(param_1,6,aCStack_88,"cc.DrawNode:drawQuadBezier");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) &&
       (((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)))) {
      cocos2d::DrawNode::drawQuadBezier
                (this,(Vec2 *)&uStack_60,(Vec2 *)&local_68,(Vec2 *)&local_70,local_74,aCStack_88);
      uVar8 = 1;
      lua_settop(param_1,1);
      goto LAB_00836ddc;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_DrawNode_drawQuadBezier\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.DrawNode:drawQuadBezier",iVar2 + -1,5);
  }
  uVar8 = 0;
LAB_00836ddc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

