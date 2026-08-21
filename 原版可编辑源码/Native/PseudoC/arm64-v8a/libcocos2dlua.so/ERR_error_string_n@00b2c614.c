
void ERR_error_string_n(ulong e,char *buf,size_t len)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  ulong *puVar5;
  char *pcVar6;
  char acStack_110 [64];
  char acStack_d0 [64];
  ulong local_90 [8];
  
  if (len == 0) {
    return;
  }
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01783000,FUN_00b2bb68);
  puVar5 = (ulong *)0x0;
  if ((iVar1 != 0) && (DAT_01783004 != 0)) {
    local_90[0] = e & 0xff000000;
    CRYPTO_THREAD_read_lock(DAT_01783018);
    if (DAT_01783020 == 0) {
      CRYPTO_THREAD_unlock(DAT_01783018);
      puVar5 = (ulong *)0x0;
    }
    else {
      lVar2 = OPENSSL_LH_retrieve(DAT_01783020,local_90);
      CRYPTO_THREAD_unlock(DAT_01783018);
      puVar5 = (ulong *)0x0;
      if (lVar2 != 0) {
        puVar5 = *(ulong **)(lVar2 + 8);
      }
    }
  }
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01783000,FUN_00b2bb68);
  pcVar6 = (char *)0x0;
  if ((iVar1 != 0) && (DAT_01783004 != 0)) {
    local_90[0] = e & 0xfffff000;
    CRYPTO_THREAD_read_lock(DAT_01783018);
    if (DAT_01783020 == 0) {
      CRYPTO_THREAD_unlock(DAT_01783018);
    }
    else {
      lVar2 = OPENSSL_LH_retrieve(DAT_01783020,local_90);
      CRYPTO_THREAD_unlock(DAT_01783018);
      if (lVar2 != 0) {
        pcVar6 = *(char **)(lVar2 + 8);
        goto LAB_00b2c718;
      }
    }
    pcVar6 = (char *)0x0;
  }
LAB_00b2c718:
  pcVar3 = ERR_reason_error_string(e);
  if (puVar5 == (ulong *)0x0) {
    BIO_snprintf((char *)local_90,0x40,"lib(%lu)",e >> 0x18 & 0xff);
  }
  if (pcVar6 == (char *)0x0) {
    BIO_snprintf(acStack_d0,0x40,"func(%lu)",e >> 0xc & 0xfff);
  }
  if (pcVar3 == (char *)0x0) {
    BIO_snprintf(acStack_110,0x40,"reason(%lu)",e & 0xfff);
  }
  if (puVar5 == (ulong *)0x0) {
    puVar5 = local_90;
  }
  if (pcVar6 == (char *)0x0) {
    pcVar6 = acStack_d0;
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = acStack_110;
  }
  BIO_snprintf(buf,len,"error:%08lX:%s:%s:%s",e,puVar5,pcVar6,pcVar3);
  sVar4 = strlen(buf);
  if ((4 < len) && (sVar4 == len - 1)) {
    pcVar3 = buf + (sVar4 - 4);
    pcVar6 = strchr(buf,0x3a);
    if ((pcVar6 == (char *)0x0) || (pcVar3 < pcVar6)) {
      *pcVar3 = ':';
      pcVar6 = pcVar3;
    }
    pcVar3 = strchr(pcVar6 + 1,0x3a);
    pcVar6 = buf + (sVar4 - 3);
    if ((pcVar3 == (char *)0x0) || (pcVar6 < pcVar3)) {
      *pcVar6 = ':';
      pcVar3 = pcVar6;
    }
    pcVar3 = strchr(pcVar3 + 1,0x3a);
    pcVar6 = buf + (sVar4 - 2);
    if ((pcVar3 == (char *)0x0) || (pcVar6 < pcVar3)) {
      *pcVar6 = ':';
      pcVar3 = pcVar6;
    }
    pcVar6 = strchr(pcVar3 + 1,0x3a);
    if ((pcVar6 == (char *)0x0) || (buf + (sVar4 - 1) < pcVar6)) {
      buf[sVar4 - 1] = ':';
    }
  }
  return;
}

