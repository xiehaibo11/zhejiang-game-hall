
/* lua_cocos2dx_cocosbuilder_CCBReader_setResolutionScale(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBReader_setResolutionScale(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 0091ffd8 with catch @ 00920030 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.CCBReader:setResolutionScale");
                    /* try { // try from 00920044 to 00a200fb has its CatchHandler @ 00920044
                       catch() { ... } // from try @ 00920044 with catch @ 00920044
                       catch() { ... } // from try @ 0092017c with catch @ 00920044 */
    if ((uVar3 & 1) != 0) {
      cocosbuilder::CCBReader::setResolutionScale((float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009200a0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBReader_setResolutionScale\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.CCBReader:setResolutionScale",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009200a0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

