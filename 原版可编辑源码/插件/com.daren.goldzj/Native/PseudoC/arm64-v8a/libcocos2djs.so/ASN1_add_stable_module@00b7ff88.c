
int ASN1_add_stable_module(void)

{
  int iVar1;
  
  iVar1 = CONF_module_add("stbl_section",&LAB_00b7ffa4,&LAB_00b80330);
  return iVar1;
}

