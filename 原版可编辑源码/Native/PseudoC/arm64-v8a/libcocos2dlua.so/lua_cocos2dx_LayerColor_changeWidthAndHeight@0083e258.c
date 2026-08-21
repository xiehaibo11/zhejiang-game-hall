
/* lua_cocos2dx_LayerColor_changeWidthAndHeight(lua_State*) */

undefined4 lua_cocos2dx_LayerColor_changeWidthAndHeight(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayerColor *this;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (LayerColor *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"cc.LayerColor:changeWidthAndHeight");
    uVar4 = luaval_to_number(param_1,3,&local_58,"cc.LayerColor:changeWidthAndHeight");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      cocos2d::LayerColor::changeWidthAndHeight(this,(float)dStack_50,(float)local_58);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0083e340;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_LayerColor_changeWidthAndHeight\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LayerColor:changeWidthAndHeight",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_0083e340:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

