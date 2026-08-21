
/* lua_cocos2dx_ui_TabControl_ignoreHeadersTextureSize(lua_State*) */

undefined4 lua_cocos2dx_ui_TabControl_ignoreHeadersTextureSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TabControl *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
                    /* try { // try from 0099a894 to 00a9a89f has its CatchHandler @ 0099aa50 */
                    /* try { // try from 0099a8a0 to 00a9a8d3 has its CatchHandler @ 0099a788 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TabControl *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0099a8d4 to 00a9a8df has its CatchHandler @ 0099aa4c */
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0099a8e0 to 00a9a913 has its CatchHandler @ 0099a788 */
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.TabControl:ignoreHeadersTextureSize");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::TabControl::ignoreHeadersTextureSize(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0099a94c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_TabControl_ignoreHeadersTextureSize\'"
                ,0);
  }
  else {
                    /* try { // try from 0099a914 to 00a9a91f has its CatchHandler @ 0099aa44 */
                    /* try { // try from 0099a924 to 00a9a92f has its CatchHandler @ 0099aa48 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TabControl:ignoreHeadersTextureSize",iVar2 + -1,1);
                    /* try { // try from 0099a930 to 00a9a963 has its CatchHandler @ 0099a788 */
  }
  uVar4 = 0;
LAB_0099a94c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0099a964 to 00a9a96f has its CatchHandler @ 0099aa3c */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0099a974 to 00a9a97f has its CatchHandler @ 0099aa40 */
  __stack_chk_fail();
}

