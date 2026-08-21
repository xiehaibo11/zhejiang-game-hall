
int EVP_PKEY_CTX_ctrl(EVP_PKEY_CTX *ctx,int keytype,int optype,int cmd,int p1,void *p2)

{
  int iVar1;
  int line;
  int *piVar2;
  
  if (((ctx != (EVP_PKEY_CTX *)0x0) && (piVar2 = *(int **)ctx, piVar2 != (int *)0x0)) &&
     (*(code **)(piVar2 + 0x30) != (code *)0x0)) {
    if ((keytype != -1) && (*piVar2 != keytype)) {
      return -1;
    }
    if (*(uint *)(ctx + 0x20) == 0) {
      iVar1 = 0x95;
      line = 0x131;
    }
    else {
      if ((optype == -1) || ((*(uint *)(ctx + 0x20) & optype) != 0)) {
        iVar1 = (**(code **)(piVar2 + 0x30))(ctx,cmd,p1,p2);
        if (iVar1 != -2) {
          return iVar1;
        }
        iVar1 = 0x13d;
        goto LAB_00b38b20;
      }
      iVar1 = 0x94;
      line = 0x136;
    }
    ERR_put_error(6,0x89,iVar1,"crypto/evp/pmeth_lib.c",line);
    return -1;
  }
  iVar1 = 0x12a;
LAB_00b38b20:
  ERR_put_error(6,0x89,0x93,"crypto/evp/pmeth_lib.c",iVar1);
  return -2;
}

