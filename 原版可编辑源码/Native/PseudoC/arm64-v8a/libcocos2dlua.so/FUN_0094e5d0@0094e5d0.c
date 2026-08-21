
undefined8 FUN_0094e5d0(lua_State *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  
  uVar6 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar2 = lua_gettop();
    if (iVar2 == 4) {
      pcVar3 = (char *)tolua_tostring(param_1,2,&DAT_013c996e);
      pcVar4 = (char *)tolua_tostring(param_1,3,&DAT_013c996e);
      dVar8 = (double)tolua_tonumber(0x3ff0000000000000,param_1,4);
      fVar7 = (float)dVar8;
    }
    else {
      if (iVar2 != 3) {
        luaL_error(param_1,
                   "\'createWithFile\' function of SkeletonAnimation has wrong number of arguments: %d, was expecting %d\n"
                   ,iVar2 + -1,2);
        return 0;
      }
      pcVar3 = (char *)tolua_tostring(param_1,2,&DAT_013c996e);
      pcVar4 = (char *)tolua_tostring(param_1,3,&DAT_013c996e);
      fVar7 = 1.0;
    }
    pvVar5 = (void *)LuaSkeletonAnimation::createWithFile(pcVar3,pcVar4,fVar7);
    piVar1 = (int *)((long)pvVar5 + 0x10);
    if (pvVar5 == (void *)0x0) {
      iVar2 = -1;
      piVar1 = (int *)0x0;
    }
    else {
      iVar2 = *(int *)((long)pvVar5 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar2,piVar1,pvVar5,"sp.SkeletonAnimation");
    uVar6 = 1;
  }
  return uVar6;
}

