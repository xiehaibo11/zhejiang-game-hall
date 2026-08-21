
/* lua_cocos2dx_extension_ScrollView_setMinScale(lua_State*) */

undefined4 lua_cocos2dx_extension_ScrollView_setMinScale(lua_State *param_1)

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
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009aaf48 to 00aaaf6f has its CatchHandler @ 009aaf48
                       catch() { ... } // from try @ 009aaf48 with catch @ 009aaf48
                       catch() { ... } // from try @ 009aafa4 with catch @ 009aaf48 */
    uVar4 = luaval_to_number(param_1,2,&local_40,"cc.ScrollView:setMinScale");
    if ((uVar4 & 1) != 0) {
      *(float *)(lVar3 + 0x398) = (float)local_40;
      uVar5 = 1;
      lua_settop(param_1,1);
                    /* try { // try from 009aaf70 to 00aaaf87 has its CatchHandler @ 009aaffc */
      goto LAB_009aafac;
    }
                    /* try { // try from 009aaf98 to 00aaafa3 has its CatchHandler @ 009aafe8 */
                    /* try { // try from 009aafa4 to 00aab00f has its CatchHandler @ 009aaf48 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ScrollView_setMinScale\'",0)
    ;
  }
  else {
                    /* try { // try from 009aaf8c to 00aaaf97 has its CatchHandler @ 009aaff8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:setMinScale",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009aafac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

