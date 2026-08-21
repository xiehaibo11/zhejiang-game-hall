
/* lua_cocos2dx_ui_Slider_create(lua_State*) */

void lua_cocos2dx_ui_Slider_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int local_6c;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
                    /* try { // try from 0097ffa8 to 00a80043 has its CatchHandler @ 0097fe10 */
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocos2d::ui::Slider::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar5 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.Slider");
      uVar5 = 1;
    }
    goto LAB_009801b0;
  }
  if (iVar2 == 4) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Slider:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.Slider:create");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_int32(param_1,4,&local_6c,"ccui.Slider:create"), (uVar3 & 1) == 0)) {
        iVar6 = 4;
      }
      else {
        pvVar4 = (void *)cocos2d::ui::Slider::create(&local_50,&local_68,local_6c);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccui.Slider");
        }
        iVar6 = 1;
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 != 4) {
LAB_009801ac:
      uVar5 = 1;
      goto LAB_009801b0;
    }
  }
  else if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Slider:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 2;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
                    /* catch() { ... } // from try @ 0097ff5c with catch @ 0097fff4 */
                    /* catch() { ... } // from try @ 0097ff74 with catch @ 0097fff8 */
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.Slider:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        pvVar4 = (void *)cocos2d::ui::Slider::create(&local_50,&local_68,0);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
                    /* catch() { ... } // from try @ 0097ff28 with catch @ 00980028 */
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccui.Slider");
        }
        iVar6 = 1;
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 != 2) goto LAB_009801ac;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","ccui.Slider:create",
             iVar2 + -1,0);
  uVar5 = 0;
LAB_009801b0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

