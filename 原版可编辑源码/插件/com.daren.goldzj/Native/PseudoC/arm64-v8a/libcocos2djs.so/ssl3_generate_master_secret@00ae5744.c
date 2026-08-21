
int ssl3_generate_master_secret(long param_1,uchar *param_2,void *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  EVP_MD_CTX *ctx;
  size_t cnt;
  ulong uVar4;
  ulong uVar5;
  uchar auStack_90 [64];
  uint local_44;
  
                    /* try { // try from 00ae5748 to 00be574f has its CatchHandler @ 00ae62ec */
                    /* try { // try from 00ae5750 to 00be586b has its CatchHandler @ 00ae4dc4 */
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    ERR_put_error(0x14,0x184,0x41,"ssl/s3_enc.c",0x1d5);
    return 0;
  }
  iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 0x1b8) + 0xe0),(ENGINE *)0x0);
  if ((0 < iVar3) && (iVar3 = EVP_DigestUpdate(ctx,"A",1), 0 < iVar3)) {
    cnt = (size_t)param_4;
    iVar3 = EVP_DigestUpdate(ctx,param_3,cnt);
                    /* try { // try from 00ae586c to 00be5873 has its CatchHandler @ 00ae62a8 */
    if ((((0 < iVar3) &&
         (((iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0xb0),0x20), 0 < iVar3
           && (iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0x90),0x20),
              0 < iVar3)) && (iVar3 = EVP_DigestFinal_ex(ctx,auStack_90,&local_44), 0 < iVar3)))) &&
        (((iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 0x1b8) + 0xd8),
                                     (ENGINE *)0x0), 0 < iVar3 &&
          (iVar3 = EVP_DigestUpdate(ctx,param_3,cnt), 0 < iVar3)) &&
         (iVar3 = EVP_DigestUpdate(ctx,auStack_90,(ulong)local_44), 0 < iVar3)))) &&
       (iVar3 = EVP_DigestFinal_ex(ctx,param_2,&local_44), uVar1 = local_44, 0 < iVar3)) {
      uVar4 = (ulong)local_44;
      iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 0x1b8) + 0xe0),(ENGINE *)0x0);
                    /* try { // try from 00ae58c0 to 00be58c7 has its CatchHandler @ 00ae62c8 */
                    /* try { // try from 00ae58c8 to 00be5913 has its CatchHandler @ 00ae4dc4 */
                    /* try { // try from 00ae5914 to 00be5933 has its CatchHandler @ 00ae6388 */
      if ((((0 < iVar3) && (iVar3 = EVP_DigestUpdate(ctx,"BB",2), 0 < iVar3)) &&
          ((iVar3 = EVP_DigestUpdate(ctx,param_3,cnt), 0 < iVar3 &&
           ((((iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0xb0),0x20),
              0 < iVar3 &&
              (iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0x90),0x20),
              0 < iVar3)) && (iVar3 = EVP_DigestFinal_ex(ctx,auStack_90,&local_44), 0 < iVar3)) &&
            ((iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 0x1b8) + 0xd8),
                                        (ENGINE *)0x0), 0 < iVar3 &&
             (iVar3 = EVP_DigestUpdate(ctx,param_3,cnt), 0 < iVar3)))))))) &&
         (iVar3 = EVP_DigestUpdate(ctx,auStack_90,(ulong)local_44), 0 < iVar3)) {
        iVar3 = EVP_DigestFinal_ex(ctx,param_2 + uVar4,&local_44);
        uVar2 = local_44;
        if (0 < iVar3) {
          uVar5 = (ulong)local_44;
          iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 0x1b8) + 0xe0),
                                    (ENGINE *)0x0);
                    /* try { // try from 00ae59a8 to 00be59af has its CatchHandler @ 00ae637c */
                    /* try { // try from 00ae59b0 to 00be5ab3 has its CatchHandler @ 00ae4dc4 */
          if (((0 < iVar3) && (iVar3 = EVP_DigestUpdate(ctx,&DAT_018989c5,3), 0 < iVar3)) &&
             ((((iVar3 = EVP_DigestUpdate(ctx,param_3,cnt), 0 < iVar3 &&
                (((iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0xb0),0x20),
                  0 < iVar3 &&
                  (iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0x90),0x20),
                  0 < iVar3)) && (iVar3 = EVP_DigestFinal_ex(ctx,auStack_90,&local_44), 0 < iVar3)))
                ) && (((iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)
                                                       (*(long *)(param_1 + 0x1b8) + 0xd8),
                                                  (ENGINE *)0x0), 0 < iVar3 &&
                       (iVar3 = EVP_DigestUpdate(ctx,param_3,cnt), 0 < iVar3)) &&
                      (iVar3 = EVP_DigestUpdate(ctx,auStack_90,(ulong)local_44), 0 < iVar3)))) &&
              (iVar3 = EVP_DigestFinal_ex(ctx,param_2 + uVar4 + uVar5,&local_44), 0 < iVar3)))) {
            iVar3 = local_44 + uVar2 + uVar1;
            goto LAB_00ae5ac8;
          }
        }
      }
    }
  }
                    /* try { // try from 00ae5ab4 to 00be5abb has its CatchHandler @ 00ae6378 */
                    /* try { // try from 00ae5abc to 00be5bc3 has its CatchHandler @ 00ae4dc4 */
  ERR_put_error(0x14,0x184,0x44,"ssl/s3_enc.c",0x1e6);
  iVar3 = 0;
LAB_00ae5ac8:
  EVP_MD_CTX_free(ctx);
  OPENSSL_cleanse(auStack_90,0x40);
  return iVar3;
}

