
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00bdfcdc(double param_1,void *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  EVP_MD_CTX *ctx;
  pthread_t __thread2;
  EVP_MD *type;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  size_t cnt;
  ulong uVar15;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  long local_78;
  
  if (param_3 == 0) {
    return 1;
  }
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
LAB_00be003c:
    uVar14 = 0;
    goto LAB_00be0040;
  }
  iVar8 = CRYPTO_THREAD_run_once(&DAT_017851d4,&LAB_00be0a94);
  uVar14 = 0;
  if ((iVar8 == 0) || (DAT_017851d8 == 0)) goto LAB_00be0040;
  if (DAT_017851a0 == '\x01') {
    __thread2 = CRYPTO_THREAD_get_current_id();
    CRYPTO_THREAD_read_lock(DAT_017851e8);
    iVar8 = CRYPTO_THREAD_compare_id(DAT_017851f0,__thread2);
    CRYPTO_THREAD_unlock(DAT_017851e8);
    if (iVar8 == 0) goto LAB_00bdfd98;
    bVar7 = true;
  }
  else {
LAB_00bdfd98:
    CRYPTO_THREAD_write_lock(DAT_017851e0);
    bVar7 = false;
  }
  uVar15 = DAT_01785200;
  local_80 = DAT_01785210;
  local_78 = DAT_01785218;
  uVar13 = DAT_01785200 + (long)param_3;
  local_90 = DAT_017851c0;
  uStack_98 = uRam00000000017851b8;
  local_a0 = _DAT_017851b0;
  if (uVar13 < 0x3ff) {
    DAT_01785200 = uVar13;
    if ((DAT_01785208 < 0x3ff) && (DAT_01785208 < uVar13)) goto LAB_00bdfe24;
  }
  else {
    DAT_01785200 = uVar13 % 0x3ff;
    uVar13 = 0x3ff;
LAB_00bdfe24:
    DAT_01785208 = uVar13;
  }
  iVar8 = param_3 / 0x14;
  if (0 < param_3 % 0x14) {
    iVar8 = iVar8 + 1;
  }
  DAT_01785218 = DAT_01785218 + iVar8;
  if (!bVar7) {
    CRYPTO_THREAD_unlock(DAT_017851e0);
  }
  if (0 < param_3) {
    iVar8 = 0;
    do {
      iVar5 = param_3 - iVar8;
      iVar11 = iVar5;
      if (0x13 < iVar5) {
        iVar11 = 0x14;
      }
      type = EVP_sha1();
      iVar9 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
      if ((iVar9 == 0) || (iVar9 = EVP_DigestUpdate(ctx,&local_a0,0x14), iVar9 == 0))
      goto LAB_00be003c;
      iVar9 = iVar11 + (int)uVar15;
      if (iVar9 < 0x400) {
        iVar9 = EVP_DigestUpdate(ctx,&DAT_01785220 + (int)uVar15,(long)iVar11);
      }
      else {
        iVar9 = iVar9 + -0x3ff;
        iVar10 = EVP_DigestUpdate(ctx,&DAT_01785220 + (int)uVar15,(long)(iVar11 - iVar9));
        if (iVar10 == 0) goto LAB_00be003c;
        iVar9 = EVP_DigestUpdate(ctx,&DAT_01785220,(long)iVar9);
      }
      if (iVar9 == 0) goto LAB_00be003c;
      cnt = (size_t)iVar11;
      iVar11 = EVP_DigestUpdate(ctx,param_2,cnt);
      if (((iVar11 == 0) || (iVar11 = EVP_DigestUpdate(ctx,&local_80,0x10), iVar11 == 0)) ||
         (iVar11 = EVP_DigestFinal_ex(ctx,(uchar *)&local_a0,(uint *)0x0), iVar11 == 0))
      goto LAB_00be003c;
      param_2 = (void *)((long)param_2 + cnt);
      local_78 = local_78 + 1;
      if (0 < iVar5) {
        lVar12 = 0;
        do {
          iVar11 = (int)uVar15;
          pbVar1 = (byte *)((long)&local_a0 + lVar12);
          lVar12 = lVar12 + 1;
          uVar2 = 0;
          if (iVar11 < 0x3fe) {
            uVar2 = iVar11 + 1;
          }
          uVar15 = (ulong)uVar2;
          (&DAT_01785220)[iVar11] = (&DAT_01785220)[iVar11] ^ *pbVar1;
        } while (lVar12 < (long)cnt);
      }
      iVar8 = iVar8 + 0x14;
    } while (iVar8 < param_3);
  }
  if (!bVar7) {
    CRYPTO_THREAD_write_lock(DAT_017851e0);
  }
  _DAT_017851b0 =
       CONCAT17((byte)((ulong)_DAT_017851b0 >> 0x38) ^ (byte)((ulong)local_a0 >> 0x38),
                CONCAT16((byte)((ulong)_DAT_017851b0 >> 0x30) ^ (byte)((ulong)local_a0 >> 0x30),
                         CONCAT15((byte)((ulong)_DAT_017851b0 >> 0x28) ^
                                  (byte)((ulong)local_a0 >> 0x28),
                                  CONCAT14((byte)((ulong)_DAT_017851b0 >> 0x20) ^
                                           (byte)((ulong)local_a0 >> 0x20),
                                           CONCAT13((byte)((ulong)_DAT_017851b0 >> 0x18) ^
                                                    (byte)((ulong)local_a0 >> 0x18),
                                                    CONCAT12((byte)((ulong)_DAT_017851b0 >> 0x10) ^
                                                             (byte)((ulong)local_a0 >> 0x10),
                                                             CONCAT11((byte)((ulong)_DAT_017851b0 >>
                                                                            8) ^
                                                                      (byte)((ulong)local_a0 >> 8),
                                                                      (byte)_DAT_017851b0 ^
                                                                      (byte)local_a0)))))));
  uRam00000000017851b8 =
       CONCAT17((byte)((ulong)uRam00000000017851b8 >> 0x38) ^ (byte)((ulong)uStack_98 >> 0x38),
                CONCAT16((byte)((ulong)uRam00000000017851b8 >> 0x30) ^
                         (byte)((ulong)uStack_98 >> 0x30),
                         CONCAT15((byte)((ulong)uRam00000000017851b8 >> 0x28) ^
                                  (byte)((ulong)uStack_98 >> 0x28),
                                  CONCAT14((byte)((ulong)uRam00000000017851b8 >> 0x20) ^
                                           (byte)((ulong)uStack_98 >> 0x20),
                                           CONCAT13((byte)((ulong)uRam00000000017851b8 >> 0x18) ^
                                                    (byte)((ulong)uStack_98 >> 0x18),
                                                    CONCAT12((byte)((ulong)uRam00000000017851b8 >>
                                                                   0x10) ^
                                                             (byte)((ulong)uStack_98 >> 0x10),
                                                             CONCAT11((byte)((ulong)
                                                  uRam00000000017851b8 >> 8) ^
                                                  (byte)((ulong)uStack_98 >> 8),
                                                  (byte)uRam00000000017851b8 ^ (byte)uStack_98))))))
               );
  bVar6 = (byte)DAT_017851c0 ^ (byte)local_90;
  bVar3 = DAT_017851c0._1_1_ ^ local_90._1_1_;
  bVar4 = DAT_017851c0._2_1_ ^ local_90._2_1_;
  DAT_017851c0 = CONCAT13(DAT_017851c0._3_1_ ^ local_90._3_1_,CONCAT12(bVar4,CONCAT11(bVar3,bVar6)))
  ;
  if (DAT_017851f8 < 32.0) {
    DAT_017851f8 = DAT_017851f8 + param_1;
  }
  if (!bVar7) {
    CRYPTO_THREAD_unlock(DAT_017851e0);
  }
  uVar14 = 1;
LAB_00be0040:
  EVP_MD_CTX_free(ctx);
  return uVar14;
}

