
/* lua_cocos2dx_3d_Animate3D_setOriginInterval(lua_State*) */

undefined4 lua_cocos2dx_3d_Animate3D_setOriginInterval(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Animate3D *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Animate3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.Animate3D:setOriginInterval");
                    /* try { // try from 00901294 to 00a0131b has its CatchHandler @ 00901294
                       catch() { ... } // from try @ 00901294 with catch @ 00901294
                       catch() { ... } // from try @ 00901388 with catch @ 00901294 */
    if ((uVar3 & 1) != 0) {
      cocos2d::Animate3D::setOriginInterval(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009012f4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_3d_Animate3D_setOriginInterval\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animate3D:setOriginInterval",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009012f4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0090131c to 00a0133b has its CatchHandler @ 009013d4 */
  __stack_chk_fail();
}

