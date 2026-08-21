
char * EC_POINT_point2hex(EC_GROUP *param_1,EC_POINT *param_2,point_conversion_form_t form,
                         BN_CTX *param_4)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  byte *pbVar4;
  char *pcVar5;
  long lVar6;
  byte *local_28;
  
  local_28 = (byte *)0x0;
  lVar2 = EC_POINT_point2buf(param_1,param_2,form,&local_28,param_4);
  if (lVar2 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    lVar6 = lVar2 * 2;
    pcVar3 = CRYPTO_malloc((int)lVar6 + 2,"crypto/ec/ec_print.c",0x56);
    pbVar4 = local_28;
    pcVar5 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      do {
        lVar2 = lVar2 + -1;
        cVar1 = "0123456789ABCDEF"[*pbVar4 & 0xf];
        *pcVar5 = "0123456789ABCDEF"[*pbVar4 >> 4];
        pcVar5[1] = cVar1;
        pbVar4 = pbVar4 + 1;
        pcVar5 = pcVar5 + 2;
      } while (lVar2 != 0);
      pcVar3[lVar6] = '\0';
    }
    CRYPTO_free(local_28);
  }
  return pcVar3;
}

