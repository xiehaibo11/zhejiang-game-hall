
/* lua_cocos2dx_TransitionFadeTR_actionWithSize(lua_State*) */

void lua_cocos2dx_TransitionFadeTR_actionWithSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
    uVar4 = luaval_to_size(param_1,2,aSStack_40,"cc.TransitionFadeTR:actionWithSize");
    if ((uVar4 & 1) != 0) {
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x548))(plVar3,aSStack_40);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.ActionInterval");
        uVar6 = 1;
      }
      goto LAB_00860f64;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_TransitionFadeTR_actionWithSize\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TransitionFadeTR:actionWithSize",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_00860f64:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

