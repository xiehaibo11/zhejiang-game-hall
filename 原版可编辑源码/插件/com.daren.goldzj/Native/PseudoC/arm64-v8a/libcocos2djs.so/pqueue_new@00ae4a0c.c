
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pqueue pqueue_new(void)

{
  pqueue p_Var1;
  
  p_Var1 = (pqueue)CRYPTO_zalloc(0x10,"ssl/pqueue.c",0x27);
  return p_Var1;
}

