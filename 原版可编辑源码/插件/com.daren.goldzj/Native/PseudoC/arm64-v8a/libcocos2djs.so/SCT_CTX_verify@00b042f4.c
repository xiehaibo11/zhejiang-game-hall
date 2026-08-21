
int SCT_CTX_verify(long *param_1,int *param_2)

{
  size_t *psVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  int line;
  undefined8 uVar3;
  void *d;
  size_t cnt;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  iVar2 = SCT_is_complete(param_2);
  if ((((iVar2 == 0) || (*param_1 == 0)) || (param_2[0x16] == -1)) ||
     ((param_2[0x16] == 1 && (param_1[3] == 0)))) {
    iVar2 = 0x6a;
    line = 0x68;
LAB_00b0437c:
    ERR_put_error(0x32,0x80,iVar2,"crypto/ct/ct_vfy.c",line);
    return 0;
  }
  if (*param_2 != 0) {
    iVar2 = 0x73;
    line = 0x6c;
    goto LAB_00b0437c;
  }
  if ((*(size_t *)(param_2 + 8) != param_1[2]) ||
     (iVar2 = memcmp(*(void **)(param_2 + 6),(void *)param_1[1],*(size_t *)(param_2 + 8)),
     iVar2 != 0)) {
    iVar2 = 0x72;
    line = 0x71;
    goto LAB_00b0437c;
  }
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    type = EVP_sha256();
    iVar2 = EVP_DigestVerifyInit(ctx,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,(EVP_PKEY *)*param_1);
    if (((iVar2 != 0) && (iVar2 = param_2[0x16], iVar2 != -1)) &&
       ((iVar2 != 1 || (param_1[3] != 0)))) {
      local_3b = 0;
      local_3c = (undefined1)*param_2;
      uVar3 = *(undefined8 *)(param_2 + 10);
      local_31 = (undefined1)iVar2;
      local_3a = (undefined1)((ulong)uVar3 >> 0x38);
      local_39 = (undefined1)((ulong)uVar3 >> 0x30);
      local_38 = (undefined1)((ulong)uVar3 >> 0x28);
      local_37 = (undefined1)((ulong)uVar3 >> 0x20);
      local_36 = (undefined1)((ulong)uVar3 >> 0x18);
      local_35 = (undefined1)((ulong)uVar3 >> 0x10);
      local_34 = (undefined1)((ulong)uVar3 >> 8);
      local_33 = (undefined1)uVar3;
      local_32 = (undefined1)((uint)iVar2 >> 8);
      iVar2 = EVP_DigestUpdate(ctx,&local_3c,0xc);
      if (iVar2 != 0) {
        if (param_2[0x16] == 0) {
          psVar1 = (size_t *)(param_1 + 6);
          d = (void *)param_1[5];
        }
        else {
          iVar2 = EVP_DigestUpdate(ctx,(void *)param_1[3],param_1[4]);
          if (iVar2 == 0) goto LAB_00b04578;
          psVar1 = (size_t *)(param_1 + 8);
          d = (void *)param_1[7];
        }
        if (d != (void *)0x0) {
          cnt = *psVar1;
          local_3c = (undefined1)(cnt >> 0x10);
          local_3b = (undefined1)(cnt >> 8);
          local_3a = (undefined1)cnt;
          iVar2 = EVP_DigestUpdate(ctx,&local_3c,3);
          if ((iVar2 != 0) && (iVar2 = EVP_DigestUpdate(ctx,d,cnt), iVar2 != 0)) {
            local_3c = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xe) >> 8);
            local_3b = (undefined1)*(undefined8 *)(param_2 + 0xe);
            iVar2 = EVP_DigestUpdate(ctx,&local_3c,2);
            if ((iVar2 != 0) &&
               ((*(size_t *)(param_2 + 0xe) == 0 ||
                (iVar2 = EVP_DigestUpdate(ctx,*(void **)(param_2 + 0xc),*(size_t *)(param_2 + 0xe)),
                iVar2 != 0)))) {
              iVar2 = EVP_DigestVerifyFinal
                                (ctx,*(uchar **)(param_2 + 0x12),*(size_t *)(param_2 + 0x14));
              if (iVar2 == 0) {
                ERR_put_error(0x32,0x80,0x6b,"crypto/ct/ct_vfy.c",0x83);
              }
              goto LAB_00b0457c;
            }
          }
        }
      }
    }
  }
LAB_00b04578:
  iVar2 = 0;
LAB_00b0457c:
  EVP_MD_CTX_free(ctx);
  return iVar2;
}

