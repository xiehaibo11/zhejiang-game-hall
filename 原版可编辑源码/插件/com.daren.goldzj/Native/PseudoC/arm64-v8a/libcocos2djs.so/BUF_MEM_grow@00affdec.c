
int BUF_MEM_grow(BUF_MEM *str,size_t len)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  int line;
  size_t sVar3;
  char *__src;
  size_t sVar4;
  
  sVar3 = str->length;
  if (sVar3 < len) {
    if (str->max < len) {
      if (len < 0x5ffffffd) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = len + 3;
        sVar4 = (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) << 1;
        if ((str[1].length & 1) == 0) {
          pcVar2 = CRYPTO_realloc(str->data,(int)sVar4,"crypto/buffer/buffer.c",0x60);
        }
        else {
          pcVar2 = (char *)CRYPTO_secure_malloc(sVar4,"crypto/buffer/buffer.c",0x3f);
          __src = str->data;
          if (__src != (char *)0x0) {
            if (pcVar2 != (char *)0x0) {
                    /* try { // try from 00affec4 to 00c00073 has its CatchHandler @ 00affec4
                       catch() { ... } // from try @ 00affec4 with catch @ 00affec4
                       catch() { ... } // from try @ 00b000b0 with catch @ 00affec4 */
              memcpy(pcVar2,__src,str->length);
              __src = str->data;
            }
            CRYPTO_secure_free(__src,"crypto/buffer/buffer.c",0x43);
          }
        }
        if (pcVar2 != (char *)0x0) {
          sVar3 = str->length;
          str->data = pcVar2;
          str->max = sVar4;
          pcVar2 = pcVar2 + sVar3;
          goto LAB_00affef8;
        }
        line = 0x62;
      }
      else {
        line = 0x59;
      }
      ERR_put_error(7,100,0x41,"crypto/buffer/buffer.c",line);
      len = 0;
      goto LAB_00afff08;
    }
    if (str->data != (char *)0x0) {
      pcVar2 = str->data + sVar3;
LAB_00affef8:
      memset(pcVar2,0,len - sVar3);
    }
  }
  str->length = len;
LAB_00afff08:
  return (int)len;
}

