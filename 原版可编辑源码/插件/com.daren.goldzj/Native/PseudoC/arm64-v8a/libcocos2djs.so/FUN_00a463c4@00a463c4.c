
long FUN_00a463c4(void)

{
  ENGINE *e;
  char *pcVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 00a463d0 to 00b463e7 has its CatchHandler @ 00a465c0 */
  e = ENGINE_get_first();
  if (e == (ENGINE *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar3 = 0;
    do {
      pcVar1 = ENGINE_get_id(e);
                    /* try { // try from 00a463f0 to 00b463fb has its CatchHandler @ 00a465bc */
      lVar2 = FUN_00a16ac0(lVar3,pcVar1);
                    /* try { // try from 00a463fc to 00b46407 has its CatchHandler @ 00a465b8 */
      if (lVar2 == 0) {
        FUN_00a16c3c(lVar3);
        return 0;
      }
      e = ENGINE_get_next(e);
                    /* try { // try from 00a46408 to 00b46543 has its CatchHandler @ 00a465d0 */
      lVar3 = lVar2;
    } while (e != (ENGINE *)0x0);
  }
  return lVar2;
}

