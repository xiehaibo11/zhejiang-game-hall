
undefined8 FUN_008fb67c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  uVar1 = lua_tointeger(param_1,2);
  *(undefined4 *)(lVar2 + 0x4c) = uVar1;
                    /* try { // try from 008fb6b8 to 009fb723 has its CatchHandler @ 008fb608 */
  return 0;
}

