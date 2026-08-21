
uchar * SHA512(uchar *d,size_t n,uchar *md)

{
  uchar *md_00;
  size_t __n;
  SHA512_CTX local_110;
  
  local_110.h[1] = 0xbb67ae8584caa73b;
  local_110.h[0] = 0x6a09e667f3bcc908;
  local_110.h[3] = 0xa54ff53a5f1d36f1;
  local_110.h[2] = 0x3c6ef372fe94f82b;
  md_00 = (uchar *)0x1784ad8;
  if (md != (uchar *)0x0) {
    md_00 = md;
  }
  local_110.h[5] = 0x9b05688c2b3e6c1f;
  local_110.h[4] = 0x510e527fade682d1;
  local_110.h[7] = 0x5be0cd19137e2179;
  local_110.h[6] = 0x1f83d9abfb41bd6b;
  local_110.num = 0;
  local_110.md_len = 0x40;
  local_110.Nl = 0;
  local_110.Nh = 0;
  if (n != 0) {
    local_110.Nl = n << 3;
    local_110.Nh = n >> 0x3d;
    __n = n;
    if (0x7f < n) {
      sha512_block_data_order(&local_110,d,n >> 7);
      __n = n & 0x7f;
      if (__n == 0) goto LAB_00b6070c;
      d = d + (n - __n);
    }
    memcpy(&local_110.u,d,__n);
    local_110.num = (uint)__n;
  }
LAB_00b6070c:
  SHA512_Final(md_00,&local_110);
  OPENSSL_cleanse(&local_110,0xd8);
  return md_00;
}

