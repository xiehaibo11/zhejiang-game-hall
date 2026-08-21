
long FUN_00a5cdac(void)

{
  ENGINE *e;
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  e = ENGINE_get_first();
  if (e == (ENGINE *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar3 = 0;
    do {
      pcVar1 = ENGINE_get_id(e);
      lVar2 = FUN_00a2c4a8(lVar3,pcVar1);
                    /* try { // try from 00a5cde0 to 00b5ce07 has its CatchHandler @ 00a5cec0 */
      if (lVar2 == 0) {
        FUN_00a2c624(lVar3);
        return 0;
      }
      e = ENGINE_get_next(e);
      lVar3 = lVar2;
    } while (e != (ENGINE *)0x0);
  }
                    /* try { // try from 00a5ce18 to 00b5ce2b has its CatchHandler @ 00a5cec8 */
  return lVar2;
}

