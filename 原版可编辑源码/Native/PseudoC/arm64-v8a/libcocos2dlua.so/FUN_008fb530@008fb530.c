
undefined8 FUN_008fb530(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  uVar1 = lua_tointeger(param_1,2);
  *(undefined4 *)(lVar2 + 0x30) = uVar1;
                    /* try { // try from 008fb560 to 009fb607 has its CatchHandler @ 008fb45c */
  return 0;
}

