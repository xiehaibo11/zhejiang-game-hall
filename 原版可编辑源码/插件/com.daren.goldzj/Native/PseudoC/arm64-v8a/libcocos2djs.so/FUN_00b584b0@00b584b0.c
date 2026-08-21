
undefined8 FUN_00b584b0(long param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  long lVar7;
  long *ptr;
  void *ptr_00;
  size_t __n;
  char *__s;
  
                    /* try { // try from 00b584d0 to 00c584db has its CatchHandler @ 00b58760 */
  if ((param_2 == (char *)0x0) || (cVar1 = *param_2, pcVar2 = param_2, cVar1 == '\0')) {
    iVar3 = 0x71;
    iVar4 = 0x9e;
LAB_00b58654:
    ERR_put_error(0xb,100,iVar3,"crypto/x509/by_dir.c",iVar4);
                    /* try { // try from 00b58674 to 00c586d3 has its CatchHandler @ 00b58774 */
    return 0;
  }
  do {
    if ((cVar1 == '\0') || (cVar1 == ':')) {
      __n = (long)pcVar2 - (long)param_2;
      if (__n != 0) {
        iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
        if (iVar3 < 1) {
          iVar3 = 0;
        }
        else {
          iVar3 = 0;
          do {
            puVar5 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar3);
            __s = (char *)*puVar5;
            sVar6 = strlen(__s);
            if ((sVar6 == __n) && (iVar4 = strncmp(__s,param_2,__n), iVar4 == 0)) break;
            iVar3 = iVar3 + 1;
            iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
                    /* try { // try from 00b58580 to 00c58587 has its CatchHandler @ 00b58764 */
          } while (iVar3 < iVar4);
        }
        iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
        if (iVar4 <= iVar3) {
          if (*(long *)(param_1 + 8) == 0) {
            lVar7 = OPENSSL_sk_new_null();
            *(long *)(param_1 + 8) = lVar7;
            if (lVar7 == 0) {
              iVar3 = 0x41;
              iVar4 = 0xb9;
              goto LAB_00b58654;
            }
          }
          ptr = CRYPTO_malloc(0x18,"crypto/x509/by_dir.c",0xbd);
                    /* try { // try from 00b585e0 to 00c585f3 has its CatchHandler @ 00b58774 */
          if (ptr == (long *)0x0) {
            return 0;
          }
          *(undefined4 *)(ptr + 1) = param_3;
          lVar7 = OPENSSL_sk_new(&DAT_00b586d0);
          ptr[2] = lVar7;
                    /* try { // try from 00b585f4 to 00c58603 has its CatchHandler @ 00b58778 */
          ptr_00 = (void *)CRYPTO_strndup(param_2,__n,"crypto/x509/by_dir.c",0xc2);
          *ptr = (long)ptr_00;
          if ((ptr_00 == (void *)0x0) || (ptr[2] == 0)) {
LAB_00b5867c:
            CRYPTO_free(ptr_00);
            OPENSSL_sk_pop_free(ptr[2],&LAB_00b584a0);
            CRYPTO_free(ptr);
            return 0;
          }
          iVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),ptr);
          if (iVar3 == 0) {
            ptr_00 = (void *)*ptr;
            goto LAB_00b5867c;
          }
          cVar1 = *pcVar2;
          param_2 = pcVar2 + 1;
          goto joined_r0x00b5859c;
        }
      }
      cVar1 = *pcVar2;
      param_2 = pcVar2 + 1;
    }
    else {
      cVar1 = *pcVar2;
    }
joined_r0x00b5859c:
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 1;
  } while( true );
}

