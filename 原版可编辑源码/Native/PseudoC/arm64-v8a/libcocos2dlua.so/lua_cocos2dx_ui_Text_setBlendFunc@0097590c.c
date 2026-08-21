
/* lua_cocos2dx_ui_Text_setBlendFunc(lua_State*) */

undefined4 lua_cocos2dx_ui_Text_setBlendFunc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  BlendFunc aBStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0097594c to 00a75963 has its CatchHandler @ 00975a94 */
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00975968 to 00a75983 has its CatchHandler @ 00975a90 */
    uVar4 = luaval_to_blendfunc(param_1,2,aBStack_40,"ccui.Text:setBlendFunc");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x690))(plVar3,aBStack_40);
      uVar5 = 1;
                    /* try { // try from 00975990 to 00a759c3 has its CatchHandler @ 00975a98 */
      lua_settop(param_1,1);
      goto LAB_009759d0;
    }
    tolua_error(param_1,&DAT_012d9bd3,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Text:setBlendFunc",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009759d0:
                    /* try { // try from 009759d0 to 00a759e7 has its CatchHandler @ 00975a8c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009759e8 to 00a75a1f has its CatchHandler @ 009758f8 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

