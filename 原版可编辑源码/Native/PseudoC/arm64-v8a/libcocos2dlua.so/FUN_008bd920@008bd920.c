
undefined8 FUN_008bd920(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Vec2 *__s;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  Vec2 *pVVar6;
  double dVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_istable(param_1,1,0,auStack_68);
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_68), iVar2 == 0)) ||
      (iVar2 = tolua_istable(param_1,3,0,auStack_68), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,auStack_68), iVar2 == 0)) {
LAB_008bdab4:
    tolua_error(param_1,"#ferror in function \'drawSolidPoly\'.",auStack_68);
  }
  else {
    dVar7 = (double)tolua_tonumber(0,param_1,2);
    uVar4 = (uint)dVar7;
    if (uVar4 != 0) {
      uVar5 = (ulong)uVar4 << 3;
      __s = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
      if (__s != (Vec2 *)0x0) {
        memset(__s,0,uVar5);
        uVar5 = 0;
        pVVar6 = __s;
        do {
          if (uVar4 == uVar5) {
            cocos2d::Color4F::Color4F((Color4F *)&local_78);
            uVar5 = luaval_to_color4f(param_1,3,(Color4F *)&local_78,
                                      "cc.DrawPrimitives.drawSolidPoly");
            if ((uVar5 & 1) != 0) {
              cocos2d::DrawPrimitives::drawSolidPoly
                        (local_78,uStack_74,local_70,uStack_6c,__s,uVar4);
            }
            break;
          }
          uVar5 = uVar5 + 1;
          lua_pushnumber((double)(int)uVar5,param_1);
          lua_gettable(param_1,1);
          iVar2 = tolua_istable(param_1,0xffffffff,0,auStack_68);
          if (iVar2 == 0) {
            operator_delete__(__s);
            goto LAB_008bdab4;
          }
          iVar2 = lua_gettop(param_1);
          uVar3 = luaval_to_vec2(param_1,iVar2,pVVar6,"cc.DrawPrimitives.drawSolidPoly");
          lua_settop(param_1,0xfffffffe);
          pVVar6 = pVVar6 + 8;
        } while ((uVar3 & 1) != 0);
        operator_delete__(__s);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

