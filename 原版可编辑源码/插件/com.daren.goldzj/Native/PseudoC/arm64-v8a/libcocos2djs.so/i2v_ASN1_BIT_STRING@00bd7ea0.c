
stack_st_CONF_VALUE *
i2v_ASN1_BIT_STRING(X509V3_EXT_METHOD *method,ASN1_BIT_STRING *bits,stack_st_CONF_VALUE *extlist)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  stack_st_CONF_VALUE *local_28;
  
  piVar4 = method->usr_data;
  lVar3 = *(long *)(piVar4 + 2);
  local_28 = extlist;
  while (lVar3 != 0) {
    iVar2 = ASN1_BIT_STRING_get_bit(bits,*piVar4);
    if (iVar2 != 0) {
      X509V3_add_value(*(char **)(piVar4 + 2),(char *)0x0,&local_28);
    }
    plVar1 = (long *)(piVar4 + 8);
    piVar4 = piVar4 + 6;
    lVar3 = *plVar1;
  }
  return local_28;
}

