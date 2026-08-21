
undefined8 FUN_008f8c6c(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  
                    /* try { // try from 008f8c74 to 009f8c87 has its CatchHandler @ 008f8d0c */
  lVar1 = tolua_tousertype(param_1,1,0);
  pvVar2 = *(void **)(lVar1 + 0x28);
                    /* try { // try from 008f8c8c to 009f8cbf has its CatchHandler @ 008f8d10 */
  if (pvVar2 == (void *)0x0) {
    lua_pushnil(param_1);
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar2 + 0xc),(int *)((long)pvVar2 + 0x10),pvVar2,
               "fairygui.PackageItem");
  }
                    /* try { // try from 008f8cc0 to 009f8d5b has its CatchHandler @ 008f8b10 */
  return 1;
}

