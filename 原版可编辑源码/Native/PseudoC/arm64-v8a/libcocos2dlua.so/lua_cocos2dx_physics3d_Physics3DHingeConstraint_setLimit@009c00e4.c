
/* lua_cocos2dx_physics3d_Physics3DHingeConstraint_setLimit(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DHingeConstraint_setLimit(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DHingeConstraint *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double dStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (Physics3DHingeConstraint *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 3:
    uVar3 = luaval_to_number(param_1,2,&dStack_60,"cc.Physics3DHingeConstraint:setLimit");
    uVar4 = luaval_to_number(param_1,3,&local_68,"cc.Physics3DHingeConstraint:setLimit");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
LAB_009c0394:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DHingeConstraint_setLimit\'"
                  ,0);
      goto LAB_009c03cc;
    }
    fVar9 = (float)dStack_60;
    fVar10 = (float)local_68;
    fVar13 = 1.0;
    fVar11 = 0.9;
    fVar12 = 0.3;
    break;
  case 4:
    uVar3 = luaval_to_number(param_1,2,&dStack_60,"cc.Physics3DHingeConstraint:setLimit");
    uVar4 = luaval_to_number(param_1,3,&local_68,"cc.Physics3DHingeConstraint:setLimit");
    uVar5 = luaval_to_number(param_1,4,&local_70,"cc.Physics3DHingeConstraint:setLimit");
    if ((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) goto LAB_009c0394;
    fVar12 = 0.3;
    fVar9 = (float)dStack_60;
    fVar10 = (float)local_68;
    fVar11 = (float)local_70;
    fVar13 = 1.0;
    break;
  case 5:
    uVar3 = luaval_to_number(param_1,2,&dStack_60,"cc.Physics3DHingeConstraint:setLimit");
    uVar4 = luaval_to_number(param_1,3,&local_68,"cc.Physics3DHingeConstraint:setLimit");
    uVar5 = luaval_to_number(param_1,4,&local_70,"cc.Physics3DHingeConstraint:setLimit");
    uVar6 = luaval_to_number(param_1,5,&local_78,"cc.Physics3DHingeConstraint:setLimit");
    if ((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || (((uVar5 & 1) == 0 || ((uVar6 & 1) == 0))))
    goto LAB_009c0394;
    fVar13 = 1.0;
    fVar9 = (float)dStack_60;
    fVar10 = (float)local_68;
    fVar11 = (float)local_70;
    fVar12 = (float)local_78;
    break;
  case 6:
    uVar3 = luaval_to_number(param_1,2,&dStack_60,"cc.Physics3DHingeConstraint:setLimit");
    uVar4 = luaval_to_number(param_1,3,&local_68,"cc.Physics3DHingeConstraint:setLimit");
    uVar5 = luaval_to_number(param_1,4,&local_70,"cc.Physics3DHingeConstraint:setLimit");
    uVar6 = luaval_to_number(param_1,5,&local_78,"cc.Physics3DHingeConstraint:setLimit");
    uVar7 = luaval_to_number(param_1,6,&local_80,"cc.Physics3DHingeConstraint:setLimit");
    if (((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) ||
       (((uVar6 & 1) == 0 || ((uVar7 & 1) == 0)))) goto LAB_009c0394;
    fVar9 = (float)dStack_60;
    fVar10 = (float)local_68;
    fVar11 = (float)local_70;
    fVar12 = (float)local_78;
    fVar13 = (float)local_80;
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DHingeConstraint:setLimit",iVar2 + -1,2);
LAB_009c03cc:
    uVar8 = 0;
    goto LAB_009c03d0;
  }
  cocos2d::Physics3DHingeConstraint::setLimit(this,fVar9,fVar10,fVar11,fVar12,fVar13);
  uVar8 = 1;
  lua_settop(param_1,1);
LAB_009c03d0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

