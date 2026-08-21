
/* lua_cocos2dx_ui_RichText_createWithXML(lua_State*) */

undefined4 lua_cocos2dx_ui_RichText_createWithXML(lua_State *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  code *pcVar7;
  undefined4 uVar8;
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
  iVar3 = lua_gettop();
  if (iVar3 == 4) {
                    /* try { // try from 0098e184 to 00a8e1b7 has its CatchHandler @ 0098e208 */
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    uStack_88 = 0;
    local_90 = (undefined8 *)0x0;
    local_80 = 0x3f800000;
    local_50 = (long *)0x0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"ccui.RichText:createWithXML");
                    /* try { // try from 0098e1b8 to 00a8e253 has its CatchHandler @ 0098e00c */
    uVar5 = luaval_to_ccvaluemap(param_1,3,(unordered_map *)&local_a0,"ccui.RichText:createWithXML")
    ;
    if ((uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_RichText_createWithXML\'"
                  ,0);
      uVar8 = 0;
    }
    else {
      pvVar6 = (void *)cocos2d::ui::RichText::createWithXML
                                 ((basic_string *)&local_b8,(unordered_map *)&local_a0,
                                  (function *)alStack_70);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* catch() { ... } // from try @ 0098e16c with catch @ 0098e204 */
                    /* catch() { ... } // from try @ 0098e184 with catch @ 0098e208 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "ccui.RichText");
      }
      uVar8 = 1;
    }
    if (alStack_70 == local_50) {
      pcVar7 = *(code **)(*local_50 + 0x20);
LAB_0098e324:
      (*pcVar7)();
      puVar2 = local_90;
    }
    else {
      puVar2 = local_90;
      if (local_50 != (long *)0x0) {
        pcVar7 = *(code **)(*local_50 + 0x28);
        goto LAB_0098e324;
      }
    }
    while (puVar2 != (void *)0x0) {
      pvVar6 = (void *)*puVar2;
      cocos2d::Value::~Value((Value *)(puVar2 + 5));
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = pvVar6;
    }
  }
  else {
    if (iVar3 != 3) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "ccui.RichText:createWithXML",iVar3 + -1,2);
      uVar8 = 0;
      goto LAB_0098e384;
    }
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    uStack_88 = 0;
    local_90 = (undefined8 *)0x0;
    local_80 = 0x3f800000;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"ccui.RichText:createWithXML");
                    /* try { // try from 0098e138 to 00a8e16b has its CatchHandler @ 0098e238 */
    uVar5 = luaval_to_ccvaluemap(param_1,3,(unordered_map *)&local_a0,"ccui.RichText:createWithXML")
    ;
    if ((uVar4 & uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 0098e138 with catch @ 0098e238 */
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_RichText_createWithXML\'"
                  ,0);
      uVar8 = 0;
      puVar2 = local_90;
    }
    else {
      local_50 = (long *)0x0;
      pvVar6 = (void *)cocos2d::ui::RichText::createWithXML
                                 ((basic_string *)&local_b8,(unordered_map *)&local_a0,
                                  (function *)alStack_70);
                    /* try { // try from 0098e16c to 00a8e17f has its CatchHandler @ 0098e204 */
      if (alStack_70 == local_50) {
        pcVar7 = *(code **)(*local_50 + 0x20);
LAB_0098e280:
        (*pcVar7)();
      }
      else if (local_50 != (long *)0x0) {
        pcVar7 = *(code **)(*local_50 + 0x28);
        goto LAB_0098e280;
      }
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "ccui.RichText");
      }
      uVar8 = 1;
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
  pvVar6 = local_a0;
  local_a0 = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
LAB_0098e384:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

