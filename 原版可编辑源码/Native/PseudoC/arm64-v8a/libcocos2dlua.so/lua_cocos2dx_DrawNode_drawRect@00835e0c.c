
/* lua_cocos2dx_DrawNode_drawRect(lua_State*) */

undefined4 lua_cocos2dx_DrawNode_drawRect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DrawNode *this;
  ulong uVar3;
  undefined4 uVar4;
  Color4F aCStack_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (DrawNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"cc.DrawNode:drawRect");
    if ((uVar3 & 1) != 0) {
      local_48 = 0;
      uVar3 = luaval_to_vec2(param_1,3,(Vec2 *)&local_48,"cc.DrawNode:drawRect");
      if ((uVar3 & 1) != 0) {
        cocos2d::Color4F::Color4F(aCStack_68);
        uVar3 = luaval_to_color4f(param_1,4,aCStack_68,"cc.DrawNode:drawRect");
        if ((uVar3 & 1) != 0) {
          cocos2d::DrawNode::drawRect(this,(Vec2 *)&local_40,(Vec2 *)&local_48,aCStack_68);
          uVar4 = 1;
          lua_settop(param_1,1);
          goto LAB_00835ff4;
        }
      }
    }
  }
  else if (iVar2 == 6) {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"cc.DrawNode:drawRect");
    if ((uVar3 & 1) != 0) {
      local_48 = 0;
      uVar3 = luaval_to_vec2(param_1,3,(Vec2 *)&local_48,"cc.DrawNode:drawRect");
      if ((uVar3 & 1) != 0) {
        local_50 = 0;
        uVar3 = luaval_to_vec2(param_1,4,(Vec2 *)&local_50,"cc.DrawNode:drawRect");
        if ((uVar3 & 1) != 0) {
          local_58 = 0;
          uVar3 = luaval_to_vec2(param_1,5,(Vec2 *)&local_58,"cc.DrawNode:drawRect");
          if ((uVar3 & 1) != 0) {
            cocos2d::Color4F::Color4F(aCStack_68);
            uVar3 = luaval_to_color4f(param_1,6,aCStack_68,"cc.DrawNode:drawRect");
            if ((uVar3 & 1) != 0) {
              cocos2d::DrawNode::drawRect
                        (this,(Vec2 *)&local_40,(Vec2 *)&local_48,(Vec2 *)&local_50,
                         (Vec2 *)&local_58,aCStack_68);
              lua_settop(param_1,1);
              uVar4 = 1;
              goto LAB_00835ff4;
            }
          }
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.DrawNode:drawRect",iVar2 + -1,3);
  uVar4 = 0;
LAB_00835ff4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

