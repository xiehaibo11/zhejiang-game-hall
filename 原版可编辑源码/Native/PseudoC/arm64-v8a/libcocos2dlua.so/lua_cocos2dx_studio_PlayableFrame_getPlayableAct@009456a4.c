
/* lua_cocos2dx_studio_PlayableFrame_getPlayableAct(lua_State*) */

void lua_cocos2dx_studio_PlayableFrame_getPlayableAct(lua_State *param_1)

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
                    /* try { // try from 009456d0 to 00a45703 has its CatchHandler @ 009457d0 */
  lVar5 = tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_50,(basic_string *)(lVar5 + 0x58));
                    /* try { // try from 0094571c to 00a4574f has its CatchHandler @ 009457a0 */
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
                    /* try { // try from 00945750 to 00a457eb has its CatchHandler @ 009455a0 */
    uVar6 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.PlayableFrame:getPlayableAct",iVar4 + -1,0);
                    /* try { // try from 00945704 to 00a45717 has its CatchHandler @ 0094579c */
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

