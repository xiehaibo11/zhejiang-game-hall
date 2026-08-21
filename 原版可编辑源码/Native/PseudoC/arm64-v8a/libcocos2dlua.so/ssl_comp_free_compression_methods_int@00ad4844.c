
void ssl_comp_free_compression_methods_int(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_01782c58;
                    /* try { // try from 00ad4848 to 00bd48f7 has its CatchHandler @ 00ad47ac */
  DAT_01782c58 = 0;
  OPENSSL_sk_pop_free(uVar1,&LAB_00ad4860);
  return;
}

