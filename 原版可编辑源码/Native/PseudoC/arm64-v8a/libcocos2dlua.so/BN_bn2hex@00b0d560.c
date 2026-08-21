
char * BN_bn2hex(BIGNUM *a)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
  iVar4 = BN_is_zero();
  if (iVar4 != 0) {
    pcVar5 = CRYPTO_strdup("0","crypto/bn/bn_print.c",0x1b);
    return pcVar5;
  }
  pcVar5 = CRYPTO_malloc(a->top << 4 | 2,"crypto/bn/bn_print.c",0x1c);
  if (pcVar5 == (char *)0x0) {
    ERR_put_error(3,0x69,0x41,"crypto/bn/bn_print.c",0x1e);
  }
  else {
    pcVar9 = pcVar5;
    if (a->neg != 0) {
      pcVar9 = pcVar5 + 1;
      *pcVar5 = '-';
    }
    iVar4 = BN_is_zero(a);
                    /* try { // try from 00b0d5e8 to 00c0d62b has its CatchHandler @ 00b0d6e0 */
    pcVar10 = pcVar9;
    if (iVar4 != 0) {
      pcVar10 = pcVar9 + 1;
      *pcVar9 = '0';
    }
    if (0 < a->top) {
      bVar3 = false;
      lVar6 = (long)a->top;
      do {
        uVar7 = a->d[lVar6 + -1];
        if (bVar3 || (char)(uVar7 >> 0x38) != '\0') {
          cVar2 = "0123456789ABCDEF"[uVar7 >> 0x38 & 0xf];
                    /* try { // try from 00b0d634 to 00c0d653 has its CatchHandler @ 00b0d6e4 */
          *pcVar10 = "0123456789ABCDEF"[uVar7 >> 0x3c];
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
          bVar3 = true;
          uVar7 = a->d[lVar6 + -1];
        }
        if ((uVar7 & 0xff000000000000) != 0 || bVar3) {
                    /* try { // try from 00b0d65c to 00c0d69f has its CatchHandler @ 00b0d6e8 */
          cVar2 = "0123456789ABCDEF"[uVar7 >> 0x30 & 0xf];
          *pcVar10 = "0123456789ABCDEF"[((ushort)(uVar7 >> 0x30) & 0xff) >> 4];
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
          bVar3 = true;
          uVar7 = a->d[lVar6 + -1];
        }
        uVar8 = (uint)(uVar7 >> 0x28) & 0xff;
        if (uVar8 != 0 || bVar3) {
                    /* try { // try from 00b0d6a0 to 00c0d6fb has its CatchHandler @ 00b0d554 */
          cVar2 = "0123456789ABCDEF"[uVar7 >> 0x28 & 0xf];
          *pcVar10 = "0123456789ABCDEF"[uVar8 >> 4];
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
          bVar3 = true;
          uVar7 = a->d[lVar6 + -1];
        }
        if ((uVar7 & 0xff00000000) != 0 || bVar3) {
          cVar2 = "0123456789ABCDEF"[uVar7 >> 0x20 & 0xf];
          *pcVar10 = "0123456789ABCDEF"[((uint)(uVar7 >> 0x20) & 0xff) >> 4];
                    /* catch() { ... } // from try @ 00b0d5e8 with catch @ 00b0d6e0 */
          pcVar10[1] = cVar2;
                    /* catch() { ... } // from try @ 00b0d634 with catch @ 00b0d6e4 */
                    /* catch() { ... } // from try @ 00b0d65c with catch @ 00b0d6e8 */
          pcVar10 = pcVar10 + 2;
          bVar3 = true;
          uVar7 = a->d[lVar6 + -1];
        }
                    /* catch() { ... } // from try @ 00b0d8e8 with catch @ 00b0d6fc
                       catch() { ... } // from try @ 00b0d9bc with catch @ 00b0d6fc */
        if ((uVar7 & 0xff000000) != 0 || bVar3) {
          cVar2 = "0123456789ABCDEF"[uVar7 >> 0x18 & 0xf];
          *pcVar10 = "0123456789ABCDEF"[((uint)(uVar7 >> 0x18) & 0xff) >> 4];
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
          bVar3 = true;
          uVar7 = a->d[lVar6 + -1];
        }
        uVar8 = (uint)uVar7 >> 0x10 & 0xff;
        if (uVar8 != 0 || bVar3) {
          cVar2 = "0123456789ABCDEF"[uVar7 >> 0x10 & 0xf];
                    /* try { // try from 00b0d74c to 00c0d75b has its CatchHandler @ 00b0da2c */
          *pcVar10 = "0123456789ABCDEF"[uVar8 >> 4];
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
          bVar3 = true;
          uVar7 = a->d[lVar6 + -1];
        }
        uVar8 = (uint)uVar7 >> 8 & 0xff;
        if (uVar8 != 0 || bVar3) {
          cVar2 = "0123456789ABCDEF"[uVar7 >> 8 & 0xf];
          *pcVar10 = "0123456789ABCDEF"[uVar8 >> 4];
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
          bVar3 = true;
          uVar7 = a->d[lVar6 + -1];
        }
        if ((uVar7 & 0xff) != 0 || bVar3) {
                    /* try { // try from 00b0d7b4 to 00c0d823 has its CatchHandler @ 00b0da34 */
          cVar2 = "0123456789ABCDEF"[uVar7 & 0xf];
          *pcVar10 = "0123456789ABCDEF"[((uint)uVar7 & 0xff) >> 4];
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
          bVar3 = true;
        }
        bVar1 = 1 < lVar6;
        lVar6 = lVar6 + -1;
      } while (bVar1);
    }
    *pcVar10 = '\0';
  }
  return pcVar5;
}

