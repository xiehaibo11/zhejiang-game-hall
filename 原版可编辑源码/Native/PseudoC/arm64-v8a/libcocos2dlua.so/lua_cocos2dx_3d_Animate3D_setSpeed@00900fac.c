
/* lua_cocos2dx_3d_Animate3D_setSpeed(lua_State*) */

undefined4 lua_cocos2dx_3d_Animate3D_setSpeed(lua_State *param_1)

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
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.Animate3D:setSpeed");
    if ((uVar3 & 1) != 0) {
      cocos2d::Animate3D::setSpeed(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0090106c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Animate3D_setSpeed\'",0);
  }
  else {
                    /* try { // try from 00901034 to 00a01087 has its CatchHandler @ 00901034
                       catch(type#1 @ 00000000) { ... } // from try @ 00901034 with catch @ 00901034
                       catch(type#1 @ 00000000) { ... } // from try @ 00901118 with catch @ 00901034
                       catch(type#1 @ 00000000) { ... } // from try @ 0090116c with catch @ 00901034
                       catch(type#1 @ 00000000) { ... } // from try @ 009011e0 with catch @ 00901034
                        */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animate3D:setSpeed",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0090106c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00901088 to 00a0109f has its CatchHandler @ 009011c0 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

