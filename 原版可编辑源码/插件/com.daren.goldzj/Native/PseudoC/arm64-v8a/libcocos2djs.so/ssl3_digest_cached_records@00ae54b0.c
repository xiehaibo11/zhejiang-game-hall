
undefined8 ssl3_digest_cached_records(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  size_t cnt;
  long lVar3;
  EVP_MD *type;
  int line;
  void *local_28;
  
                    /* try { // try from 00ae54cc to 00be54db has its CatchHandler @ 00ae630c */
  if (*(long *)(*(long *)(param_1 + 0x90) + 0xe0) == 0) {
    cnt = BIO_ctrl(*(BIO **)(*(long *)(param_1 + 0x90) + 0xd8),3,0,&local_28);
    if ((long)cnt < 1) {
      iVar1 = 0x14c;
      line = 0x17a;
    }
    else {
      lVar3 = EVP_MD_CTX_new();
      *(long *)(*(long *)(param_1 + 0x90) + 0xe0) = lVar3;
                    /* try { // try from 00ae5520 to 00be552f has its CatchHandler @ 00ae6310 */
      if (lVar3 == 0) {
                    /* try { // try from 00ae55a0 to 00be55af has its CatchHandler @ 00ae6314 */
        iVar1 = 0x41;
        line = 0x180;
      }
      else {
        type = (EVP_MD *)ssl_handshake_md(param_1);
                    /* try { // try from 00ae555c to 00be556b has its CatchHandler @ 00ae6318 */
        if (((type != (EVP_MD *)0x0) &&
            (iVar1 = EVP_DigestInit_ex(*(EVP_MD_CTX **)(*(long *)(param_1 + 0x90) + 0xe0),type,
                                       (ENGINE *)0x0), iVar1 != 0)) &&
           (iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(*(long *)(param_1 + 0x90) + 0xe0),local_28,cnt
                                    ), iVar1 != 0)) goto LAB_00ae54d4;
        iVar1 = 0x44;
        line = 0x187;
      }
    }
    ERR_put_error(0x14,0x125,iVar1,"ssl/s3_enc.c",line);
    uVar2 = 0;
  }
  else {
LAB_00ae54d4:
    if (param_2 == 0) {
      BIO_free(*(BIO **)(*(long *)(param_1 + 0x90) + 0xd8));
      *(undefined8 *)(*(long *)(param_1 + 0x90) + 0xd8) = 0;
    }
    uVar2 = 1;
                    /* try { // try from 00ae54f0 to 00be54fb has its CatchHandler @ 00ae63a8 */
  }
                    /* try { // try from 00ae55c4 to 00be55cf has its CatchHandler @ 00ae63a8 */
  return uVar2;
}

