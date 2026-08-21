
/* lua_cocos2dx_cocosbuilder_CCBReader_setCCBRootPath(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBReader_setCCBRootPath(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  CCBReader *this;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  long local_38;
  
                    /* try { // try from 0091f380 to 00a1f393 has its CatchHandler @ 0091f418 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0091f398 to 00a1f3cb has its CatchHandler @ 0091f41c */
  this = (CCBReader *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
                    /* try { // try from 0091f3cc to 00a1f467 has its CatchHandler @ 0091f294 */
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.CCBReader:setCCBRootPath");
    if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 0091f34c with catch @ 0091f44c */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBReader_setCCBRootPath\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
      cocosbuilder::CCBReader::setCCBRootPath(this,pcVar1);
      uVar5 = 1;
      lua_settop(param_1,1);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* catch() { ... } // from try @ 0091f380 with catch @ 0091f418 */
                    /* catch() { ... } // from try @ 0091f398 with catch @ 0091f41c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBReader:setCCBRootPath",iVar3 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

