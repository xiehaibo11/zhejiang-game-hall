
/* lua_cocos2dx_studio_GUIReader_setFilePath(lua_State*) */

undefined4 lua_cocos2dx_studio_GUIReader_setFilePath(lua_State *param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong local_50;
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 0093d510 to 00a3d527 has its CatchHandler @ 0093d89c */
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
                    /* try { // try from 0093d534 to 00a3d54b has its CatchHandler @ 0093d868 */
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.GUIReader:setFilePath");
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 0093d5c4 to 00a3d5db has its CatchHandler @ 0093d854 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_GUIReader_setFilePath\'",0);
      uVar6 = 0;
    }
    else {
                    /* try { // try from 0093d550 to 00a3d56b has its CatchHandler @ 0093d864 */
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_50 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar4 + 0x28)) {
        uVar5 = local_50 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_50 | 1);
        if ((local_50 & 1) != 0) {
          uVar5 = local_48;
          pcVar2 = local_40;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar4 + 0x28),pcVar2,uVar5);
      }
      uVar6 = 1;
                    /* try { // try from 0093d584 to 00a3d59b has its CatchHandler @ 0093d898 */
      lua_settop(param_1,1);
    }
    if ((local_50 & 1) != 0) {
                    /* try { // try from 0093d5e0 to 00a3d5f7 has its CatchHandler @ 0093d850 */
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 0093d5a8 to 00a3d5bf has its CatchHandler @ 0093d860 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&LAB_012cd6c8,
               iVar3 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0093d5fc to 00a3d613 has its CatchHandler @ 0093d84c */
  return uVar6;
}

