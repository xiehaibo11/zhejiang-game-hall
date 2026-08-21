
/* lua_cocos2dx_spine_SkeletonRenderer_setDebugBonesEnabled(lua_State*) */

undefined4 lua_cocos2dx_spine_SkeletonRenderer_setDebugBonesEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SkeletonRenderer *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (SkeletonRenderer *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"sp.SkeletonRenderer:setDebugBonesEnabled");
    if ((uVar3 & 1) != 0) {
      spine::SkeletonRenderer::setDebugBonesEnabled(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009506c0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_spine_SkeletonRenderer_setDebugBonesEnabled\'"
                ,0);
  }
  else {
                    /* try { // try from 00950690 to 00a506c3 has its CatchHandler @ 00950790 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:setDebugBonesEnabled",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009506c0:
                    /* try { // try from 009506c4 to 00a506d7 has its CatchHandler @ 0095075c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009506dc to 00a5070f has its CatchHandler @ 00950760 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

