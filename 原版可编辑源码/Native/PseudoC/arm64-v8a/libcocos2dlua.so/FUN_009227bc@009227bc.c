
undefined8 FUN_009227bc(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  
  uVar4 = 0;
  if (param_1 != 0) {
    plVar3 = (long *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      uVar2 = (**(code **)(*plVar3 + 0x5a0))(plVar3,extraout_x1,0);
      tolua_pushboolean(param_1,uVar2 & 1);
      uVar4 = 1;
    }
    else {
      luaL_error(param_1,
                 "\'getIgnoreMovementBoneData\' function of Bone  has wrong number of arguments: %d, was expecting %d\n"
                 ,iVar1 + -1,0);
      uVar4 = 0;
    }
  }
  return uVar4;
}

