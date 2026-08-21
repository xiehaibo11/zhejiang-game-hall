
/* lua_cocos2dx_3d_OBB_transform(lua_State*) */

undefined8 lua_cocos2dx_3d_OBB_transform(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  OBB *this;
  ulong uVar3;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (OBB *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 008fe75c with catch @ 008fe890 */
                    /* catch() { ... } // from try @ 008fe734 with catch @ 008fe894 */
                    /* catch() { ... } // from try @ 008fe718 with catch @ 008fe898 */
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 008fe6f8 with catch @ 008fe89c */
                    /* catch() { ... } // from try @ 008fe7d8 with catch @ 008fe8a0 */
    cocos2d::Mat4::Mat4(aMStack_78);
                    /* catch() { ... } // from try @ 008fe7b4 with catch @ 008fe8a4 */
                    /* catch() { ... } // from try @ 008fe798 with catch @ 008fe8a8 */
                    /* catch() { ... } // from try @ 008fe6d4 with catch @ 008fe8ac */
                    /* catch() { ... } // from try @ 008fe6b8 with catch @ 008fe8b0 */
    uVar3 = luaval_to_mat4(param_1,2,aMStack_78,"cc.OBB:transform");
    if ((uVar3 & 1) != 0) {
      cocos2d::OBB::transform(this,aMStack_78);
    }
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.OBB:transform",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

