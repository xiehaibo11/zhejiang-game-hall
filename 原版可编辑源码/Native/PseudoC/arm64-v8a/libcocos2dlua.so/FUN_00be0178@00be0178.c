
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00be0178(undefined1 *param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  EVP_MD_CTX *ctx;
  ulong uVar10;
  EVP_MD *pEVar11;
  size_t cnt;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  timeval tStack_c0;
  time_t local_b0;
  __pid_t local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_80;
  undefined8 uStack_78;
  
  local_a4 = getpid();
  local_b0 = time((time_t *)0x0);
  iVar6 = gettimeofday(&tStack_c0,(__timezone_ptr_t)0x0);
  if (param_2 < 1) {
    return 1;
  }
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new(iVar6);
  if (((ctx == (EVP_MD_CTX *)0x0) ||
      (iVar6 = CRYPTO_THREAD_run_once(&DAT_017851d4,&LAB_00be0a94), iVar6 == 0)) ||
     (DAT_017851d8 == 0)) {
    iVar6 = 0x41;
    iVar8 = 0x205;
  }
  else {
    CRYPTO_THREAD_write_lock(DAT_017851e0);
    ASYNC_block_pause();
    CRYPTO_THREAD_write_lock(DAT_017851e8);
    DAT_017851f0 = CRYPTO_THREAD_get_current_id();
    uVar10 = CRYPTO_THREAD_unlock(DAT_017851e8);
    DAT_017851a0 = 1;
    if ((DAT_017851a4 & 1) == 0) {
      uVar7 = RAND_poll();
      uVar10 = (ulong)uVar7;
      DAT_017851a4 = 1;
    }
    dVar4 = DAT_017851f8;
    if ((DAT_017851f8 < 32.0) && (DAT_017851f8 = DAT_017851f8 - (double)param_2, DAT_017851f8 < 0.0)
       ) {
      DAT_017851f8 = 0.0;
    }
    if (DAT_017851d0 == 0) {
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      FUN_00bdfcdc(0,"....................",0x14);
      uVar10 = FUN_00bdfcdc(0,"....................",0x14);
      if (32.0 <= dVar4) {
        DAT_017851d0 = 1;
      }
    }
    uVar5 = DAT_01785208;
    uVar14 = DAT_01785200;
    local_80 = DAT_01785210;
    uStack_78 = DAT_01785218;
    DAT_01785200 = DAT_01785200 +
                   (long)(param_2 + 9 + (((param_2 + -1) / 10) * 10 - (param_2 + -1)));
    local_90 = DAT_017851c0;
    uStack_98 = uRam00000000017851b8;
    local_a0 = _DAT_017851b0;
    if (DAT_01785208 < DAT_01785200) {
      uVar3 = 0;
      if (DAT_01785208 != 0) {
        uVar3 = DAT_01785200 / DAT_01785208;
      }
      DAT_01785200 = DAT_01785200 - uVar3 * DAT_01785208;
    }
    DAT_01785210 = DAT_01785210 + 1;
    DAT_017851a0 = 0;
    ASYNC_unblock_pause(uVar10);
    CRYPTO_THREAD_unlock(DAT_017851e0);
    do {
      iVar6 = param_2;
      if (9 < param_2) {
        iVar6 = 10;
      }
      pEVar11 = EVP_sha1();
      iVar8 = EVP_DigestInit_ex(ctx,pEVar11,(ENGINE *)0x0);
      if (iVar8 == 0) goto LAB_00be0a10;
      if (local_a4 != 0) {
        iVar8 = EVP_DigestUpdate(ctx,&local_a4,4);
        if (iVar8 == 0) goto LAB_00be0a10;
        local_a4 = 0;
      }
      if (local_b0 != 0) {
        iVar8 = EVP_DigestUpdate(ctx,&local_b0,8);
        if ((iVar8 == 0) || (iVar8 = EVP_DigestUpdate(ctx,&tStack_c0,0x10), iVar8 == 0))
        goto LAB_00be0a10;
        local_b0 = 0;
      }
      iVar8 = EVP_DigestUpdate(ctx,&local_a0,0x14);
      if ((iVar8 == 0) || (iVar8 = EVP_DigestUpdate(ctx,&local_80,0x10), iVar8 == 0))
      goto LAB_00be0a10;
      iVar8 = (10 - (int)uVar5) + (int)uVar14;
      puVar12 = &DAT_01785220 + uVar14;
      if (iVar8 < 1) {
        cnt = 10;
      }
      else {
        iVar9 = EVP_DigestUpdate(ctx,puVar12,(long)(10 - iVar8));
        if (iVar9 == 0) goto LAB_00be0a10;
        cnt = (size_t)iVar8;
        puVar12 = &DAT_01785220;
      }
      iVar8 = EVP_DigestUpdate(ctx,puVar12,cnt);
      if ((iVar8 == 0) ||
         (iVar8 = EVP_DigestFinal_ex(ctx,(uchar *)&local_a0,(uint *)0x0), iVar8 == 0))
      goto LAB_00be0a10;
      lVar1 = 0;
      if (uVar14 + 1 < uVar5) {
        lVar1 = uVar14 + 1;
      }
      (&DAT_01785220)[uVar14] = (&DAT_01785220)[uVar14] ^ (byte)local_a0;
      puVar12 = param_1 + 1;
      *param_1 = uStack_98._2_1_;
      lVar2 = 0;
      if (lVar1 + 1U < uVar5) {
        lVar2 = lVar1 + 1;
      }
      (&DAT_01785220)[lVar1] = (&DAT_01785220)[lVar1] ^ local_a0._1_1_;
      if (1 < iVar6) {
        puVar12 = param_1 + 2;
        param_1[1] = uStack_98._3_1_;
      }
      lVar1 = 0;
      if (lVar2 + 1U < uVar5) {
        lVar1 = lVar2 + 1;
      }
      (&DAT_01785220)[lVar2] = (&DAT_01785220)[lVar2] ^ local_a0._2_1_;
      puVar13 = puVar12;
      if (2 < iVar6) {
        puVar13 = puVar12 + 1;
        *puVar12 = uStack_98._4_1_;
      }
      lVar2 = 0;
      if (lVar1 + 1U < uVar5) {
        lVar2 = lVar1 + 1;
      }
      (&DAT_01785220)[lVar1] = (&DAT_01785220)[lVar1] ^ local_a0._3_1_;
      puVar12 = puVar13;
      if (3 < iVar6) {
        puVar12 = puVar13 + 1;
        *puVar13 = uStack_98._5_1_;
      }
      lVar1 = 0;
      if (lVar2 + 1U < uVar5) {
        lVar1 = lVar2 + 1;
      }
      (&DAT_01785220)[lVar2] = (&DAT_01785220)[lVar2] ^ local_a0._4_1_;
      puVar13 = puVar12;
      if (4 < iVar6) {
        puVar13 = puVar12 + 1;
        *puVar12 = uStack_98._6_1_;
      }
      lVar2 = 0;
      if (lVar1 + 1U < uVar5) {
        lVar2 = lVar1 + 1;
      }
      (&DAT_01785220)[lVar1] = (&DAT_01785220)[lVar1] ^ local_a0._5_1_;
      puVar12 = puVar13;
      if (5 < iVar6) {
        puVar12 = puVar13 + 1;
        *puVar13 = uStack_98._7_1_;
      }
      lVar1 = 0;
      if (lVar2 + 1U < uVar5) {
        lVar1 = lVar2 + 1;
      }
      (&DAT_01785220)[lVar2] = (&DAT_01785220)[lVar2] ^ local_a0._6_1_;
      puVar13 = puVar12;
      if (6 < iVar6) {
        puVar13 = puVar12 + 1;
        *puVar12 = (undefined1)local_90;
      }
      lVar2 = 0;
      if (lVar1 + 1U < uVar5) {
        lVar2 = lVar1 + 1;
      }
      (&DAT_01785220)[lVar1] = (&DAT_01785220)[lVar1] ^ local_a0._7_1_;
      puVar12 = puVar13;
      if (7 < iVar6) {
        puVar12 = puVar13 + 1;
        *puVar13 = local_90._1_1_;
      }
      lVar1 = 0;
      if (lVar2 + 1U < uVar5) {
        lVar1 = lVar2 + 1;
      }
      (&DAT_01785220)[lVar2] = (&DAT_01785220)[lVar2] ^ (byte)uStack_98;
      puVar13 = puVar12;
      if (8 < iVar6) {
        puVar13 = puVar12 + 1;
        *puVar12 = local_90._2_1_;
      }
      param_2 = param_2 - iVar6;
      uVar14 = 0;
      if (lVar1 + 1U < uVar5) {
        uVar14 = lVar1 + 1;
      }
      (&DAT_01785220)[lVar1] = (&DAT_01785220)[lVar1] ^ uStack_98._1_1_;
      param_1 = puVar13;
      if (9 < iVar6) {
        param_1 = puVar13 + 1;
        *puVar13 = local_90._3_1_;
      }
    } while (0 < param_2);
    pEVar11 = EVP_sha1();
    iVar6 = EVP_DigestInit_ex(ctx,pEVar11,(ENGINE *)0x0);
    if (((iVar6 != 0) && (iVar6 = EVP_DigestUpdate(ctx,&local_80,0x10), iVar6 != 0)) &&
       (iVar6 = EVP_DigestUpdate(ctx,&local_a0,0x14), iVar6 != 0)) {
      CRYPTO_THREAD_write_lock(DAT_017851e0);
      ASYNC_block_pause();
      iVar6 = EVP_DigestUpdate(ctx,&DAT_017851b0,0x14);
      if ((iVar6 != 0) && (iVar6 = EVP_DigestFinal_ex(ctx,&DAT_017851b0,(uint *)0x0), iVar6 != 0)) {
        ASYNC_unblock_pause();
        CRYPTO_THREAD_unlock(DAT_017851e0);
        EVP_MD_CTX_free(ctx);
        if (32.0 <= dVar4) {
          return 1;
        }
        if (param_3 != 0) {
          return 0;
        }
        ERR_put_error(0x24,100,100,"crypto/rand/md_rand.c",0x1fb);
        ERR_add_error_data(1,
                           "You need to read the OpenSSL FAQ, https://www.openssl.org/docs/faq.html"
                          );
        return 0;
      }
      CRYPTO_THREAD_unlock(DAT_017851e0);
    }
LAB_00be0a10:
    iVar6 = 6;
    iVar8 = 0x201;
  }
  ERR_put_error(0x24,100,iVar6,"crypto/rand/md_rand.c",iVar8);
  EVP_MD_CTX_free(ctx);
  return 0;
}

