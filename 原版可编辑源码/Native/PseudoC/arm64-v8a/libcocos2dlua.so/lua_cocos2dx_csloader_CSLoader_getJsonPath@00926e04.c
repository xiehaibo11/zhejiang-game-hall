
/* lua_cocos2dx_csloader_CSLoader_getJsonPath(lua_State*) */

void lua_cocos2dx_csloader_CSLoader_getJsonPath(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00926e20 to 00a26e6b has its CatchHandler @ 00926e20
                       catch() { ... } // from try @ 00926e20 with catch @ 00926e20
                       catch() { ... } // from try @ 00926e70 with catch @ 00926e20 */
  lVar5 = tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
                    /* try { // try from 00926e6c to 00a26e6f has its CatchHandler @ 00926ec4 */
                    /* try { // try from 00926e70 to 00a26ed7 has its CatchHandler @ 00926e20 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_50,(basic_string *)(lVar5 + 0x58));
    uVar1 = (ulong)((byte)local_50[0] >> 1);
    pvVar3 = (void *)((ulong)local_50 | 1);
    if (((byte)local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pvVar3 = local_40;
    }
    lua_pushlstring(param_1,pvVar3,uVar1);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar6 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CSLoader:getJsonPath",iVar4 + -1,0);
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00926ed8 to 00a26fa7 has its CatchHandler @ 00926ed8
                       catch() { ... } // from try @ 00926ed8 with catch @ 00926ed8
                       catch() { ... } // from try @ 00927028 with catch @ 00926ed8 */
    __stack_chk_fail(uVar6);
  }
                    /* catch() { ... } // from try @ 00926e6c with catch @ 00926ec4 */
  return;
}

