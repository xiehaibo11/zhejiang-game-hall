
/* lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR(lua_State*) */

void lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Mat4 aMStack_78 [64];
  long local_38;
  
                    /* try { // try from 00939500 to 00a39523 has its CatchHandler @ 00939c48 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
                    /* try { // try from 00939524 to 00a39683 has its CatchHandler @ 00939278 */
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    cocostudio::Skin::getNodeToWorldTransformAR();
    mat4_to_luaval(param_1,aMStack_78);
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Skin:getNodeToWorldTransformAR",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

