
long * ssl_cert_dup(long *param_1)

{
  int iVar1;
  long *ptr;
  long lVar2;
  long lVar3;
  void *pvVar4;
  char *pcVar5;
  long lVar6;
  
  ptr = (long *)CRYPTO_zalloc(0x1e8,"ssl/ssl_cert.c",0x53);
  if (ptr == (long *)0x0) {
    ERR_put_error(0x14,0xdd,0x41,"ssl/ssl_cert.c",0x57);
    return (long *)0x0;
  }
  *(undefined4 *)(ptr + 0x3b) = 1;
  *ptr = (long)ptr + (*param_1 - (long)(param_1 + 4)) + 0x20;
  lVar2 = CRYPTO_THREAD_lock_new();
  ptr[0x3c] = lVar2;
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xdd,0x41,"ssl/ssl_cert.c",0x5f);
    CRYPTO_free(ptr);
    return (long *)0x0;
  }
  if (param_1[1] != 0) {
    ptr[1] = param_1[1];
    EVP_PKEY_up_ref();
  }
  lVar6 = 0;
  lVar2 = -1;
  ptr[2] = param_1[2];
  *(int *)(ptr + 3) = (int)param_1[3];
  do {
    lVar3 = *(long *)((long)param_1 + lVar6 + 0x20);
    if (lVar3 != 0) {
      *(long *)((long)ptr + lVar6 + 0x20) = lVar3;
      X509_up_ref();
    }
    lVar3 = *(long *)((long)param_1 + lVar6 + 0x28);
    if (lVar3 != 0) {
      *(long *)((long)ptr + lVar6 + 0x28) = lVar3;
      EVP_PKEY_up_ref(*(undefined8 *)((long)param_1 + lVar6 + 0x28));
    }
    if (*(long *)((long)param_1 + lVar6 + 0x30) != 0) {
      lVar3 = X509_chain_up_ref();
      *(long *)((long)ptr + lVar6 + 0x30) = lVar3;
      if (lVar3 == 0) {
        ERR_put_error(0x14,0xdd,0x41,"ssl/ssl_cert.c",0x7c);
        goto LAB_00ad05bc;
      }
    }
    if (*(long *)((long)param_1 + lVar6 + 0x38) != 0) {
      pvVar4 = CRYPTO_malloc((int)*(undefined8 *)((long)param_1 + lVar6 + 0x40),"ssl/ssl_cert.c",
                             0x83);
      *(void **)((long)ptr + lVar6 + 0x38) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        ERR_put_error(0x14,0xdd,0x41,"ssl/ssl_cert.c",0x85);
        goto LAB_00ad05bc;
      }
      *(undefined8 *)((long)ptr + lVar6 + 0x40) = *(undefined8 *)((long)param_1 + lVar6 + 0x40);
      memcpy(pvVar4,*(void **)((long)param_1 + lVar6 + 0x38),
             *(size_t *)((long)param_1 + lVar6 + 0x40));
    }
    lVar2 = lVar2 + 1;
    lVar6 = lVar6 + 0x28;
  } while (lVar2 < 6);
  if (param_1[0x29] == 0) {
    ptr[0x29] = 0;
    if (param_1[0x2b] != 0) goto LAB_00ad0418;
LAB_00ad04e8:
    ptr[0x2b] = 0;
  }
  else {
    pvVar4 = CRYPTO_malloc((int)param_1[0x2a],"ssl/ssl_cert.c",0x90);
    ptr[0x29] = (long)pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_00ad05bc;
    memcpy(pvVar4,(void *)param_1[0x29],param_1[0x2a]);
    ptr[0x2a] = param_1[0x2a];
    if (param_1[0x2b] == 0) goto LAB_00ad04e8;
LAB_00ad0418:
    pvVar4 = CRYPTO_malloc((int)param_1[0x2c],"ssl/ssl_cert.c",0x99);
    ptr[0x2b] = (long)pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_00ad05bc;
    memcpy(pvVar4,(void *)param_1[0x2b],param_1[0x2c]);
    ptr[0x2c] = param_1[0x2c];
  }
  ptr[0x2d] = 0;
  if (param_1[0x27] != 0) {
    pvVar4 = CRYPTO_malloc((int)param_1[0x28],"ssl/ssl_cert.c",0xa5);
    ptr[0x27] = (long)pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_00ad05bc;
    memcpy(pvVar4,(void *)param_1[0x27],param_1[0x28]);
    ptr[0x28] = param_1[0x28];
  }
  *(undefined4 *)((long)ptr + 0x1c) = *(undefined4 *)((long)param_1 + 0x1c);
  lVar2 = param_1[0x2f];
  ptr[0x30] = param_1[0x30];
  ptr[0x2f] = lVar2;
  if (param_1[0x32] != 0) {
    X509_STORE_up_ref();
    ptr[0x32] = param_1[0x32];
  }
  if (param_1[0x31] != 0) {
    X509_STORE_up_ref();
    ptr[0x31] = param_1[0x31];
  }
  ptr[0x37] = param_1[0x37];
  *(int *)(ptr + 0x38) = (int)param_1[0x38];
  ptr[0x39] = param_1[0x39];
  iVar1 = custom_exts_copy(ptr + 0x33,param_1 + 0x33);
  if ((iVar1 != 0) && (iVar1 = custom_exts_copy(ptr + 0x35,param_1 + 0x35), iVar1 != 0)) {
    if ((char *)param_1[0x3a] == (char *)0x0) {
      return ptr;
    }
    pcVar5 = CRYPTO_strdup((char *)param_1[0x3a],"ssl/ssl_cert.c",0xc5);
    ptr[0x3a] = (long)pcVar5;
    if (pcVar5 != (char *)0x0) {
      return ptr;
    }
  }
LAB_00ad05bc:
  ssl_cert_free(ptr);
  return (long *)0x0;
}

