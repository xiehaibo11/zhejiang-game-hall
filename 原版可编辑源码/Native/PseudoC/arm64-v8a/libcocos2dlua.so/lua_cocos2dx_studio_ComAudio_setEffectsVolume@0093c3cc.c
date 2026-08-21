
/* lua_cocos2dx_studio_ComAudio_setEffectsVolume(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAudio_setEffectsVolume(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 0093c3d8 to 00a3c3ff has its CatchHandler @ 0093c588 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0093c41c to 00a3c433 has its CatchHandler @ 0093c584 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccs.ComAudio:setEffectsVolume");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 0093c438 to 00a3c44f has its CatchHandler @ 0093c580 */
      cocostudio::ComAudio::setEffectsVolume((float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0093c48c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ComAudio_setEffectsVolume\'",0)
    ;
  }
  else {
                    /* try { // try from 0093c454 to 00a3c46b has its CatchHandler @ 0093c57c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ComAudio:setEffectsVolume",iVar2 + -1,1);
                    /* try { // try from 0093c470 to 00a3c487 has its CatchHandler @ 0093c578 */
  }
  uVar4 = 0;
LAB_0093c48c:
                    /* try { // try from 0093c494 to 00a3c4bb has its CatchHandler @ 0093c574 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

