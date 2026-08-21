
/* lua_cocos2dx_GLProgramState_setUniformVec3(lua_State*) */

undefined4 lua_cocos2dx_GLProgramState_setUniformVec3(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLProgramState *this;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_60 [4];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLProgramState *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_int32(param_1,2,local_60,"cc.GLProgramState:setUniformVec3");
    if ((uVar3 & 1) != 0) {
      cocos2d::Vec3::Vec3((Vec3 *)&local_50);
      uVar3 = luaval_to_vec3(param_1,3,(Vec3 *)&local_50,"cc.GLProgramState:setUniformVec3");
      if ((uVar3 & 1) != 0) {
        cocos2d::GLProgramState::setUniformVec3(this,local_60[0],(Vec3 *)&local_50);
        uVar4 = 1;
        lua_settop(param_1,1);
        goto LAB_007fae34;
      }
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.GLProgramState:setUniformVec3");
    if ((uVar3 & 1) == 0) {
      iVar5 = 4;
    }
    else {
      cocos2d::Vec3::Vec3((Vec3 *)local_60);
      uVar3 = luaval_to_vec3(param_1,3,(Vec3 *)local_60,"cc.GLProgramState:setUniformVec3");
      if ((uVar3 & 1) == 0) {
        iVar5 = 4;
      }
      else {
        cocos2d::GLProgramState::setUniformVec3(this,(basic_string *)&local_50,(Vec3 *)local_60);
        iVar5 = 1;
        lua_settop(param_1,1);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar5 != 4) {
      uVar4 = 1;
      goto LAB_007fae34;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.GLProgramState:setUniformVec3",iVar2 + -1,2);
  uVar4 = 0;
LAB_007fae34:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

