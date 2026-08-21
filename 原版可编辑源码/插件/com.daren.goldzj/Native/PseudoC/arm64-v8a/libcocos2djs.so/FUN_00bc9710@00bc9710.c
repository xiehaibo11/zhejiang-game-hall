
long FUN_00bc9710(BIO *param_1,int param_2,long param_3,EVP_MD *param_4)

{
  int iVar1;
  EVP_MD_CTX *in;
  BIO *bp;
  long lVar2;
  EVP_MD_CTX *out;
  
  in = (EVP_MD_CTX *)BIO_get_data();
  bp = BIO_next(param_1);
  switch(param_2) {
  case 0x65:
    BIO_clear_flags(param_1,0xf);
    lVar2 = BIO_ctrl(bp,0x65,param_3,param_4);
    BIO_copy_next_retry(param_1);
    return lVar2;
  case 0x6f:
    iVar1 = EVP_DigestInit_ex(in,param_4,(ENGINE *)0x0);
    lVar2 = (long)iVar1;
    if (iVar1 < 1) {
      return lVar2;
    }
    goto LAB_00bc987c;
  case 0x70:
    iVar1 = BIO_get_init(param_1);
    if (iVar1 != 0) {
      *(EVP_MD **)param_4 = in->digest;
      return 1;
    }
    break;
  case 0x78:
    *(EVP_MD_CTX **)param_4 = in;
LAB_00bc9874:
    lVar2 = 1;
LAB_00bc987c:
    BIO_set_init(param_1,1);
    return lVar2;
  case 0x94:
    iVar1 = BIO_get_init(param_1);
    if (iVar1 != 0) {
      BIO_set_data(param_1,param_4);
      return 1;
    }
    break;
  default:
    if (param_2 == 0xc) {
      out = (EVP_MD_CTX *)BIO_get_data(param_4);
      iVar1 = EVP_MD_CTX_copy_ex(out,in);
      if (iVar1 == 0) {
        return 0;
      }
      goto LAB_00bc9874;
    }
    if (param_2 == 1) {
      iVar1 = BIO_get_init(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = EVP_DigestInit_ex(in,in->digest,(ENGINE *)0x0);
      if (iVar1 < 1) {
        return (long)iVar1;
      }
      param_2 = 1;
      goto LAB_00bc97e0;
    }
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
LAB_00bc97e0:
    lVar2 = BIO_ctrl(bp,param_2,param_3,param_4);
    return lVar2;
  }
  return 0;
}

