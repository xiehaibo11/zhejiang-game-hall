
int WHIRLPOOL_Final(uchar *md,WHIRLPOOL_CTX *c)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  
  uVar4 = c->bitoff;
  uVar5 = uVar4 >> 3;
  if ((uVar4 & 7) == 0) {
    c->data[uVar5] = 0x80;
  }
  else {
    c->data[uVar5] = (byte)(0x80 >> (ulong)(uVar4 & 7)) | c->data[uVar5];
  }
  uVar6 = uVar5 + 1;
  if (uVar4 < 0x100) {
    if (0x1f < uVar6) goto LAB_00be5ce0;
  }
  else {
    if (uVar6 < 0x40) {
      memset(c->data + uVar6,0,(ulong)(0x3f - uVar5));
    }
    whirlpool_block(c,c->data,1);
    uVar6 = 0;
  }
  memset(c->data + uVar6,0,(ulong)(0x20 - uVar6));
LAB_00be5ce0:
  sVar1 = c->bitlen[0];
  sVar2 = c->bitlen[1];
  c->data[0x3e] = (uchar)(sVar1 >> 8);
  c->data[0x3d] = (uchar)(sVar1 >> 0x10);
  c->data[0x3c] = (uchar)(sVar1 >> 0x18);
  c->data[0x3b] = (uchar)(sVar1 >> 0x20);
  c->data[0x3f] = (uchar)sVar1;
  c->data[0x3a] = (uchar)(sVar1 >> 0x28);
  c->data[0x39] = (uchar)(sVar1 >> 0x30);
  c->data[0x38] = (uchar)(sVar1 >> 0x38);
  c->data[0x36] = (uchar)(sVar2 >> 8);
  c->data[0x35] = (uchar)(sVar2 >> 0x10);
  c->data[0x34] = (uchar)(sVar2 >> 0x18);
  c->data[0x33] = (uchar)(sVar2 >> 0x20);
  c->data[0x32] = (uchar)(sVar2 >> 0x28);
  c->data[0x31] = (uchar)(sVar2 >> 0x30);
  sVar1 = c->bitlen[2];
  sVar3 = c->bitlen[3];
  c->data[0x37] = (uchar)sVar2;
  c->data[0x30] = (uchar)(sVar2 >> 0x38);
  c->data[0x2e] = (uchar)(sVar1 >> 8);
  c->data[0x2d] = (uchar)(sVar1 >> 0x10);
  c->data[0x2c] = (uchar)(sVar1 >> 0x18);
  c->data[0x2b] = (uchar)(sVar1 >> 0x20);
  c->data[0x2a] = (uchar)(sVar1 >> 0x28);
  c->data[0x2f] = (uchar)sVar1;
  c->data[0x28] = (uchar)(sVar1 >> 0x38);
  c->data[0x26] = (uchar)(sVar3 >> 8);
  c->data[0x25] = (uchar)(sVar3 >> 0x10);
  c->data[0x24] = (uchar)(sVar3 >> 0x18);
  c->data[0x23] = (uchar)(sVar3 >> 0x20);
  c->data[0x29] = (uchar)(sVar1 >> 0x30);
  c->data[0x22] = (uchar)(sVar3 >> 0x28);
  c->data[0x27] = (uchar)sVar3;
  c->data[0x21] = (uchar)(sVar3 >> 0x30);
  c->data[0x20] = (uchar)(sVar3 >> 0x38);
  whirlpool_block(c,c->data,1);
  if (md != (uchar *)0x0) {
    dVar7 = (c->H).q[6];
    *(double *)(md + 0x38) = (c->H).q[7];
    *(double *)(md + 0x30) = dVar7;
    dVar7 = (c->H).q[4];
    *(double *)(md + 0x28) = (c->H).q[5];
    *(double *)(md + 0x20) = dVar7;
    dVar7 = (c->H).q[2];
    *(double *)(md + 0x18) = (c->H).q[3];
    *(double *)(md + 0x10) = dVar7;
    dVar7 = (c->H).q[0];
    *(double *)(md + 8) = (c->H).q[1];
    *(double *)md = dVar7;
    OPENSSL_cleanse(c,0xa8);
  }
  return (uint)(md != (uchar *)0x0);
}

