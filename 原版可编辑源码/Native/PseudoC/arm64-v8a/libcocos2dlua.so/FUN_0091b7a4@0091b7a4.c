
undefined8 FUN_0091b7a4(lua_State *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  CCBProxy *this;
  char *pcVar4;
  CCBReader *pCVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  if (param_1 != (lua_State *)0x0) {
    this = (CCBProxy *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if ((iVar2 - 1U | 1) == 3) {
      pcVar4 = (char *)tolua_tostring(param_1,2,0);
      pCVar5 = (CCBReader *)tolua_tousertype(param_1,3,0);
      iVar2 = -1;
      iVar3 = tolua_toboolean(param_1,4,0xffffffff);
      pvVar6 = (void *)CCBProxy::readCCBFromFile(this,pcVar4,pCVar5,iVar3 != 0);
      piVar1 = (int *)((long)pvVar6 + 0x10);
      if (pvVar6 == (void *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        iVar2 = *(int *)((long)pvVar6 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar2,piVar1,pvVar6,"cc.Node");
      uVar7 = 1;
    }
    else {
      luaL_error(param_1,
                 "%s function of CCBProxy  has wrong number of arguments: %d, was expecting %d\n",
                 "cc.CCBReader:readCCBFromFile",iVar2 - 1U,2);
      uVar7 = 0;
    }
  }
  return uVar7;
}

