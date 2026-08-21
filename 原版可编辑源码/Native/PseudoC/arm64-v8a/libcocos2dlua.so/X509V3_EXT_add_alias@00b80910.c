
int X509V3_EXT_add_alias(int nid_to,int nid_from)

{
  int iVar1;
  undefined8 *puVar2;
  int *__dest;
  int reason;
  int line;
  void *__src;
  int local_98 [26];
  int *local_28;
  
  local_28 = local_98;
  if (-1 < nid_from) {
    local_98[0] = nid_from;
    puVar2 = OBJ_bsearch_(&local_28,&PTR_v3_nscert_0176ee90,0x2e,8,(cmp *)&LAB_00b80e70);
    if (puVar2 == (undefined8 *)0x0) {
      if ((DAT_01784fa0 == 0) || (iVar1 = OPENSSL_sk_find(DAT_01784fa0,local_98), iVar1 == -1))
      goto LAB_00b80a04;
      __src = (void *)OPENSSL_sk_value(DAT_01784fa0,iVar1);
    }
    else {
      __src = (void *)*puVar2;
    }
    if (__src != (void *)0x0) {
      __dest = CRYPTO_malloc(0x68,"crypto/x509v3/v3_lib.c",0xa2);
      if (__dest == (int *)0x0) {
        iVar1 = 0x6a;
        reason = 0x41;
        line = 0xa3;
      }
      else {
        memcpy(__dest,__src,0x68);
        *__dest = nid_to;
        __dest[1] = __dest[1] | 1;
        if ((DAT_01784fa0 == 0) && (DAT_01784fa0 = OPENSSL_sk_new(&LAB_00b8071c), DAT_01784fa0 == 0)
           ) {
          iVar1 = 0x68;
          reason = 0x41;
          line = 0x1d;
        }
        else {
          iVar1 = OPENSSL_sk_push(DAT_01784fa0,__dest);
          if (iVar1 != 0) {
            return 1;
          }
          iVar1 = 0x68;
          reason = 0x41;
          line = 0x21;
        }
      }
      goto LAB_00b80a1c;
    }
  }
LAB_00b80a04:
  iVar1 = 0x6a;
  reason = 0x66;
  line = 0x9f;
LAB_00b80a1c:
  ERR_put_error(0x22,iVar1,reason,"crypto/x509v3/v3_lib.c",line);
  return 0;
}

