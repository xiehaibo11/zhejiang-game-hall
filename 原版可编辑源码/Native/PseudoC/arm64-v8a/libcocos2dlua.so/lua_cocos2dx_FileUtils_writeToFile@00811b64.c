
/* lua_cocos2dx_FileUtils_writeToFile(lua_State*) */

bool lua_cocos2dx_FileUtils_writeToFile(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  bool bVar8;
  void *pvVar9;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar7 = (long *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 2) {
    local_70 = 0;
    local_68 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (undefined8 *)0x0;
    local_40 = 0x3f800000;
    local_78 = 0;
    uVar5 = luaval_to_ccvaluemap(param_1,2,(unordered_map *)&local_60,"cc.FileUtils:writeToFile");
    uVar6 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"cc.FileUtils:writeToFile");
    bVar8 = (uVar5 & uVar6 & 1) == 0;
    if (bVar8) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_FileUtils_writeToFile\'",0);
    }
    else {
      uVar5 = (**(code **)(*plVar7 + 0xd0))(plVar7,&local_60,&local_78);
      tolua_pushboolean(param_1,uVar5 & 1);
    }
    bVar8 = !bVar8;
    pvVar2 = local_60;
    puVar3 = local_50;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
      pvVar2 = local_60;
      puVar3 = local_50;
    }
    while (puVar3 != (void *)0x0) {
      pvVar9 = (void *)*puVar3;
      local_60 = pvVar2;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      pvVar2 = local_60;
      puVar3 = pvVar9;
    }
    local_60 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:writeToFile",iVar4 + -1,2);
    bVar8 = false;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}

