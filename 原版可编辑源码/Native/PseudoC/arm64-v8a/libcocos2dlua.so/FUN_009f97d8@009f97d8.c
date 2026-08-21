
undefined8 FUN_009f97d8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = lua_touserdata(param_1,1);
  if ((lVar2 != 0) && (iVar1 = lua_getmetatable(param_1,1), iVar1 != 0)) {
    lua_getfield(param_1,0xffffd8f0,"pb.State");
    iVar1 = lua_rawequal(param_1,0xfffffffe,0xffffffff);
    lua_settop(param_1,0xfffffffd);
    if (iVar1 != 0) {
      FUN_009fc080(lVar2);
      if (*(void **)(lVar2 + 0x78) != (void *)(lVar2 + 0x80)) {
        free(*(void **)(lVar2 + 0x78));
      }
      *(void **)(lVar2 + 0x78) = (void *)(lVar2 + 0x80);
      *(undefined8 *)(lVar2 + 0x70) = 0x400;
      *(undefined8 *)(lVar2 + 0x68) = 0;
      luaL_unref(param_1,0xffffd8f0,*(undefined4 *)(lVar2 + 0x480));
    }
  }
  return 0;
}

