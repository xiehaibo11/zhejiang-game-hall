
/* lua_cocos2dx_ui_TextField_setCursorChar(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setCursorChar(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TextField *this;
  ulong uVar3;
  undefined4 uVar4;
  char local_3c [4];
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009823b4 with catch @ 009822dc
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,(int *)local_3c,"ccui.TextField:setCursorChar");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 00982340 to 00a8234b has its CatchHandler @ 00982418 */
      cocos2d::ui::TextField::setCursorChar(this,local_3c[0]);
      uVar4 = 1;
                    /* try { // try from 00982354 to 00a8235b has its CatchHandler @ 0098241c */
      lua_settop(param_1,1);
      goto LAB_00982394;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_TextField_setCursorChar\'",
                0);
  }
  else {
                    /* try { // try from 00982364 to 00a823b3 has its CatchHandler @ 00982424 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setCursorChar",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00982394:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009823b4 to 00a82463 has its CatchHandler @ 009822dc */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

