
uchar * SHA224(uchar *d,size_t n,uchar *md)

{
  uchar *md_00;
  ulong uVar1;
  SHA256_CTX local_a0;
  
  md_00 = (uchar *)0x1784a6c;
  if (md != (uchar *)0x0) {
    md_00 = md;
  }
  memset(&local_a0.Nl,0,0x4c);
  local_a0.md_len = 0x1c;
  local_a0.h[2] = 0x3070dd17;
  local_a0.h[3] = 0xf70e5939;
  local_a0.h[0] = 0xc1059ed8;
  local_a0.h[1] = 0x367cd507;
  local_a0.h[6] = 0x64f98fa7;
  local_a0.h[7] = 0xbefa4fa4;
  local_a0.h[4] = 0xffc00b31;
  local_a0.h[5] = 0x68581511;
  if (n != 0) {
    local_a0.Nl = (int)n << 3;
    local_a0.Nh = (uint)(n >> 0x1d);
    if (n >> 6 != 0) {
      sha256_block_data_order(&local_a0,d);
      uVar1 = n & 0xffffffffffffffc0;
      n = n - uVar1;
      if (n == 0) goto LAB_00b5f958;
      d = d + uVar1;
    }
    local_a0.num = (uint)n;
    memcpy(local_a0.data,d,n);
  }
LAB_00b5f958:
  SHA256_Final(md_00,&local_a0);
  OPENSSL_cleanse(&local_a0,0x70);
  return md_00;
}

