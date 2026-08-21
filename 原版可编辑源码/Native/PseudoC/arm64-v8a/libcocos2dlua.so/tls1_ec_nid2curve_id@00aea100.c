
ulong tls1_ec_nid2curve_id(int param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
                    /* catch() { ... } // from try @ 00ae9900 with catch @ 00aea100 */
                    /* catch() { ... } // from try @ 00aea02c with catch @ 00aea104 */
                    /* catch() { ... } // from try @ 00ae9f14 with catch @ 00aea108
                       catch() { ... } // from try @ 00ae9fa8 with catch @ 00aea108
                       catch() { ... } // from try @ 00ae9ff0 with catch @ 00aea108 */
  uVar2 = 0;
                    /* catch() { ... } // from try @ 00ae994c with catch @ 00aea10c */
  piVar3 = &DAT_013d35f0;
  do {
                    /* catch() { ... } // from try @ 00ae9ed8 with catch @ 00aea110 */
                    /* catch() { ... } // from try @ 00ae9a1c with catch @ 00aea114 */
    if (0x1c < uVar2) {
                    /* catch() { ... } // from try @ 00ae9a84 with catch @ 00aea12c
                       catch() { ... } // from try @ 00ae9aa8 with catch @ 00aea12c */
      return 0;
    }
    iVar1 = *piVar3;
                    /* catch() { ... } // from try @ 00ae9ab0 with catch @ 00aea11c */
    uVar2 = uVar2 + 1;
                    /* catch() { ... } // from try @ 00ae9e48 with catch @ 00aea120 */
    piVar3 = piVar3 + 3;
                    /* catch() { ... } // from try @ 00ae9bb8 with catch @ 00aea124 */
  } while (iVar1 != param_1);
                    /* catch() { ... } // from try @ 00ae99e4 with catch @ 00aea128 */
  return uVar2;
}

