
/* lua_cocos2dx_ui_TextAtlas_setString(lua_State*) */

bool lua_cocos2dx_ui_TextAtlas_setString(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TextAtlas *this;
  ulong uVar3;
  bool bVar4;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00976534 to 00a76567 has its CatchHandler @ 00976634 */
  this = (TextAtlas *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 00976568 to 00a7657b has its CatchHandler @ 00976600 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.TextAtlas:setString");
    bVar4 = (uVar3 & 1) == 0;
    if (bVar4) {
      tolua_error(param_1,&DAT_012d9d5b,0);
    }
    else {
                    /* try { // try from 00976580 to 00a765b3 has its CatchHandler @ 00976604 */
      cocos2d::ui::TextAtlas::setString(this,(basic_string *)&local_50);
      lua_settop(param_1,1);
    }
    bVar4 = !bVar4;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 009765b4 to 00a7664f has its CatchHandler @ 0097626c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextAtlas:setString",iVar2 + -1,1);
    bVar4 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00976568 with catch @ 00976600 */
                    /* catch() { ... } // from try @ 00976580 with catch @ 00976604 */
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

