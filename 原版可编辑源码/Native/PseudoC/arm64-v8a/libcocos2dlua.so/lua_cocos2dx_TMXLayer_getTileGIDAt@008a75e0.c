
/* lua_cocos2dx_TMXLayer_getTileGIDAt(lua_State*) */

void lua_cocos2dx_TMXLayer_getTileGIDAt(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  TMXLayer *this;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  double dVar7;
  int local_54;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (TMXLayer *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_50 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,"cc.TMXLayer:getTileGIDAt");
    uVar6 = luaval_to_int32(param_1,3,&local_54,"cc.TMXLayer:getTileGIDAt");
    uVar5 = 0;
    if (((uVar4 & 1) == 0) || ((uVar6 & 1) == 0)) goto LAB_008a7720;
    uVar3 = cocos2d::TMXLayer::getTileGIDAt(this,(Vec2 *)&local_50,(TMXTileFlags_ *)&local_54);
    tolua_pushnumber((double)uVar3,param_1);
    dVar7 = (double)(long)local_54;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.TMXLayer:getTileGIDAt",iVar2 + -1,1);
      uVar5 = 0;
      goto LAB_008a7720;
    }
    local_50 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,"cc.TMXLayer:getTileGIDAt");
    uVar5 = 0;
    if ((uVar4 & 1) == 0) goto LAB_008a7720;
    uVar3 = cocos2d::TMXLayer::getTileGIDAt(this,(Vec2 *)&local_50,(TMXTileFlags_ *)0x0);
    tolua_pushnumber((double)uVar3,param_1);
    dVar7 = 0.0;
  }
  tolua_pushnumber(dVar7,param_1);
  uVar5 = 2;
LAB_008a7720:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

