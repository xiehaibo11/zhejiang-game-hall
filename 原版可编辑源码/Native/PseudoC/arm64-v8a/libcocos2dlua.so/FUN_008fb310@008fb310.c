
undefined8 FUN_008fb310(undefined8 param_1)

{
  double dVar1;
  long lVar2;
  
                    /* try { // try from 008fb320 to 009fb333 has its CatchHandler @ 008fb36c */
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008fb334 to 009fb37f has its CatchHandler @ 008fb270 */
  dVar1 = (double)lua_tonumber(param_1,2);
  *(float *)(lVar2 + 0x18) = (float)dVar1;
  return 0;
}

