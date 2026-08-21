
/* lua_cocos2dx_GLProgram_setUniformLocationWith1i(lua_State*) */

undefined4 lua_cocos2dx_GLProgram_setUniformLocationWith1i(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLProgram *this;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GLProgram *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_int32(param_1,2,&iStack_4c,"cc.GLProgram:setUniformLocationWith1i");
    uVar4 = luaval_to_int32(param_1,3,&local_50,"cc.GLProgram:setUniformLocationWith1i");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      cocos2d::GLProgram::setUniformLocationWith1i(this,iStack_4c,local_50);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0086d048;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_GLProgram_setUniformLocationWith1i\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLProgram:setUniformLocationWith1i",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_0086d048:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

