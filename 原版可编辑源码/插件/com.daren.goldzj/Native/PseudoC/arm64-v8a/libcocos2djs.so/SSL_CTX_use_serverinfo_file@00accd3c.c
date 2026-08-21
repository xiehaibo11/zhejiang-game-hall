
undefined4 SSL_CTX_use_serverinfo_file(long param_1,void *param_2)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  BIO_METHOD *type;
  BIO *bp;
  long lVar3;
  size_t sVar4;
  void *ptr;
  int iVar5;
  void *addr;
  long lVar6;
  char *local_70;
  char *local_68;
  size_t local_60;
  uchar *local_58;
  
  local_60 = 0;
  local_58 = (uchar *)0x0;
  local_70 = (char *)0x0;
  local_68 = (char *)0x0;
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    ERR_put_error(0x14,0x151,0x43,"ssl/ssl_rsa.c",0x37e);
    ptr = (void *)0x0;
    uVar2 = 0;
    bp = (BIO *)0x0;
  }
  else {
    type = BIO_s_file();
    bp = BIO_new(type);
    if (bp == (BIO *)0x0) {
      iVar1 = 7;
      iVar5 = 900;
    }
    else {
      lVar3 = BIO_ctrl(bp,0x6c,3,param_2);
      if (0 < (int)lVar3) {
        iVar1 = PEM_read_bio(bp,&local_68,&local_70,&local_58,(long *)&local_60);
        if (iVar1 == 0) {
          ptr = (void *)0x0;
        }
        else {
          lVar6 = 0;
          lVar3 = 0;
          addr = (void *)0x0;
          do {
            __s1 = local_68;
            sVar4 = strlen(local_68);
            if (sVar4 < 0xf) {
              iVar1 = 0x188;
              iVar5 = 0x39b;
LAB_00accfcc:
              ERR_put_error(0x14,0x151,iVar1,"ssl/ssl_rsa.c",iVar5);
              goto LAB_00accfd0;
            }
            iVar1 = strncmp(__s1,"SERVERINFO FOR ",0xf);
            if (iVar1 != 0) {
              iVar1 = 0x187;
              iVar5 = 0x3a0;
              goto LAB_00accfcc;
            }
            if (((long)local_60 < 4) || ((ulong)CONCAT11(local_58[2],local_58[3]) != local_60 - 4))
            {
              iVar1 = 0x186;
              iVar5 = 0x3a8;
              goto LAB_00accfcc;
            }
            ptr = CRYPTO_realloc(addr,(int)local_60 + (int)lVar3,"ssl/ssl_rsa.c",0x3ac);
            if (ptr == (void *)0x0) {
              iVar1 = 0x41;
              iVar5 = 0x3ae;
              goto LAB_00accfcc;
            }
            memcpy((void *)((long)ptr + lVar3),local_58,local_60);
            lVar3 = local_60 + lVar3;
            CRYPTO_free(local_68);
            local_68 = (char *)0x0;
            CRYPTO_free(local_70);
            local_70 = (char *)0x0;
            CRYPTO_free(local_58);
            local_58 = (uchar *)0x0;
            iVar1 = PEM_read_bio(bp,&local_68,&local_70,&local_58,(long *)&local_60);
            lVar6 = lVar6 + -1;
            addr = ptr;
          } while (iVar1 != 0);
          if (lVar6 != 0) {
            uVar2 = SSL_CTX_use_serverinfo(param_1,ptr,lVar3);
            goto LAB_00accfd4;
          }
        }
        ERR_put_error(0x14,0x151,0x185,"ssl/ssl_rsa.c",0x394);
        uVar2 = 0;
        goto LAB_00accfd4;
      }
      iVar1 = 2;
      iVar5 = 0x388;
    }
    ERR_put_error(0x14,0x151,iVar1,"ssl/ssl_rsa.c",iVar5);
    addr = (void *)0x0;
LAB_00accfd0:
    uVar2 = 0;
    ptr = addr;
  }
LAB_00accfd4:
  CRYPTO_free(local_68);
  CRYPTO_free(local_70);
  CRYPTO_free(local_58);
  CRYPTO_free(ptr);
  BIO_free(bp);
  return uVar2;
}

