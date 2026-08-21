
int EVP_read_pw_string_min(char *buf,int minlen,int maxlen,char *prompt,int verify)

{
  int iVar1;
  UI *ui;
  char acStack_450 [1024];
  
  if (DAT_01d3b3bc != '\0' && prompt == (char *)0x0) {
    prompt = &DAT_01d3b3bc;
  }
  ui = UI_new();
  if (ui == (UI *)0x0) {
    iVar1 = -1;
  }
  else {
    if (0x3fe < maxlen) {
      maxlen = 0x3ff;
    }
    UI_add_input_string(ui,prompt,0,buf,minlen,maxlen);
    if (verify != 0) {
      UI_add_verify_string(ui,prompt,0,acStack_450,minlen,maxlen,buf);
    }
    iVar1 = UI_process(ui);
    UI_free(ui);
    OPENSSL_cleanse(acStack_450,0x400);
  }
  return iVar1;
}

