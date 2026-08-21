
/* lua_cocos2dx_Director_mainLoop(lua_State*) */

undefined4 lua_cocos2dx_Director_mainLoop(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Director *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Director *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    cocos2d::Director::mainLoop(this);
  }
  else {
    if ((iVar2 != 2) ||
       (uVar3 = luaval_to_number(param_1,2,&local_40,"cc.Director:mainLoop"), (uVar3 & 1) == 0)) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Director:mainLoop",iVar2 + -1,0);
      uVar4 = 0;
      goto LAB_007f3138;
    }
    cocos2d::Director::mainLoop(this,(float)local_40);
  }
  uVar4 = 1;
  lua_settop(param_1,1);
LAB_007f3138:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

