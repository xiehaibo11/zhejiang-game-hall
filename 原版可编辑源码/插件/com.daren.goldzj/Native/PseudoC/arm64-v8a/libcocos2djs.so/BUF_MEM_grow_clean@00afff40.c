
int BUF_MEM_grow_clean(BUF_MEM *str,size_t len)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  int line;
  size_t sVar3;
  char *__src;
  size_t sVar4;
  
  sVar3 = str->length;
  sVar4 = sVar3 - len;
  if (sVar3 < len) {
    if (str->max < len) {
      if (len < 0x5ffffffd) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = len + 3;
        sVar4 = (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) << 1;
        if ((str[1].length & 1) == 0) {
          pcVar2 = (char *)CRYPTO_clear_realloc
                                     (str->data,str->max,sVar4,"crypto/buffer/buffer.c",0x86);
        }
        else {
          pcVar2 = (char *)CRYPTO_secure_malloc(sVar4,"crypto/buffer/buffer.c",0x3f);
          __src = str->data;
          if (__src != (char *)0x0) {
            if (pcVar2 != (char *)0x0) {
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
          goto LAB_00b00058;
        }
                    /* try { // try from 00b00084 to 00c0008f has its CatchHandler @ 00b00310 */
        line = 0x88;
      }
      else {
        line = 0x7f;
      }
      ERR_put_error(7,0x69,0x41,"crypto/buffer/buffer.c",line);
      len = 0;
      goto LAB_00b00068;
    }
    pcVar2 = str->data + sVar3;
LAB_00b00058:
    sVar4 = len - sVar3;
LAB_00b0005c:
    memset(pcVar2,0,sVar4);
  }
  else if (str->data != (char *)0x0) {
    pcVar2 = str->data + len;
    goto LAB_00b0005c;
  }
  str->length = len;
LAB_00b00068:
                    /* try { // try from 00b00074 to 00c0007b has its CatchHandler @ 00b00320 */
  return (int)len;
}

