
undefined8 FUN_008bdea0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  double dVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_istable(param_1,1,0,auStack_38);
  if ((((iVar2 == 0) || (iVar2 = tolua_istable(param_1,2,0,auStack_38), iVar2 == 0)) ||
      (iVar2 = tolua_istable(param_1,3,0,auStack_38), iVar2 == 0)) ||
     ((iVar2 = tolua_isnumber(param_1,4,0,auStack_38), iVar2 == 0 ||
      (iVar2 = tolua_isnoobj(param_1,5,auStack_38), iVar2 == 0)))) {
    tolua_error(param_1,"#ferror in function \'drawQuadBezier\'.",auStack_38);
  }
  else {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,1,(Vec2 *)&local_40,"cc.DrawPrimitives.drawQuadBezier");
    if ((uVar3 & 1) != 0) {
      local_48 = 0;
                    /* try { // try from 008bdf68 to 009bdf93 has its CatchHandler @ 008bdf68
                       catch() { ... } // from try @ 008bdf68 with catch @ 008bdf68
                       catch() { ... } // from try @ 008be1fc with catch @ 008bdf68 */
      uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_48,"cc.DrawPrimitives.drawQuadBezier");
      if ((uVar3 & 1) != 0) {
        local_50 = 0;
        uVar3 = luaval_to_vec2(param_1,3,(Vec2 *)&local_50,"cc.DrawPrimitives.drawQuadBezier");
        if ((uVar3 & 1) != 0) {
                    /* try { // try from 008bdf94 to 009be1fb has its CatchHandler @ 008be220 */
          dVar4 = (double)tolua_tonumber(0,param_1,4);
          cocos2d::DrawPrimitives::drawQuadBezier
                    ((Vec2 *)&local_40,(Vec2 *)&local_48,(Vec2 *)&local_50,(int)dVar4);
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

