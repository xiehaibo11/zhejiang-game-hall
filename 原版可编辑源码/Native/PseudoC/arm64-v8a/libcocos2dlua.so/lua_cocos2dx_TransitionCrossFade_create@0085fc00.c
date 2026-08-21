
/* lua_cocos2dx_TransitionCrossFade_create(lua_State*) */

void lua_cocos2dx_TransitionCrossFade_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Scene *pSVar5;
  void *pvVar6;
  undefined8 uVar7;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.TransitionCrossFade:create");
    if ((((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 2 < iVar2)) &&
        (uVar4 = luaval_is_usertype(param_1,3,"cc.Scene",0), (uVar4 & 1) != 0)) &&
       (pSVar5 = (Scene *)tolua_tousertype(param_1,3,0), (uVar3 & 1) != 0)) {
      pvVar6 = (void *)cocos2d::TransitionCrossFade::create((float)local_40,pSVar5);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar7 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.TransitionCrossFade");
        uVar7 = 1;
      }
      goto LAB_0085fd00;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_TransitionCrossFade_create\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.TransitionCrossFade:create",iVar2 + -1,2);
  }
  uVar7 = 0;
LAB_0085fd00:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

