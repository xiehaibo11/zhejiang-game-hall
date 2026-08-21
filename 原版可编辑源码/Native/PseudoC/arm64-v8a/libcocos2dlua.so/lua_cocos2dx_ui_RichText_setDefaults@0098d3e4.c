
/* lua_cocos2dx_ui_RichText_setDefaults(lua_State*) */

bool lua_cocos2dx_ui_RichText_setDefaults(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  RichText *this;
  ulong uVar5;
  bool bVar6;
  void *pvVar7;
  void *local_60;
  undefined8 uStack_58;
  void *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RichText *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 1) {
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (void *)0x0;
    local_40 = 0x3f800000;
    uVar5 = luaval_to_ccvaluemap(param_1,2,(unordered_map *)&local_60,"ccui.RichText:setDefaults");
    bVar6 = (uVar5 & 1) == 0;
    if (bVar6) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_RichText_setDefaults\'",0
                 );
    }
    else {
      cocos2d::ui::RichText::setDefaults(this,(unordered_map *)&local_60);
      lua_settop(param_1,1);
    }
    bVar6 = !bVar6;
    pvVar2 = local_60;
    puVar3 = local_50;
    while (puVar3 != (void *)0x0) {
      pvVar7 = (void *)*puVar3;
      local_60 = pvVar2;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      pvVar2 = local_60;
      puVar3 = pvVar7;
    }
    local_60 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichText:setDefaults",iVar4 + -1,1);
    bVar6 = false;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}

