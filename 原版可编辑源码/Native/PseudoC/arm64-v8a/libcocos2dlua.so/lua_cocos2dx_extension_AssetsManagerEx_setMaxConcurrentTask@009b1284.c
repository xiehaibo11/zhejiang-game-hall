
/* lua_cocos2dx_extension_AssetsManagerEx_setMaxConcurrentTask(lua_State*) */

undefined4 lua_cocos2dx_extension_AssetsManagerEx_setMaxConcurrentTask(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.AssetsManagerEx:setMaxConcurrentTask");
    if ((uVar4 & 1) != 0) {
      *(int *)(lVar3 + 0x188) = local_3c;
                    /* try { // try from 009b12f8 to 00ab1307 has its CatchHandler @ 009b1400 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009b133c;
    }
    tolua_error(param_1,&DAT_012e7f4e,0);
  }
  else {
                    /* try { // try from 009b1308 to 00ab1357 has its CatchHandler @ 009b1250 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManagerEx:setMaxConcurrentTask",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009b133c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009b1358 to 00ab1367 has its CatchHandler @ 009b13fc */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

