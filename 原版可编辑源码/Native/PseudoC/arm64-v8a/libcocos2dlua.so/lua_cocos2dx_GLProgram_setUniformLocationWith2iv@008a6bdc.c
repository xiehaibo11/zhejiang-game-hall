
/* lua_cocos2dx_GLProgram_setUniformLocationWith2iv(lua_State*) */

undefined4 lua_cocos2dx_GLProgram_setUniformLocationWith2iv(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLProgram *this;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint local_50;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GLProgram *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"cc.GLProgram:setUniformLocationWith2iv");
    uVar4 = luaval_to_uint32(param_1,4,&local_50,"cc.GLProgram:setUniformLocationWith2iv");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
      pcVar6 = "Parse params error in the lua_cocos2dx_GLProgram_setUniformLocationWith2iv";
    }
    else {
      piVar5 = operator_new__((ulong)local_50 << 5,(nothrow_t *)&std::nothrow);
      if (piVar5 != (int *)0x0) {
        cocos2d::GLProgram::setUniformLocationWith2iv(this,local_4c,piVar5,local_50);
        operator_delete__(piVar5);
        uVar7 = 1;
        lua_settop(param_1,1);
        goto LAB_008a6cf0;
      }
      pcVar6 = "Allocate intArray in the lua_cocos2dx_GLProgram_setUniformLocationWith2iv failed!";
    }
    luaL_error(param_1,pcVar6);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLProgram:setUniformLocationWith2iv",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_008a6cf0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

