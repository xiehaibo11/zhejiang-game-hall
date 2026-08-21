
/* lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets(lua_State*) */

undefined4 lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Layout *this;
  ulong uVar3;
  undefined4 uVar4;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Layout *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0096b128 to 00a6b15b has its CatchHandler @ 0096b228 */
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar3 = luaval_to_rect(param_1,2,aRStack_48,"ccui.Layout:setBackGroundImageCapInsets");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Layout::setBackGroundImageCapInsets(this,aRStack_48);
                    /* try { // try from 0096b15c to 00a6b16f has its CatchHandler @ 0096b1f4 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0096b1a8;
    }
    tolua_error(param_1,0x12d7aeb,0);
  }
  else {
                    /* try { // try from 0096b174 to 00a6b1a7 has its CatchHandler @ 0096b1f8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d7ac3,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0096b1a8:
                    /* try { // try from 0096b1a8 to 00a6b243 has its CatchHandler @ 0096b040 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

