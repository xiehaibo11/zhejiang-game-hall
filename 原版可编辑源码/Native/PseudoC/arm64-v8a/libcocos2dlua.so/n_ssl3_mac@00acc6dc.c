
ulong n_ssl3_mac(long param_1,long param_2,uchar *param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  void *d;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  EVP_MD *md;
  EVP_CIPHER *cipher;
  ulong uVar8;
  EVP_MD_CTX *out;
  EVP_MD_CTX *ctx;
  size_t cnt;
  ulong cnt_00;
  uint local_bc [19];
  ulong local_70;
  undefined1 local_64 [4];
  
                    /* try { // try from 00acc6e4 to 00bcc717 has its CatchHandler @ 00acc79c */
  puVar2 = (undefined8 *)(param_1 + 0x140);
  if (param_4 == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x120);
  }
  ctx = (EVP_MD_CTX *)*puVar2;
                    /* try { // try from 00acc718 to 00bcc747 has its CatchHandler @ 00acc6a8 */
  d = (void *)(*(long *)(param_1 + 0x90) + 0x50);
  puVar2 = (undefined8 *)(param_1 + 0x1118);
  if (param_4 == 0) {
    d = (void *)(*(long *)(param_1 + 0x90) + 0xc);
    puVar2 = (undefined8 *)(param_1 + 0x1110);
  }
                    /* try { // try from 00acc748 to 00bcc75b has its CatchHandler @ 00acc79c */
  md = EVP_MD_CTX_md(ctx);
  uVar6 = EVP_MD_size(md);
  if (-1 < (int)uVar6) {
    cnt_00 = (ulong)(int)uVar6;
                    /* try { // try from 00acc75c to 00bcc7b7 has its CatchHandler @ 00acc6a8 */
    uVar8 = 0;
    if (cnt_00 != 0) {
      uVar8 = 0x30 / cnt_00;
    }
    cnt = uVar8 * cnt_00;
    local_70 = cnt_00;
    if (param_4 == 0) {
      cipher = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x118));
      uVar8 = EVP_CIPHER_flags(cipher);
                    /* catch() { ... } // from try @ 00acc6e4 with catch @ 00acc79c
                       catch() { ... } // from try @ 00acc748 with catch @ 00acc79c */
      if (((uVar8 & 0xf0007) == 2) && (cVar5 = ssl3_cbc_record_digest_supported(ctx), cVar5 != '\0')
         ) {
        memcpy(local_bc,d,cnt_00);
        memset((void *)((long)local_bc + (ulong)uVar6),0x36,cnt);
        uVar1 = uVar6 + (int)cnt;
        *(undefined8 *)((long)local_bc + (ulong)uVar1) = *puVar2;
        *(char *)((long)local_bc + (ulong)(uVar1 + 8)) = (char)*(undefined4 *)(param_2 + 4);
        uVar3 = *(uint *)(param_2 + 8);
        uVar4 = *(undefined4 *)(param_2 + 0xc);
        *(char *)((long)local_bc + (ulong)(uVar1 + 9)) = (char)(uVar3 >> 8);
        *(char *)((long)local_bc + (ulong)(uVar1 + 10)) = (char)uVar3;
        iVar7 = ssl3_cbc_digest_record
                          (ctx,param_3,&local_70,local_bc,*(undefined8 *)(param_2 + 0x20),
                           cnt_00 + uVar3,uVar4,d,uVar6,1);
        if (iVar7 < 1) {
          return 0xffffffff;
        }
        goto LAB_00acc828;
      }
    }
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (out != (EVP_MD_CTX *)0x0) {
      local_64[0] = (undefined1)*(undefined4 *)(param_2 + 4);
      *param_3 = (uchar)((uint)*(undefined4 *)(param_2 + 8) >> 8);
      param_3[1] = (uchar)*(undefined4 *)(param_2 + 8);
      iVar7 = EVP_MD_CTX_copy_ex(out,ctx);
      if (((((0 < iVar7) && (iVar7 = EVP_DigestUpdate(out,d,cnt_00), 0 < iVar7)) &&
           (iVar7 = EVP_DigestUpdate(out,&LAB_013d0740,cnt), 0 < iVar7)) &&
          (((iVar7 = EVP_DigestUpdate(out,puVar2,8), 0 < iVar7 &&
            (iVar7 = EVP_DigestUpdate(out,local_64,1), 0 < iVar7)) &&
           ((iVar7 = EVP_DigestUpdate(out,param_3,2), 0 < iVar7 &&
            ((iVar7 = EVP_DigestUpdate(out,*(void **)(param_2 + 0x20),(ulong)*(uint *)(param_2 + 8))
             , 0 < iVar7 && (iVar7 = EVP_DigestFinal_ex(out,param_3,(uint *)0x0), 0 < iVar7))))))))
         && ((iVar7 = EVP_MD_CTX_copy_ex(out,ctx), 0 < iVar7 &&
             ((((iVar7 = EVP_DigestUpdate(out,d,local_70), 0 < iVar7 &&
                (iVar7 = EVP_DigestUpdate(out,&LAB_013d0770,cnt), 0 < iVar7)) &&
               (iVar7 = EVP_DigestUpdate(out,param_3,local_70), 0 < iVar7)) &&
              (iVar7 = EVP_DigestFinal_ex(out,param_3,local_bc), 0 < iVar7)))))) {
        local_70 = (ulong)local_bc[0];
        EVP_MD_CTX_free(out);
LAB_00acc828:
        ssl3_record_sequence_update(puVar2);
        return local_70 & 0xffffffff;
      }
      EVP_MD_CTX_reset(out);
    }
  }
  return 0xffffffff;
}

