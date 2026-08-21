
BIO * BIO_new_mem_buf(void *buf,int len)

{
  BIO *pBVar1;
  undefined8 *puVar2;
  size_t *psVar3;
  size_t *psVar4;
  size_t sVar5;
  
  if (buf == (void *)0x0) {
    ERR_put_error(0x20,0x7e,0x73,"crypto/bio/bss_mem.c",0x51);
    pBVar1 = (BIO *)0x0;
  }
  else {
    if (len < 0) {
      sVar5 = strlen(buf);
    }
    else {
      sVar5 = (size_t)len;
    }
    pBVar1 = BIO_new((BIO_METHOD *)&DAT_016aee58);
    if (pBVar1 != (BIO *)0x0) {
      puVar2 = pBVar1->ptr;
      psVar4 = (size_t *)*puVar2;
      *psVar4 = sVar5;
      psVar4[1] = (size_t)buf;
      psVar4[2] = sVar5;
      psVar3 = (size_t *)puVar2[1];
      sVar5 = psVar4[2];
      psVar3[3] = psVar4[3];
      psVar3[2] = sVar5;
      sVar5 = *psVar4;
      psVar3[1] = psVar4[1];
      *psVar3 = sVar5;
      pBVar1->num = 0;
      pBVar1->flags = pBVar1->flags | 0x200;
    }
  }
  return pBVar1;
}

