
int X509V3_EXT_print(BIO *out,X509_EXTENSION *ext,ulong flag,int indent)

{
  int iVar1;
  ASN1_OCTET_STRING *x;
  uchar *pp;
  X509V3_EXT_METHOD *method;
  ASN1_VALUE *val;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  stack_st_CONF_VALUE *val_00;
  uchar *local_48;
  
  x = X509_EXTENSION_get_data(ext);
  pp = (uchar *)ASN1_STRING_get0_data();
  local_48 = pp;
  iVar1 = ASN1_STRING_length(x);
  method = X509V3_EXT_get(ext);
  if (method == (X509V3_EXT_METHOD *)0x0) {
    iVar3 = 0;
    switch(flag >> 0x10 & 0xf) {
    case 0:
      goto switchD_00b736ac_caseD_0;
    case 1:
      pcVar2 = "%*s<Not Supported>";
      break;
    case 2:
LAB_00b7377c:
      iVar1 = ASN1_parse_dump(out,pp,(long)iVar1,indent,-1);
      return iVar1;
    case 3:
LAB_00b73790:
      iVar1 = BIO_dump_indent(out,(char *)pp,iVar1,indent);
      return iVar1;
    default:
switchD_00b736ac_default:
      iVar3 = 1;
      goto switchD_00b736ac_caseD_0;
    }
  }
  else {
    if (method->it == (ASN1_ITEM *)0x0) {
      val = (*method->d2i)((void *)0x0,&local_48,(long)iVar1);
      pp = local_48;
    }
    else {
      val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_48,(long)iVar1,method->it);
      pp = local_48;
    }
    local_48 = pp;
    if (val != (ASN1_VALUE *)0x0) {
      if (method->i2s == (X509V3_EXT_I2S)0x0) {
        if (method->i2v == (X509V3_EXT_I2V)0x0) {
          if (method->i2r != (X509V3_EXT_I2R)0x0) {
            iVar1 = (*method->i2r)(method,val,out,indent);
            pcVar2 = (char *)0x0;
            val_00 = (stack_st_CONF_VALUE *)0x0;
            uVar4 = (uint)(iVar1 != 0);
            goto LAB_00b737b8;
          }
          pcVar2 = (char *)0x0;
          goto LAB_00b737b0;
        }
        val_00 = (*method->i2v)(method,val,(stack_st_CONF_VALUE *)0x0);
        if (val_00 != (stack_st_CONF_VALUE *)0x0) {
          X509V3_EXT_val_prn(out,val_00,indent,method->ext_flags & 4);
          pcVar2 = (char *)0x0;
          uVar4 = 1;
          goto LAB_00b737b8;
        }
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2 = (*method->i2s)(method,val);
        if (pcVar2 != (char *)0x0) {
          BIO_printf(out,"%*s%s",(ulong)(uint)indent,&DAT_0189703a,pcVar2);
          val_00 = (stack_st_CONF_VALUE *)0x0;
          uVar4 = 1;
          goto LAB_00b737b8;
        }
LAB_00b737b0:
        val_00 = (stack_st_CONF_VALUE *)0x0;
      }
      uVar4 = 0;
LAB_00b737b8:
      OPENSSL_sk_pop_free(val_00,X509V3_conf_free);
      CRYPTO_free(pcVar2);
      if (method->it != (ASN1_ITEM *)0x0) {
        ASN1_item_free(val,method->it);
        return uVar4;
      }
      (*method->ext_free)(val);
      return uVar4;
    }
    iVar3 = 0;
    switch(flag >> 0x10 & 0xf) {
    case 0:
      goto switchD_00b736ac_caseD_0;
    case 1:
      pcVar2 = "%*s<Parse Error>";
      break;
    case 2:
      goto LAB_00b7377c;
    case 3:
      goto LAB_00b73790;
    default:
      goto switchD_00b736ac_default;
    }
  }
  BIO_printf(out,pcVar2,(ulong)(uint)indent,&DAT_0189703a);
  iVar3 = 1;
switchD_00b736ac_caseD_0:
  return iVar3;
}

