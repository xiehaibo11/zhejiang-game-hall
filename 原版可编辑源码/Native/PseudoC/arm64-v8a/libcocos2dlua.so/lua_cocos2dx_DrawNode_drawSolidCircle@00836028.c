
/* WARNING: Removing unreachable block (ram,0x008362e4) */
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_DrawNode_drawSolidCircle(lua_State*) */

void lua_cocos2dx_DrawNode_drawSolidCircle(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DrawNode *this;
  ulong uVar3;
  undefined8 uVar4;
  double local_88;
  undefined8 local_80;
  uint local_74;
  Color4F aCStack_70 [16];
  double local_60;
  double adStack_58 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (DrawNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 8) {
    adStack_58[1] = 0.0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)(adStack_58 + 1),"cc.DrawNode:drawSolidCircle");
    if ((((((uVar3 & 1) != 0) &&
          (uVar3 = luaval_to_number(param_1,3,adStack_58,"cc.DrawNode:drawSolidCircle"),
          (uVar3 & 1) != 0)) &&
         (uVar3 = luaval_to_number(param_1,4,&local_60,"cc.DrawNode:drawSolidCircle"),
         (uVar3 & 1) != 0)) &&
        ((uVar3 = luaval_to_uint32(param_1,5,&local_74,"cc.DrawNode:drawSolidCircle"),
         (uVar3 & 1) != 0 &&
         (uVar3 = luaval_to_number(param_1,6,(double *)&local_80,"cc.DrawNode:drawSolidCircle"),
         (uVar3 & 1) != 0)))) &&
       (uVar3 = luaval_to_number(param_1,7,&local_88,"cc.DrawNode:drawSolidCircle"),
       (uVar3 & 1) != 0)) {
      cocos2d::Color4F::Color4F(aCStack_70);
      uVar3 = luaval_to_color4f(param_1,8,aCStack_70,"cc.DrawNode:drawSolidCircle");
      if ((uVar3 & 1) != 0) {
        cocos2d::DrawNode::drawSolidCircle
                  (this,(Vec2 *)(adStack_58 + 1),(float)adStack_58[0],(float)local_60,local_74,
                   (float)(double)CONCAT44(local_80._4_4_,(uint)local_80),(float)local_88,aCStack_70
                  );
        lua_settop(param_1,1);
LAB_00836278:
        uVar4 = 1;
        goto LAB_008362b0;
      }
    }
  }
  else if (iVar2 == 6) {
    adStack_58[1] = 0.0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)(adStack_58 + 1),"cc.DrawNode:drawSolidCircle");
    if ((((uVar3 & 1) != 0) &&
        (uVar3 = luaval_to_number(param_1,3,adStack_58,"cc.DrawNode:drawSolidCircle"),
        (uVar3 & 1) != 0)) &&
       ((uVar3 = luaval_to_number(param_1,4,&local_60,"cc.DrawNode:drawSolidCircle"),
        (uVar3 & 1) != 0 &&
        (uVar3 = luaval_to_uint32(param_1,5,(uint *)&local_80,"cc.DrawNode:drawSolidCircle"),
        (uVar3 & 1) != 0)))) {
      cocos2d::Color4F::Color4F(aCStack_70);
      uVar3 = luaval_to_color4f(param_1,6,aCStack_70,"cc.DrawNode:drawSolidCircle");
      if ((uVar3 & 1) != 0) {
        cocos2d::DrawNode::drawSolidCircle
                  (this,(Vec2 *)(adStack_58 + 1),(float)adStack_58[0],(float)local_60,(uint)local_80
                   ,aCStack_70);
        lua_settop(param_1,1);
        goto LAB_00836278;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.DrawNode:drawSolidCircle",iVar2 + -1,7);
  uVar4 = 0;
LAB_008362b0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

