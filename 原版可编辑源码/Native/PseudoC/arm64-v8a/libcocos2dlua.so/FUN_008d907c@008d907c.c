
undefined8 FUN_008d907c(undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 008d908c to 009d9247 has its CatchHandler @ 008d8cd0 */
  lVar1 = tolua_tousertype(param_1,1,0);
  if ((*(byte *)(lVar1 + 0x60) & 1) == 0) {
    lVar1 = lVar1 + 0x61;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x70);
  }
  tolua_pushstring(param_1,lVar1);
  return 1;
}

