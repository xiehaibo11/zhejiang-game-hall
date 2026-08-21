
/* tolua_cocos2d_DrawPrimitives_drawCatmullRom00(lua_State*) */

undefined8 tolua_cocos2d_DrawPrimitives_drawCatmullRom00(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  PointArray *this;
  long lVar4;
  long lVar5;
  double dVar6;
  Vec2 *local_68;
  int local_5c;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_istable(param_1,1,0,auStack_58);
  if (((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_58), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,auStack_58), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'drawCatmullRom\'.",auStack_58);
  }
  else {
    local_5c = 0;
    local_68 = (Vec2 *)0x0;
    uVar3 = luaval_to_array_of_vec2
                      (param_1,1,&local_68,&local_5c,"cc.DrawPrimitives.drawCatmullRom");
    if ((uVar3 & 1) != 0) {
      this = (PointArray *)cocos2d::PointArray::create((long)local_5c);
      if (this == (PointArray *)0x0) {
        if (local_68 != (Vec2 *)0x0) {
          operator_delete__(local_68);
          local_68 = (Vec2 *)0x0;
        }
      }
      else {
        if (0 < local_5c) {
          lVar4 = 0;
          lVar5 = 0;
          do {
            cocos2d::PointArray::addControlPoint(this,local_68 + lVar4);
            lVar5 = lVar5 + 1;
            lVar4 = lVar4 + 8;
          } while (lVar5 < local_5c);
        }
        if (local_68 != (Vec2 *)0x0) {
          operator_delete__(local_68);
          local_68 = (Vec2 *)0x0;
        }
        dVar6 = (double)tolua_tonumber(0,param_1,2);
        cocos2d::DrawPrimitives::drawCatmullRom(this,(int)dVar6);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

