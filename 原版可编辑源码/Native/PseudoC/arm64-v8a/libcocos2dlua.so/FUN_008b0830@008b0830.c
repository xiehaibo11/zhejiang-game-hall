
undefined8 FUN_008b0830(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DrawNode *this;
  Vec2 *__s;
  ulong uVar3;
  ulong uVar4;
  Vec2 *pVVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  Color4F aCStack_a8 [16];
  Color4F aCStack_98 [16];
  undefined1 auStack_88 [16];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (param_1 != (lua_State *)0x0) {
    this = (DrawNode *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 5) {
      dVar8 = (double)lua_tonumber(param_1,3);
      uVar4 = (ulong)dVar8;
      if (uVar4 != 0) {
        uVar7 = uVar4 << 3;
        if (uVar4 >> 0x3d != 0) {
          uVar7 = 0xffffffffffffffff;
        }
        __s = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
        if (__s != (Vec2 *)0x0) {
          memset(__s,0,uVar4 << 3);
          lVar6 = 0;
          uVar7 = 0;
          pVVar5 = __s;
          if (uVar4 != 0) {
            do {
              uVar7 = uVar7 + 1;
              lua_pushnumber((double)(int)uVar7,param_1);
              lua_gettable(param_1,2);
              iVar2 = tolua_istable(param_1,0xffffffff,0,auStack_88);
              if ((pVVar5 != (Vec2 *)0x0) && (iVar2 == 0)) {
                operator_delete__(__s);
                __s = (Vec2 *)0x0;
                pVVar5 = (Vec2 *)0x0;
              }
              iVar2 = lua_gettop(param_1);
              uVar3 = luaval_to_vec2(param_1,iVar2,pVVar5 + lVar6,"cc.DrawNode:drawPolygon");
              lua_settop(param_1,0xfffffffe);
              lVar6 = lVar6 + 8;
              if ((uVar3 & 1) == 0) goto LAB_008b0a44;
            } while (uVar4 != uVar7);
          }
          cocos2d::Color4F::Color4F(aCStack_98);
          uVar7 = luaval_to_color4f(param_1,4,aCStack_98,"cc.DrawNode:drawPolygon");
          if ((uVar7 & 1) != 0) {
            dVar8 = (double)tolua_tonumber(0,param_1,5);
            cocos2d::Color4F::Color4F(aCStack_a8);
            uVar7 = luaval_to_color4f(param_1,6,aCStack_a8,"cc.DrawNode:drawPolygon");
            if ((uVar7 & 1) != 0) {
              cocos2d::DrawNode::drawPolygon
                        (this,pVVar5,(int)uVar4,aCStack_98,(float)dVar8,aCStack_a8);
            }
          }
LAB_008b0a44:
          if (pVVar5 != (Vec2 *)0x0) {
            operator_delete__(__s);
          }
        }
        goto LAB_008b0994;
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.DrawNode:drawPolygon",iVar2 + -1,5);
  }
LAB_008b0994:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

