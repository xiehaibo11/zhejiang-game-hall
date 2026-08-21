
/* lua_cocos2dx_GLProgramState_setUniformVec4v(lua_State*) */

undefined4 lua_cocos2dx_GLProgramState_setUniformVec4v(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  GLProgramState *this;
  ulong uVar5;
  Vec4 *pVVar6;
  undefined4 uVar7;
  undefined8 local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GLProgramState *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar5 = luaval_to_int32(param_1,2,(int *)&local_68,"cc.GLProgramState:setUniformVec4v");
    if (((((uVar5 & 1) != 0) &&
         (uVar5 = luaval_to_ssize(param_1,3,(long *)local_60,"cc.GLProgramState:setUniformVec4v"),
         param_1 != (lua_State *)0x0)) && ((uVar5 & 1) != 0)) &&
       ((iVar3 = lua_gettop(param_1), 3 < iVar3 &&
        (uVar5 = luaval_is_usertype(param_1,4,"cc.Vec4",0), (uVar5 & 1) != 0)))) {
      pVVar6 = (Vec4 *)tolua_tousertype(param_1,4,0);
      cocos2d::GLProgramState::setUniformVec4v(this,(int)local_68,local_60[0],pVVar6);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_007fb21c;
    }
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_60,"cc.GLProgramState:setUniformVec4v");
    if ((uVar5 & 1) == 0) {
LAB_007fb1d4:
      iVar3 = 4;
    }
    else {
      uVar4 = luaval_to_ssize(param_1,3,&local_68,"cc.GLProgramState:setUniformVec4v");
      iVar3 = 4;
      if ((param_1 != (lua_State *)0x0) && (((uVar4 ^ 1) & 1) == 0)) {
        iVar3 = lua_gettop(param_1);
        if ((iVar3 < 4) || (uVar5 = luaval_is_usertype(param_1,4,"cc.Vec4",0), (uVar5 & 1) == 0))
        goto LAB_007fb1d4;
        pVVar6 = (Vec4 *)tolua_tousertype(param_1,4,0);
        cocos2d::GLProgramState::setUniformVec4v
                  (this,(basic_string *)local_60,CONCAT44(local_68._4_4_,(int)local_68),pVVar6);
        iVar3 = 1;
        lua_settop(param_1,1);
      }
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar3 != 4) {
      uVar7 = 1;
      goto LAB_007fb21c;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.GLProgramState:setUniformVec4v",iVar2 + -1,3);
  uVar7 = 0;
LAB_007fb21c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

