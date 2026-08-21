
bool statem_flush(long param_1)

{
  bool bVar1;
  long lVar2;
  
                    /* try { // try from 00ade220 to 00bde233 has its CatchHandler @ 00ade418 */
  *(undefined4 *)(param_1 + 0x28) = 2;
  lVar2 = BIO_ctrl(*(BIO **)(param_1 + 0x18),0xb,0,(void *)0x0);
  bVar1 = 0 < (int)lVar2;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return bVar1;
}

