
/* lua_cocos2dx_Director_pushMatrix(lua_State*) */

undefined4 lua_cocos2dx_Director_pushMatrix(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Director *pDVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pDVar3 = (Director *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.Director:pushMatrix");
    if ((uVar4 & 1) != 0) {
      cocos2d::Director::pushMatrix(pDVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_007f3558;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Director_pushMatrix\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Director:pushMatrix",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_007f3558:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

