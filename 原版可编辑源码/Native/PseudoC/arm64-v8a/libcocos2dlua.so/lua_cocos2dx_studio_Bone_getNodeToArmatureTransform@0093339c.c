
/* lua_cocos2dx_studio_Bone_getNodeToArmatureTransform(lua_State*) */

void lua_cocos2dx_studio_Bone_getNodeToArmatureTransform(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  Mat4 aMStack_78 [64];
  long local_38;
  
                    /* try { // try from 009333ac to 00a333df has its CatchHandler @ 00933430 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x548))(aMStack_78,plVar3);
    mat4_to_luaval(param_1,aMStack_78);
    cocos2d::Mat4::~Mat4(aMStack_78);
                    /* catch() { ... } // from try @ 00933394 with catch @ 0093342c */
  }
  else {
                    /* try { // try from 009333e0 to 00a3347b has its CatchHandler @ 00933290 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:getNodeToArmatureTransform",iVar2,0);
  }
                    /* catch() { ... } // from try @ 009333ac with catch @ 00933430 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

