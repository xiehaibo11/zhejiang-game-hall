
/* lua_cocos2dx_spine_SkeletonRenderer_setTimeScale(lua_State*) */

undefined4 lua_cocos2dx_spine_SkeletonRenderer_setTimeScale(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SkeletonRenderer *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (SkeletonRenderer *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"sp.SkeletonRenderer:setTimeScale");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 0094f9a0 to 00a4f9eb has its CatchHandler @ 0094f9a0
                       catch() { ... } // from try @ 0094f9a0 with catch @ 0094f9a0
                       catch() { ... } // from try @ 0094f9f0 with catch @ 0094f9a0 */
      spine::SkeletonRenderer::setTimeScale(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0094f9fc;
    }
                    /* try { // try from 0094f9ec to 00a4f9ef has its CatchHandler @ 0094fa4c */
                    /* try { // try from 0094f9f0 to 00a4fa5f has its CatchHandler @ 0094f9a0 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_spine_SkeletonRenderer_setTimeScale\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:setTimeScale",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0094f9fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

