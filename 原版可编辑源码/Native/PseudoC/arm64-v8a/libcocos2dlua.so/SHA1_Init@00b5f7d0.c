
int SHA1_Init(SHA_CTX *c)

{
  memset(&c->Nl,0,0x4c);
  c->h4 = 0xc3d2e1f0;
  c->h2 = 0x98badcfe;
  c->h3 = 0x10325476;
  c->h0 = 0x67452301;
  c->h1 = 0xefcdab89;
  return 1;
}

