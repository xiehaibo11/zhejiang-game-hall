
void FUN_008abc28(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  float local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_50[0] = 0.0;
    local_50[1] = 0.0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uVar4 = luaval_to_vec2(param_1,1,(Vec2 *)&uStack_30,"");
    uVar5 = 0;
    if ((uVar4 & 1) == 0) goto LAB_008abd50;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_38,"");
    if ((((uVar4 & 1) == 0) ||
        (uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&uStack_40,""), (uVar4 & 1) == 0)) ||
       (uVar4 = luaval_to_vec2(param_1,4,(Vec2 *)&local_48,""), (uVar4 & 1) == 0)) {
      uVar5 = 0;
      goto LAB_008abd50;
    }
    uVar3 = cocos2d::Vec2::isLineIntersect
                      ((Vec2 *)&uStack_30,(Vec2 *)&local_38,(Vec2 *)&uStack_40,(Vec2 *)&local_48,
                       local_50 + 1,local_50);
    lua_pushboolean(param_1,uVar3 & 1);
    lua_pushnumber((double)local_50[1],param_1);
    dVar6 = (double)local_50[0];
  }
  else {
    lua_pushboolean(param_1,0);
    lua_pushnumber(0,param_1);
    dVar6 = 0.0;
  }
  lua_pushnumber(dVar6,param_1);
  uVar5 = 3;
LAB_008abd50:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

