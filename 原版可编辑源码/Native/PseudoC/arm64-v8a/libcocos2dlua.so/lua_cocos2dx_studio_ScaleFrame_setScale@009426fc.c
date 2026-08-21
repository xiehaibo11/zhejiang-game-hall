
/* lua_cocos2dx_studio_ScaleFrame_setScale(lua_State*) */

undefined4 lua_cocos2dx_studio_ScaleFrame_setScale(lua_State *param_1)

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
                    /* try { // try from 00942744 to 00a42747 has its CatchHandler @ 009427ac */
    uVar4 = luaval_to_number(param_1,2,&local_40,"ccs.ScaleFrame:setScale");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 00942764 to 00a42773 has its CatchHandler @ 009427b4 */
      *(float *)(lVar3 + 0x58) = (float)local_40;
      *(float *)(lVar3 + 0x5c) = (float)local_40;
                    /* try { // try from 00942774 to 00a427cf has its CatchHandler @ 009426f8 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009427b8;
    }
                    /* catch() { ... } // from try @ 00942744 with catch @ 009427ac */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_ScaleFrame_setScale\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ScaleFrame:setScale",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 00942764 with catch @ 009427b4 */
  uVar5 = 0;
LAB_009427b8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009427d0 to 00a42917 has its CatchHandler @ 009427d0
                       catch() { ... } // from try @ 009427d0 with catch @ 009427d0
                       catch() { ... } // from try @ 00942998 with catch @ 009427d0 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

