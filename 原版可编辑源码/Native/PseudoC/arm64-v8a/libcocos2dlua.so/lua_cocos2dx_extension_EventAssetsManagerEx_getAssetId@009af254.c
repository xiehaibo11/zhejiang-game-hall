
/* lua_cocos2dx_extension_EventAssetsManagerEx_getAssetId(lua_State*) */

void lua_cocos2dx_extension_EventAssetsManagerEx_getAssetId(lua_State *param_1)

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
  
                    /* try { // try from 009af258 to 00aaf27f has its CatchHandler @ 009af1b8 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009af280 to 00aaf287 has its CatchHandler @ 009af318 */
  lVar5 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 009af288 to 00aaf2a7 has its CatchHandler @ 009af1b8 */
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_50,(basic_string *)(lVar5 + 0x80));
                    /* try { // try from 009af2d0 to 00aaf2db has its CatchHandler @ 009af318 */
                    /* try { // try from 009af2dc to 00aaf31f has its CatchHandler @ 009af1b8 */
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
                    /* try { // try from 009af2a8 to 00aaf2af has its CatchHandler @ 009af318 */
                    /* try { // try from 009af2b0 to 00aaf2cf has its CatchHandler @ 009af1b8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e7bf7,
               iVar4 + -1,0);
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009af280 with catch @ 009af318
                       catch(type#1 @ 00000000) { ... } // from try @ 009af2a8 with catch @ 009af318
                       catch(type#1 @ 00000000) { ... } // from try @ 009af2d0 with catch @ 009af318
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009af220 with catch @ 009af31c
                       catch(type#1 @ 00000000) { ... } // from try @ 009af24c with catch @ 009af31c
                        */
  return;
}

