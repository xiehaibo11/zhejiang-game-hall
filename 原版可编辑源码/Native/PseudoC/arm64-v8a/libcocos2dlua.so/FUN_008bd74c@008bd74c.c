
undefined8 FUN_008bd74c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Vec2 *__s;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  Vec2 *pVVar7;
  double dVar8;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_istable(param_1,1,0,auStack_78);
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_78), iVar2 == 0)) ||
      (iVar2 = tolua_isboolean(param_1,3,0,auStack_78), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,auStack_78), iVar2 == 0)) {
LAB_008bd8d4:
    tolua_error(param_1,"#ferror in function \'ccDrawPoly\'.",auStack_78);
  }
  else {
    dVar8 = (double)tolua_tonumber(0,param_1,2);
    uVar5 = (uint)dVar8;
    iVar2 = tolua_toboolean(param_1,3,0);
    if (uVar5 != 0) {
      uVar6 = (ulong)uVar5 << 3;
      __s = operator_new__(uVar6,(nothrow_t *)&std::nothrow);
      if (__s != (Vec2 *)0x0) {
        memset(__s,0,uVar6);
        uVar6 = 0;
        pVVar7 = __s;
        do {
          if (uVar5 == uVar6) {
            cocos2d::DrawPrimitives::drawPoly(__s,uVar5,iVar2 != 0);
            break;
          }
          uVar6 = uVar6 + 1;
          lua_pushnumber((double)(int)uVar6,param_1);
          lua_gettable(param_1,1);
          iVar3 = tolua_istable(param_1,0xffffffff,0,auStack_78);
          if (iVar3 == 0) {
            operator_delete__(__s);
            goto LAB_008bd8d4;
          }
          iVar3 = lua_gettop(param_1);
          uVar4 = luaval_to_vec2(param_1,iVar3,pVVar7,"cc.DrawPrimitives.drawPoly");
          lua_settop(param_1,0xfffffffe);
          pVVar7 = pVVar7 + 8;
        } while ((uVar4 & 1) != 0);
        operator_delete__(__s);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

