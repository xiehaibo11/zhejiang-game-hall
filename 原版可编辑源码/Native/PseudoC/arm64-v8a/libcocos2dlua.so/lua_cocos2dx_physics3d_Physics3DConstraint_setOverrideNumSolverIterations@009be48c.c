
/* lua_cocos2dx_physics3d_Physics3DConstraint_setOverrideNumSolverIterations(lua_State*) */

undefined4
lua_cocos2dx_physics3d_Physics3DConstraint_setOverrideNumSolverIterations(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DConstraint *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009be4a4 to 00abe56b has its CatchHandler @ 009be4a4
                       catch() { ... } // from try @ 009be4a4 with catch @ 009be4a4
                       catch() { ... } // from try @ 009be610 with catch @ 009be4a4 */
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DConstraint *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,
                            "cc.Physics3DConstraint:setOverrideNumSolverIterations");
    if ((uVar3 & 1) != 0) {
      cocos2d::Physics3DConstraint::setOverrideNumSolverIterations(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009be548;
    }
    tolua_error(param_1,&DAT_012ebddc,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DConstraint:setOverrideNumSolverIterations",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009be548:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009be56c to 00abe573 has its CatchHandler @ 009be6d8 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

