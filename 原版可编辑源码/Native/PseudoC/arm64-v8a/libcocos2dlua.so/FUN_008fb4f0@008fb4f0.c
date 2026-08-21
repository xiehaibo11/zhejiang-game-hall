
undefined8 FUN_008fb4f0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
                    /* try { // try from 008fb508 to 009fb51f has its CatchHandler @ 008fb5ec */
  lVar2 = tolua_tousertype(param_1,1,0);
  uVar1 = lua_tointeger(param_1,2);
  *(undefined4 *)(lVar2 + 0x2c) = uVar1;
                    /* try { // try from 008fb524 to 009fb55f has its CatchHandler @ 008fb5e8 */
  return 0;
}

