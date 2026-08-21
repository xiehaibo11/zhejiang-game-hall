
undefined8 FUN_009f76d4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  void *__src;
  undefined8 uVar5;
  void *__dest;
  size_t __n;
  int iVar6;
  undefined1 auVar7 [16];
  
  iVar2 = lua_gettop();
  plVar4 = (long *)lua_newuserdata(param_1,0x418);
  plVar4[2] = (long)(plVar4 + 3);
  plVar4[1] = 0x400;
  *plVar4 = 0;
  lua_getfield(param_1,0xffffd8f0,"pb.Buffer");
  lua_setmetatable(param_1,0xfffffffe);
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      iVar1 = iVar6 + 1;
      auVar7 = FUN_009f9e20(param_1,iVar1);
      __src = auVar7._0_8_;
      if (__src == (void *)0x0) {
        uVar3 = lua_type(param_1,iVar1);
        uVar5 = lua_typename(param_1,uVar3);
        lua_pushfstring(param_1,"%s expected, got %s","string/buffer/slice",uVar5);
        uVar5 = lua_tolstring(param_1,0xffffffff,0);
        luaL_argerror(param_1,iVar1,uVar5);
      }
      __n = auVar7._8_8_ - (long)__src;
      __dest = (void *)FUN_009f9d60(plVar4,__n);
      if (__dest != (void *)0x0) {
        memcpy(__dest,__src,__n);
        *plVar4 = *plVar4 + __n;
      }
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  return 1;
}

