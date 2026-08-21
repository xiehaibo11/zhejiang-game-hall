
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
LAB_00ad1c4c:
    reason = 0x149;
    line = 0x7be;
  }
  else {
    pcVar4 = (char *)*param_2;
    cVar1 = *pcVar4;
    *param_2 = (long)(pcVar4 + 1);
    param_2[1] = lVar3 - 1U;
    if (cVar1 != '\x01') goto LAB_00ad1c4c;
    if (lVar3 - 1U < 3) {
LAB_00ad1c68:
      reason = 0x9f;
      line = 0x7c4;
    }
    else {
      __n = (ulong)(byte)pcVar4[1] << 0x10 | (ulong)(byte)pcVar4[2] << 8 | (ulong)(byte)pcVar4[3];
      *param_2 = (long)(pcVar4 + 4);
      param_2[1] = lVar3 - 4U;
      if (lVar3 - 4U != __n) goto LAB_00ad1c68;
      __dest = CRYPTO_malloc((int)__n,"ssl/statem/statem_clnt.c",0x7c7);
      *(void **)(param_1 + 0x278) = __dest;
      if (__dest == (void *)0x0) {
        ERR_put_error(0x14,0x16a,0x41,"ssl/statem/statem_clnt.c",0x7ca);
        uVar2 = 0x50;
        goto LAB_00ad1c88;
      }
      if (__n <= (ulong)param_2[1]) {
        memcpy(__dest,(void *)*param_2,__n);
        *param_2 = *param_2 + __n;
        param_2[1] = param_2[1] - __n;
        *(int *)(param_1 + 0x280) = (int)__n;
        return 3;
      }
      reason = 0x9f;
      line = 1999;
    }
  }
  ERR_put_error(0x14,0x16a,reason,"ssl/statem/statem_clnt.c",line);
  uVar2 = 0x32;
LAB_00ad1c88:
                    /* catch() { ... } // from try @ 00ad1d30 with catch @ 00ad1c8c
                       catch() { ... } // from try @ 00ad1ddc with catch @ 00ad1c8c */
  ssl3_send_alert(param_1,2,uVar2);
  ossl_statem_set_error(param_1);
  return 0;
}

