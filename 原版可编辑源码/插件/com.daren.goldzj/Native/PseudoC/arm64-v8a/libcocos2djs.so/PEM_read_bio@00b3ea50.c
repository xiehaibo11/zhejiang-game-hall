
int PEM_read_bio(BIO *bp,char **name,char **header,uchar **data,long *len)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  EVP_ENCODE_CTX *ctx;
  BUF_MEM *str;
  BUF_MEM *pBVar5;
  BUF_MEM *pBVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  char *__s;
  BUF_MEM *ptr;
  BUF_MEM *ptr_00;
  byte local_168 [9];
  char acStack_15f [2];
  char acStack_15d [243];
  undefined1 local_6a;
  int local_68;
  int iStack_64;
  
  ctx = (EVP_ENCODE_CTX *)EVP_ENCODE_CTX_new();
  local_68 = 0;
  if (ctx == (EVP_ENCODE_CTX *)0x0) {
    ERR_put_error(9,0x6d,0x41,"crypto/pem/pem_lib.c",0x2a3);
    return 0;
  }
  str = BUF_MEM_new();
  pBVar5 = BUF_MEM_new();
  pBVar6 = BUF_MEM_new();
  if (((str != (BUF_MEM *)0x0) && (pBVar5 != (BUF_MEM *)0x0)) && (pBVar6 != (BUF_MEM *)0x0)) {
    local_6a = 0;
    iVar3 = BIO_gets(bp,(char *)local_168,0xfe);
    if (0 < iVar3) {
      do {
        uVar8 = (long)iVar3;
        do {
          if (0x20 < local_168[uVar8]) {
            uVar9 = uVar8 & 0xffffffff;
            break;
          }
          uVar9 = uVar8 - 1;
          bVar1 = 0 < (long)uVar8;
          uVar8 = uVar9;
        } while (bVar1);
        local_168[(long)(int)uVar9 + 1] = 10;
        local_168[(long)(int)uVar9 + 2] = 0;
        iVar3 = strncmp((char *)local_168,"-----BEGIN ",0xb);
        if (iVar3 == 0) {
          sVar7 = strlen(acStack_15d);
          lVar11 = sVar7 << 0x20;
          iVar3 = strncmp((char *)(local_168 + (lVar11 + 0x500000000 >> 0x20)),"-----\n",6);
          if (iVar3 == 0) {
            iVar3 = BUF_MEM_grow(str,lVar11 + 0x900000000 >> 0x20);
            if (iVar3 == 0) {
              ERR_put_error(9,0x6d,0x41,"crypto/pem/pem_lib.c",0x2c2);
              goto LAB_00b3ede8;
            }
            sVar7 = lVar11 + -0x600000000 >> 0x20;
            memcpy(str->data,acStack_15d,sVar7);
            str->data[sVar7] = '\0';
            iVar3 = BUF_MEM_grow(pBVar5,0x100);
            if (iVar3 != 0) {
              *pBVar5->data = '\0';
              iVar4 = BIO_gets(bp,(char *)local_168,0xfe);
              iVar3 = 0;
              if (0 < iVar4) goto LAB_00b3ec60;
              goto LAB_00b3ed70;
            }
            ERR_put_error(9,0x6d,0x41,"crypto/pem/pem_lib.c",0x2cc);
            goto LAB_00b3ede8;
          }
        }
        iVar3 = BIO_gets(bp,(char *)local_168,0xfe);
      } while (0 < iVar3);
    }
    ERR_put_error(9,0x6d,0x6c,"crypto/pem/pem_lib.c",0x2b3);
  }
  goto LAB_00b3ede8;
LAB_00b3ed70:
  bVar1 = false;
  goto LAB_00b3ed98;
  while( true ) {
    iVar4 = strncmp((char *)local_168,"-----END ",9);
    if (iVar4 == 0) {
      bVar1 = true;
      goto LAB_00b3ed98;
    }
    memcpy(pBVar5->data + iVar3,local_168,lVar11 + 2U);
    pBVar5->data[lVar2] = '\0';
    iVar4 = BIO_gets(bp,(char *)local_168,0xfe);
    iVar3 = iVar10;
    if (iVar4 < 1) break;
LAB_00b3ec60:
    uVar8 = (long)iVar4;
    do {
      if (0x20 < local_168[uVar8]) {
        uVar9 = uVar8 & 0xffffffff;
        break;
      }
      uVar9 = uVar8 - 1;
      bVar1 = 0 < (long)uVar8;
      uVar8 = uVar9;
    } while (bVar1);
    lVar11 = (long)(int)uVar9;
    local_168[lVar11 + 1] = 10;
    local_168[lVar11 + 2] = 0;
    if (local_168[0] == 10) goto LAB_00b3ed70;
    lVar2 = (long)iVar3 + (long)(int)(lVar11 + 2U);
    iVar10 = (int)lVar2;
    iVar4 = BUF_MEM_grow(pBVar5,(long)(iVar10 + 9));
    if (iVar4 == 0) {
      iVar3 = 0x2dd;
      goto LAB_00b3ede0;
    }
  }
  bVar1 = false;
