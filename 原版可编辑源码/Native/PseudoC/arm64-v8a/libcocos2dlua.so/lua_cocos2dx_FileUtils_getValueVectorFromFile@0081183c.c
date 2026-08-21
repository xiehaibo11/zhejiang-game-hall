
/* lua_cocos2dx_FileUtils_getValueVectorFromFile(lua_State*) */

undefined4 lua_cocos2dx_FileUtils_getValueVectorFromFile(lua_State *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  Value *local_68;
  Value *local_60;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.FileUtils:getValueVectorFromFile");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_FileUtils_getValueVectorFromFile\'",
                  0);
      uVar6 = 0;
    }
    else {
      (**(code **)(*plVar4 + 0x120))(&local_68,plVar4,&local_50);
      ccvaluevector_to_luaval(param_1,(vector *)&local_68);
      pVVar2 = local_68;
      if (local_68 != (Value *)0x0) {
        while (local_60 != pVVar2) {
          cocos2d::Value::~Value(local_60 + -0x10);
          local_60 = local_60 + -0x10;
        }
        local_60 = pVVar2;
        operator_delete(local_68);
      }
      uVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:getValueVectorFromFile",iVar3 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

