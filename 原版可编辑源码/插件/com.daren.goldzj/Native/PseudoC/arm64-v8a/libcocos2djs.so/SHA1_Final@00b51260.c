
int SHA1_Final(uchar *md,SHA_CTX *c)

{
  uint *ptr;
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = c->num;
  uVar3 = (ulong)uVar1;
  ptr = c->data;
  *(undefined1 *)((long)ptr + uVar3) = 0x80;
  lVar4 = uVar3 + 1;
  if (0x37 < uVar1) {
    memset((void *)((long)ptr + lVar4),0,0x3f - uVar3);
    sha1_block_data_order(c,ptr,1);
    lVar4 = 0;
  }
  memset((void *)((long)ptr + lVar4),0,0x38 - lVar4);
  uVar1 = (c->Nh & 0xff00ff00) >> 8 | (c->Nh & 0xff00ff) << 8;
  uVar2 = (c->Nl & 0xff00ff00) >> 8 | (c->Nl & 0xff00ff) << 8;
  c->data[0xe] = uVar1 >> 0x10 | uVar1 << 0x10;
  c->data[0xf] = uVar2 >> 0x10 | uVar2 << 0x10;
  sha1_block_data_order(c,ptr,1);
  c->num = 0;
  OPENSSL_cleanse(ptr,0x40);
  uVar1 = (c->h0 & 0xff00ff00) >> 8 | (c->h0 & 0xff00ff) << 8;
  *(uint *)md = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (c->h1 & 0xff00ff00) >> 8 | (c->h1 & 0xff00ff) << 8;
  *(uint *)(md + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (c->h2 & 0xff00ff00) >> 8 | (c->h2 & 0xff00ff) << 8;
  *(uint *)(md + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (c->h3 & 0xff00ff00) >> 8 | (c->h3 & 0xff00ff) << 8;
  *(uint *)(md + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (c->h4 & 0xff00ff00) >> 8 | (c->h4 & 0xff00ff) << 8;
  *(uint *)(md + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
  return 1;
}

