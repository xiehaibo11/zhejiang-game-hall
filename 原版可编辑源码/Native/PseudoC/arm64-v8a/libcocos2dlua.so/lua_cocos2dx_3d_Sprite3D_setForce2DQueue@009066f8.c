
/* lua_cocos2dx_3d_Sprite3D_setForce2DQueue(lua_State*) */

undefined4 lua_cocos2dx_3d_Sprite3D_setForce2DQueue(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Sprite3D *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
                    /* try { // try from 009066fc to 00a0672f has its CatchHandler @ 009067fc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Sprite3D *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00906730 to 00a06743 has its CatchHandler @ 009067c8 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00906748 to 00a0677b has its CatchHandler @ 009067cc */
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"cc.Sprite3D:setForce2DQueue");
    if ((uVar3 & 1) != 0) {
      cocos2d::Sprite3D::setForce2DQueue(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009067b4;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Sprite3D_setForce2DQueue\'"
                ,0);
  }
  else {
                    /* try { // try from 0090677c to 00a06817 has its CatchHandler @ 0090662c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3D:setForce2DQueue",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009067b4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00906730 with catch @ 009067c8 */
                    /* catch() { ... } // from try @ 00906748 with catch @ 009067cc */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

