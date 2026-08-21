
/* tolua_cocos2dx_DrawNode_drawCardinalSpline(lua_State*) */

undefined8 tolua_cocos2dx_DrawNode_drawCardinalSpline(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DrawNode *this;
  ulong uVar3;
  PointArray *this_00;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  Color4F aCStack_88 [20];
  uint local_74;
  double local_70;
  Vec2 *local_68;
  int local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (DrawNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    local_5c = 0;
    local_68 = (Vec2 *)0x0;
    uVar3 = luaval_to_array_of_vec2(param_1,2,&local_68,&local_5c,"cc.DrawNode:drawCardinalSpline");
    if ((uVar3 & 1) != 0) {
      this_00 = (PointArray *)cocos2d::PointArray::create((long)local_5c);
      if (this_00 == (PointArray *)0x0) {
        if (local_68 != (Vec2 *)0x0) {
          operator_delete__(local_68);
          local_68 = (Vec2 *)0x0;
        }
      }
      else {
        if (0 < local_5c) {
          lVar6 = 0;
          lVar7 = 0;
          do {
            cocos2d::PointArray::addControlPoint(this_00,local_68 + lVar6);
            lVar7 = lVar7 + 1;
            lVar6 = lVar6 + 8;
          } while (lVar7 < local_5c);
        }
        if (local_68 != (Vec2 *)0x0) {
          operator_delete__(local_68);
          local_68 = (Vec2 *)0x0;
        }
        cocos2d::Color4F::Color4F(aCStack_88);
        uVar3 = luaval_to_number(param_1,3,&local_70,"cc.DrawNode:drawCardinalSpline");
        uVar4 = luaval_to_uint32(param_1,4,&local_74,"cc.DrawNode:drawCardinalSpline");
        uVar5 = luaval_to_color4f(param_1,5,aCStack_88,"cc.DrawNode:drawCardinalSpline");
        if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
          cocos2d::DrawNode::drawCardinalSpline(this,this_00,(float)local_70,local_74,aCStack_88);
        }
      }
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.DrawNode:drawCardinalSpline",iVar2 + -1,4);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

