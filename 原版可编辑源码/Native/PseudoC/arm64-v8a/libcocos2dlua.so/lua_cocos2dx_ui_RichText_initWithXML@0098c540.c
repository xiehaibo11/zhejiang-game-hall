
/* lua_cocos2dx_ui_RichText_initWithXML(lua_State*) */

bool lua_cocos2dx_ui_RichText_initWithXML(lua_State *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  RichText *this;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong local_b8;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RichText *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 4) {
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    uStack_88 = 0;
    local_90 = (undefined8 *)0x0;
    local_80 = 0x3f800000;
    local_50 = (long *)0x0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"ccui.RichText:initWithXML");
    uVar5 = luaval_to_ccvaluemap(param_1,3,(unordered_map *)&local_a0,"ccui.RichText:initWithXML");
    bVar7 = (uVar4 & uVar5 & 1) == 0;
    if (bVar7) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_RichText_initWithXML\'",0
                 );
    }
    else {
      uVar4 = cocos2d::ui::RichText::initWithXML
                        (this,(basic_string *)&local_b8,(unordered_map *)&local_a0,
                         (function *)alStack_70);
      tolua_pushboolean(param_1,uVar4 & 1);
    }
    bVar7 = !bVar7;
    if (alStack_70 == local_50) {
      pcVar6 = *(code **)(*local_50 + 0x20);
LAB_0098c728:
      (*pcVar6)();
      puVar2 = local_90;
    }
    else {
      puVar2 = local_90;
      if (local_50 != (long *)0x0) {
        pcVar6 = *(code **)(*local_50 + 0x28);
        goto LAB_0098c728;
      }
    }
    while (puVar2 != (void *)0x0) {
      pvVar8 = (void *)*puVar2;
      cocos2d::Value::~Value((Value *)(puVar2 + 5));
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = pvVar8;
    }
  }
  else {
    if (iVar3 != 3) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.RichText:initWithXML",iVar3 + -1,2);
      bVar7 = false;
      goto LAB_0098c7e0;
    }
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    uStack_88 = 0;
    local_90 = (undefined8 *)0x0;
    local_80 = 0x3f800000;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"ccui.RichText:initWithXML");
    uVar5 = luaval_to_ccvaluemap(param_1,3,(unordered_map *)&local_a0,"ccui.RichText:initWithXML");
    if ((uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_RichText_initWithXML\'",0
                 );
      bVar7 = false;
      puVar2 = local_90;
    }
    else {
      local_50 = (long *)0x0;
      uVar4 = cocos2d::ui::RichText::initWithXML
                        (this,(basic_string *)&local_b8,(unordered_map *)&local_a0,
                         (function *)alStack_70);
      if (alStack_70 == local_50) {
        pcVar6 = *(code **)(*local_50 + 0x20);
LAB_0098c770:
        (*pcVar6)();
      }
      else if (local_50 != (long *)0x0) {
        pcVar6 = *(code **)(*local_50 + 0x28);
        goto LAB_0098c770;
      }
      tolua_pushboolean(param_1,uVar4 & 1);
      bVar7 = true;
      puVar2 = local_90;
    }
    while (puVar2 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar2;
      cocos2d::Value::~Value((Value *)(puVar2 + 5));
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = puVar9;
    }
  }
  pvVar8 = local_a0;
  local_a0 = (void *)0x0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
LAB_0098c7e0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

