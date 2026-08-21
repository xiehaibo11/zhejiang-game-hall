
/* lua_cocos2dx_spine_SkeletonRenderer_setSkin(lua_State*) */

void lua_cocos2dx_spine_SkeletonRenderer_setSkin(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  SkeletonRenderer *this;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00950acc to 00a50acf has its CatchHandler @ 00950b2c */
  this = (SkeletonRenderer *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00950ad0 to 00a50b3f has its CatchHandler @ 00950a80 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"sp.SkeletonRenderer:setSkin");
    if ((uVar4 & 1) == 0) {
      if ((local_50[0] & 1) != 0) {
                    /* try { // try from 00950b40 to 00a50c3f has its CatchHandler @ 00950b40
                       catch() { ... } // from try @ 00950b40 with catch @ 00950b40
                       catch() { ... } // from try @ 00950cc0 with catch @ 00950b40 */
        operator_delete(local_40);
      }
      local_50[1] = 0;
      local_40 = (void *)0x0;
      local_50[0] = 0;
      uVar4 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"sp.SkeletonRenderer:setSkin")
      ;
      if ((uVar4 & 1) == 0) {
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        goto LAB_00950bac;
      }
      uVar3 = spine::SkeletonRenderer::setSkin(this,(basic_string *)local_50);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    else {
      uVar3 = spine::SkeletonRenderer::setSkin((char *)this);
                    /* catch() { ... } // from try @ 00950acc with catch @ 00950b2c */
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar5 = 1;
  }
  else {
LAB_00950bac:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:setSkin",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

