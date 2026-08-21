
undefined8 FUN_008bdce8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 local_70;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_istable(param_1,1,0,auStack_68);
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_68), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_68), iVar2 == 0)) ||
     (((iVar2 = tolua_isnumber(param_1,4,0,auStack_68), iVar2 == 0 ||
       (iVar2 = tolua_isnumber(param_1,5,1,auStack_68), iVar2 == 0)) ||
      ((iVar2 = tolua_isnumber(param_1,6,1,auStack_68), iVar2 == 0 ||
       (iVar2 = tolua_isnoobj(param_1,7,auStack_68), iVar2 == 0)))))) {
    tolua_error(param_1,"#ferror in function \'drawSolidCircle\'.",auStack_68);
  }
  else {
    local_70 = 0;
    uVar3 = luaval_to_vec2(param_1,1,(Vec2 *)&local_70,"cc.DrawPrimitives.drawSolidCircle");
    if ((uVar3 & 1) != 0) {
      dVar4 = (double)tolua_tonumber(0,param_1,2);
                    /* try { // try from 008bdde4 to 009bde53 has its CatchHandler @ 008bb8d4 */
      dVar5 = (double)tolua_tonumber(0,param_1,3);
      dVar6 = (double)tolua_tonumber(0,param_1,4);
                    /* catch() { ... } // from try @ 008bb900 with catch @ 008bde1c */
      dVar7 = (double)tolua_tonumber(0x3ff0000000000000,param_1,5);
      dVar8 = (double)tolua_tonumber(0x3ff0000000000000,param_1,6);
      cocos2d::DrawPrimitives::drawSolidCircle
                ((Vec2 *)&local_70,(float)dVar4,(float)dVar5,(int)dVar6,(float)dVar7,(float)dVar8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

