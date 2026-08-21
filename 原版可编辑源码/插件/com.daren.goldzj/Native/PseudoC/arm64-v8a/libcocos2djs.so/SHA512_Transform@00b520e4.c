
void SHA512_Transform(SHA512_CTX *c,uchar *data)

{
  sha512_block_data_order(c,data,1);
  return;
}

