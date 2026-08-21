
undefined1 * bn_compute_wNAF(BIGNUM *param_1,uint param_2,ulong *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int line;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  iVar4 = BN_is_zero();
  if (iVar4 == 0) {
    if (param_2 - 1 < 7) {
      iVar4 = BN_is_negative(param_1);
      cVar1 = -1;
      if (iVar4 == 0) {
        cVar1 = '\x01';
      }
      if ((param_1->d != (ulong *)0x0) && (param_1->top != 0)) {
        iVar4 = BN_num_bits(param_1);
        uVar9 = (ulong)iVar4;
        puVar5 = CRYPTO_malloc((int)(uVar9 + 1),"crypto/bn/bn_intern.c",0x3c);
        if (puVar5 == (undefined1 *)0x0) {
          iVar4 = 0x41;
          line = 0x42;
        }
        else {
                    /* try { // try from 00b98188 to 00c98253 has its CatchHandler @ 00b98188
                       catch() { ... } // from try @ 00b98188 with catch @ 00b98188
                       catch() { ... } // from try @ 00b9825c with catch @ 00b98188
                       catch() { ... } // from try @ 00b982a0 with catch @ 00b98188
                       catch() { ... } // from try @ 00b982cc with catch @ 00b98188 */
          uVar2 = 1 << (ulong)(param_2 & 0x1f);
          uVar3 = uVar2 * 2;
          uVar8 = (uint)*param_1->d & uVar3 - 1;
          uVar6 = 0;
          do {
            if (uVar8 == 0) {
              if (uVar9 <= (long)(int)param_2 + 1 + uVar6) {
                if (uVar6 <= uVar9 + 1) {
                  *param_3 = uVar6;
                  return puVar5;
                }
                    /* catch() { ... } // from try @ 00b982bc with catch @ 00b98318 */
                    /* catch() { ... } // from try @ 00b98290 with catch @ 00b9831c */
                    /* catch() { ... } // from try @ 00b98254 with catch @ 00b98320 */
                iVar4 = 0x44;
                line = 0x82;
                goto LAB_00b9812c;
              }
              uVar8 = 0;
LAB_00b9823c:
              uVar7 = 0;
            }
            else {
              if ((uVar8 & 1) == 0) goto LAB_00b9823c;
              uVar7 = uVar8;
              if ((uVar8 & uVar2) != 0) {
                uVar7 = uVar8 + uVar2 * -2;
                if (uVar9 <= (long)(int)param_2 + 1 + uVar6) {
                  uVar7 = uVar8 & (int)(uVar3 - 1) >> 1;
                }
              }
              if ((((int)uVar2 <= (int)uVar7) || ((int)uVar7 <= (int)-uVar2)) || ((uVar7 & 1) == 0))
              {
                iVar4 = 0x44;
                line = 0x65;
                goto LAB_00b9812c;
              }
              uVar8 = uVar8 - uVar7;
              if (((uVar8 != uVar2) && (uVar8 != 0)) && (uVar8 != uVar3)) {
                iVar4 = 0x44;
                line = 0x71;
                goto LAB_00b9812c;
              }
            }
                    /* try { // try from 00b98254 to 00c9825b has its CatchHandler @ 00b98320 */
            puVar5[uVar6] = (char)uVar7 * cVar1;
            iVar4 = BN_is_bit_set(param_1,param_2 + (int)uVar6 + 1);
                    /* try { // try from 00b9825c to 00c9828f has its CatchHandler @ 00b98188 */
            uVar8 = (iVar4 << (ulong)(param_2 & 0x1f)) + ((int)uVar8 >> 1);
            uVar6 = uVar6 + 1;
          } while ((int)uVar8 <= (int)uVar3);
          iVar4 = 0x44;
          line = 0x7c;
        }
        goto LAB_00b9812c;
      }
                    /* try { // try from 00b98290 to 00c9829f has its CatchHandler @ 00b9831c */
                    /* try { // try from 00b982a0 to 00c982bb has its CatchHandler @ 00b98188 */
      iVar4 = 0x37;
    }
    else {
      iVar4 = 0x2b;
    }
    ERR_put_error(3,0x8e,0x44,"crypto/bn/bn_intern.c",iVar4);
    puVar5 = (undefined1 *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 00b98068 with catch @ 00b980c0 */
    puVar5 = CRYPTO_malloc(1,"crypto/bn/bn_intern.c",0x1f);
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 0;
      *param_3 = 1;
      return puVar5;
    }
    iVar4 = 0x41;
    line = 0x21;
    puVar5 = (undefined1 *)0x0;
LAB_00b9812c:
    ERR_put_error(3,0x8e,iVar4,"crypto/bn/bn_intern.c",line);
  }
                    /* try { // try from 00b982bc to 00c982cb has its CatchHandler @ 00b98318 */
  CRYPTO_free(puVar5);
                    /* try { // try from 00b982cc to 00c98333 has its CatchHandler @ 00b98188 */
  return (undefined1 *)0x0;
}

