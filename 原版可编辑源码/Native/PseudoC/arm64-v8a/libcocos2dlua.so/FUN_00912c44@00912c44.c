
undefined8 FUN_00912c44(undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 00912c4c to 00a12c5f has its CatchHandler @ 00912ce4 */
  lVar1 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 00912c60 to 00a12d43 has its CatchHandler @ 00912b8c */
  tolua_pushnumber((double)(long)*(int *)(lVar1 + 0xb0),param_1);
  return 1;
}

