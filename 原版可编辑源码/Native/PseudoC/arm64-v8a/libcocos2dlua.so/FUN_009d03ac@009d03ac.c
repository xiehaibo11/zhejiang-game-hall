
undefined8 FUN_009d03ac(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = lua_touserdata(param_1,1);
  if (lVar1 != 0) {
    strbuf_free(lVar1 + 0x500);
  }
                    /* try { // try from 009d03cc to 00ad0437 has its CatchHandler @ 009d8170 */
  return 0;
}

