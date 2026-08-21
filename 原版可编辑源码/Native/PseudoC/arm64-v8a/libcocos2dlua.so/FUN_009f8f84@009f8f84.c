
undefined8 FUN_009f8f84(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  long lStack_58;
  long local_50;
  
  lVar2 = FUN_009f9a54();
  uVar3 = luaL_checklstring(param_1,1,0);
  lVar4 = FUN_009fc1e8(lVar2,uVar3);
  uVar3 = lua_tolstring(param_1,1,0);
  FUN_009fa638(param_1,lVar4 != 0,1,0x12f5d2d,uVar3);
  luaL_checktype(param_1,2,5);
  local_60 = param_1;
  lStack_58 = lVar2;
  lVar5 = lua_touserdata(param_1,3);
  if ((lVar5 != 0) && (iVar1 = lua_getmetatable(param_1,3), iVar1 != 0)) {
    lua_getfield(param_1,0xffffd8f0,"pb.Buffer");
    iVar1 = lua_rawequal(param_1,0xfffffffe,0xffffffff);
    lua_settop(param_1,0xfffffffd);
    local_50 = lVar5;
    if (iVar1 != 0) goto LAB_009f90a0;
  }
  local_50 = lVar2 + 0x68;
  if (*(void **)(lVar2 + 0x78) != (void *)(lVar2 + 0x80)) {
    free(*(void **)(lVar2 + 0x78));
  }
  *(void **)(lVar2 + 0x78) = (void *)(lVar2 + 0x80);
  *(undefined8 *)(lVar2 + 0x70) = 0x400;
  *(undefined8 *)(lVar2 + 0x68) = 0;
LAB_009f90a0:
  lua_pushvalue(param_1,2);
  FUN_009fef1c(&local_60,lVar4);
  if (local_50 == lVar2 + 0x68) {
    lua_pushlstring(param_1,*(undefined8 *)(lVar2 + 0x78),*(undefined8 *)(lVar2 + 0x68));
    if (*(void **)(lVar2 + 0x78) != (void *)(lVar2 + 0x80)) {
      free(*(void **)(lVar2 + 0x78));
    }
    *(void **)(lVar2 + 0x78) = (void *)(lVar2 + 0x80);
    *(undefined8 *)(lVar2 + 0x70) = 0x400;
    *(undefined8 *)(lVar2 + 0x68) = 0;
  }
  else {
    lua_settop(param_1,3);
  }
  return 1;
}

