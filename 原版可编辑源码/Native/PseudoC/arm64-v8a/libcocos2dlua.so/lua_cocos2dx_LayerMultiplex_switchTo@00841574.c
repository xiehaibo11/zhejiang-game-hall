
/* lua_cocos2dx_LayerMultiplex_switchTo(lua_State*) */

undefined4 lua_cocos2dx_LayerMultiplex_switchTo(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayerMultiplex *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_40 [4];
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LayerMultiplex *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.LayerMultiplex:switchTo");
    if ((uVar3 & 1) == 0) goto LAB_0084164c;
    cocos2d::LayerMultiplex::switchTo(this,local_3c);
  }
  else {
    if (((iVar2 != 3) ||
        (uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.LayerMultiplex:switchTo"), (uVar3 & 1) == 0
        )) || (uVar3 = luaval_to_boolean(param_1,3,local_40,"cc.LayerMultiplex:switchTo"),
              (uVar3 & 1) == 0)) {
LAB_0084164c:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.LayerMultiplex:switchTo",iVar2 + -1,1);
      uVar4 = 0;
      goto LAB_00841670;
    }
    cocos2d::LayerMultiplex::switchTo(this,local_3c,local_40[0]);
  }
  uVar4 = 1;
  lua_settop(param_1,1);
LAB_00841670:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

