
int ssl_cipher_ptr_id_cmp(long *param_1,long *param_2)

{
  int iVar1;
  
                    /* try { // try from 00ad7da4 to 00bd7dab has its CatchHandler @ 00ad7de8 */
                    /* try { // try from 00ad7dac to 00bd7e03 has its CatchHandler @ 00ad7d3c */
  iVar1 = -(uint)(*(uint *)(*param_1 + 0x10) < *(uint *)(*param_2 + 0x10));
  if (*(uint *)(*param_2 + 0x10) < *(uint *)(*param_1 + 0x10)) {
    iVar1 = 1;
  }
  return iVar1;
}

