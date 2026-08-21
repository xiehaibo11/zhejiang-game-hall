
int X509V3_add_value_bool(char *name,int asn1_bool,stack_st_CONF_VALUE **extlist)

{
  char *value;
  int iVar1;
  
  value = "FALSE";
  if (asn1_bool != 0) {
    value = "TRUE";
  }
  iVar1 = X509V3_add_value(name,value,extlist);
  return iVar1;
}

