
/* lua_cocos2dx_3d_Mesh_setBlendFunc(lua_State*) */

undefined4 lua_cocos2dx_3d_Mesh_setBlendFunc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Mesh *this;
  ulong uVar3;
  undefined4 uVar4;
  BlendFunc aBStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Mesh *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00903a80 to 00a03ab3 has its CatchHandler @ 00903b80 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_blendfunc(param_1,2,aBStack_40,"cc.Mesh:setBlendFunc");
    if ((uVar3 & 1) != 0) {
      cocos2d::Mesh::setBlendFunc(this,aBStack_40);
                    /* try { // try from 00903ab4 to 00a03ac7 has its CatchHandler @ 00903b4c */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00903b00;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Mesh_setBlendFunc\'",0);
  }
  else {
                    /* try { // try from 00903acc to 00a03aff has its CatchHandler @ 00903b50 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Mesh:setBlendFunc",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00903b00:
                    /* try { // try from 00903b00 to 00a03b9b has its CatchHandler @ 00903980 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

