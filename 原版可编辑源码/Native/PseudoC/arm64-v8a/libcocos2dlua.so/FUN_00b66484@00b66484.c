
undefined8 FUN_00b66484(X509_LOOKUP *param_1,int param_2,X509_NAME *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  BUF_MEM *str;
  ulong uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined4 *puVar7;
  ulong *ptr;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  long local_260;
  stat sStack_248;
  int local_1b8 [2];
  undefined1 *local_1b0;
  undefined1 auStack_1a8 [24];
  X509_NAME *local_190;
  X509_NAME *local_160;
  
  if (param_3 == (X509_NAME *)0x0) {
    return 0;
  }
  local_1b8[0] = param_2;
  if (param_2 == 1) {
    pcVar10 = "";
    local_160 = param_3;
  }
  else {
    if (param_2 != 2) {
      ERR_put_error(0xb,0x67,0x70,"crypto/x509/by_dir.c",0xec);
      str = (BUF_MEM *)0x0;
      goto LAB_00b66838;
    }
    pcVar10 = "r";
    local_190 = param_3;
  }
  local_1b0 = auStack_1a8;
  str = BUF_MEM_new();
  if (str == (BUF_MEM *)0x0) {
    iVar2 = 7;
    iVar3 = 0xf1;
LAB_00b66834:
    ERR_put_error(0xb,0x67,iVar2,"crypto/x509/by_dir.c",iVar3);
  }
  else {
    pcVar8 = param_1->method_data;
    uVar4 = X509_NAME_hash(param_3);
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(pcVar8 + 8));
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar5 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(pcVar8 + 8),iVar2);
        sVar6 = strlen((char *)*puVar5);
        iVar3 = BUF_MEM_grow(str,(long)((sVar6 << 0x20) + 0x1100000000) >> 0x20);
        if (iVar3 == 0) {
          iVar2 = 0x41;
          iVar3 = 0xff;
          goto LAB_00b66834;
        }
        if ((param_2 == 2) && (puVar5[2] != 0)) {
          sStack_248.__unused[1] = uVar4;
          CRYPTO_THREAD_read_lock(*(undefined8 *)(pcVar8 + 0x10));
          iVar3 = OPENSSL_sk_find(puVar5[2],sStack_248.__unused + 1);
          if (iVar3 < 0) {
            uVar11 = 0;
            local_260 = 0;
          }
          else {
            local_260 = OPENSSL_sk_value(puVar5[2],iVar3);
            uVar11 = *(uint *)(local_260 + 8);
          }
          CRYPTO_THREAD_unlock(*(undefined8 *)(pcVar8 + 0x10));
        }
        else {
          uVar11 = 0;
          local_260 = 0;
        }
        if (param_2 == 1) {
          while( true ) {
            BIO_snprintf(str->data,str->max,"%s%c%08lx.%s%d",*puVar5,0x2f,uVar4,pcVar10,
                         (ulong)uVar11);
            iVar3 = stat(str->data,&sStack_248);
            if (((iVar3 >> 0x1f & 6U) != 0) ||
               (iVar3 = X509_load_cert_file(param_1,str->data,*(int *)(puVar5 + 1)), iVar3 == 0))
            break;
            uVar11 = uVar11 + 1;
          }
        }
        else {
          uVar1 = uVar11;
          if (param_2 == 2) {
            while( true ) {
              BIO_snprintf(str->data,str->max,"%s%c%08lx.%s%d",*puVar5,0x2f,uVar4,pcVar10,
                           (ulong)uVar11);
              iVar3 = stat(str->data,&sStack_248);
              if (((iVar3 >> 0x1f & 6U) != 0) ||
                 (iVar3 = X509_load_crl_file(param_1,str->data,*(int *)(puVar5 + 1)), iVar3 == 0))
              break;
              uVar11 = uVar11 + 1;
            }
          }
          else {
            do {
              uVar11 = uVar1;
              BIO_snprintf(str->data,str->max,"%s%c%08lx.%s%d",*puVar5,0x2f,uVar4,pcVar10,
                           (ulong)uVar11);
              iVar3 = stat(str->data,&sStack_248);
              uVar1 = uVar11 + 1;
            } while ((iVar3 >> 0x1f & 6U) == 0);
          }
        }
        CRYPTO_THREAD_write_lock(*(undefined8 *)(pcVar8 + 0x10));
        iVar3 = OPENSSL_sk_find(param_1->store_ctx->objs,local_1b8);
        if (iVar3 == -1) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)OPENSSL_sk_value(param_1->store_ctx->objs,iVar3);
        }
        CRYPTO_THREAD_unlock(*(undefined8 *)(pcVar8 + 0x10));
        if (param_2 == 2) {
          CRYPTO_THREAD_write_lock(*(undefined8 *)(pcVar8 + 0x10));
          if ((local_260 == 0) &&
             ((sStack_248.__unused[1] = uVar4,
              iVar3 = OPENSSL_sk_find(puVar5[2],sStack_248.__unused + 1), iVar3 < 0 ||
              (local_260 = OPENSSL_sk_value(puVar5[2],iVar3), local_260 == 0)))) {
            ptr = CRYPTO_malloc(0x10,"crypto/x509/by_dir.c",0x15d);
            if (ptr == (ulong *)0x0) {
              CRYPTO_THREAD_unlock(*(undefined8 *)(pcVar8 + 0x10));
              iVar2 = 0x41;
              iVar3 = 0x160;
              goto LAB_00b66834;
            }
            *ptr = uVar4;
            *(uint *)(ptr + 1) = uVar11;
            iVar3 = OPENSSL_sk_push(puVar5[2],ptr);
            if (iVar3 == 0) {
              CRYPTO_THREAD_unlock(*(undefined8 *)(pcVar8 + 0x10));
              CRYPTO_free(ptr);
              break;
            }
          }
          else if (*(int *)(local_260 + 8) < (int)uVar11) {
            *(uint *)(local_260 + 8) = uVar11;
          }
          CRYPTO_THREAD_unlock(*(undefined8 *)(pcVar8 + 0x10));
        }
        if (puVar7 != (undefined4 *)0x0) {
          *param_4 = *puVar7;
          uVar9 = 1;
          *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar7 + 2);
          goto LAB_00b6683c;
        }
        iVar2 = iVar2 + 1;
        iVar3 = OPENSSL_sk_num(*(undefined8 *)(pcVar8 + 8));
      } while (iVar2 < iVar3);
    }
  }
LAB_00b66838:
  uVar9 = 0;
LAB_00b6683c:
  BUF_MEM_free(str);
  return uVar9;
}

