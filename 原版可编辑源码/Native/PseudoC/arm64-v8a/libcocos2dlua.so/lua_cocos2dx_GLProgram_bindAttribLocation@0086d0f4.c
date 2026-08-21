
/* lua_cocos2dx_GLProgram_bindAttribLocation(lua_State*) */

bool lua_cocos2dx_GLProgram_bindAttribLocation(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  GLProgram *this;
  bool bVar5;
  uint local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLProgram *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.GLProgram:bindAttribLocation");
    uVar4 = luaval_to_uint32(param_1,3,&local_54,"cc.GLProgram:bindAttribLocation");
    bVar5 = (uVar3 & uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_GLProgram_bindAttribLocation\'",0);
    }
    else {
      cocos2d::GLProgram::bindAttribLocation(this,(basic_string *)&local_50,local_54);
      lua_settop(param_1,1);
    }
    bVar5 = !bVar5;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLProgram:bindAttribLocation",iVar2 + -1,2);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

