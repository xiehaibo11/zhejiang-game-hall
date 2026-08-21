
/* lua_cocos2dx_3d_AABB_getCenter(lua_State*) */

void lua_cocos2dx_3d_AABB_getCenter(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 local_48 [4];
  long local_38;
  
                    /* try { // try from 008fdd38 to 009fdd6b has its CatchHandler @ 008fddbc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    local_48[0] = cocos2d::AABB::getCenter();
    vec3_to_luaval(param_1,(Vec3 *)local_48);
  }
  else {
                    /* try { // try from 008fdd6c to 009fde07 has its CatchHandler @ 008fdc50 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AABB:getCenter",iVar2,0);
  }
                    /* catch() { ... } // from try @ 008fdd20 with catch @ 008fddb8 */
                    /* catch() { ... } // from try @ 008fdd38 with catch @ 008fddbc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

