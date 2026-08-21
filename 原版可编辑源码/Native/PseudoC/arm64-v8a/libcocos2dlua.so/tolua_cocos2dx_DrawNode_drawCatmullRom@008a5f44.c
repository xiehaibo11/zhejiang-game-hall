
/* tolua_cocos2dx_DrawNode_drawCatmullRom(lua_State*) */

undefined8 tolua_cocos2dx_DrawNode_drawCatmullRom(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DrawNode *this;
  ulong uVar3;
  PointArray *this_00;
  ulong uVar4;
  long lVar5;
  long lVar6;
  Color4F aCStack_70 [20];
  uint local_5c;
  Vec2 *local_58;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (DrawNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    local_4c = 0;
    local_58 = (Vec2 *)0x0;
    uVar3 = luaval_to_array_of_vec2(param_1,2,&local_58,&local_4c,"cc.DrawNode:drawCatmullRom");
    if ((uVar3 & 1) != 0) {
      this_00 = (PointArray *)cocos2d::PointArray::create((long)local_4c);
      if (this_00 == (PointArray *)0x0) {
        if (local_58 != (Vec2 *)0x0) {
          operator_delete__(local_58);
          local_58 = (Vec2 *)0x0;
        }
      }
      else {
        if (0 < local_4c) {
          lVar5 = 0;
          lVar6 = 0;
          do {
            cocos2d::PointArray::addControlPoint(this_00,local_58 + lVar5);
            lVar6 = lVar6 + 1;
            lVar5 = lVar5 + 8;
          } while (lVar6 < local_4c);
        }
        if (local_58 != (Vec2 *)0x0) {
          operator_delete__(local_58);
          local_58 = (Vec2 *)0x0;
        }
        cocos2d::Color4F::Color4F(aCStack_70);
        uVar3 = luaval_to_uint32(param_1,3,&local_5c,"cc.DrawNode:drawCatmullRom");
        uVar4 = luaval_to_color4f(param_1,4,aCStack_70,"cc.DrawNode:drawCatmullRom");
        if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
          cocos2d::DrawNode::drawCatmullRom(this,this_00,local_5c,aCStack_70);
        }
      }
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.DrawNode:drawCatmullRom",iVar2 + -1,3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

