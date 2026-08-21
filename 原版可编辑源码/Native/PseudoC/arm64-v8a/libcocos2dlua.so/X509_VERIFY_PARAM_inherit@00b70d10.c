
int X509_VERIFY_PARAM_inherit(X509_VERIFY_PARAM *to,X509_VERIFY_PARAM *from)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  time_t tVar5;
  stack_st_ASN1_OBJECT *psVar6;
  size_t sVar7;
  uint uVar8;
  ulong uVar9;
  
  if (from == (X509_VERIFY_PARAM *)0x0) {
    return 1;
  }
  uVar9 = from->inh_flags | to->inh_flags;
  uVar8 = (uint)uVar9;
  if ((uVar8 >> 4 & 1) != 0) {
    to->inh_flags = 0;
  }
  if ((uVar8 >> 3 & 1) != 0) {
    return 1;
  }
  iVar1 = from->purpose;
  if ((uVar8 >> 1 & 1) == 0) {
    if ((iVar1 != 0) && (((uVar9 & 1) != 0 || (to->purpose == 0)))) {
      to->purpose = iVar1;
    }
                    /* try { // try from 00b70d8c to 00c70e17 has its CatchHandler @ 00b70d8c
                       catch() { ... } // from try @ 00b70d8c with catch @ 00b70d8c
                       catch() { ... } // from try @ 00b70ec4 with catch @ 00b70d8c
                       catch() { ... } // from try @ 00b70fd0 with catch @ 00b70d8c */
    if ((from->trust != 0) && (((uVar9 & 1) != 0 || (to->trust == 0)))) {
      to->trust = from->trust;
    }
    if ((from->depth != -1) && (((uVar9 & 1) != 0 || (to->depth == -1)))) {
      to->depth = from->depth;
    }
    if ((*(int *)&from->field_0x2c != -1) && (((uVar9 & 1) != 0 || (*(int *)&to->field_0x2c == -1)))
       ) {
      *(int *)&to->field_0x2c = *(int *)&from->field_0x2c;
    }
    uVar4 = to->flags;
    if (((uint)uVar4 >> 1 & 1) == 0) goto LAB_00b70dec;
  }
  else {
    to->purpose = iVar1;
    to->trust = from->trust;
    to->depth = from->depth;
    uVar4 = to->flags;
    *(undefined4 *)&to->field_0x2c = *(undefined4 *)&from->field_0x2c;
LAB_00b70dec:
    tVar5 = from->check_time;
    uVar4 = uVar4 & 0xfffffffffffffffd;
    to->flags = uVar4;
    to->check_time = tVar5;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    uVar4 = 0;
    to->flags = 0;
  }
  to->flags = uVar4 | from->flags;
                    /* try { // try from 00b70e18 to 00c70e6f has its CatchHandler @ 00b70fdc */
  if (((uVar8 >> 1 & 1) == 0) &&
     ((from->policies == (stack_st_ASN1_OBJECT *)0x0 ||
      (((uVar9 & 1) == 0 && (to->policies != (stack_st_ASN1_OBJECT *)0x0)))))) {
LAB_00b70e44:
    if ((from[1].name != (char *)0x0) && (((uVar9 & 1) != 0 || (to[1].name == (char *)0x0))))
    goto LAB_00b70e5c;
LAB_00b70eb8:
    pcVar2 = (char *)from[1].flags;
                    /* try { // try from 00b70ec4 to 00c70fc7 has its CatchHandler @ 00b70d8c */
    if ((pcVar2 != (char *)0x0) && (((uVar9 & 1) != 0 || (to[1].flags == 0)))) {
LAB_00b70ed4:
      sVar7._0_4_ = from[1].purpose;
      sVar7._4_4_ = from[1].trust;
      if (sVar7 == 0) {
        sVar7 = strlen(pcVar2);
      }
      uVar4 = CRYPTO_memdup(pcVar2,sVar7,"crypto/x509/x509_vpm.c",0x10a);
      if (uVar4 == 0) {
        return 0;
      }
      goto LAB_00b70f08;
    }
  }
  else {
    iVar1 = X509_VERIFY_PARAM_set1_policies(to,from->policies);
    if (iVar1 == 0) {
      return 0;
    }
    if ((uVar8 >> 1 & 1) == 0) goto LAB_00b70e44;
LAB_00b70e5c:
    OPENSSL_sk_pop_free(to[1].name,&LAB_00b710a0);
    to[1].name = (char *)0x0;
                    /* try { // try from 00b70e70 to 00c70ec3 has its CatchHandler @ 00b70fd8 */
    if (from[1].name != (char *)0x0) {
      pcVar2 = (char *)OPENSSL_sk_deep_copy(from[1].name,&LAB_00b710b0,&LAB_00b710a0);
      to[1].name = pcVar2;
      if (pcVar2 == (char *)0x0) {
        return 0;
      }
      *(int *)&to[1].check_time = (int)from[1].check_time;
    }
    if ((uVar8 >> 1 & 1) == 0) goto LAB_00b70eb8;
    pcVar2 = (char *)from[1].flags;
    if (pcVar2 != (char *)0x0) goto LAB_00b70ed4;
    sVar7 = 0;
    uVar4 = 0;
LAB_00b70f08:
    CRYPTO_free((void *)to[1].flags);
    to[1].flags = uVar4;
    to[1].purpose = (int)sVar7;
    to[1].trust = (int)(sVar7 >> 0x20);
    if ((uVar8 >> 1 & 1) != 0) {
      pcVar2 = *(char **)&from[1].depth;
      goto LAB_00b70f44;
    }
  }
  pcVar2 = *(char **)&from[1].depth;
  if (pcVar2 == (char *)0x0) {
    return 1;
  }
  if (((uVar9 & 1) == 0) && (*(long *)&to[1].depth != 0)) {
    return 1;
  }
LAB_00b70f44:
  psVar6 = from[1].policies;
  if ((stack_st_ASN1_OBJECT *)&DAT_00000010 < psVar6) {
    return 0;
  }
  if ((1L << ((ulong)psVar6 & 0x3f) & 0x10011U) != 0) {
    if (pcVar2 == (char *)0x0) {
      psVar6 = (stack_st_ASN1_OBJECT *)0x0;
      lVar3 = 0;
    }
    else {
      if (psVar6 == (stack_st_ASN1_OBJECT *)0x0) {
        psVar6 = (stack_st_ASN1_OBJECT *)strlen(pcVar2);
      }
      lVar3 = CRYPTO_memdup(pcVar2,psVar6,"crypto/x509/x509_vpm.c",0x10a);
      if (lVar3 == 0) {
        return 0;
      }
    }
    CRYPTO_free(*(void **)&to[1].depth);
    *(long *)&to[1].depth = lVar3;
    to[1].policies = psVar6;
                    /* try { // try from 00b70fc8 to 00c70fcf has its CatchHandler @ 00b70fd4 */
                    /* try { // try from 00b70fd0 to 00c70ff7 has its CatchHandler @ 00b70d8c */
                    /* catch() { ... } // from try @ 00b70fc8 with catch @ 00b70fd4 */
                    /* catch() { ... } // from try @ 00b70e70 with catch @ 00b70fd8 */
    return 1;
  }
  return 0;
}

