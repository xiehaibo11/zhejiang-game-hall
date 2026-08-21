
undefined8 tls_process_cert_status(long param_1,long *param_2)

{
  char cVar1;
  void *__dest;
  int reason;
  undefined8 uVar2;
  int line;
  long lVar3;
  char *pcVar4;
  ulong __n;
  
  lVar3 = param_2[1];
  if (lVar3 == 0) {
LAB_00ae0b00:
    reason = 0x149;
    line = 0x7be;
  }
  else {
    pcVar4 = (char *)*param_2;
    cVar1 = *pcVar4;
                    /* catch() { ... } // from try @ 00ae09d0 with catch @ 00ae0a7c */
                    /* catch() { ... } // from try @ 00ae087c with catch @ 00ae0a80 */
    *param_2 = (long)(pcVar4 + 1);
    param_2[1] = lVar3 - 1U;
    if (cVar1 != '\x01') goto LAB_00ae0b00;
    if (lVar3 - 1U < 3) {
LAB_00ae0b1c:
      reason = 0x9f;
      line = 0x7c4;
    }
    else {
                    /* catch() { ... } // from try @ 00ae0890 with catch @ 00ae0a90
                       catch() { ... } // from try @ 00ae09bc with catch @ 00ae0a90 */
                    /* catch() { ... } // from try @ 00ae0970 with catch @ 00ae0a94 */
      __n = (ulong)(byte)pcVar4[1] << 0x10 | (ulong)(byte)pcVar4[2] << 8 | (ulong)(byte)pcVar4[3];
                    /* catch() { ... } // from try @ 00ae0964 with catch @ 00ae0aac */
      *param_2 = (long)(pcVar4 + 4);
      param_2[1] = lVar3 - 4U;
      if (lVar3 - 4U != __n) goto LAB_00ae0b1c;
                    /* catch() { ... } // from try @ 00ae0958 with catch @ 00ae0abc */
                    /* catch() { ... } // from try @ 00ae0924 with catch @ 00ae0ac0 */
                    /* catch() { ... } // from try @ 00ae08d4 with catch @ 00ae0ac4 */
                    /* catch() { ... } // from try @ 00ae0934 with catch @ 00ae0ac8 */
                    /* catch() { ... } // from try @ 00ae08e4 with catch @ 00ae0acc */
      __dest = CRYPTO_malloc((int)__n,"ssl/statem/statem_clnt.c",0x7c7);
      *(void **)(param_1 + 0x278) = __dest;
      if (__dest == (void *)0x0) {
        ERR_put_error(0x14,0x16a,0x41,"ssl/statem/statem_clnt.c",0x7ca);
        uVar2 = 0x50;
        goto LAB_00ae0b3c;
      }
      if (__n <= (ulong)param_2[1]) {
        memcpy(__dest,(void *)*param_2,__n);
        *param_2 = *param_2 + __n;
        param_2[1] = param_2[1] - __n;
        *(int *)(param_1 + 0x280) = (int)__n;
        return 3;
      }
                    /* catch() { ... } // from try @ 00ae08c8 with catch @ 00ae0aec
                       catch() { ... } // from try @ 00ae0918 with catch @ 00ae0aec */
      reason = 0x9f;
      line = 1999;
    }
  }
  ERR_put_error(0x14,0x16a,reason,"ssl/statem/statem_clnt.c",line);
  uVar2 = 0x32;
LAB_00ae0b3c:
  ssl3_send_alert(param_1,2,uVar2);
  ossl_statem_set_error(param_1);
  return 0;
}

