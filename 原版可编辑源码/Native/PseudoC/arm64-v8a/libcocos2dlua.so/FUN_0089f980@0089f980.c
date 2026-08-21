
undefined8 FUN_0089f980(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pbVar4 = (byte *)(**(code **)(*plVar2 + 0x538))(plVar2);
    pbVar5 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar5 = pbVar4 + 1;
    }
    tolua_pushstring(param_1,pbVar5);
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelBMFont:getString",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

