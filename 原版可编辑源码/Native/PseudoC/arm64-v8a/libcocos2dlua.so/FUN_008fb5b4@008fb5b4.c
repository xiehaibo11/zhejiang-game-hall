
undefined8 FUN_008fb5b4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  uVar1 = lua_tointeger(param_1,2);
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
                    /* catch() { ... } // from try @ 008fb524 with catch @ 008fb5e8 */
                    /* catch() { ... } // from try @ 008fb508 with catch @ 008fb5ec */
  return 0;
}

