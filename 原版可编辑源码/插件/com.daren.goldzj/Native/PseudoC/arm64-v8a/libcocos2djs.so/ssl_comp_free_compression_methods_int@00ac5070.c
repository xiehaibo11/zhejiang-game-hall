
void ssl_comp_free_compression_methods_int(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_01d38ed8;
  DAT_01d38ed8 = 0;
                    /* try { // try from 00ac5088 to 00bc518f has its CatchHandler @ 00ac5088
                       catch() { ... } // from try @ 00ac5088 with catch @ 00ac5088
                       catch() { ... } // from try @ 00ac52dc with catch @ 00ac5088
                       catch() { ... } // from try @ 00ac5320 with catch @ 00ac5088
                       catch() { ... } // from try @ 00ac5330 with catch @ 00ac5088 */
  OPENSSL_sk_pop_free(uVar1,&LAB_00ac508c);
  return;
}

