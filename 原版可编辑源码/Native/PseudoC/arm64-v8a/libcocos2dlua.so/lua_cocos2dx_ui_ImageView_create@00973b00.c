
/* lua_cocos2dx_ui_ImageView_create(lua_State*) */

void lua_cocos2dx_ui_ImageView_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  int iVar7;
  
                    /* try { // try from 00973b08 to 00a73b2f has its CatchHandler @ 00973bc0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocos2d::ui::ImageView::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.ImageView");
    }
LAB_00973c9c:
    uVar5 = 1;
  }
  else {
                    /* try { // try from 00973b30 to 00a73b57 has its CatchHandler @ 00973ab4 */
    if (iVar2 == 3) {
                    /* try { // try from 00973ba4 to 00a73bab has its CatchHandler @ 00973bc0 */
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
                    /* try { // try from 00973bac to 00a73bdf has its CatchHandler @ 00973ab4 */
                    /* catch() { ... } // from try @ 00973b08 with catch @ 00973bc0
                       catch() { ... } // from try @ 00973ba4 with catch @ 00973bc0 */
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.ImageView:create");
                    /* catch() { ... } // from try @ 00973aec with catch @ 00973bc4
                       catch() { ... } // from try @ 00973b58 with catch @ 00973bc4 */
                    /* try { // try from 00973be0 to 00a73caf has its CatchHandler @ 00973be0
                       catch() { ... } // from try @ 00973be0 with catch @ 00973be0
                       catch() { ... } // from try @ 00973d30 with catch @ 00973be0 */
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_int32(param_1,3,&local_54,"ccui.ImageView:create"), (uVar3 & 1) == 0)) {
        iVar7 = 4;
        iVar6 = 4;
      }
      else {
        pvVar4 = (void *)cocos2d::ui::ImageView::create(&local_50,local_54);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccui.ImageView");
        }
        iVar7 = 1;
        iVar6 = 1;
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
        iVar6 = iVar7;
      }
      if (iVar6 != 4) goto LAB_00973c9c;
    }
    else if (iVar2 == 2) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
                    /* try { // try from 00973b58 to 00a73b6b has its CatchHandler @ 00973bc4 */
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.ImageView:create");
      if ((uVar3 & 1) != 0) {
        pvVar4 = (void *)cocos2d::ui::ImageView::create(&local_50,0);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccui.ImageView");
        }
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
        goto LAB_00973c9c;
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "ccui.ImageView:create",iVar2 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00973cb0 to 00a73ce3 has its CatchHandler @ 00973db0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

