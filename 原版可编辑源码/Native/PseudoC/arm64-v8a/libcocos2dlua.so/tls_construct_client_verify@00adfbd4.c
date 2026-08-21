
undefined8 tls_construct_client_verify(int *param_1)

{
  uint uVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  size_t cnt;
  int line;
  long lVar3;
  undefined1 *puVar4;
  EVP_PKEY *pkey;
  EVP_MD *type;
  void *local_58;
  uint local_44;
  
  type = *(EVP_MD **)
          (*(long *)(param_1 + 0x24) +
           ((ulong)(**(long **)(param_1 + 0x52) - (long)(*(long **)(param_1 + 0x52) + 4)) >> 3) *
           0x6666666666666668 + 0x2d8);
  local_44 = 0;
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    iVar2 = 0x41;
    line = 0xa40;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x1e) + 8);
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x6c);
    pkey = *(EVP_PKEY **)(**(long **)(param_1 + 0x52) + 8);
    cnt = BIO_ctrl(*(BIO **)(*(long *)(param_1 + 0x24) + 0xd8),3,0,&local_58);
    if ((long)cnt < 1) {
      iVar2 = 0x44;
      line = 0xa49;
                    /* catch() { ... } // from try @ 00adfd34 with catch @ 00adfcbc */
    }
    else {
      puVar4 = (undefined1 *)(lVar3 + (ulong)uVar1);
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 1 & 1) == 0) {
        lVar3 = 0;
      }
      else {
        iVar2 = tls12_get_sigandhash(puVar4,pkey,type);
        if (iVar2 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00adfd98 with catch @ 00adfdf4
                        */
          iVar2 = 0x44;
          line = 0xa4e;
          goto LAB_00adfe04;
        }
        puVar4 = puVar4 + 2;
        lVar3 = 2;
      }
      iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
                    /* try { // try from 00adfd28 to 00bdfd33 has its CatchHandler @ 00adfd58 */
      if (((iVar2 != 0) && (iVar2 = EVP_DigestUpdate(ctx,local_58,cnt), iVar2 != 0)) &&
         ((*param_1 != 0x300 ||
          (iVar2 = EVP_MD_CTX_ctrl(ctx,0x1d,*(undefined4 *)(*(long *)(param_1 + 0x5e) + 4),
                                   *(long *)(param_1 + 0x5e) + 8), iVar2 != 0)))) {
                    /* try { // try from 00adfd34 to 00bdfd5b has its CatchHandler @ 00adfcbc */
        iVar2 = EVP_SignFinal(ctx,puVar4 + 2,&local_44,pkey);
        if (iVar2 != 0) {
          iVar2 = EVP_PKEY_id(pkey);
                    /* catch() { ... } // from try @ 00adfd28 with catch @ 00adfd58 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00adfda4 with catch @ 00adfd60
                        */
          if ((iVar2 - 0x3d3U < 2) || (iVar2 == 0x32b)) {
            BUF_reverse(puVar4 + 2,(uchar *)0x0,(ulong)local_44);
          }
          uVar1 = local_44;
          *puVar4 = (char)(local_44 >> 8);
          puVar4[1] = (char)local_44;
          iVar2 = ssl3_digest_cached_records(param_1,0);
                    /* try { // try from 00adfd98 to 00bdfda3 has its CatchHandler @ 00adfdf4 */
          if (iVar2 == 0) goto LAB_00adfe08;
                    /* try { // try from 00adfda4 to 00bdfe0f has its CatchHandler @ 00adfd60 */
          iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x70))
                            (param_1,0xf,lVar3 + (ulong)(uVar1 + 2));
          if (iVar2 != 0) {
            EVP_MD_CTX_free(ctx);
            return 1;
          }
          iVar2 = 0x44;
          line = 0xa71;
          goto LAB_00adfe04;
        }
      }
      iVar2 = 6;
      line = 0xa5e;
    }
  }
LAB_00adfe04:
  ERR_put_error(0x14,0x166,iVar2,"ssl/statem/statem_clnt.c",line);
LAB_00adfe08:
  EVP_MD_CTX_free(ctx);
  return 0;
}

