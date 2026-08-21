
undefined8 FUN_0091b704(lua_State *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  uVar3 = 0;
  if (param_1 != (lua_State *)0x0) {
    tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 0) {
      pvVar4 = (void *)CCBProxy::createCCBReader();
      piVar1 = (int *)((long)pvVar4 + 0x10);
      if (pvVar4 == (void *)0x0) {
        iVar2 = -1;
        piVar1 = (int *)0x0;
      }
      else {
        iVar2 = *(int *)((long)pvVar4 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar2,piVar1,pvVar4,"cc.CCBReader");
      uVar3 = 1;
    }
    else {
      luaL_error(param_1,
                 "%s function of CCBProxy  has wrong number of arguments: %d, was expecting %d\n",
                 "cc.CCBProxy:createCCBReader",iVar2 + -1,0);
      uVar3 = 0;
    }
  }
  return uVar3;
}

