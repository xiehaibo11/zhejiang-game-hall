
/* lua_cocos2dx_GLProgramState_setUniformInt(lua_State*) */

undefined4 lua_cocos2dx_GLProgramState_setUniformInt(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLProgramState *this;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong local_58;
  undefined8 local_50;
  void *local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLProgramState *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_int32(param_1,2,(int *)&local_58,"cc.GLProgramState:setUniformInt");
    if (((uVar3 & 1) != 0) &&
       (uVar3 = luaval_to_int32(param_1,3,&local_3c,"cc.GLProgramState:setUniformInt"),
       (uVar3 & 1) != 0)) {
      cocos2d::GLProgramState::setUniformInt(this,(int)local_58,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_007fb5ac;
    }
    local_50 = 0;
    local_48 = (void *)0x0;
    local_58 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_58,"cc.GLProgramState:setUniformInt");
    if ((uVar3 & 1) == 0) {
      iVar5 = 4;
    }
    else {
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"cc.GLProgramState:setUniformInt");
      if ((uVar3 & 1) == 0) {
        iVar5 = 4;
      }
      else {
        cocos2d::GLProgramState::setUniformInt(this,(basic_string *)&local_58,local_3c);
        iVar5 = 1;
        lua_settop(param_1,1);
      }
    }
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if (iVar5 != 4) {
      uVar4 = 1;
      goto LAB_007fb5ac;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.GLProgramState:setUniformInt",iVar2 + -1,2);
  uVar4 = 0;
LAB_007fb5ac:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

