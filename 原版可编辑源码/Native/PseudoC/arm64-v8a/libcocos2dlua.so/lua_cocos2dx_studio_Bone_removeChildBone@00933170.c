
/* lua_cocos2dx_studio_Bone_removeChildBone(lua_State*) */

undefined4 lua_cocos2dx_studio_Bone_removeChildBone(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Bone *this;
  ulong uVar3;
  Bone *pBVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Bone *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009331a0 to 00a331eb has its CatchHandler @ 009331a0
                       catch() { ... } // from try @ 009331a0 with catch @ 009331a0
                       catch() { ... } // from try @ 00933234 with catch @ 009331a0 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"ccs.Bone",0), (uVar3 & 1) == 0)) {
                    /* catch() { ... } // from try @ 00933230 with catch @ 00933268 */
                    /* catch() { ... } // from try @ 00933210 with catch @ 0093326c */
      luaval_to_boolean(param_1,3,local_3c,"ccs.Bone:removeChildBone");
    }
    else {
                    /* try { // try from 009331ec to 00a331ef has its CatchHandler @ 0093327c */
      pBVar4 = (Bone *)tolua_tousertype(param_1,2,0);
                    /* try { // try from 00933210 to 00a33213 has its CatchHandler @ 0093326c */
      uVar3 = luaval_to_boolean(param_1,3,local_3c,"ccs.Bone:removeChildBone");
      if ((uVar3 & 1) != 0) {
        cocostudio::Bone::removeChildBone(this,pBVar4,local_3c[0]);
                    /* try { // try from 00933230 to 00a33233 has its CatchHandler @ 00933268 */
        uVar5 = 1;
                    /* try { // try from 00933234 to 00a3328f has its CatchHandler @ 009331a0 */
        lua_settop(param_1,1);
        goto LAB_0093328c;
      }
    }
                    /* catch() { ... } // from try @ 009331ec with catch @ 0093327c */
    tolua_error(param_1,&DAT_012cb725,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:removeChildBone",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_0093328c:
                    /* try { // try from 00933290 to 00a3335f has its CatchHandler @ 00933290
                       catch() { ... } // from try @ 00933290 with catch @ 00933290
                       catch() { ... } // from try @ 009333e0 with catch @ 00933290 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

