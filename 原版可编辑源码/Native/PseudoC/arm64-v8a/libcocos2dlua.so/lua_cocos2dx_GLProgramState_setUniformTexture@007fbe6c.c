
/* lua_cocos2dx_GLProgramState_setUniformTexture(lua_State*) */

undefined4 lua_cocos2dx_GLProgramState_setUniformTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  GLProgramState *this;
  ulong uVar5;
  ulong uVar6;
  Texture2D *pTVar7;
  undefined4 uVar8;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GLProgramState *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar5 = luaval_to_int32(param_1,2,(int *)&local_60,"cc.GLProgramState:setUniformTexture");
    if ((((param_1 != (lua_State *)0x0) && ((uVar5 & 1) != 0)) &&
        (iVar3 = lua_gettop(param_1), 2 < iVar3)) &&
       ((uVar6 = luaval_is_usertype(param_1,3,"cc.Texture2D",0), (uVar6 & 1) != 0 &&
        (pTVar7 = (Texture2D *)tolua_tousertype(param_1,3,0), (uVar5 & 1) != 0)))) {
      cocos2d::GLProgramState::setUniformTexture(this,(int)local_60,pTVar7);
      uVar8 = 1;
      lua_settop(param_1,1);
      goto LAB_007fc030;
    }
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"cc.GLProgramState:setUniformTexture");
    iVar3 = 4;
    if ((param_1 != (lua_State *)0x0) && (((uVar4 ^ 1) & 1) == 0)) {
      iVar3 = lua_gettop(param_1);
      if (iVar3 < 3) {
LAB_007fbf84:
        iVar3 = 4;
      }
      else {
        uVar5 = luaval_is_usertype(param_1,3,"cc.Texture2D",0);
        if ((uVar5 & 1) == 0) {
          iVar3 = 4;
        }
        else {
          pTVar7 = (Texture2D *)tolua_tousertype(param_1,3,0);
          if ((uVar4 & 1) == 0) goto LAB_007fbf84;
          cocos2d::GLProgramState::setUniformTexture(this,(basic_string *)&local_60,pTVar7);
          iVar3 = 1;
          lua_settop(param_1,1);
        }
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar3 != 4) {
      uVar8 = 1;
      goto LAB_007fc030;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.GLProgramState:setUniformTexture",iVar2 + -1,2);
  uVar8 = 0;
LAB_007fc030:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

