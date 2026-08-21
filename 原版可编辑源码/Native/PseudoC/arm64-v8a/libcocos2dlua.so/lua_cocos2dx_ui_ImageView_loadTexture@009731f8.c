
/* lua_cocos2dx_ui_ImageView_loadTexture(lua_State*) */

undefined8 lua_cocos2dx_ui_ImageView_loadTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ImageView *pIVar5;
  ulong uVar6;
  undefined8 uVar7;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 00973200 to 00a7325f has its CatchHandler @ 0097312c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pIVar5 = (ImageView *)tolua_tousertype(param_1,1,0);
  if (pIVar5 == (ImageView *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_ui_ImageView_loadTexture\'",0);
    uVar7 = 0;
    goto LAB_00973380;
  }
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.ImageView:loadTexture");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.ImageView:loadTexture");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::ImageView::loadTexture(pIVar5,&local_50,local_54);
                    /* try { // try from 009732fc to 00a73303 has its CatchHandler @ 00973340 */
                    /* try { // try from 00973304 to 00a7335b has its CatchHandler @ 00973260 */
      lua_settop(param_1,1);
      goto LAB_0097330c;
    }
    tolua_error(param_1,0x12d92c2,0);
LAB_0097336c:
    uVar7 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 009731a0 with catch @ 00973240 */
                    /* catch() { ... } // from try @ 0097317c with catch @ 00973244
                       catch() { ... } // from try @ 009731ec with catch @ 00973244 */
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d92a7,
                 iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_00973380;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 00973260 to 00a732fb has its CatchHandler @ 00973260
                       catch() { ... } // from try @ 00973260 with catch @ 00973260
                       catch() { ... } // from try @ 00973304 with catch @ 00973260 */
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.ImageView:loadTexture");
    if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 009732fc with catch @ 00973340 */
      tolua_error(param_1,0x12d92c2,0);
      goto LAB_0097336c;
    }
    cocos2d::ui::ImageView::loadTexture(pIVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_0097330c:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00973380:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

