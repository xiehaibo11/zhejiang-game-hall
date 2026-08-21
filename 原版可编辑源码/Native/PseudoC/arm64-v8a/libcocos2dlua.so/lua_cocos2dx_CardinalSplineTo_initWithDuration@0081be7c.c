
/* lua_cocos2dx_CardinalSplineTo_initWithDuration(lua_State*) */

void lua_cocos2dx_CardinalSplineTo_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  CardinalSplineTo *this;
  ulong uVar5;
  PointArray *pPVar6;
  undefined8 uVar7;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (CardinalSplineTo *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"cc.CardinalSplineTo:initWithDuration");
    if (param_1 == (lua_State *)0x0) {
LAB_0081bf94:
      luaval_to_number(param_1,4,&local_58,"cc.CardinalSplineTo:initWithDuration");
    }
    else {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 3) || (uVar5 = luaval_is_usertype(param_1,3,"cc.PointArray",0), (uVar5 & 1) == 0)
         ) goto LAB_0081bf94;
      pPVar6 = (PointArray *)tolua_tousertype(param_1,3,0);
      uVar4 = luaval_to_number(param_1,4,&local_58,"cc.CardinalSplineTo:initWithDuration");
      if ((uVar3 & uVar4 & 1) != 0) {
        uVar3 = cocos2d::CardinalSplineTo::initWithDuration
                          (this,(float)dStack_50,pPVar6,(float)local_58);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar7 = 1;
        goto LAB_0081bfc4;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_CardinalSplineTo_initWithDuration\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CardinalSplineTo:initWithDuration",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_0081bfc4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

