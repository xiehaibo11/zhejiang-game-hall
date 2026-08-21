
/* lua_cocos2dx_3d_BillBoard_setMode(lua_State*) */

undefined4 lua_cocos2dx_3d_BillBoard_setMode(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  BillBoard *pBVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pBVar3 = (BillBoard *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.BillBoard:setMode");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 00902840 to 00a02873 has its CatchHandler @ 00902940 */
      cocos2d::BillBoard::setMode(pBVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00902890;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_BillBoard_setMode\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.BillBoard:setMode",iVar2 + -1,1);
                    /* try { // try from 00902874 to 00a02887 has its CatchHandler @ 0090290c */
  }
                    /* try { // try from 0090288c to 00a028bf has its CatchHandler @ 00902910 */
  uVar5 = 0;
LAB_00902890:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

