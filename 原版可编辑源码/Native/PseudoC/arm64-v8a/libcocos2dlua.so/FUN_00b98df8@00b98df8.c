
bool FUN_00b98df8(int param_1,BIGNUM *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int num;
  int iVar5;
  BIGNUM *pBVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  byte local_5c [4];
  time_t tStack_58;
  byte *buf;
  
                    /* try { // try from 00b98df8 to 00c98ea7 has its CatchHandler @ 00b98df8
                       catch() { ... } // from try @ 00b98df8 with catch @ 00b98df8
                       catch() { ... } // from try @ 00b98eb8 with catch @ 00b98df8 */
  if (param_3 == 0) {
    if ((param_4 == -1) && (param_5 == 0)) {
      BN_set_word(param_2,0);
      return true;
    }
LAB_00b98f5c:
    ERR_put_error(3,0x7f,0x76,"crypto/bn/bn_rand.c",0x5c);
    return false;
  }
  if ((param_3 < 0) || ((uVar8 = param_3 - 1, uVar8 == 0 && (0 < param_4)))) goto LAB_00b98f5c;
  uVar1 = param_3 + 0xe;
  if (-1 < (int)(param_3 + 7U)) {
    uVar1 = param_3 + 7U;
  }
  lVar3 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  uVar2 = param_3 + 6;
  if (-1 < (int)uVar8) {
    uVar2 = uVar8;
  }
  num = (int)uVar1 >> 3;
  buf = CRYPTO_malloc(num,"crypto/bn/bn_rand.c",0x24);
  if (buf == (byte *)0x0) {
    ERR_put_error(3,0x7f,0x41,"crypto/bn/bn_rand.c",0x26);
  }
  else {
    time(&tStack_58);
    RAND_add(&tStack_58,8,0.0);
    iVar5 = RAND_bytes(buf,num);
    if (0 < iVar5) {
                    /* try { // try from 00b98ea8 to 00c98eb7 has its CatchHandler @ 00b98ef0 */
      if (param_1 == 2) {
        lVar10 = 0;
        do {
                    /* try { // try from 00b98eb8 to 00c98f03 has its CatchHandler @ 00b98df8 */
          iVar5 = RAND_bytes(local_5c,1);
          if (iVar5 < 1) goto LAB_00b98f9c;
          if ((lVar10 < 1) || (-1 < (char)local_5c[0])) {
            if (local_5c[0] < 0x2a) {
              bVar7 = 0;
                    /* catch() { ... } // from try @ 00b98ea8 with catch @ 00b98ef0 */
              goto LAB_00b98f00;
            }
            if (local_5c[0] < 0x54) {
              bVar7 = 0xff;
              goto LAB_00b98f00;
            }
          }
          else {
            bVar7 = buf[lVar10 + -1];
LAB_00b98f00:
            buf[lVar10] = bVar7;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar3);
      }
      uVar8 = uVar8 - (uVar2 & 0xfffffff8);
      uVar1 = uVar8 + 1;
      if (-1 < param_4) {
        if (param_4 == 0) {
          iVar5 = 1;
LAB_00b98fa8:
          bVar7 = (byte)(iVar5 << (ulong)(uVar8 & 0x1f));
          pbVar9 = buf;
        }
        else {
          if (uVar8 != 0) {
            uVar8 = uVar8 - 1;
            iVar5 = 3;
            goto LAB_00b98fa8;
          }
          pbVar9 = buf + 1;
          *buf = 1;
          bVar7 = 0x80;
        }
        *pbVar9 = bVar7 | *pbVar9;
      }
      *buf = *buf & ((byte)(0xff << (ulong)(uVar1 & 0x1f)) ^ 0xff);
      if (param_5 != 0) {
        buf[lVar3 + -1] = buf[lVar3 + -1] | 1;
      }
      pBVar6 = BN_bin2bn(buf,num,param_2);
      bVar4 = pBVar6 != (BIGNUM *)0x0;
      goto LAB_00b99008;
    }
  }
LAB_00b98f9c:
  bVar4 = false;
LAB_00b99008:
  CRYPTO_clear_free(buf,lVar3,"crypto/bn/bn_rand.c",0x57);
  return bVar4;
}

