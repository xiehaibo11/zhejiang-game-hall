
void ERR_print_errors(BIO *bp)

{
  char *pcVar1;
  int iVar2;
  pthread_t pVar3;
  ulong e;
  size_t sVar4;
  uint local_1150;
  uint uStack_114c;
  char *local_1148;
  char acStack_1140 [4096];
  char acStack_140 [256];
  char *local_38;
  
  pVar3 = CRYPTO_THREAD_get_current_id();
  do {
    e = ERR_get_error_line_data(&local_38,(int *)&uStack_114c,&local_1148,(int *)&local_1150);
    if (e == 0) {
      return;
    }
    ERR_error_string_n(e,acStack_140,0x100);
    pcVar1 = local_1148;
    if ((local_1150 & 2) == 0) {
      pcVar1 = "";
    }
    BIO_snprintf(acStack_1140,0x1000,"%lu:%s:%s:%d:%s\n",pVar3,acStack_140,local_38,
                 (ulong)uStack_114c,pcVar1);
    sVar4 = strlen(acStack_1140);
    iVar2 = BIO_write(bp,acStack_1140,(int)sVar4);
  } while (0 < iVar2);
  return;
}

