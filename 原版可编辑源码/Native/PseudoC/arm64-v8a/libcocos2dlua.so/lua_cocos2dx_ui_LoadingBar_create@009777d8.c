
/* lua_cocos2dx_ui_LoadingBar_create(lua_State*) */

void lua_cocos2dx_ui_LoadingBar_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int local_5c;
  undefined8 local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  int iVar7;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2 + -1) {
  case 0:
    pvVar4 = (void *)cocos2d::ui::LoadingBar::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.LoadingBar");
    }
    break;
  case 1:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* catch() { ... } // from try @ 00977864 with catch @ 00977964 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.LoadingBar:create");
    if ((uVar3 & 1) == 0) {
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
      goto switchD_00977820_default;
    }
    pvVar4 = (void *)cocos2d::ui::LoadingBar::create((basic_string *)&local_50,0.0);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.LoadingBar");
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    break;
  case 2:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 00977864 to 00a77897 has its CatchHandler @ 00977964 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.LoadingBar:create");
    if (((uVar3 & 1) == 0) ||
       (uVar3 = luaval_to_number(param_1,3,(double *)&local_58,"ccui.LoadingBar:create"),
       (uVar3 & 1) == 0)) {
      iVar7 = 4;
      iVar6 = 4;
    }
    else {
                    /* try { // try from 00977898 to 00a778ab has its CatchHandler @ 00977930 */
      pvVar4 = (void *)cocos2d::ui::LoadingBar::create
                                 ((basic_string *)&local_50,
                                  (float)(double)CONCAT44(local_58._4_4_,(int)local_58));
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 009778b0 to 00a778e3 has its CatchHandler @ 00977934 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "ccui.LoadingBar");
      }
      iVar7 = 1;
      iVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
      iVar6 = iVar7;
    }
    if (iVar6 == 4) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.LoadingBar:create");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_int32(param_1,3,(int *)&local_58,"ccui.LoadingBar:create"),
         (uVar3 & 1) == 0)) {
        iVar7 = 8;
        iVar6 = 8;
      }
      else {
        pvVar4 = (void *)cocos2d::ui::LoadingBar::create(0,&local_50,(int)local_58);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccui.LoadingBar");
        }
        iVar7 = 1;
        iVar6 = 1;
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
        iVar6 = iVar7;
      }
      if (iVar6 == 8) goto switchD_00977820_default;
    }
    break;
  case 3:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.LoadingBar:create");
                    /* try { // try from 009778e4 to 00a7797f has its CatchHandler @ 00977674 */
    if ((((uVar3 & 1) == 0) ||
        (uVar3 = luaval_to_int32(param_1,3,&local_5c,"ccui.LoadingBar:create"), (uVar3 & 1) == 0))
       || (uVar3 = luaval_to_number(param_1,4,(double *)&local_58,"ccui.LoadingBar:create"),
          (uVar3 & 1) == 0)) {
      iVar7 = 10;
      iVar6 = 10;
    }
    else {
      pvVar4 = (void *)cocos2d::ui::LoadingBar::create
                                 ((float)(double)CONCAT44(local_58._4_4_,(int)local_58),&local_50,
                                  local_5c);
                    /* catch() { ... } // from try @ 00977898 with catch @ 00977930 */
                    /* catch() { ... } // from try @ 009778b0 with catch @ 00977934 */
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "ccui.LoadingBar");
      }
      iVar7 = 1;
      iVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
      iVar6 = iVar7;
    }
    if (iVar6 == 10) goto switchD_00977820_default;
    break;
  default:
switchD_00977820_default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "ccui.LoadingBar:create",iVar2 + -1,2);
    uVar5 = 0;
    goto LAB_00977ad0;
  }
  uVar5 = 1;
LAB_00977ad0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

