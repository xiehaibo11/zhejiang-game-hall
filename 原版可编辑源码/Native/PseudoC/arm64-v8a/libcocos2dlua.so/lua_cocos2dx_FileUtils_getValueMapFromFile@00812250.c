
/* lua_cocos2dx_FileUtils_getValueMapFromFile(lua_State*) */

undefined4 lua_cocos2dx_FileUtils_getValueMapFromFile(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  void *pvVar8;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  void *local_60 [2];
  void *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 1) {
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_78,"cc.FileUtils:getValueMapFromFile");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_FileUtils_getValueMapFromFile\'",0);
      uVar7 = 0;
    }
    else {
      (**(code **)(*plVar5 + 0xc0))(local_60,plVar5,&local_78);
      ccvaluemap_to_luaval(param_1,(unordered_map *)local_60);
      pvVar2 = local_60[0];
      puVar3 = local_50;
      while (puVar3 != (void *)0x0) {
        pvVar8 = (void *)*puVar3;
        local_60[0] = pvVar2;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar2 = local_60[0];
        puVar3 = pvVar8;
      }
      local_60[0] = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      uVar7 = 1;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:getValueMapFromFile",iVar4 + -1,1);
    uVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

