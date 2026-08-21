
int ASN1_bn_print(BIO *bp,char *number,BIGNUM *num,uchar *buf,int off)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  if (num == (BIGNUM *)0x0) {
    return 1;
  }
  iVar5 = BN_is_negative(num);
  pcVar1 = "";
  pcVar4 = "-";
                    /* try { // try from 00b8fc94 to 00c8fc9f has its CatchHandler @ 00b8fca0 */
  if (iVar5 == 0) {
    pcVar4 = pcVar1;
  }
  iVar5 = BIO_indent(bp,off,0x80);
                    /* catch() { ... } // from try @ 00b8fbe8 with catch @ 00b8fca0
                       catch() { ... } // from try @ 00b8fc94 with catch @ 00b8fca0
                       try { // try from 00b8fca0 to 00c8fcb7 has its CatchHandler @ 00b8fa78 */
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = BN_is_zero(num);
  if (iVar5 != 0) {
    iVar5 = BIO_printf(bp,"%s 0\n",number);
LAB_00b8fd20:
    return (uint)(0 < iVar5);
  }
  iVar5 = BN_num_bits(num);
  if (iVar5 < 0x41) {
    puVar8 = (undefined8 *)bn_get_words(num);
    uVar11 = *puVar8;
    puVar8 = (undefined8 *)bn_get_words(num);
    iVar5 = BIO_printf(bp,"%s %s%lu (%s0x%lx)\n",number,pcVar4,uVar11,pcVar4,*puVar8);
    goto LAB_00b8fd20;
  }
  iVar6 = BN_num_bits(num);
  iVar5 = iVar6 + 0xe;
  if (-1 < iVar6 + 7) {
    iVar5 = iVar6 + 7;
  }
  iVar5 = (iVar5 >> 3) + 1;
  puVar9 = CRYPTO_malloc(iVar5,"crypto/asn1/t_pkey.c",0x49);
  if (puVar9 != (undefined1 *)0x0) {
    pcVar3 = " (Negative)";
    if (*pcVar4 != '-') {
      pcVar3 = pcVar1;
    }
    *puVar9 = 0;
    iVar6 = BIO_printf(bp,"%s%s\n",number,pcVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8fe44 with catch @ 00b8fdbc
                        */
    if (0 < iVar6) {
      iVar6 = BN_bn2bin(num,puVar9 + 1);
      iVar6 = iVar6 + (uint)((byte)puVar9[1] >> 7);
      puVar2 = puVar9;
      if (-1 < (char)puVar9[1]) {
        puVar2 = puVar9 + 1;
      }
      if (iVar6 != 0) {
        uVar12 = 0;
        do {
                    /* try { // try from 00b8fe18 to 00c8fe43 has its CatchHandler @ 00b8ff98 */
                    /* try { // try from 00b8fe44 to 00c8ffcb has its CatchHandler @ 00b8fdbc */
          if ((uVar12 % 0xf == 0) &&
             (((uVar12 != 0 && (iVar7 = BIO_puts(bp,"\n"), iVar7 < 1)) ||
              (iVar7 = BIO_indent(bp,off + 4,0x80), iVar7 == 0)))) {
LAB_00b8feb0:
            uVar10 = 0;
            goto LAB_00b8feb8;
          }
          pcVar4 = pcVar1;
          if ((long)iVar6 - 1U != uVar12) {
            pcVar4 = ":";
          }
          iVar7 = BIO_printf(bp,"%02x%s",(ulong)(byte)puVar2[uVar12],pcVar4);
          if (iVar7 < 1) goto LAB_00b8feb0;
          uVar12 = uVar12 + 1;
        } while (uVar12 < (ulong)(long)iVar6);
      }
      iVar6 = BIO_write(bp,&DAT_013c61e6,1);
      uVar10 = (uint)(0 < iVar6);
      goto LAB_00b8feb8;
    }
  }
  uVar10 = 0;
LAB_00b8feb8:
  CRYPTO_clear_free(puVar9,(long)iVar5,"crypto/asn1/t_pkey.c",0x5b);
  return uVar10;
}

