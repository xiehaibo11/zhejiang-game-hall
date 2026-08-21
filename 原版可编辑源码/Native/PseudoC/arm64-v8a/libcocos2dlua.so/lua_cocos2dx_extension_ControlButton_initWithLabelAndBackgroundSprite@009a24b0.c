
/* lua_cocos2dx_extension_ControlButton_initWithLabelAndBackgroundSprite(lua_State*) */

void lua_cocos2dx_extension_ControlButton_initWithLabelAndBackgroundSprite(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x21;
  bool local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009a24d4 to 00aa24eb has its CatchHandler @ 009a2998 */
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009a24f8 to 00aa250f has its CatchHandler @ 009a295c */
  if (iVar2 + -1 == 3) {
    if (param_1 == (lua_State *)0x0) {
LAB_009a25fc:
                    /* try { // try from 009a2600 to 00aa2617 has its CatchHandler @ 009a292c */
      luaval_to_boolean(param_1,4,local_4c,"cc.ControlButton:initWithLabelAndBackgroundSprite");
    }
    else {
      iVar2 = lua_gettop(param_1);
                    /* try { // try from 009a2514 to 00aa252b has its CatchHandler @ 009a2948 */
      if ((iVar2 < 2) || (uVar6 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar6 & 1) == 0)) {
        uVar4 = 0;
      }
      else {
                    /* try { // try from 009a2538 to 00aa2573 has its CatchHandler @ 009a2934 */
        unaff_x21 = tolua_tousertype(param_1,2,0);
        uVar4 = 1;
      }
      iVar2 = lua_gettop(param_1);
                    /* try { // try from 009a2580 to 00aa2597 has its CatchHandler @ 009a2994 */
      if ((iVar2 < 3) ||
         (uVar6 = luaval_is_usertype(param_1,3,"ccui.Scale9Sprite",0), (uVar6 & 1) == 0))
      goto LAB_009a25fc;
                    /* try { // try from 009a25a4 to 00aa25bb has its CatchHandler @ 009a2958 */
      uVar7 = tolua_tousertype(param_1,3,0);
                    /* try { // try from 009a25c0 to 00aa25d7 has its CatchHandler @ 009a2944 */
      uVar3 = luaval_to_boolean(param_1,4,local_4c,
                                "cc.ControlButton:initWithLabelAndBackgroundSprite");
      if ((uVar4 & uVar3) != 0) {
                    /* try { // try from 009a25dc to 00aa25fb has its CatchHandler @ 009a2940 */
        uVar4 = (**(code **)(*plVar5 + 0x738))(plVar5,unaff_x21,uVar7,local_4c[0]);
        tolua_pushboolean(param_1,uVar4 & 1);
        uVar7 = 1;
        goto LAB_009a262c;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_initWithLabelAndBackgroundSprite\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:initWithLabelAndBackgroundSprite",iVar2 + -1,3);
  }
                    /* try { // try from 009a2628 to 00aa265b has its CatchHandler @ 009a2924 */
  uVar7 = 0;
LAB_009a262c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

