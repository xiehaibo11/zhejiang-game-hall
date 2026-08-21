
int SHA256_Final(uchar *md,SHA256_CTX *c)

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
    sha256_block_data_order(c,ptr,1);
    lVar4 = 0;
  }
  memset((void *)((long)ptr + lVar4),0,0x38 - lVar4);
  uVar1 = (c->Nh & 0xff00ff00) >> 8 | (c->Nh & 0xff00ff) << 8;
  uVar2 = (c->Nl & 0xff00ff00) >> 8 | (c->Nl & 0xff00ff) << 8;
  c->data[0xe] = uVar1 >> 0x10 | uVar1 << 0x10;
  c->data[0xf] = uVar2 >> 0x10 | uVar2 << 0x10;
  sha256_block_data_order(c,ptr,1);
  c->num = 0;
  OPENSSL_cleanse(ptr,0x40);
  uVar1 = c->md_len;
  if (uVar1 == 0x1c) {
    uVar1 = (c->h[0] & 0xff00ff00) >> 8 | (c->h[0] & 0xff00ff) << 8;
    *(uint *)md = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[1] & 0xff00ff00) >> 8 | (c->h[1] & 0xff00ff) << 8;
    *(uint *)(md + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[2] & 0xff00ff00) >> 8 | (c->h[2] & 0xff00ff) << 8;
    *(uint *)(md + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[3] & 0xff00ff00) >> 8 | (c->h[3] & 0xff00ff) << 8;
    *(uint *)(md + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[4] & 0xff00ff00) >> 8 | (c->h[4] & 0xff00ff) << 8;
    *(uint *)(md + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[5] & 0xff00ff00) >> 8 | (c->h[5] & 0xff00ff) << 8;
    *(uint *)(md + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[6] & 0xff00ff00) >> 8 | (c->h[6] & 0xff00ff) << 8;
    *(uint *)(md + 0x18) = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  else if (uVar1 == 0x20) {
    uVar1 = (c->h[0] & 0xff00ff00) >> 8 | (c->h[0] & 0xff00ff) << 8;
    *(uint *)md = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[1] & 0xff00ff00) >> 8 | (c->h[1] & 0xff00ff) << 8;
    *(uint *)(md + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[2] & 0xff00ff00) >> 8 | (c->h[2] & 0xff00ff) << 8;
    *(uint *)(md + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[3] & 0xff00ff00) >> 8 | (c->h[3] & 0xff00ff) << 8;
    *(uint *)(md + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[4] & 0xff00ff00) >> 8 | (c->h[4] & 0xff00ff) << 8;
    *(uint *)(md + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[5] & 0xff00ff00) >> 8 | (c->h[5] & 0xff00ff) << 8;
    *(uint *)(md + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[6] & 0xff00ff00) >> 8 | (c->h[6] & 0xff00ff) << 8;
    *(uint *)(md + 0x18) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (c->h[7] & 0xff00ff00) >> 8 | (c->h[7] & 0xff00ff) << 8;
    *(uint *)(md + 0x1c) = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  else {
    if (0x20 < uVar1) {
      return 0;
    }
    if (3 < uVar1) {
      uVar3 = 0;
      do {
        uVar1 = (c->h[uVar3 & 0xffffffff] & 0xff00ff00) >> 8 |
                (c->h[uVar3 & 0xffffffff] & 0xff00ff) << 8;
        *(uint *)(md + uVar3 * 4) = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar3 = uVar3 + 1;
      } while ((uint)uVar3 < c->md_len >> 2);
    }
  }
  return 1;
}

