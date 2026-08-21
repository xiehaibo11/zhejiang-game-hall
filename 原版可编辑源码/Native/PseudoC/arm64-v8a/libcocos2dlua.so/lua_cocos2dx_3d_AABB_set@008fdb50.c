
/* lua_cocos2dx_3d_AABB_set(lua_State*) */

undefined8 lua_cocos2dx_3d_AABB_set(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  AABB *this;
  ulong uVar3;
  ulong uVar4;
  Vec3 aVStack_68 [16];
  Vec3 aVStack_58 [16];
  long local_48;
  
                    /* try { // try from 008fdb64 to 009fdb6b has its CatchHandler @ 008fdc1c */
  lVar1 = tpidr_el0;
                    /* try { // try from 008fdb6c to 009fdb93 has its CatchHandler @ 008fdc34 */
  local_48 = *(long *)(lVar1 + 0x28);
  this = (AABB *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008fdb94 to 009fdbc7 has its CatchHandler @ 008fdb00 */
  if (iVar2 + -1 == 2) {
    cocos2d::Vec3::Vec3(aVStack_58);
    cocos2d::Vec3::Vec3(aVStack_68);
    uVar3 = luaval_to_vec3(param_1,2,aVStack_58,"cc.AABB:set");
                    /* try { // try from 008fdbc8 to 009fdbdb has its CatchHandler @ 008fdc34 */
                    /* try { // try from 008fdbdc to 009fdc4f has its CatchHandler @ 008fdb00 */
    uVar4 = luaval_to_vec3(param_1,3,aVStack_68,"cc.AABB:set");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      cocos2d::AABB::set(this,aVStack_58,aVStack_68);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.AABB:set",
               iVar2 + -1,2);
  }
                    /* catch() { ... } // from try @ 008fdb64 with catch @ 008fdc1c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 008fdb3c with catch @ 008fdc34
                       catch() { ... } // from try @ 008fdb6c with catch @ 008fdc34
                       catch() { ... } // from try @ 008fdbc8 with catch @ 008fdc34 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

