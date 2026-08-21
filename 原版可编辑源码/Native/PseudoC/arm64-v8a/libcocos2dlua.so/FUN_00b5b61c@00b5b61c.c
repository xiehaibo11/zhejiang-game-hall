
undefined8 FUN_00b5b61c(undefined8 *param_1,int *param_2,int param_3,uchar *param_4,int param_5)

{
  int iVar1;
  long lVar2;
  int line;
  uchar *local_80;
  ASN1_OCTET_STRING local_78;
  ASN1_TYPE local_60;
  X509_ALGOR local_50;
  X509_SIG local_40;
  
  local_40.algor = &local_50;
  local_80 = (uchar *)0x0;
  local_50.algorithm = OBJ_nid2obj(param_3);
  if (local_50.algorithm == (ASN1_OBJECT *)0x0) {
    iVar1 = 0x75;
    line = 0x2c;
  }
  else {
    lVar2 = OBJ_length();
    if (lVar2 != 0) {
      local_50.parameter = &local_60;
      local_40.digest = &local_78;
      local_60.type = 5;
      local_60.value.ptr = (char *)0x0;
      local_78.length = param_5;
      local_78.data = param_4;
      iVar1 = i2d_X509_SIG(&local_40,&local_80);
      if (iVar1 < 0) {
        return 0;
      }
      *param_1 = local_80;
      *param_2 = iVar1;
      return 1;
    }
    iVar1 = 0x74;
    line = 0x31;
  }
  ERR_put_error(4,0x92,iVar1,"crypto/rsa/rsa_sign.c",line);
  return 0;
}

