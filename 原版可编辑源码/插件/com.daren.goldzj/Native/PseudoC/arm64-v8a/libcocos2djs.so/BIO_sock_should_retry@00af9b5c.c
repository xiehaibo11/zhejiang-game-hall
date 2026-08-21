
int BIO_sock_should_retry(int i)

{
  int iVar1;
  int *piVar2;
  
  if (i + 1U < 2) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
                    /* try { // try from 00af9b90 to 00bf9bc7 has its CatchHandler @ 00af9be8 */
    if ((((iVar1 - 0x47U < 0x2d) && ((1L << ((ulong)(iVar1 - 0x47U) & 0x3f) & 0x181000000001U) != 0)
         ) || (iVar1 == 4)) || (iVar1 == 0xb)) {
      return 1;
    }
  }
  return 0;
}

