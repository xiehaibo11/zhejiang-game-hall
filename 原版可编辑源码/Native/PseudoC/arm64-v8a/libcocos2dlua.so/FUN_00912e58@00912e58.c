
undefined8 FUN_00912e58(undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 00912e60 to 00a12e7b has its CatchHandler @ 00913108 */
  lVar1 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 00912e7c to 00a12f97 has its CatchHandler @ 00912d44 */
  lua_pushinteger(param_1,(long)*(int *)(lVar1 + 0x90));
  return 1;
}

