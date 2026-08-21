
/* lua_cocos2dx_GLView_setDesignResolutionSize(lua_State*) */

undefined4 lua_cocos2dx_GLView_setDesignResolutionSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  int local_5c;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar4 = luaval_to_number(param_1,2,&dStack_50,"cc.GLView:setDesignResolutionSize");
    uVar5 = luaval_to_number(param_1,3,&local_58,"cc.GLView:setDesignResolutionSize");
    uVar6 = luaval_to_int32(param_1,4,&local_5c,"cc.GLView:setDesignResolutionSize");
    if ((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      (**(code **)(*plVar3 + 0xc0))((float)dStack_50,(float)local_58,plVar3,local_5c);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_007f107c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_GLView_setDesignResolutionSize\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLView:setDesignResolutionSize",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_007f107c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

