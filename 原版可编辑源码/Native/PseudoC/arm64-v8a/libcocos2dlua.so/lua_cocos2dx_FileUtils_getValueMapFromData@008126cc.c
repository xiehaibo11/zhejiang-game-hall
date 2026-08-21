
/* lua_cocos2dx_FileUtils_getValueMapFromData(lua_State*) */

undefined4 lua_cocos2dx_FileUtils_getValueMapFromData(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined4 uVar8;
  void *pvVar9;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  int local_74;
  void *local_70 [2];
  void *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 2) {
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_90,"cc.FileUtils:getValueMapFromData");
    pvVar1 = (void *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      pvVar1 = local_80;
    }
    uVar6 = luaval_to_int32(param_1,3,&local_74,"cc.FileUtils:getValueMapFromData");
    if ((uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_FileUtils_getValueMapFromData\'",0);
      uVar8 = 0;
    }
    else {
      (**(code **)(*plVar7 + 200))(local_70,plVar7,pvVar1,local_74);
      ccvaluemap_to_luaval(param_1,(unordered_map *)local_70);
      pvVar1 = local_70[0];
      puVar3 = local_60;
      while (puVar3 != (void *)0x0) {
        pvVar9 = (void *)*puVar3;
        local_70[0] = pvVar1;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar1 = local_70[0];
        puVar3 = pvVar9;
      }
      local_70[0] = (void *)0x0;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      uVar8 = 1;
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:getValueMapFromData",iVar4 + -1,2);
    uVar8 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

