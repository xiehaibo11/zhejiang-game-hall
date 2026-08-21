
/* lua_cocos2dx_extension_ScrollView_setMaxScale(lua_State*) */

undefined4 lua_cocos2dx_extension_ScrollView_setMaxScale(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 009aab78 with catch @ 009aac54 */
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 009aab68 with catch @ 009aac58 */
                    /* catch() { ... } // from try @ 009aabd8 with catch @ 009aac5c */
                    /* catch() { ... } // from try @ 009aab88 with catch @ 009aac60 */
    uVar4 = luaval_to_number(param_1,2,&local_40,"cc.ScrollView:setMaxScale");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 009aac74 to 00aaacaf has its CatchHandler @ 009aac74
                       catch() { ... } // from try @ 009aac74 with catch @ 009aac74
                       catch() { ... } // from try @ 009aacec with catch @ 009aac74
                       catch() { ... } // from try @ 009aad4c with catch @ 009aac74 */
      *(float *)(lVar3 + 0x39c) = (float)local_40;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009aaccc;
    }
                    /* try { // try from 009aacb8 to 00aaaceb has its CatchHandler @ 009aadc8 */
    tolua_error(param_1,&DAT_012e6bf0,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:setMaxScale",iVar2 + -1,1);
                    /* try { // try from 009aacb0 to 00aaacb7 has its CatchHandler @ 009aadac */
  }
  uVar5 = 0;
LAB_009aaccc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009aacec to 00aaad03 has its CatchHandler @ 009aac74 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

