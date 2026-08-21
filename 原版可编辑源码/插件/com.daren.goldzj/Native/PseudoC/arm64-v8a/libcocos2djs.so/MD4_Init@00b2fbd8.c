
int MD4_Init(MD4_CTX *c)

{
  memset(&c->Nl,0,0x4c);
  c->C = 0x98badcfe;
  c->D = 0x10325476;
  c->A = 0x67452301;
  c->B = 0xefcdab89;
  return 1;
}

