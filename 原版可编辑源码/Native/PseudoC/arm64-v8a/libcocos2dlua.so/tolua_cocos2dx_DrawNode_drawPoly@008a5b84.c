
/* tolua_cocos2dx_DrawNode_drawPoly(lua_State*) */

undefined8 tolua_cocos2dx_DrawNode_drawPoly(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  DrawNode *this;
  Vec2 *__s;
  ulong uVar4;
  Vec2 *pVVar5;
  ulong uVar6;
  long lVar7;
  Color4F aCStack_90 [16];
  bool local_80 [4];
  uint local_7c;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 != (lua_State *)0x0) {
    this = (DrawNode *)tolua_tousertype(param_1,1,0);
    iVar3 = lua_gettop(param_1);
    if (iVar3 + -1 == 4) {
      luaval_to_uint32(param_1,3,&local_7c,"cc.DrawNode:drawPoly");
      uVar2 = local_7c;
      uVar6 = (ulong)local_7c;
      if (local_7c != 0) {
        __s = operator_new__(uVar6 << 3,(nothrow_t *)&std::nothrow);
        if (__s != (Vec2 *)0x0) {
          memset(__s,0,uVar6 << 3);
          pVVar5 = __s;
          if (uVar2 != 0) {
            lVar7 = 0;
            uVar6 = 0;
            do {
              uVar6 = uVar6 + 1;
              lua_pushnumber((double)(int)uVar6,param_1);
              lua_gettable(param_1,2);
              iVar3 = tolua_istable(param_1,0xffffffff,0,auStack_78);
              if ((pVVar5 != (Vec2 *)0x0) && (iVar3 == 0)) {
                operator_delete__(__s);
                __s = (Vec2 *)0x0;
                pVVar5 = (Vec2 *)0x0;
              }
              iVar3 = lua_gettop(param_1);
              uVar4 = luaval_to_vec2(param_1,iVar3,pVVar5 + lVar7,"cc.DrawNode:drawPoly");
              lua_settop(param_1,0xfffffffe);
              if ((uVar4 & 1) == 0) goto LAB_008a5d7c;
              lVar7 = lVar7 + 8;
            } while (uVar6 < local_7c);
          }
          cocos2d::Color4F::Color4F(aCStack_90);
          uVar6 = luaval_to_boolean(param_1,4,local_80,"cc.DrawNode:drawPoly");
          uVar4 = luaval_to_color4f(param_1,5,aCStack_90,"cc.DrawNode:drawPoly");
          if (((uVar6 & 1) != 0) && ((uVar4 & 1) != 0)) {
            cocos2d::DrawNode::drawPoly(this,pVVar5,local_7c,local_80[0],aCStack_90);
LAB_008a5d7c:
            if (pVVar5 != (Vec2 *)0x0) {
              operator_delete__(__s);
            }
          }
        }
        goto LAB_008a5ce8;
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.DrawNode:drawPoly",iVar3 + -1,4);
  }
LAB_008a5ce8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

