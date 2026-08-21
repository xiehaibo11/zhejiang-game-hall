
int EVP_DecryptFinal_ex(EVP_CIPHER_CTX *ctx,uchar *outm,int *outl)

{
  uint uVar1;
  byte bVar2;
  uchar *puVar3;
  int iVar4;
  int line;
  uint uVar5;
  EVP_CIPHER *pEVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uchar *puVar11;
  uchar *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *outl = 0;
  pEVar6 = ctx->cipher;
  if ((*(byte *)((long)&pEVar6->flags + 2) >> 4 & 1) != 0) {
    iVar4 = (*pEVar6->do_cipher)(ctx,outm,(uchar *)0x0,0);
    if (iVar4 < 0) {
      return 0;
    }
    *outl = iVar4;
    return 1;
  }
  if ((ctx->flags & 0x100) != 0) {
    if (ctx->buf_len == 0) {
      *outl = 0;
      return 1;
    }
    iVar4 = 0x8a;
    line = 0x1fe;
    goto LAB_00b262f0;
  }
  uVar1 = pEVar6->block_size;
  if (uVar1 < 2) {
    uVar5 = 0;
    goto LAB_00b26300;
  }
  if ((ctx->buf_len != 0) || (ctx->final_used == 0)) {
    iVar4 = 0x6d;
    line = 0x206;
LAB_00b262f0:
    ERR_put_error(6,0x65,iVar4,"crypto/evp/evp_enc.c",line);
    return 0;
  }
  if (0x20 < uVar1) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: b <= sizeof ctx->final","crypto/evp/evp_enc.c",0x209);
  }
  uVar7 = (ulong)(uVar1 - 1);
  bVar2 = ctx->final[uVar7];
  uVar9 = (uint)bVar2;
  if ((uVar9 == 0) || (uVar5 = uVar1 - uVar9, (int)uVar1 < (int)uVar9)) {
    iVar4 = 100;
    line = 0x211;
    goto LAB_00b262f0;
  }
  iVar4 = 0;
  do {
    if ((uint)ctx->final[uVar7] != (uint)bVar2) {
      iVar4 = 100;
      line = 0x216;
      goto LAB_00b262f0;
    }
    iVar4 = iVar4 + 1;
    uVar7 = (ulong)((int)uVar7 - 1);
  } while (iVar4 < (int)(uint)bVar2);
  if ((int)uVar5 < 1) goto LAB_00b26300;
  uVar7 = (ulong)uVar5;
  if (uVar5 < 0x20) {
LAB_00b263a8:
    lVar10 = 0;
  }
  else {
    lVar10 = uVar7 - (uVar5 & 0x1f);
    if (lVar10 != 0) {
      if ((outm < ctx->final + uVar7) && (ctx->final < outm + uVar7)) goto LAB_00b263a8;
      puVar11 = ctx->final + 0x10;
      puVar12 = outm + 0x10;
      lVar8 = lVar10;
      do {
        puVar3 = puVar11 + -8;
        uVar13 = *(undefined8 *)(puVar11 + -0x10);
        uVar15 = *(undefined8 *)(puVar11 + 8);
        uVar14 = *(undefined8 *)puVar11;
        puVar11 = puVar11 + 0x20;
        lVar8 = lVar8 + -0x20;
        *(undefined8 *)(puVar12 + -8) = *(undefined8 *)puVar3;
        *(undefined8 *)(puVar12 + -0x10) = uVar13;
        *(undefined8 *)(puVar12 + 8) = uVar15;
        *(undefined8 *)puVar12 = uVar14;
        puVar12 = puVar12 + 0x20;
      } while (lVar8 != 0);
      if ((uVar5 & 0x1f) == 0) goto LAB_00b26300;
    }
  }
  lVar8 = uVar7 - lVar10;
  puVar11 = outm + lVar10;
  puVar12 = ctx->final + lVar10;
  do {
    lVar8 = lVar8 + -1;
    *puVar11 = *puVar12;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  } while (lVar8 != 0);
LAB_00b26300:
  *outl = uVar5;
  return 1;
}

