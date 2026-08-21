
UI_METHOD * UI_create_method(char *name)

{
  UI_METHOD *ptr;
  char *pcVar1;
  
  ptr = (UI_METHOD *)CRYPTO_zalloc(0x38,"crypto/ui/ui_lib.c",0x21d);
  if (ptr != (UI_METHOD *)0x0) {
    pcVar1 = CRYPTO_strdup(name,"crypto/ui/ui_lib.c",0x220);
    *(char **)ptr = pcVar1;
    if (pcVar1 == (char *)0x0) {
      CRYPTO_free(ptr);
      ERR_put_error(0x28,0x70,0x41,"crypto/ui/ui_lib.c",0x223);
      ptr = (UI_METHOD *)0x0;
    }
  }
  return ptr;
}

