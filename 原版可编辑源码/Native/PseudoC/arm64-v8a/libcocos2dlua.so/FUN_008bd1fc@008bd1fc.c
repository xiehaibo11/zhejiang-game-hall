
undefined8 FUN_008bd1fc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_40;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_istable(param_1,1,0,auStack_38);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_38), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'drawPoint\'.",auStack_38);
  }
  else {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,1,(Vec2 *)&local_40,"cc.DrawPrimitives.drawPoint");
    if ((uVar3 & 1) != 0) {
      cocos2d::DrawPrimitives::drawPoint((Vec2 *)&local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

