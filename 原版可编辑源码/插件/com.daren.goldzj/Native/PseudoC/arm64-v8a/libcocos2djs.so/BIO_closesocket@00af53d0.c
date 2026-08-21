
uint BIO_closesocket(int param_1)

{
  uint uVar1;
  
  uVar1 = close(param_1);
                    /* try { // try from 00af53e4 to 00bf53eb has its CatchHandler @ 00af5418 */
  return uVar1 >> 0x1f ^ 1;
}