LAB_00b3ed98:
  local_68 = 0;
  iVar4 = BUF_MEM_grow(pBVar6,0x400);
  if (iVar4 == 0) {
    iVar3 = 0x2eb;
LAB_00b3ede0:
    ERR_put_error(9,0x6d,0x41,"crypto/pem/pem_lib.c",iVar3);
    goto LAB_00b3ede8;
  }
  *pBVar6->data = '\0';
  ptr = pBVar5;
  ptr_00 = pBVar6;
  if (!bVar1) {
    do {
      iVar4 = BIO_gets(bp,(char *)local_168,0xfe);
      ptr = pBVar6;
      ptr_00 = pBVar5;
      iVar3 = local_68;
      if (iVar4 < 1) goto LAB_00b3ef88;
      uVar8 = (long)iVar4;
      do {
        if (0x20 < local_168[uVar8]) {
          uVar9 = uVar8 & 0xffffffff;
          break;
        }
        uVar9 = uVar8 - 1;
        bVar1 = 0 < (long)uVar8;
        uVar8 = uVar9;
      } while (bVar1);
      iVar10 = (int)uVar9;
      lVar11 = (long)iVar10;
      local_168[lVar11 + 1] = 10;
      local_168[lVar11 + 2] = 0;
      iVar4 = strncmp((char *)local_168,"-----END ",9);
      iVar3 = local_68;
      if ((0x3f < iVar10) || (iVar4 == 0)) goto LAB_00b3ef88;
      iVar3 = BUF_MEM_grow_clean(pBVar6,(long)(iVar10 + local_68 + 0xb));
      if (iVar3 == 0) {
        iVar3 = 0x301;
        goto LAB_00b3ede0;
      }
      memcpy(pBVar6->data + local_68,local_168,lVar11 + 2U);
      iVar3 = (int)(lVar11 + 2U);
      pBVar6->data[(long)local_68 + (long)iVar3] = '\0';
      local_68 = local_68 + iVar3;
    } while (iVar3 == 0x41);
    local_168[0] = 0;
    iVar4 = BIO_gets(bp,(char *)local_168,0xfe);
    iVar3 = local_68;
    if (0 < iVar4) {
      uVar8 = (long)iVar4;
      do {
        if (0x20 < local_168[uVar8]) {
          uVar9 = uVar8 & 0xffffffff;
          break;
        }
        uVar9 = uVar8 - 1;
        bVar1 = 0 < (long)uVar8;
        uVar8 = uVar9;
      } while (bVar1);
      local_168[(long)(int)uVar9 + 1] = 10;
      local_168[(long)(int)uVar9 + 2] = 0;
      iVar3 = local_68;
    }
  }
LAB_00b3ef88:
  local_68 = iVar3;
  __s = str->data;
  iVar3 = strncmp((char *)local_168,"-----END ",9);
  pBVar6 = ptr;
  pBVar5 = ptr_00;
  if (iVar3 == 0) {
    sVar7 = strlen(__s);
    iVar3 = strncmp(__s,acStack_15f,(long)(int)sVar7);
    if ((iVar3 != 0) ||
       (iVar3 = strncmp((char *)(local_168 + ((long)((sVar7 << 0x20) + 0x900000000) >> 0x20)),
                        "-----\n",6), iVar3 != 0)) goto LAB_00b3eff0;
    EVP_DecodeInit(ctx);
    iVar3 = EVP_DecodeUpdate(ctx,(uchar *)ptr->data,&local_68,(uchar *)ptr->data,local_68);
    if (iVar3 < 0) {
      iVar3 = 100;
      iVar4 = 0x328;
    }
    else {
      iVar3 = EVP_DecodeFinal(ctx,(uchar *)(ptr->data + local_68),&iStack_64);
      if (-1 < iVar3) {
        lVar11 = (long)local_68;
        local_68 = (int)(lVar11 + iStack_64);
        if (local_68 != 0) {
          *name = str->data;
          *header = ptr_00->data;
          *data = (uchar *)ptr->data;
          *len = lVar11 + iStack_64;
          CRYPTO_free(str);
          CRYPTO_free(ptr_00);
          CRYPTO_free(ptr);
          EVP_ENCODE_CTX_free(ctx);
          return 1;
        }
        goto LAB_00b3ede8;
      }
      iVar3 = 100;
      iVar4 = 0x32d;
    }
  }
  else {
LAB_00b3eff0:
    iVar3 = 0x66;
    iVar4 = 799;
  }
  ERR_put_error(9,0x6d,iVar3,"crypto/pem/pem_lib.c",iVar4);
LAB_00b3ede8:
  BUF_MEM_free(str);
  BUF_MEM_free(pBVar5);
  BUF_MEM_free(pBVar6);
  EVP_ENCODE_CTX_free(ctx);
  return 0;
}

