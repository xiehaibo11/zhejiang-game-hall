
/* lua_cocos2dx_experimental_video_VideoPlayer_seekTo(lua_State*) */

undefined4 lua_cocos2dx_experimental_video_VideoPlayer_seekTo(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009644fc to 00a6454b has its CatchHandler @ 009644fc
                       catch() { ... } // from try @ 009644fc with catch @ 009644fc
                       catch() { ... } // from try @ 00964580 with catch @ 009644fc
                       catch() { ... } // from try @ 009645c0 with catch @ 009644fc */
    uVar4 = luaval_to_number(param_1,2,&local_40,"ccexp.VideoPlayer:seekTo");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x6c8))((float)local_40,plVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0096456c;
    }
    tolua_error(param_1,&DAT_012d5ce3,0);
  }
  else {
                    /* try { // try from 0096454c to 00a64563 has its CatchHandler @ 009645fc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccexp.VideoPlayer:seekTo",iVar2 + -1,1);
  }
                    /* try { // try from 00964568 to 00a6457f has its CatchHandler @ 009645f8 */
  uVar5 = 0;
LAB_0096456c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00964580 to 00a645ab has its CatchHandler @ 009644fc */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

