
/* lua_cocos2dx_extension_ScrollView_setContentOffset(lua_State*) */

undefined4 lua_cocos2dx_extension_ScrollView_setContentOffset(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  bool local_54 [4];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_50 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,"cc.ScrollView:setContentOffset");
    uVar5 = luaval_to_boolean(param_1,3,local_54,"cc.ScrollView:setContentOffset");
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_009ab58c:
      tolua_error(param_1,&DAT_012e6f09,0);
      goto LAB_009ab5c4;
    }
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.ScrollView:setContentOffset",iVar2 + -1,1);
LAB_009ab5c4:
      uVar6 = 0;
      goto LAB_009ab5c8;
    }
    local_50 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,"cc.ScrollView:setContentOffset");
    if ((uVar4 & 1) == 0) goto LAB_009ab58c;
    local_54[0] = false;
  }
  cocos2d::extension::ScrollView::setContentOffset
            ((undefined4)local_50,local_50._4_4_,uVar3,local_54[0]);
  uVar6 = 1;
  lua_settop(param_1,1);
LAB_009ab5c8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

