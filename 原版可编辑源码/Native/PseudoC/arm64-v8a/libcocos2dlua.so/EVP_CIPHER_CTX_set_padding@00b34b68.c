
int EVP_CIPHER_CTX_set_padding(EVP_CIPHER_CTX *c,int pad)

{
  ulong uVar1;
  
  uVar1 = c->flags & 0xfffffffffffffeff;
  if (pad == 0) {
    uVar1 = c->flags | 0x100;
  }
  c->flags = uVar1;
  return 1;
}

