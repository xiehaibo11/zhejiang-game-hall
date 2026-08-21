
uchar * SHA256(uchar *d,size_t n,uchar *md)

{
  uchar *md_00;
  ulong uVar1;
  SHA256_CTX local_a0;
  
  md_00 = (uchar *)0x1784a88;
  if (md != (uchar *)0x0) {
    md_00 = md;
  }
  memset(&local_a0.Nl,0,0x4c);
  local_a0.md_len = 0x20;
  local_a0.h[2] = 0x3c6ef372;
  local_a0.h[3] = 0xa54ff53a;
  local_a0.h[0] = 0x6a09e667;
  local_a0.h[1] = 0xbb67ae85;
  local_a0.h[6] = 0x1f83d9ab;
  local_a0.h[7] = 0x5be0cd19;
  local_a0.h[4] = 0x510e527f;
  local_a0.h[5] = 0x9b05688c;
  if (n != 0) {
    local_a0.Nl = (int)n << 3;
    local_a0.Nh = (uint)(n >> 0x1d);
    if (n >> 6 != 0) {
      sha256_block_data_order(&local_a0,d);
      uVar1 = n & 0xffffffffffffffc0;
      n = n - uVar1;
      if (n == 0) goto LAB_00b5fcf4;
      d = d + uVar1;
    }
    local_a0.num = (uint)n;
    memcpy(local_a0.data,d,n);
  }
LAB_00b5fcf4:
  SHA256_Final(md_00,&local_a0);
  OPENSSL_cleanse(&local_a0,0x70);
  return md_00;
}

