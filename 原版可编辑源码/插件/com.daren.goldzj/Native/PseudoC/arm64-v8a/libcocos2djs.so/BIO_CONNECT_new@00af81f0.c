
void BIO_CONNECT_new(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x38,"crypto/bio/bss_conn.c",0xde);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x10000000001;
  }
  return;
}

