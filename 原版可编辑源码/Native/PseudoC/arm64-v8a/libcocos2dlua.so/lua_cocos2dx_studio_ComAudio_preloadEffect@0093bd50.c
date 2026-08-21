
/* lua_cocos2dx_studio_ComAudio_preloadEffect(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAudio_preloadEffect(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  ComAudio *this;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (ComAudio *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0093bd84 to 00a3bddf has its CatchHandler @ 0093bd84
                       catch() { ... } // from try @ 0093bd84 with catch @ 0093bd84
                       catch() { ... } // from try @ 0093c0b4 with catch @ 0093bd84
                       catch() { ... } // from try @ 0093c1b8 with catch @ 0093bd84 */
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ComAudio:preloadEffect");
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0093be20 to 00a3be3b has its CatchHandler @ 0093c1d0 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ComAudio_preloadEffect\'",0);
      uVar5 = 0;
    }
    else {
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
      cocostudio::ComAudio::preloadEffect(this,pcVar1);
      uVar5 = 1;
                    /* try { // try from 0093bde0 to 00a3be13 has its CatchHandler @ 0093c1e0 */
      lua_settop(param_1,1);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ComAudio:preloadEffect",iVar3 + -1,1);
    uVar5 = 0;
  }
                    /* try { // try from 0093be4c to 00a3be5b has its CatchHandler @ 0093c1cc */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0093be6c to 00a3bed7 has its CatchHandler @ 0093c1e8 */
  __stack_chk_fail();
}

