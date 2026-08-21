
/* lua_cocos2dx_3d_Animate3D_setWeight(lua_State*) */

undefined4 lua_cocos2dx_3d_Animate3D_setWeight(lua_State *param_1)

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
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.Animate3D:setWeight");
                    /* try { // try from 00900ca0 to 00a00cf3 has its CatchHandler @ 00900ca0
                       catch(type#1 @ 00000000) { ... } // from try @ 00900ca0 with catch @ 00900ca0
                       catch(type#1 @ 00000000) { ... } // from try @ 00900d74 with catch @ 00900ca0
                       catch(type#1 @ 00000000) { ... } // from try @ 00900dcc with catch @ 00900ca0
                       catch(type#1 @ 00000000) { ... } // from try @ 00900e3c with catch @ 00900ca0
                        */
    if ((uVar3 & 1) != 0) {
      cocos2d::Animate3D::setWeight(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00900d00;
    }
                    /* try { // try from 00900cf4 to 00a00d43 has its CatchHandler @ 00900e24 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Animate3D_setWeight\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animate3D:setWeight",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00900d00:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

