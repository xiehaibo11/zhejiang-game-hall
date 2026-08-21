
/* lua_cocos2dx_cocosbuilder_CCBReader_readUTF8(lua_State*) */

void lua_cocos2dx_cocosbuilder_CCBReader_readUTF8(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
    cocosbuilder::CCBReader::readUTF8();
    uVar1 = (ulong)(local_50[0] >> 1);
    pvVar3 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pvVar3 = local_40;
    }
    lua_pushlstring(param_1,pvVar3,uVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
                    /* try { // try from 0091f900 to 00a1f903 has its CatchHandler @ 0091f958 */
    uVar5 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBReader:readUTF8",iVar4 + -1,0);
                    /* try { // try from 0091f8b4 to 00a1f8ff has its CatchHandler @ 0091f8b4
                       catch() { ... } // from try @ 0091f8b4 with catch @ 0091f8b4
                       catch() { ... } // from try @ 0091f904 with catch @ 0091f8b4 */
    uVar5 = 0;
  }
                    /* try { // try from 0091f904 to 00a1f96b has its CatchHandler @ 0091f8b4 */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

