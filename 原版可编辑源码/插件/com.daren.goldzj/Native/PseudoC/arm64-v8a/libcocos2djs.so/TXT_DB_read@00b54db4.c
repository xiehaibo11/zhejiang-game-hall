
TXT_DB * TXT_DB_read(BIO *in,int num)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BUF_MEM *str;
  TXT_DB *ptr;
  stack_st_OPENSSL_PSTRING *psVar7;
  lhash_st_OPENSSL_STRING **pplVar8;
  _func_4786 **pp_Var9;
  size_t sVar10;
  undefined8 *puVar11;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  _func_4786 ***ppp_Var16;
  lhash_st_OPENSSL_STRING ***ppplVar17;
  char *pcVar18;
  int iVar19;
  long lVar20;
  
                    /* try { // try from 00b54dd0 to 00c54dd7 has its CatchHandler @ 00b54e8c */
  str = BUF_MEM_new();
  if ((str == (BUF_MEM *)0x0) || (iVar4 = BUF_MEM_grow(str,0x200), iVar4 == 0)) {
    BUF_MEM_free(str);
  }
  else {
                    /* try { // try from 00b54df8 to 00c54e6b has its CatchHandler @ 00b54e9c */
    ptr = CRYPTO_malloc(0x40,"crypto/txt_db/txt_db.c",0x25);
    if (ptr == (TXT_DB *)0x0) {
LAB_00b55010:
      BUF_MEM_free(str);
      return ptr;
    }
    ptr->num_fields = num;
    ppplVar17 = &ptr->index;
    *ppplVar17 = (lhash_st_OPENSSL_STRING **)0x0;
    ppp_Var16 = &ptr->qual;
    *ppp_Var16 = (_func_4786 **)0x0;
    psVar7 = (stack_st_OPENSSL_PSTRING *)OPENSSL_sk_new_null();
    ptr->data = psVar7;
    if (psVar7 != (stack_st_OPENSSL_PSTRING *)0x0) {
      pplVar8 = CRYPTO_malloc(num << 3,"crypto/txt_db/txt_db.c",0x2c);
      *ppplVar17 = pplVar8;
      if (pplVar8 != (lhash_st_OPENSSL_STRING **)0x0) {
        pp_Var9 = CRYPTO_malloc(num << 3,"crypto/txt_db/txt_db.c",0x2e);
        *ppp_Var16 = pp_Var9;
                    /* try { // try from 00b54e6c to 00c55087 has its CatchHandler @ 00b54ce0 */
        if (pp_Var9 != (_func_4786 **)0x0) {
          if (0 < num) {
            uVar12 = 0;
            do {
                    /* catch() { ... } // from try @ 00b54dd0 with catch @ 00b54e8c */
              uVar1 = uVar12 + 1;
              (*ppplVar17)[uVar12] = (lhash_st_OPENSSL_STRING *)0x0;
                    /* catch() { ... } // from try @ 00b54df8 with catch @ 00b54e9c */
              (*ppp_Var16)[uVar12] = (_func_4786 *)0x0;
              uVar12 = uVar1;
            } while ((uint)num != uVar1);
          }
          iVar4 = num * 8 + 8;
          lVar15 = 0;
          iVar19 = 0x200;
          str->data[0x1ff] = '\0';
LAB_00b54ec8:
          iVar6 = (int)lVar15;
          if (iVar6 == 0) {
LAB_00b54ee0:
            lVar20 = (long)iVar6;
            str->data[lVar20] = '\0';
            BIO_gets(in,str->data + lVar20,iVar19 - iVar6);
            pcVar18 = str->data;
            if (pcVar18[lVar20] == '\0') goto LAB_00b55010;
            if ((iVar6 == 0) && (*pcVar18 == '#')) goto LAB_00b54ec8;
            sVar10 = strlen(pcVar18 + lVar20);
            lVar15 = lVar20 + (int)sVar10;
            if (pcVar18[lVar15 + -1] != '\n') goto LAB_00b54ec8;
            pcVar18[lVar15 + -1] = '\0';
            puVar11 = CRYPTO_malloc((int)lVar15 + iVar4,"crypto/txt_db/txt_db.c",0x4b);
            if (puVar11 != (undefined8 *)0x0) {
              pcVar14 = (char *)((long)puVar11 + (long)iVar4);
              *puVar11 = pcVar14;
              pcVar18 = str->data;
              lVar15 = 1;
LAB_00b54f84:
              bVar3 = false;
              pcVar13 = pcVar14;
              do {
                cVar2 = *pcVar18;
                if (cVar2 == '\t') {
                  if (!bVar3) goto LAB_00b54fbc;
                  pcVar13 = pcVar13 + -1;
                }
                else if (cVar2 == '\0') goto LAB_00b54fd0;
                bVar3 = cVar2 == '\\';
                pcVar18 = pcVar18 + 1;
                *pcVar13 = cVar2;
                pcVar13 = pcVar13 + 1;
              } while( true );
            }
          }
          else {
            iVar19 = iVar19 + 0x200;
            iVar5 = BUF_MEM_grow_clean(str,(long)iVar19);
            if (iVar5 != 0) goto LAB_00b54ee0;
          }
          BUF_MEM_free(str);
          if (ptr == (TXT_DB *)0x0) {
            return (TXT_DB *)0x0;
          }
          goto LAB_00b55044;
        }
      }
    }
LAB_00b5503c:
    BUF_MEM_free(str);
LAB_00b55044:
    OPENSSL_sk_free(ptr->data);
    CRYPTO_free(ptr->index);
    CRYPTO_free(ptr->qual);
    CRYPTO_free(ptr);
  }
  return (TXT_DB *)0x0;
LAB_00b54fbc:
  pcVar14 = pcVar13 + 1;
  *pcVar13 = '\0';
  pcVar18 = pcVar18 + 1;
  pcVar13 = pcVar14;
  if (num <= lVar15) goto LAB_00b54fd0;
  puVar11[lVar15] = pcVar14;
  lVar15 = lVar15 + 1;
  goto LAB_00b54f84;
LAB_00b54fd0:
  *pcVar13 = '\0';
  if (((int)lVar15 != num) || (*pcVar18 != '\0')) {
    ptr->error = 6;
    goto LAB_00b5503c;
  }
  puVar11[num] = pcVar13 + 1;
  iVar6 = OPENSSL_sk_push(ptr->data,puVar11);
  lVar15 = 0;
  if (iVar6 == 0) goto LAB_00b5503c;
  goto LAB_00b54ec8;
}

