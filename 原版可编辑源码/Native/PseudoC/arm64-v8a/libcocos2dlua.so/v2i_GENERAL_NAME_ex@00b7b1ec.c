
GENERAL_NAME *
v2i_GENERAL_NAME_ex(GENERAL_NAME *out,X509V3_EXT_METHOD *method,X509V3_CTX *ctx,CONF_VALUE *cnf,
                   int is_nc)

{
  int iVar1;
  GENERAL_NAME *pGVar2;
  X509V3_EXT_METHOD *extraout_x1;
  X509V3_EXT_METHOD *extraout_x1_00;
  X509V3_EXT_METHOD *extraout_x1_01;
  X509V3_EXT_METHOD *extraout_x1_02;
  X509V3_EXT_METHOD *extraout_x1_03;
  X509V3_EXT_METHOD *extraout_x1_04;
  X509V3_EXT_METHOD *extraout_x1_05;
  X509V3_EXT_METHOD *method_00;
  char *value;
  char *name;
  
  value = cnf->value;
  if (value == (char *)0x0) {
    ERR_put_error(0x22,0x75,0x7c,"crypto/x509v3/v3_alt.c",0x1e6);
    return (GENERAL_NAME *)0x0;
  }
  name = cnf->name;
  iVar1 = name_cmp(name,"email");
  if (iVar1 == 0) {
    iVar1 = 1;
    method_00 = extraout_x1;
  }
  else {
    iVar1 = name_cmp(name,"URI");
    if (iVar1 == 0) {
      iVar1 = 6;
      method_00 = extraout_x1_00;
    }
    else {
      iVar1 = name_cmp(name,"DNS");
      if (iVar1 == 0) {
        iVar1 = 2;
        method_00 = extraout_x1_01;
      }
      else {
        iVar1 = name_cmp(name,"RID");
        if (iVar1 == 0) {
          iVar1 = 8;
          method_00 = extraout_x1_02;
        }
        else {
          iVar1 = name_cmp(name,"IP");
          if (iVar1 == 0) {
            iVar1 = 7;
            method_00 = extraout_x1_03;
          }
          else {
            iVar1 = name_cmp(name,"dirName");
            if (iVar1 == 0) {
              iVar1 = 4;
              method_00 = extraout_x1_04;
            }
            else {
              iVar1 = name_cmp(name,"otherName");
              if (iVar1 != 0) {
                ERR_put_error(0x22,0x75,0x75,"crypto/x509v3/v3_alt.c",0x1f9);
                ERR_add_error_data(2,"name=",name);
                return (GENERAL_NAME *)0x0;
              }
              iVar1 = 0;
              method_00 = extraout_x1_05;
            }
          }
        }
      }
    }
  }
  pGVar2 = a2i_GENERAL_NAME(out,method_00,ctx,iVar1,value,is_nc);
  return pGVar2;
}

