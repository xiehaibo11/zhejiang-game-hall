
int EVP_DecodeUpdate(EVP_ENCODE_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint n;
  int iVar6;
  int iVar7;
  long lVar8;
  
  n = ctx->num;
  if (((int)n < 1) || (ctx->enc_data[(long)(int)n + -1] != '=')) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
    if ((1 < (int)n) && (iVar7 = 1, ctx->enc_data[(long)(int)n + -2] == '=')) {
      iVar7 = 2;
    }
  }
  if (inl == 0) {
    uVar5 = 0;
    iVar6 = 0;
    goto LAB_00bda328;
  }
  if (inl < 1) {
    iVar6 = 0;
    bVar3 = false;
    if (0 < (int)n) goto LAB_00bda2a8;
joined_r0x00bda320:
    if (bVar3) {
      uVar5 = 0;
      goto LAB_00bda328;
    }
  }
  else {
    lVar8 = 0;
    iVar6 = 0;
    do {
      bVar2 = in[lVar8];
      if (((char)bVar2 < '\0') || (bVar1 = (&DAT_013fc5ee)[bVar2], bVar1 == 0xff)) {
LAB_00bda278:
        uVar5 = 0xffffffff;
        goto LAB_00bda328;
      }
      if (bVar2 != 0x3d) {
        if (((iVar7 < 1) || ((bVar1 | 0x13) == 0xf3)) && (iVar7 < 3)) goto LAB_00bda1ec;
        goto LAB_00bda278;
      }
      iVar7 = iVar7 + 1;
      if (2 < iVar7) goto LAB_00bda278;
LAB_00bda1ec:
      if (bVar2 == 0x2d) {
        bVar3 = true;
        goto LAB_00bda314;
      }
      uVar5 = n;
      if ((bVar1 | 0x13) != 0xf3) {
        if (0x3f < (int)n) goto LAB_00bda278;
        uVar5 = n + 1;
        ctx->enc_data[(int)n] = bVar2;
      }
      n = uVar5;
      if (uVar5 == 0x40) {
        iVar4 = EVP_DecodeBlock(out,ctx->enc_data,0x40);
        uVar5 = 0xffffffff;
        if ((iVar4 < 0) || (iVar4 < iVar7)) {
          n = 0;
          goto LAB_00bda328;
        }
        n = 0;
        iVar6 = (iVar4 - iVar7) + iVar6;
        out = out + (iVar4 - iVar7);
      }
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < inl);
    bVar3 = false;
LAB_00bda314:
    if ((int)n < 1) goto joined_r0x00bda320;
LAB_00bda2a8:
    if ((n & 3) == 0) {
      iVar4 = EVP_DecodeBlock(out,ctx->enc_data,n);
      n = 0;
      uVar5 = 0xffffffff;
      if ((iVar4 < 0) || (iVar4 < iVar7)) goto LAB_00bda328;
      n = 0;
      iVar6 = (iVar6 - iVar7) + iVar4;
      goto joined_r0x00bda320;
    }
    if (bVar3) {
      uVar5 = 0xffffffff;
      goto LAB_00bda328;
    }
  }
  uVar5 = (uint)(iVar7 == 0 || n != 0);
LAB_00bda328:
  *outl = iVar6;
  ctx->num = n;
  return uVar5;
}

