
undefined8
FUN_00b7d4e4(CONF *param_1,v3_ext_ctx *param_2,int param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  X509V3_EXT_METHOD *method;
  stack_st_CONF_VALUE *values;
  ASN1_VALUE *val;
  undefined8 uVar2;
  char *pcVar3;
  int line;
  X509V3_EXT_S2I pXVar4;
  
  if (param_3 == 0) {
    iVar1 = 0x82;
    line = 0x4e;
  }
  else {
    method = X509V3_EXT_get_nid(param_3);
    if (method != (X509V3_EXT_METHOD *)0x0) {
      if (method->v2i == (X509V3_EXT_V2I)0x0) {
        pXVar4 = method->s2i;
        if (pXVar4 == (X509V3_EXT_S2I)0x0) {
          pXVar4 = (X509V3_EXT_S2I)method->r2i;
          if (pXVar4 == (X509V3_EXT_S2I)0x0) {
            ERR_put_error(0x22,0x97,0x67,"crypto/x509v3/v3_conf.c",0x75);
            pcVar3 = OBJ_nid2sn(param_3);
            ERR_add_error_data(2,"name=",pcVar3);
            return 0;
          }
          if ((param_2->db == (void *)0x0) || (param_2->db_meth == (X509V3_CONF_METHOD *)0x0)) {
            iVar1 = 0x88;
            line = 0x6e;
            goto LAB_00b7d580;
          }
        }
        val = (*pXVar4)(method,param_2,param_5);
      }
      else {
        if (*param_5 == '@') {
          values = NCONF_get_section(param_1,param_5 + 1);
        }
        else {
          values = X509V3_parse_list(param_5);
        }
        if ((values == (stack_st_CONF_VALUE *)0x0) || (iVar1 = OPENSSL_sk_num(values), iVar1 < 1)) {
          ERR_put_error(0x22,0x97,0x69,"crypto/x509v3/v3_conf.c",0x5d);
          pcVar3 = OBJ_nid2sn(param_3);
          ERR_add_error_data(4,"name=",pcVar3,",section=",param_5);
          if (*param_5 == '@') {
            return 0;
          }
          OPENSSL_sk_pop_free(values,X509V3_conf_free);
          return 0;
        }
        val = (*method->v2i)(method,param_2,values);
        if (*param_5 != '@') {
          OPENSSL_sk_pop_free(values,X509V3_conf_free);
        }
      }
      if (val == (ASN1_VALUE *)0x0) {
        return 0;
      }
      uVar2 = FUN_00b7d8d8(method,param_3,param_4,val);
      if (method->it == (ASN1_ITEM *)0x0) {
        (*method->ext_free)(val);
        return uVar2;
      }
      ASN1_item_free(val,method->it);
      return uVar2;
    }
    iVar1 = 0x81;
    line = 0x52;
  }
LAB_00b7d580:
  ERR_put_error(0x22,0x97,iVar1,"crypto/x509v3/v3_conf.c",line);
  return 0;
}

