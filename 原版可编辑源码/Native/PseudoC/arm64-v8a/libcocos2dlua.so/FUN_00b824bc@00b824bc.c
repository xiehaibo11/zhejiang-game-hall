
undefined8 FUN_00b824bc(undefined8 param_1,long *param_2,BIO *param_3,ulong param_4)

{
  long lVar1;
  
                    /* try { // try from 00b824e0 to 00c82507 has its CatchHandler @ 00b821f8 */
  BIO_printf(param_3,"%*s",param_4 & 0xffffffff,&DAT_013c996e);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b82498 with catch @ 00b824f4
                        */
  if (*param_2 == 0) {
    lVar1 = param_2[1];
  }
  else {
                    /* try { // try from 00b82508 to 00c8250b has its CatchHandler @ 00b82530 */
    BIO_write(param_3,"Not Before: ",0xc);
                    /* try { // try from 00b8250c to 00c82567 has its CatchHandler @ 00b821f8 */
    ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)*param_2);
    if (param_2[1] == 0) {
      return 1;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b82508 with catch @ 00b82530
                        */
    BIO_write(param_3,&DAT_01458dec,2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8224c with catch @ 00b82534
                        */
    lVar1 = param_2[1];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b82264 with catch @ 00b82538
                        */
  }
  if (lVar1 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b82310 with catch @ 00b82554
                        */
    BIO_write(param_3,"Not After: ",0xb);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b82660 with catch @ 00b82568
                       catch(type#1 @ 00000000) { ... } // from try @ 00b826cc with catch @ 00b82568
                        */
    ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)param_2[1]);
  }
  return 1;
}

