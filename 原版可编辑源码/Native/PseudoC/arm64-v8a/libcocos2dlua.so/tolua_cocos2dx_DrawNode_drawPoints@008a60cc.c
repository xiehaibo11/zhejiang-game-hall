
/* tolua_cocos2dx_DrawNode_drawPoints(lua_State*) */

undefined8 tolua_cocos2dx_DrawNode_drawPoints(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  DrawNode *this;
  Vec2 *pVVar4;
  ulong uVar5;
  Vec2 *pVVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  Color4F aCStack_90 [20];
  uint local_7c;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (DrawNode *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 5) {
    luaval_to_uint32(param_1,3,&local_7c,"cc.DrawNode:drawPoints");
    uVar2 = local_7c;
    uVar7 = (ulong)local_7c;
    if (local_7c != 0) {
      pVVar4 = operator_new__(uVar7 << 3,(nothrow_t *)&std::nothrow);
      if (pVVar4 != (Vec2 *)0x0) {
        memset(pVVar4,0,uVar7 << 3);
        if (uVar2 != 0) {
          lVar8 = 0;
          uVar7 = 0;
          pVVar6 = pVVar4;
          do {
            uVar7 = uVar7 + 1;
            lua_pushnumber((double)(int)uVar7,param_1);
            lua_gettable(param_1,2);
            iVar3 = tolua_istable(param_1,0xffffffff,0,auStack_78);
            if ((pVVar4 != (Vec2 *)0x0) && (iVar3 == 0)) {
              operator_delete__(pVVar6);
              pVVar6 = (Vec2 *)0x0;
              pVVar4 = (Vec2 *)0x0;
            }
            iVar3 = lua_gettop(param_1);
            uVar5 = luaval_to_vec2(param_1,iVar3,pVVar4 + lVar8,"cc.DrawNode:drawPoints");
            lua_settop(param_1,0xfffffffe);
            if ((uVar5 & 1) == 0) {
              if (pVVar4 != (Vec2 *)0x0) {
                operator_delete__(pVVar6);
              }
              goto LAB_008a6324;
            }
            lVar8 = lVar8 + 8;
          } while (uVar7 < local_7c);
        }
        dVar9 = (double)tolua_tonumber(0,param_1,4);
        cocos2d::Color4F::Color4F(aCStack_90);
        uVar7 = luaval_to_color4f(param_1,5,aCStack_90,"cc.DrawNode:drawPoints");
        if ((uVar7 & 1) != 0) {
          cocos2d::DrawNode::drawPoints(this,pVVar4,local_7c,(float)dVar9,aCStack_90);
        }
      }
      goto LAB_008a6324;
    }
  }
  else if (iVar3 == 4) {
    luaval_to_uint32(param_1,3,&local_7c,"cc.DrawNode:drawPoints");
    uVar2 = local_7c;
    uVar7 = (ulong)local_7c;
    if (local_7c != 0) {
      pVVar4 = operator_new__(uVar7 << 3,(nothrow_t *)&std::nothrow);
      if (pVVar4 != (Vec2 *)0x0) {
        memset(pVVar4,0,uVar7 << 3);
        pVVar6 = pVVar4;
        if (uVar2 != 0) {
          lVar8 = 0;
          uVar7 = 0;
          do {
            uVar7 = uVar7 + 1;
            lua_pushnumber((double)(int)uVar7,param_1);
            lua_gettable(param_1,2);
            iVar3 = tolua_istable(param_1,0xffffffff,0,auStack_78);
            if ((pVVar6 != (Vec2 *)0x0) && (iVar3 == 0)) {
              operator_delete__(pVVar4);
              pVVar4 = (Vec2 *)0x0;
              pVVar6 = (Vec2 *)0x0;
            }
            iVar3 = lua_gettop(param_1);
            uVar5 = luaval_to_vec2(param_1,iVar3,pVVar6 + lVar8,"cc.DrawNode:drawPoints");
            lua_settop(param_1,0xfffffffe);
            if ((uVar5 & 1) == 0) {
              if (pVVar6 != (Vec2 *)0x0) {
                operator_delete__(pVVar4);
              }
              goto LAB_008a6324;
            }
            lVar8 = lVar8 + 8;
          } while (uVar7 < local_7c);
        }
        cocos2d::Color4F::Color4F(aCStack_90);
        uVar7 = luaval_to_color4f(param_1,4,aCStack_90,"cc.DrawNode:drawPoints");
        if ((uVar7 & 1) != 0) {
          cocos2d::DrawNode::drawPoints(this,pVVar6,local_7c,aCStack_90);
        }
      }
      goto LAB_008a6324;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.DrawNode:drawPoints",iVar3 + -1,3);
LAB_008a6324:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

