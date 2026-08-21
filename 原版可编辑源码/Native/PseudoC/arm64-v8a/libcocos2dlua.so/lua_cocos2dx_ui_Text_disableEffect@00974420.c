
/* lua_cocos2dx_ui_Text_disableEffect(lua_State*) */

undefined4 lua_cocos2dx_ui_Text_disableEffect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Text *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
                    /* try { // try from 00974434 to 00a74483 has its CatchHandler @ 00974434
                       catch() { ... } // from try @ 00974434 with catch @ 00974434
                       catch() { ... } // from try @ 009744bc with catch @ 00974434
                       catch() { ... } // from try @ 00974500 with catch @ 00974434 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Text *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    cocos2d::ui::Text::disableEffect(this);
  }
  else {
                    /* try { // try from 00974484 to 00a744bb has its CatchHandler @ 00974540 */
    if ((iVar2 != 2) ||
       (uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccui.Text:disableEffect"), (uVar3 & 1) == 0)) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d962a,
                 iVar2 + -1,0);
      uVar4 = 0;
                    /* try { // try from 009744bc to 00a744eb has its CatchHandler @ 00974434 */
      goto LAB_009744d8;
    }
    cocos2d::ui::Text::disableEffect(this,local_3c);
  }
  uVar4 = 1;
  lua_settop(param_1,1);
LAB_009744d8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009744ec to 00a744ff has its CatchHandler @ 00974540 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00974500 to 00a7455b has its CatchHandler @ 00974434 */
  __stack_chk_fail();
}

