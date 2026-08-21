
/* lua_cocos2dx_GLView_setViewPortInPoints(lua_State*) */

undefined4 lua_cocos2dx_GLView_setViewPortInPoints(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    uVar4 = luaval_to_number(param_1,2,&dStack_60,"cc.GLView:setViewPortInPoints");
    uVar5 = luaval_to_number(param_1,3,&local_68,"cc.GLView:setViewPortInPoints");
    uVar6 = luaval_to_number(param_1,4,&dStack_70,"cc.GLView:setViewPortInPoints");
    uVar7 = luaval_to_number(param_1,5,&local_78,"cc.GLView:setViewPortInPoints");
    if (((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) {
      (**(code **)(*plVar3 + 0xd0))
                ((float)dStack_60,(float)local_68,(float)dStack_70,(float)local_78,plVar3);
      uVar8 = 1;
      lua_settop(param_1,1);
      goto LAB_007f1574;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_GLView_setViewPortInPoints\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLView:setViewPortInPoints",iVar2 + -1,4);
  }
  uVar8 = 0;
LAB_007f1574:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

