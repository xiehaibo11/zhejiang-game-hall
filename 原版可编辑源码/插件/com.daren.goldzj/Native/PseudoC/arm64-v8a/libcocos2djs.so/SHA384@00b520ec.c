
uchar * SHA384(uchar *d,size_t n,uchar *md)

{
  uchar *md_00;
  size_t __n;
  SHA512_CTX local_110;
  
  local_110.h[1] = 0x629a292a367cd507;
  local_110.h[0] = 0xcbbb9d5dc1059ed8;
  local_110.h[3] = 0x152fecd8f70e5939;
  local_110.h[2] = 0x9159015a3070dd17;
  md_00 = (uchar *)0x1d3ad28;
  if (md != (uchar *)0x0) {
    md_00 = md;
  }
  local_110.h[5] = 0x8eb44a8768581511;
  local_110.h[4] = 0x67332667ffc00b31;
  local_110.h[7] = 0x47b5481dbefa4fa4;
  local_110.h[6] = 0xdb0c2e0d64f98fa7;
  local_110.num = 0;
  local_110.md_len = 0x30;
  local_110.Nl = 0;
  local_110.Nh = 0;
  if (n != 0) {
    local_110.Nl = n << 3;
    local_110.Nh = n >> 0x3d;
    __n = n;
    if (0x7f < n) {
      sha512_block_data_order(&local_110,d,n >> 7);
      __n = n & 0x7f;
      if (__n == 0) goto LAB_00b521a4;
      d = d + (n - __n);
    }
    memcpy(&local_110.u,d,__n);
    local_110.num = (uint)__n;
  }
LAB_00b521a4:
  SHA512_Final(md_00,&local_110);
  OPENSSL_cleanse(&local_110,0xd8);
  return md_00;
}

