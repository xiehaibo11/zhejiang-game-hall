
int CMAC_CTX_copy(CMAC_CTX *out,CMAC_CTX *in)

{
  int iVar1;
  int iVar2;
  size_t __n;
  
  if (*(int *)(in + 0x88) == -1) {
    iVar2 = 0;
  }
  else {
    iVar1 = EVP_CIPHER_CTX_copy(*(EVP_CIPHER_CTX **)out,*(EVP_CIPHER_CTX **)in);
    iVar2 = 0;
    if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00b00084 with catch @ 00b00310 */
      iVar2 = EVP_CIPHER_CTX_block_size(*(EVP_CIPHER_CTX **)in);
      __n = (size_t)iVar2;
                    /* catch() { ... } // from try @ 00b00074 with catch @ 00b00320 */
                    /* catch() { ... } // from try @ 00b000a4 with catch @ 00b00324 */
      memcpy(out + 8,in + 8,__n);
      memcpy(out + 0x28,in + 0x28,__n);
      memcpy(out + 0x48,in + 0x48,__n);
      memcpy(out + 0x68,in + 0x68,__n);
      iVar2 = 1;
      *(undefined4 *)(out + 0x88) = *(undefined4 *)(in + 0x88);
    }
  }
  return iVar2;
}

