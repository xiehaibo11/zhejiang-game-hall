
undefined8 FUN_008f8e88(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  pvVar2 = *(void **)(lVar1 + 0xb8);
  if (pvVar2 == (void *)0x0) {
    lua_pushnil(param_1);
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar2 + 0xc),(int *)((long)pvVar2 + 0x10),pvVar2,
               "cc.SpriteFrame");
  }
  return 1;
}

