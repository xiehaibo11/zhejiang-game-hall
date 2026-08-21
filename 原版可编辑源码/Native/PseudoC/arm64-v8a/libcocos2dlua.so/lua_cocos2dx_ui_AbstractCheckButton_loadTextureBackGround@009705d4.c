
/* lua_cocos2dx_ui_AbstractCheckButton_loadTextureBackGround(lua_State*) */

undefined4 lua_cocos2dx_ui_AbstractCheckButton_loadTextureBackGround(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  AbstractCheckButton *pAVar5;
  ulong uVar6;
  undefined4 uVar7;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pAVar5 = (AbstractCheckButton *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccui.AbstractCheckButton:loadTextureBackGround");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.AbstractCheckButton:loadTextureBackGround");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::AbstractCheckButton::loadTextureBackGround(pAVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_009706cc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_AbstractCheckButton_loadTextureBackGround\'"
                ,0);
LAB_0097072c:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
                    /* try { // try from 009706f4 to 00a70743 has its CatchHandler @ 009706f4
                       catch() { ... } // from try @ 009706f4 with catch @ 009706f4
                       catch() { ... } // from try @ 0097077c with catch @ 009706f4
                       catch() { ... } // from try @ 009707c0 with catch @ 009706f4 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d8c48,
                 iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_00970740;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccui.AbstractCheckButton:loadTextureBackGround");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_AbstractCheckButton_loadTextureBackGround\'"
                  ,0);
      goto LAB_0097072c;
    }
    cocos2d::ui::AbstractCheckButton::loadTextureBackGround(pAVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_009706cc:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00970740:
                    /* try { // try from 00970744 to 00a7077b has its CatchHandler @ 00970800 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

