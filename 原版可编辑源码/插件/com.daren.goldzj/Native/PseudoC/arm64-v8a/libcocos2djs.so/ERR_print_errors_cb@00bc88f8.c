
void ERR_print_errors_cb(cb *cb,void *u)

{
  char *pcVar1;
  int iVar2;
  pthread_t pVar3;
  ulong e;
  size_t len;
  uint local_1158;
  uint uStack_1154;
  char *local_1150;
  char *pcStack_1148;
  char acStack_1140 [4096];
  char acStack_140 [256];
  
  pVar3 = CRYPTO_THREAD_get_current_id();
  do {
    e = ERR_get_error_line_data(&pcStack_1148,(int *)&uStack_1154,&local_1150,(int *)&local_1158);
    if (e == 0) {
      return;
    }
    ERR_error_string_n(e,acStack_140,0x100);
    pcVar1 = local_1150;
    if ((local_1158 & 2) == 0) {
      pcVar1 = "";
    }
    BIO_snprintf(acStack_1140,0x1000,"%lu:%s:%s:%d:%s\n",pVar3,acStack_140,pcStack_1148,
                 (ulong)uStack_1154,pcVar1);
    len = strlen(acStack_1140);
    iVar2 = (*cb)(acStack_1140,len,u);
  } while (0 < iVar2);
  return;
}

