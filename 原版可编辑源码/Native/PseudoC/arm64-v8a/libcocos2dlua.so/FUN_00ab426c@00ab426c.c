
long * FUN_00ab426c(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  byte *in_x9;
  byte *in_x10;
  uint in_w11;
  void *__s1;
  uint in_w12;
  ulong unaff_x19;
  long *unaff_x20;
  size_t unaff_x21;
  byte *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long in_stack_00000008;
  
  do {
    if (in_w11 == in_w12) {
      param_1 = param_1 - 1;
      in_x9 = in_x9 + 1;
      in_x10 = in_x10 + 1;
      if (param_1 == 0) goto LAB_00ab42c8;
    }
    else {
      while( true ) {
        do {
          while( true ) {
            unaff_x20 = (long *)*unaff_x20;
            if (unaff_x20 == (long *)0x0) goto LAB_00ab42c8;
            uVar4 = unaff_x20[1];
            if (uVar4 == unaff_x19) break;
                    /* try { // try from 00ab4288 to 00bb42d7 has its CatchHandler @ 00ab4288
                       catch() { ... } // from try @ 00ab4288 with catch @ 00ab4288
                       catch() { ... } // from try @ 00ab4334 with catch @ 00ab4288
                       catch() { ... } // from try @ 00ab4378 with catch @ 00ab4288 */
            if (unaff_x25 < 2) {
              uVar4 = uVar4 & unaff_x27;
            }
            else if (unaff_x24 <= uVar4) {
              uVar2 = 0;
              if (unaff_x24 != 0) {
                uVar2 = uVar4 / unaff_x24;
              }
              uVar4 = uVar4 - uVar2 * unaff_x24;
            }
            if (uVar4 != unaff_x26) {
              unaff_x20 = (long *)0x0;
              goto LAB_00ab42c8;
            }
          }
          bVar1 = *(byte *)(unaff_x20 + 2);
          param_1 = (ulong)(bVar1 >> 1);
          uVar4 = param_1;
          if ((bVar1 & 1) != 0) {
            uVar4 = unaff_x20[3];
          }
        } while (uVar4 != unaff_x21);
        __s1 = (void *)unaff_x20[4];
        if ((bVar1 & 1) == 0) {
          __s1 = (void *)((long)unaff_x20 + 0x11);
        }
        if ((bVar1 & 1) == 0) break;
        if ((unaff_x21 == 0) || (iVar3 = memcmp(__s1,unaff_x22,unaff_x21), iVar3 == 0))
        goto LAB_00ab42c8;
      }
      if (unaff_x21 == 0) {
LAB_00ab42c8:
        if (*(long *)(unaff_x23 + 0x28) != in_stack_00000008) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
                    /* try { // try from 00ab42d8 to 00bb4333 has its CatchHandler @ 00ab43b8 */
        return unaff_x20;
      }
      in_x9 = (byte *)((long)unaff_x20 + 0x11);
      in_x10 = unaff_x22;
    }
    in_w11 = (uint)*in_x9;
    in_w12 = (uint)*in_x10;
  } while( true );
}

