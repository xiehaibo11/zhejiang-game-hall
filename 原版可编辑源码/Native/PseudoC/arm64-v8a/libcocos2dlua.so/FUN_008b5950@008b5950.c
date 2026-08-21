
undefined8 FUN_008b5950(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  uVar3 = 0;
  if (param_1 != (lua_State *)0x0) {
    plVar2 = (long *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      pvVar4 = (void *)(**(code **)(*plVar2 + 0x20))(plVar2);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.GridAction");
      uVar3 = 1;
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.GridAction:reverse",iVar1 + -1,0);
      uVar3 = 0;
    }
  }
  return uVar3;
}

