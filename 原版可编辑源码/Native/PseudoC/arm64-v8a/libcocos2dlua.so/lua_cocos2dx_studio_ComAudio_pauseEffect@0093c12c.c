
/* lua_cocos2dx_studio_ComAudio_pauseEffect(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAudio_pauseEffect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ComAudio *this;
  ulong uVar3;
  undefined4 uVar4;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComAudio *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_uint32(param_1,2,&local_3c,"ccs.ComAudio:pauseEffect");
                    /* try { // try from 0093c18c to 00a3c193 has its CatchHandler @ 0093c1cc */
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 0093c198 to 00a3c19f has its CatchHandler @ 0093c1dc */
      cocostudio::ComAudio::pauseEffect(this,local_3c);
                    /* try { // try from 0093c1a4 to 00a3c1ab has its CatchHandler @ 0093c1d8 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0093c1e8;
    }
                    /* catch() { ... } // from try @ 0093be20 with catch @ 0093c1d0 */
                    /* catch() { ... } // from try @ 0093c080 with catch @ 0093c1d4
                       catch() { ... } // from try @ 0093c1b0 with catch @ 0093c1d4 */
                    /* catch() { ... } // from try @ 0093beec with catch @ 0093c1d8
                       catch() { ... } // from try @ 0093c1a4 with catch @ 0093c1d8 */
                    /* catch() { ... } // from try @ 0093bf90 with catch @ 0093c1dc
                       catch() { ... } // from try @ 0093c198 with catch @ 0093c1dc */
                    /* catch() { ... } // from try @ 0093bde0 with catch @ 0093c1e0
                       catch() { ... } // from try @ 0093c0e0 with catch @ 0093c1e0 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_ComAudio_pauseEffect\'"
                ,0);
  }
  else {
                    /* try { // try from 0093c1b0 to 00a3c1b7 has its CatchHandler @ 0093c1d4 */
                    /* try { // try from 0093c1b8 to 00a3c227 has its CatchHandler @ 0093bd84 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ComAudio:pauseEffect",iVar2 + -1,1);
                    /* catch() { ... } // from try @ 0093be4c with catch @ 0093c1cc
                       catch() { ... } // from try @ 0093c18c with catch @ 0093c1cc */
  }
                    /* catch() { ... } // from try @ 0093bf34 with catch @ 0093c1e4
                       catch() { ... } // from try @ 0093c0f8 with catch @ 0093c1e4 */
  uVar4 = 0;
LAB_0093c1e8:
                    /* catch() { ... } // from try @ 0093be6c with catch @ 0093c1e8
                       catch() { ... } // from try @ 0093c110 with catch @ 0093c1e8 */
                    /* catch() { ... } // from try @ 0093bfe0 with catch @ 0093c1ec
                       catch() { ... } // from try @ 0093c128 with catch @ 0093c1ec */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

