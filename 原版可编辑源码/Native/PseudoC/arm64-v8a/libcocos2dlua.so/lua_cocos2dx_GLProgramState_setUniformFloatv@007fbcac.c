
/* lua_cocos2dx_GLProgramState_setUniformFloatv(lua_State*) */

undefined8 lua_cocos2dx_GLProgramState_setUniformFloatv(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lStack_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar3 = luaval_to_int32(param_1,2,(int *)&lStack_58,"cc.GLProgramState:setUniformFloatv");
    if ((uVar3 & 1) != 0) {
      luaval_to_ssize(param_1,3,(long *)local_50,"cc.GLProgramState:setUniformFloatv");
    }
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_50,"cc.GLProgramState:setUniformFloatv");
    if ((uVar3 & 1) != 0) {
      luaval_to_ssize(param_1,3,&lStack_58,"cc.GLProgramState:setUniformFloatv");
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.GLProgramState:setUniformFloatv",iVar2 + -1,3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

