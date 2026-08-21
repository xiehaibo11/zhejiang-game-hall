
/* lua_cocos2dx_GLProgramState_setUniformMat4(lua_State*) */

void lua_cocos2dx_GLProgramState_setUniformMat4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLProgramState *this;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLProgramState *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_int32(param_1,2,(int *)&local_90,"cc.GLProgramState:setUniformMat4");
    if ((uVar3 & 1) == 0) {
LAB_007fc368:
      local_88 = 0;
      local_80 = (void *)0x0;
      local_90 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_90,"cc.GLProgramState:setUniformMat4");
      if ((uVar3 & 1) == 0) {
        iVar5 = 4;
      }
      else {
        cocos2d::Mat4::Mat4(aMStack_78);
        uVar3 = luaval_to_mat4(param_1,3,aMStack_78,"cc.GLProgramState:setUniformMat4");
        if ((uVar3 & 1) == 0) {
          iVar5 = 4;
        }
        else {
          cocos2d::GLProgramState::setUniformMat4(this,(basic_string *)&local_90,aMStack_78);
          iVar5 = 1;
          lua_settop(param_1,1);
        }
        cocos2d::Mat4::~Mat4(aMStack_78);
      }
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (iVar5 == 4) goto LAB_007fc3f0;
    }
    else {
      cocos2d::Mat4::Mat4(aMStack_78);
      uVar3 = luaval_to_mat4(param_1,3,aMStack_78,"cc.GLProgramState:setUniformMat4");
      if ((uVar3 & 1) == 0) {
        cocos2d::Mat4::~Mat4(aMStack_78);
        goto LAB_007fc368;
      }
      cocos2d::GLProgramState::setUniformMat4(this,(int)local_90,aMStack_78);
      lua_settop(param_1,1);
      cocos2d::Mat4::~Mat4(aMStack_78);
    }
    uVar4 = 1;
  }
  else {
LAB_007fc3f0:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLProgramState:setUniformMat4",iVar2 + -1,2);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

