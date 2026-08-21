
/* lua_cocos2dx_3d_Animate3D_setTransitionTime(lua_State*) */

undefined4 lua_cocos2dx_3d_Animate3D_setTransitionTime(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
                    /* try { // try from 00901878 to 00a018ab has its CatchHandler @ 00901ac8 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.Animate3D:setTransitionTime");
    if ((uVar3 & 1) != 0) {
      if (0.0 <= (float)local_40) {
        cocos2d::Animate3D::_transTime = (float)local_40;
      }
                    /* try { // try from 009018bc to 00a018d7 has its CatchHandler @ 00901a94 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00901908;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_3d_Animate3D_setTransitionTime\'",0);
  }
  else {
                    /* try { // try from 009018e8 to 00a01937 has its CatchHandler @ 00901af4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Animate3D:setTransitionTime",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00901908:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

