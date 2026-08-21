
/* lua_cocos2dx_studio_ScaleFrame_setScaleY(lua_State*) */

undefined4 lua_cocos2dx_studio_ScaleFrame_setScaleY(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_40;
  long local_38;
  
                    /* try { // try from 00942444 to 00a42483 has its CatchHandler @ 0094253c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00942484 to 00a4249b has its CatchHandler @ 00942538 */
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0094249c to 00a424c7 has its CatchHandler @ 009423f4 */
    uVar4 = luaval_to_number(param_1,2,&local_40,"ccs.ScaleFrame:setScaleY");
    if ((uVar4 & 1) != 0) {
      *(float *)(lVar3 + 0x5c) = (float)local_40;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00942500;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_ScaleFrame_setScaleY\'"
                ,0);
  }
  else {
                    /* try { // try from 009424c8 to 00a424db has its CatchHandler @ 0094253c */
                    /* try { // try from 009424dc to 00a42573 has its CatchHandler @ 009423f4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ScaleFrame:setScaleY",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00942500:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

