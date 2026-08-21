
undefined8 FUN_008bd61c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_istable(param_1,1,0,auStack_38);
  if ((((iVar2 == 0) || (iVar2 = tolua_istable(param_1,2,0,auStack_38), iVar2 == 0)) ||
      (iVar2 = tolua_istable(param_1,3,0,auStack_38), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,auStack_38), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'drawSolidRect\'.",auStack_38);
  }
  else {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,1,(Vec2 *)&local_40,"cc.DrawPrimitives.drawSolidRect");
    if ((uVar3 & 1) != 0) {
      local_48 = 0;
      uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_48,"cc.DrawPrimitives.drawSolidRect");
      if ((uVar3 & 1) != 0) {
        cocos2d::Color4F::Color4F((Color4F *)&local_58);
        uVar3 = luaval_to_color4f(param_1,3,(Color4F *)&local_58,"cc.DrawPrimitives.drawSolidRect");
        if ((uVar3 & 1) != 0) {
          cocos2d::DrawPrimitives::drawSolidRect
                    ((undefined4)local_40,local_40._4_4_,(undefined4)local_48,local_48._4_4_,
                     local_58,uStack_54,local_50,uStack_4c);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

