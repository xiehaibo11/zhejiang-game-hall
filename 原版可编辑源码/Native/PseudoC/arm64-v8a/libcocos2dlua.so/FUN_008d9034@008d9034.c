
undefined8 FUN_008d9034(undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 008d9038 to 009d9043 has its CatchHandler @ 008d922c */
                    /* try { // try from 008d904c to 009d9063 has its CatchHandler @ 008d9120 */
  lVar1 = tolua_tousertype(param_1,1,0);
  if ((*(byte *)(lVar1 + 0x48) & 1) == 0) {
    lVar1 = lVar1 + 0x49;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x58);
  }
                    /* try { // try from 008d9068 to 009d908b has its CatchHandler @ 008d911c */
  tolua_pushstring(param_1,lVar1);
  return 1;
}

