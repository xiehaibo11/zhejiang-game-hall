
/* lua_cocos2dx_physics3d_Physics3DHingeConstraint_enableAngularMotor(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DHingeConstraint_enableAngularMotor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DHingeConstraint *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  double local_60;
  double dStack_58;
  bool local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Physics3DHingeConstraint *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar3 = luaval_to_boolean(param_1,2,local_4c,"cc.Physics3DHingeConstraint:enableAngularMotor");
    uVar4 = luaval_to_number(param_1,3,&dStack_58,"cc.Physics3DHingeConstraint:enableAngularMotor");
    uVar5 = luaval_to_number(param_1,4,&local_60,"cc.Physics3DHingeConstraint:enableAngularMotor");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      cocos2d::Physics3DHingeConstraint::enableAngularMotor
                (this,local_4c[0],(float)dStack_58,(float)local_60);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_009bf988;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DHingeConstraint_enableAngularMotor\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012ec2c0,
               iVar2 + -1,3);
  }
  uVar6 = 0;
LAB_009bf988:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

