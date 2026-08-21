
/* lua_cocos2dx_GLProgramState_getOrCreateWithShaders(lua_State*) */

undefined4 lua_cocos2dx_GLProgramState_getOrCreateWithShaders(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "cc.GLProgramState:getOrCreateWithShaders");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_68,
                       "cc.GLProgramState:getOrCreateWithShaders");
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_80,
                       "cc.GLProgramState:getOrCreateWithShaders");
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_GLProgramState_getOrCreateWithShaders\'"
                  ,0);
      uVar7 = 0;
    }
    else {
      pvVar6 = (void *)cocos2d::GLProgramState::getOrCreateWithShaders
                                 ((basic_string *)&local_50,(basic_string *)&local_68,
                                  (basic_string *)&local_80);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.GLProgramState");
      }
      uVar7 = 1;
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.GLProgramState:getOrCreateWithShaders",iVar2 + -1,3);
    uVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

