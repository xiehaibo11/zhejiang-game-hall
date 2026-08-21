
/* lua_cocos2dx_spine_SkeletonRenderer_initWithData(lua_State*) */

undefined8 lua_cocos2dx_spine_SkeletonRenderer_initWithData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  bool abStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0094fb30 to 00a4fb63 has its CatchHandler @ 0094fc30 */
  local_28 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    luaval_to_boolean(param_1,3,abStack_2c,"sp.SkeletonRenderer:initWithData");
  }
  else if (iVar2 != 2) {
                    /* try { // try from 0094fb64 to 00a4fb77 has its CatchHandler @ 0094fbfc */
                    /* try { // try from 0094fb7c to 00a4fbaf has its CatchHandler @ 0094fc00 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:initWithData",iVar2 + -1,1);
    goto LAB_0094fbb0;
  }
  tolua_error(param_1,
              "invalid arguments in function \'lua_cocos2dx_spine_SkeletonRenderer_initWithData\'",0
             );
LAB_0094fbb0:
                    /* try { // try from 0094fbb0 to 00a4fc4b has its CatchHandler @ 0094fa60 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

