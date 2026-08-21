
/* lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_setLimit(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_setLimit(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DConeTwistConstraint *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double dStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (Physics3DConeTwistConstraint *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 4:
    uVar3 = luaval_to_number(param_1,2,&dStack_70,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar4 = luaval_to_number(param_1,3,&local_78,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar5 = luaval_to_number(param_1,4,&local_80,"cc.Physics3DConeTwistConstraint:setLimit");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      fVar14 = 0.3;
      fVar13 = 1.0;
      fVar10 = (float)dStack_70;
      fVar11 = (float)local_78;
      fVar12 = (float)local_80;
      fVar15 = fVar13;
LAB_009c59cc:
      cocos2d::Physics3DConeTwistConstraint::setLimit
                (this,fVar10,fVar11,fVar12,fVar13,fVar14,fVar15);
      uVar9 = 1;
      lua_settop(param_1,1);
      goto LAB_009c5a20;
    }
    break;
  case 5:
    uVar3 = luaval_to_number(param_1,2,&dStack_70,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar4 = luaval_to_number(param_1,3,&local_78,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar5 = luaval_to_number(param_1,4,&local_80,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar6 = luaval_to_number(param_1,5,&local_88,"cc.Physics3DConeTwistConstraint:setLimit");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      fVar14 = 0.3;
      fVar10 = (float)dStack_70;
      fVar11 = (float)local_78;
      fVar12 = (float)local_80;
      fVar13 = (float)local_88;
      fVar15 = 1.0;
      goto LAB_009c59cc;
    }
    break;
  case 6:
    uVar3 = luaval_to_number(param_1,2,&dStack_70,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar4 = luaval_to_number(param_1,3,&local_78,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar5 = luaval_to_number(param_1,4,&local_80,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar6 = luaval_to_number(param_1,5,&local_88,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar7 = luaval_to_number(param_1,6,&local_90,"cc.Physics3DConeTwistConstraint:setLimit");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) &&
       (((uVar5 & 1) != 0 && (((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)))))) {
      fVar15 = 1.0;
      fVar10 = (float)dStack_70;
      fVar11 = (float)local_78;
      fVar12 = (float)local_80;
      fVar13 = (float)local_88;
      fVar14 = (float)local_90;
      goto LAB_009c59cc;
    }
    break;
  case 7:
    uVar3 = luaval_to_number(param_1,2,&dStack_70,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar4 = luaval_to_number(param_1,3,&local_78,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar5 = luaval_to_number(param_1,4,&local_80,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar6 = luaval_to_number(param_1,5,&local_88,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar7 = luaval_to_number(param_1,6,&local_90,"cc.Physics3DConeTwistConstraint:setLimit");
    uVar8 = luaval_to_number(param_1,7,&local_98,"cc.Physics3DConeTwistConstraint:setLimit");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) &&
       ((((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0)))) {
      fVar10 = (float)dStack_70;
      fVar11 = (float)local_78;
      fVar12 = (float)local_80;
      fVar13 = (float)local_88;
      fVar14 = (float)local_90;
      fVar15 = (float)local_98;
      goto LAB_009c59cc;
    }
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DConeTwistConstraint:setLimit",iVar2 + -1,3);
    goto LAB_009c5a1c;
  }
  tolua_error(param_1,
              "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_setLimit\'"
              ,0);
LAB_009c5a1c:
  uVar9 = 0;
LAB_009c5a20:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

