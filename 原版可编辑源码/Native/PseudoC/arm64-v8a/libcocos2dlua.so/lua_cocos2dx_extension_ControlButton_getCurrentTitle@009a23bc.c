
/* lua_cocos2dx_extension_ControlButton_getCurrentTitle(lua_State*) */

void lua_cocos2dx_extension_ControlButton_getCurrentTitle(lua_State *param_1)

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
  lVar5 = tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
                    /* try { // try from 009a242c to 00aa2443 has its CatchHandler @ 009a2960 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_50,(basic_string *)(lVar5 + 0x360));
    uVar1 = (ulong)((byte)local_50[0] >> 1);
    pvVar3 = (void *)((ulong)local_50 | 1);
                    /* try { // try from 009a2448 to 00aa245f has its CatchHandler @ 009a2950 */
    if (((byte)local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pvVar3 = local_40;
    }
    lua_pushlstring(param_1,pvVar3,uVar1);
    if (((byte)local_50[0] & 1) != 0) {
                    /* try { // try from 009a2464 to 00aa2483 has its CatchHandler @ 009a294c */
      operator_delete(local_40);
    }
    uVar6 = 1;
  }
  else {
                    /* try { // try from 009a2408 to 00aa241f has its CatchHandler @ 009a299c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:getCurrentTitle",iVar4 + -1,0);
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009a2490 to 00aa24c7 has its CatchHandler @ 009a2930 */
    __stack_chk_fail(uVar6);
  }
  return;
}

