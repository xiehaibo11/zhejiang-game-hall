
/* lua_cocos2dx_studio_ComAudio_resumeEffect(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAudio_resumeEffect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ComAudio *this;
  ulong uVar3;
  undefined4 uVar4;
  uint local_3c;
  long local_38;
  
                    /* try { // try from 0093c53c to 00a3c543 has its CatchHandler @ 0093c588 */
  lVar1 = tpidr_el0;
                    /* try { // try from 0093c548 to 00a3c54f has its CatchHandler @ 0093c574 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0093c550 to 00a3c5a7 has its CatchHandler @ 0093c2a8 */
  this = (ComAudio *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 0093c494 with catch @ 0093c574
                       catch() { ... } // from try @ 0093c548 with catch @ 0093c574 */
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 0093c470 with catch @ 0093c578 */
                    /* catch() { ... } // from try @ 0093c454 with catch @ 0093c57c */
                    /* catch() { ... } // from try @ 0093c438 with catch @ 0093c580 */
                    /* catch() { ... } // from try @ 0093c41c with catch @ 0093c584 */
                    /* catch() { ... } // from try @ 0093c3d8 with catch @ 0093c588
                       catch() { ... } // from try @ 0093c53c with catch @ 0093c588 */
                    /* catch() { ... } // from try @ 0093c3bc with catch @ 0093c58c */
    uVar3 = luaval_to_uint32(param_1,2,&local_3c,"ccs.ComAudio:resumeEffect");
    if ((uVar3 & 1) != 0) {
      cocostudio::ComAudio::resumeEffect(this,local_3c);
                    /* try { // try from 0093c5a8 to 00a3c607 has its CatchHandler @ 0093c5a8
                       catch() { ... } // from try @ 0093c5a8 with catch @ 0093c5a8
                       catch() { ... } // from try @ 0093c980 with catch @ 0093c5a8
                       catch() { ... } // from try @ 0093ca88 with catch @ 0093c5a8 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0093c5ec;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ComAudio_resumeEffect\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ComAudio:resumeEffect",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0093c5ec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0093c608 to 00a3c657 has its CatchHandler @ 0093cac0 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

