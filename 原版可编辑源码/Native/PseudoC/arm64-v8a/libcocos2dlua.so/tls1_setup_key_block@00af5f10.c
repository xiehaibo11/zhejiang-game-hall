
undefined8 tls1_setup_key_block(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  int local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  EVP_CIPHER *local_28;
  
  local_3c = 0;
  local_40 = 0;
  if ((*(uint **)(param_1 + 0x90))[0x96] == 0) {
    iVar1 = ssl_cipher_get_evp(*(undefined8 *)(param_1 + 0x178),&local_28,&local_30,&local_3c,
                               &local_40,auStack_38,**(uint **)(param_1 + 0x90) & 0x100);
    if (iVar1 == 0) {
      iVar1 = 0x8a;
      iVar2 = 0x175;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x90);
      *(EVP_CIPHER **)(lVar5 + 0x268) = local_28;
      *(undefined8 *)(lVar5 + 0x270) = local_30;
      *(undefined4 *)(lVar5 + 0x278) = local_3c;
      *(int *)(lVar5 + 0x27c) = local_40;
      iVar1 = EVP_CIPHER_key_length(local_28);
      iVar1 = local_40 + iVar1;
      iVar2 = EVP_CIPHER_iv_length(local_28);
      iVar1 = (iVar1 + iVar2) * 2;
      ssl3_cleanup_key_block(param_1);
      pvVar4 = CRYPTO_malloc(iVar1,"ssl/t1_enc.c",0x182);
      if (pvVar4 != (void *)0x0) {
        lVar5 = *(long *)(param_1 + 0x90);
        *(int *)(lVar5 + 600) = iVar1;
        *(void **)(lVar5 + 0x260) = pvVar4;
        uVar3 = FUN_00af6178(param_1,"key expansion",0xd,lVar5 + 0x90,0x20,lVar5 + 0xb0,0x20,0,0,
                             *(long *)(param_1 + 0x178) + 8,
                             *(undefined4 *)(*(long *)(param_1 + 0x178) + 4),pvVar4,iVar1);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        if ((*(byte *)(param_1 + 0x1e5) >> 3 & 1) == 0) {
          if (0x301 < **(int **)(param_1 + 8)) {
            return 1;
          }
          lVar5 = *(long *)(param_1 + 0x90);
          *(undefined4 *)(lVar5 + 0xd0) = 1;
          lVar6 = *(long *)(*(long *)(param_1 + 0x178) + 0xd8);
          if (lVar6 == 0) {
            return 1;
          }
          iVar1 = *(int *)(lVar6 + 0x1c);
          if ((iVar1 == 4) || (iVar1 == 0x20)) {
            *(undefined4 *)(lVar5 + 0xd0) = 0;
          }
        }
        goto LAB_00af5f38;
      }
      iVar1 = 0x41;
      iVar2 = 0x183;
    }
    ERR_put_error(0x14,0xd3,iVar1,"ssl/t1_enc.c",iVar2);
    uVar3 = 0;
  }
  else {
LAB_00af5f38:
    uVar3 = 1;
  }
  return uVar3;
}

