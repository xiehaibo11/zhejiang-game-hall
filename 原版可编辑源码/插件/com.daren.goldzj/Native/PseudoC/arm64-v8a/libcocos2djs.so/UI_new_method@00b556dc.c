
UI * UI_new_method(UI_METHOD *method)

{
  int iVar1;
  UI *obj;
  long lVar2;
  
  obj = (UI *)CRYPTO_zalloc(0x30,"crypto/ui/ui_lib.c",0x1b);
  if (obj == (UI *)0x0) {
    ERR_put_error(0x28,0x68,0x41,"crypto/ui/ui_lib.c",0x1e);
  }
  else {
    lVar2 = CRYPTO_THREAD_lock_new();
    *(long *)(obj + 0x28) = lVar2;
    if (lVar2 == 0) {
      ERR_put_error(0x28,0x68,0x41,"crypto/ui/ui_lib.c",0x24);
    }
    else {
      if ((method == (UI_METHOD *)0x0) && (method = DAT_01d3ad98, DAT_01d3ad98 == (UI_METHOD *)0x0))
      {
        method = UI_OpenSSL();
        DAT_01d3ad98 = method;
      }
      *(UI_METHOD **)obj = method;
      iVar1 = CRYPTO_new_ex_data(0xb,obj,(CRYPTO_EX_DATA *)(obj + 0x18));
      if (iVar1 != 0) {
        return obj;
      }
    }
    CRYPTO_free(obj);
  }
  return (UI *)0x0;
}

