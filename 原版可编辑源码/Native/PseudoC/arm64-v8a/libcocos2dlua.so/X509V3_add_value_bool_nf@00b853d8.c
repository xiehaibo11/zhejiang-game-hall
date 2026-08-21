
int X509V3_add_value_bool_nf(char *name,int asn1_bool,stack_st_CONF_VALUE **extlist)

{
  int iVar1;
  
  if (asn1_bool != 0) {
                    /* try { // try from 00b853e0 to 00c8541f has its CatchHandler @ 00b853e0
                       catch() { ... } // from try @ 00b853e0 with catch @ 00b853e0
                       catch() { ... } // from try @ 00b8542c with catch @ 00b853e0
                       catch() { ... } // from try @ 00b85450 with catch @ 00b853e0 */
    iVar1 = X509V3_add_value(name,"TRUE",extlist);
    return iVar1;
  }
  return 1;
}

