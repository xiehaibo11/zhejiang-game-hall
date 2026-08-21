
undefined8 SSL_dane_enable(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (*(char *)(*(long *)(param_1 + 0x1b8) + 0x318) == '\0') {
    iVar1 = 0xa7;
    iVar3 = 0x33d;
  }
  else {
    if (*(long *)(param_1 + 200) == 0) {
      if ((*(long *)(param_1 + 0x228) == 0) &&
         (lVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1,0x37,0,param_2), lVar2 == 0))
      {
        iVar1 = 0xcc;
        iVar3 = 0x34c;
      }
      else {
        iVar1 = X509_VERIFY_PARAM_set1_host(*(undefined8 *)(param_1 + 0xb8),param_2,0);
        if (iVar1 == 0) {
          iVar1 = 0xcc;
          iVar3 = 0x353;
        }
        else {
          *(undefined8 *)(param_1 + 0xec) = 0xffffffffffffffff;
          *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0x1b8) + 0x308;
          lVar2 = OPENSSL_sk_new_null();
          *(long *)(param_1 + 200) = lVar2;
          if (lVar2 != 0) {
            return 1;
          }
          iVar1 = 0x41;
          iVar3 = 0x35d;
        }
      }
      ERR_put_error(0x14,0x18b,iVar1,"ssl/ssl_lib.c",iVar3);
      return 0xffffffff;
    }
    iVar1 = 0xac;
    iVar3 = 0x341;
  }
  ERR_put_error(0x14,0x18b,iVar1,"ssl/ssl_lib.c",iVar3);
  return 0;
}

