
void FUN_00c2e10c(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 <= param_2) {
    return;
  }
LAB_00c2e134:
  lua_rawgeti(param_1,1,param_2);
  lua_rawgeti(param_1,1,param_3);
  iVar2 = FUN_00c2e060(param_1,0xffffffff,0xfffffffe);
  if (iVar2 == 0) {
    lua_settop(param_1,0xfffffffd);
  }
  else {
    FUN_00c2dc50(param_1,param_2,param_3);
  }
  if (param_3 - param_2 == 1) {
    return;
  }
  iVar2 = (param_2 + param_3) / 2;
  lua_rawgeti(param_1,1,iVar2);
  lua_rawgeti(param_1,1,param_2);
  iVar3 = FUN_00c2e060(param_1,0xfffffffe,0xffffffff);
  if (iVar3 == 0) {
    lua_settop(param_1,0xfffffffe);
    lua_rawgeti(param_1,1,param_3);
    iVar3 = FUN_00c2e060(param_1,0xffffffff,0xfffffffe);
    if (iVar3 == 0) {
      lua_settop(param_1,0xfffffffd);
    }
    else {
      FUN_00c2dc50(param_1,iVar2,param_3);
    }
  }
  else {
    FUN_00c2dc50(param_1,iVar2,param_2);
  }
  if (param_3 - param_2 == 2) {
    return;
  }
  iVar3 = param_3 + -1;
  lua_rawgeti(param_1,1,iVar2);
  lua_pushvalue(param_1,0xffffffff);
  lua_rawgeti(param_1,1,iVar3);
  FUN_00c2dc50(param_1,iVar2,iVar3);
  iVar5 = param_2;
  iVar2 = iVar3;
  do {
    while( true ) {
      iVar1 = iVar5 + 1;
      lua_rawgeti(param_1,1,iVar1);
      iVar4 = FUN_00c2e060(param_1,0xffffffff,0xfffffffe);
      if (iVar4 == 0) break;
      if (param_3 <= iVar1) {
LAB_00c2e3a8:
                    /* WARNING: Subroutine does not return */
        FUN_00bfb3a0(param_1,0x5b0);
      }
      lua_settop(param_1,0xfffffffe);
      iVar5 = iVar1;
    }
    while( true ) {
      iVar2 = iVar2 + -1;
      lua_rawgeti(param_1,1,iVar2);
      iVar4 = FUN_00c2e060(param_1,0xfffffffd,0xffffffff);
      if (iVar4 == 0) break;
      if (iVar2 <= param_2) goto LAB_00c2e3a8;
      lua_settop(param_1,0xfffffffe);
    }
    if (iVar2 < iVar1) break;
    FUN_00c2dc50(param_1,iVar1,iVar2);
    iVar5 = iVar1;
  } while( true );
  lua_settop(param_1,0xfffffffc);
  lua_rawgeti(param_1,1,iVar3);
  lua_rawgeti(param_1,1,iVar1);
  FUN_00c2dc50(param_1,iVar3,iVar1);
  if (iVar1 - param_2 < param_3 - iVar1) {
    iVar1 = iVar5 + 2;
    iVar2 = param_2;
    iVar3 = iVar5;
    iVar5 = param_3;
    param_2 = iVar1;
  }
  else {
    iVar2 = iVar5 + 2;
    iVar3 = param_3;
  }
  FUN_00c2e10c(param_1,iVar2,iVar3);
  param_3 = iVar5;
  if (iVar5 <= param_2) {
    return;
  }
  goto LAB_00c2e134;
}

