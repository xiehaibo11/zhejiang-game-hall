
undefined8 FUN_008e7cd4(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  GTextField *this;
  ulong uVar5;
  void *pvVar6;
  void *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GTextField *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 1) {
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (undefined8 *)0x0;
    local_40 = 0x3f800000;
    uVar5 = luaval_to_ccvaluemap
                      (param_1,2,(unordered_map *)&local_60,"fairygui.GTextField:setTemplateVars");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GTextField_setTemplateVars\'",0);
      pvVar2 = local_60;
      puVar3 = local_50;
    }
    else {
      fairygui::GTextField::setTemplateVars(this,(unordered_map *)&local_60);
      pvVar2 = local_60;
      puVar3 = local_50;
    }
    while (puVar3 != (void *)0x0) {
      pvVar6 = (void *)*puVar3;
      local_60 = pvVar2;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      pvVar2 = local_60;
      puVar3 = pvVar6;
    }
    local_60 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextField:setTemplateVars",iVar4 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

