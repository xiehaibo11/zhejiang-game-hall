
/* lua_cocos2dx_GLProgramState_getOrCreateWithGLProgramName(lua_State*) */

void lua_cocos2dx_GLProgramState_getOrCreateWithGLProgramName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  Texture2D *pTVar7;
  void *pvVar8;
  int iVar9;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,
                       "cc.GLProgramState:getOrCreateWithGLProgramName");
    if ((uVar6 & 1) != 0) {
      pvVar8 = (void *)cocos2d::GLProgramState::getOrCreateWithGLProgramName
                                 ((basic_string *)&local_60);
      if (pvVar8 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
                   "cc.GLProgramState");
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
LAB_007fc938:
      uVar5 = 1;
      goto LAB_007fc974;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else if (iVar2 == 3) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,
                       "cc.GLProgramState:getOrCreateWithGLProgramName");
    if ((((param_1 == (lua_State *)0x0) || (((uVar3 ^ 1) & 1) != 0)) ||
        (iVar4 = lua_gettop(param_1), iVar4 < 3)) ||
       ((uVar6 = luaval_is_usertype(param_1,3,"cc.Texture2D",0), (uVar6 & 1) == 0 ||
        (pTVar7 = (Texture2D *)tolua_tousertype(param_1,3,0), (uVar3 & 1) == 0)))) {
      iVar9 = 2;
      iVar4 = 2;
    }
    else {
      pvVar8 = (void *)cocos2d::GLProgramState::getOrCreateWithGLProgramName
                                 ((basic_string *)&local_60,pTVar7);
      if (pvVar8 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
                   "cc.GLProgramState");
      }
      iVar9 = 1;
      iVar4 = 1;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
      iVar4 = iVar9;
    }
    if (iVar4 != 2) goto LAB_007fc938;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.GLProgramState:getOrCreateWithGLProgramName",iVar2 + -1,1);
  uVar5 = 0;
LAB_007fc974:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

