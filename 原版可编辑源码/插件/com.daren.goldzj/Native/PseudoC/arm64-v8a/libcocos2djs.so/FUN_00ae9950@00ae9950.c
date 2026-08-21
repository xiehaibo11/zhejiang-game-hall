
int FUN_00ae9950(code *param_1,long param_2,uint param_3,_union_257 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *__s;
  size_t sVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char local_74 [4];
  byte *local_70;
  ASN1_TYPE local_68;
  char local_54;
  char local_53;
  
  local_74[0] = '\0';
  iVar2 = (param_4.asn1_string)->type;
  iVar1 = 0;
                    /* try { // try from 00ae9988 to 00be99b3 has its CatchHandler @ 00ae9988
                       catch() { ... } // from try @ 00ae9988 with catch @ 00ae9988
                       catch() { ... } // from try @ 00ae9a14 with catch @ 00ae9988 */
  if ((param_3 >> 6 & 1) != 0) {
    __s = ASN1_tag2str(iVar2);
    sVar4 = strlen(__s);
    iVar1 = (*param_1)(param_2,__s,sVar4 & 0xffffffff);
    if (iVar1 == 0) {
      return -1;
    }
                    /* try { // try from 00ae99b4 to 00be99b7 has its CatchHandler @ 00ae9a4c */
                    /* try { // try from 00ae99b8 to 00be99bf has its CatchHandler @ 00ae9a3c */
    iVar1 = (*param_1)(param_2,":",1);
    if (iVar1 == 0) {
      return -1;
    }
    iVar1 = (int)sVar4 + 1;
  }
  if ((param_3 >> 7 & 1) == 0) {
                    /* try { // try from 00ae99d8 to 00be9a13 has its CatchHandler @ 00ae9a14 */
    if ((param_3 >> 5 & 1) != 0) {
      uVar7 = 1;
LAB_00ae99fc:
      uVar8 = uVar7;
      if (((param_3 >> 4 & 1) != 0) && (uVar8 = uVar7 | 8, uVar7 == 0)) {
        uVar8 = 1;
      }
                    /* catch() { ... } // from try @ 00ae99d8 with catch @ 00ae9a14
                       try { // try from 00ae9a14 to 00be9a5f has its CatchHandler @ 00ae9988 */
      iVar2 = FUN_00ae9f24((param_4.asn1_string)->data,(param_4.asn1_string)->length,uVar8,
                           param_3 & 0x40f,local_74,param_1,0);
      if (-1 < iVar2) {
                    /* catch() { ... } // from try @ 00ae99b8 with catch @ 00ae9a3c */
        iVar3 = iVar2 + iVar1;
        if (local_74[0] != '\0') {
          iVar3 = iVar2 + iVar1 + 2;
        }
                    /* catch() { ... } // from try @ 00ae99b4 with catch @ 00ae9a4c */
        if (param_2 == 0) {
          return iVar3;
        }
        if (((local_74[0] == '\0') || (iVar1 = (*param_1)(param_2,&DAT_01a61e87,1), iVar1 != 0)) &&
           (iVar1 = FUN_00ae9f24((param_4.asn1_string)->data,(param_4.asn1_string)->length,uVar8,
                                 param_3 & 0x40f,0,param_1,param_2), -1 < iVar1)) {
          if (local_74[0] == '\0') {
            return iVar3;
          }
          iVar1 = (*param_1)(param_2,&DAT_01a61e87,1);
          if (iVar1 != 0) {
            return iVar3;
          }
        }
      }
      return -1;
    }
    if (iVar2 - 1U < 0x1e) {
      uVar8 = (uint)(char)(&DAT_018a8924)[iVar2];
    }
    else {
      uVar8 = 0xffffffff;
    }
    uVar7 = uVar8;
    if (uVar8 == 0xffffffff && (param_3 & 0x100) == 0) {
      uVar7 = 1;
    }
    if (((param_3 >> 8 & 1) == 0) || (uVar8 != 0xffffffff)) goto LAB_00ae99fc;
  }
  iVar2 = (*param_1)(param_2,&DAT_01a5faed,1);
  if (iVar2 != 0) {
    if ((param_3 >> 9 & 1) == 0) {
      iVar2 = (param_4.asn1_string)->length;
      lVar6 = (long)iVar2;
      if ((param_2 != 0) && (iVar2 != 0)) {
        pbVar5 = (param_4.asn1_string)->data;
        do {
          local_54 = "0123456789ABCDEF"[*pbVar5 >> 4];
          local_53 = "0123456789ABCDEF"[(ulong)*pbVar5 & 0xf];
          iVar3 = (*param_1)(param_2,&local_54,2);
          if (iVar3 == 0) {
            iVar2 = -1;
            goto LAB_00ae9b4c;
          }
          lVar6 = lVar6 + -1;
          pbVar5 = pbVar5 + 1;
        } while (lVar6 != 0);
      }
      iVar2 = iVar2 << 1;
LAB_00ae9b4c:
      iVar3 = -1;
      if (-1 < iVar2) {
        iVar3 = iVar2 + 1;
      }
      goto LAB_00ae9c30;
    }
    local_68.type = (param_4.asn1_string)->type;
    local_68.value = param_4;
    iVar2 = i2d_ASN1_TYPE(&local_68,(uchar **)0x0);
    lVar6 = (long)iVar2;
    pbVar5 = CRYPTO_malloc(iVar2,"crypto/asn1/a_strex.c",0x107);
                    /* try { // try from 00ae9b90 to 00be9bff has its CatchHandler @ 00ae9b90
                       catch() { ... } // from try @ 00ae9b90 with catch @ 00ae9b90
                       catch() { ... } // from try @ 00ae9c0c with catch @ 00ae9b90
                       catch() { ... } // from try @ 00ae9ccc with catch @ 00ae9b90
                       catch() { ... } // from try @ 00ae9e34 with catch @ 00ae9b90
                       catch() { ... } // from try @ 00ae9e88 with catch @ 00ae9b90 */
    if (pbVar5 != (byte *)0x0) {
      local_70 = pbVar5;
      i2d_ASN1_TYPE(&local_68,&local_70);
      if ((param_2 != 0) && (pbVar9 = pbVar5, iVar2 != 0)) {
        do {
          local_54 = "0123456789ABCDEF"[*pbVar9 >> 4];
          local_53 = "0123456789ABCDEF"[(ulong)*pbVar9 & 0xf];
          iVar3 = (*param_1)(param_2,&local_54,2);
          if (iVar3 == 0) {
                    /* try { // try from 00ae9c0c to 00be9c2b has its CatchHandler @ 00ae9b90 */
            iVar2 = -1;
            goto LAB_00ae9c10;
          }
          lVar6 = lVar6 + -1;
          pbVar9 = pbVar9 + 1;
        } while (lVar6 != 0);
      }
      iVar2 = iVar2 << 1;
LAB_00ae9c10:
      CRYPTO_free(pbVar5);
      iVar3 = -1;
                    /* try { // try from 00ae9c2c to 00be9c3f has its CatchHandler @ 00ae9e94 */
      if (-1 < iVar2) {
        iVar3 = iVar2 + 1;
      }
      goto LAB_00ae9c30;
    }
  }
  iVar3 = -1;
                    /* try { // try from 00ae9c00 to 00be9c0b has its CatchHandler @ 00ae9e94 */
LAB_00ae9c30:
  if (iVar3 < 0) {
    return -1;
  }
  return iVar3 + iVar1;
}

