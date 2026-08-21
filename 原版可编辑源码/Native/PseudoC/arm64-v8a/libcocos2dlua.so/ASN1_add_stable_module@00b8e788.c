
int ASN1_add_stable_module(void)

{
  int iVar1;
  
                    /* try { // try from 00b8e79c to 00c8e7a3 has its CatchHandler @ 00b8e99c */
  iVar1 = CONF_module_add("stbl_section",&DAT_00b8e7a4,&LAB_00b8eb30);
  return iVar1;
}

