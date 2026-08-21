
bool FUN_00b90678(BIO *param_1,int param_2,char *param_3,char *param_4,ulong *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
                    /* try { // try from 00b90698 to 00c90717 has its CatchHandler @ 00b90698
                       catch() { ... } // from try @ 00b90698 with catch @ 00b90698
                       catch() { ... } // from try @ 00b90724 with catch @ 00b90698 */
  iVar2 = param_2;
  if (0x14 < param_2) {
    do {
      iVar2 = BIO_write(param_1,"                    ",0x14);
      if (iVar2 != 0x14) {
        return false;
      }
      iVar2 = param_2 + -0x14;
      bVar1 = 0x28 < param_2;
      param_2 = iVar2;
    } while (bVar1);
  }
  iVar3 = BIO_write(param_1,"                    ",iVar2);
  if (iVar3 == iVar2) {
    if ((*param_5 & 0x100) != 0) {
      param_4 = (char *)0x0;
    }
    if ((*param_5 & 0x40) != 0) {
      param_3 = (char *)0x0;
    }
                    /* try { // try from 00b90718 to 00c90723 has its CatchHandler @ 00b907b4 */
    if (param_4 == (char *)0x0 && param_3 == (char *)0x0) {
      return true;
    }
                    /* try { // try from 00b90724 to 00c907cf has its CatchHandler @ 00b90698 */
    if ((param_3 == (char *)0x0) || (iVar2 = BIO_puts(param_1,param_3), 0 < iVar2)) {
      if (param_4 != (char *)0x0) {
        if (param_3 == (char *)0x0) {
          iVar2 = BIO_puts(param_1,param_4);
        }
        else {
          iVar2 = BIO_printf(param_1," (%s)",param_4);
        }
        if (iVar2 < 1) {
          return false;
        }
      }
      iVar2 = BIO_write(param_1,": ",2);
      return iVar2 == 2;
    }
  }
  return false;
}

