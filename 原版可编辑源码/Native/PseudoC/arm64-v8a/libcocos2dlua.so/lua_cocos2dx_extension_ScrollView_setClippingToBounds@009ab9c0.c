
/* lua_cocos2dx_extension_ScrollView_setClippingToBounds(lua_State*) */

undefined4 lua_cocos2dx_extension_ScrollView_setClippingToBounds(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
                    /* try { // try from 009ab9c0 to 00aab9e7 has its CatchHandler @ 009ab9c0
                       catch() { ... } // from try @ 009ab9c0 with catch @ 009ab9c0
                       catch() { ... } // from try @ 009aba4c with catch @ 009ab9c0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009ab9e8 to 00aab9ff has its CatchHandler @ 009abacc */
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009aba04 to 00aaba0b has its CatchHandler @ 009abac8 */
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009aba0c to 00aaba23 has its CatchHandler @ 009abab8 */
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"cc.ScrollView:setClippingToBounds");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 009aba28 to 00aaba33 has its CatchHandler @ 009abab4 */
      *(bool *)(lVar3 + 0x35d) = local_3c[0];
                    /* try { // try from 009aba34 to 00aaba3f has its CatchHandler @ 009abaa4 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009aba78;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ScrollView_setClippingToBounds\'"
                ,0);
  }
  else {
                    /* try { // try from 009aba40 to 00aaba4b has its CatchHandler @ 009abaa0 */
                    /* try { // try from 009aba4c to 00aabadf has its CatchHandler @ 009ab9c0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:setClippingToBounds",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009aba78:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009aba40 with catch @ 009abaa0 */
  __stack_chk_fail();
}

