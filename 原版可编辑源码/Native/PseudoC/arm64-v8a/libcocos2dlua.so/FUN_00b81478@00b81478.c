
void FUN_00b81478(undefined8 param_1,BIO *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  GENERAL_NAME *gen;
  ASN1_STRING *pAVar4;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b812f0 with catch @ 00b81478
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b813d8 with catch @ 00b81494
                        */
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    BIO_printf(param_2,"%*s%s:\n",(ulong)param_3,&DAT_013c996e,param_4);
  }
  iVar1 = OPENSSL_sk_num(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b815c0 with catch @ 00b814fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00b8162c with catch @ 00b814fc
                        */
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_1,iVar1);
      BIO_printf(param_2,"%*s",(ulong)(param_3 + 2),&DAT_013c996e);
      gen = (GENERAL_NAME *)*puVar3;
      if (gen->type == 7) {
                    /* try { // try from 00b8154c to 00c81553 has its CatchHandler @ 00b81610 */
        iVar2 = *(int *)&((gen->d).ediPartyName)->nameAssigner;
        pAVar4 = ((gen->d).ediPartyName)->partyName;
        BIO_puts(param_2,"IP:");
                    /* try { // try from 00b81564 to 00c81567 has its CatchHandler @ 00b81654 */
        if (iVar2 == 8) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8154c with catch @ 00b81610
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b815a4 with catch @ 00b81614
                        */
          BIO_printf(param_2,"%d.%d.%d.%d/%d.%d.%d.%d",(ulong)(byte)pAVar4->length,
                     (ulong)*(byte *)((long)&pAVar4->length + 1),
                     (ulong)*(byte *)((long)&pAVar4->length + 2),
                     (ulong)*(byte *)((long)&pAVar4->length + 3),(ulong)(byte)pAVar4->type,
                     (ulong)*(byte *)((long)&pAVar4->type + 1),
                     (uint)*(byte *)((long)&pAVar4->type + 2),
                     (uint)*(byte *)((long)&pAVar4->type + 3));
        }
        else {
          if (iVar2 == 0x20) {
            iVar2 = 0;
            do {
              BIO_printf(param_2,"%X",
                         (ulong)CONCAT11((char)pAVar4->length,
                                         *(undefined1 *)((long)&pAVar4->length + 1)));
              if (iVar2 == 7) {
                BIO_puts(param_2,"/");
                iVar2 = 8;
              }
              else {
                    /* try { // try from 00b815a4 to 00c815ab has its CatchHandler @ 00b81614 */
                if (iVar2 == 0xf) goto LAB_00b81630;
                BIO_puts(param_2,":");
                iVar2 = iVar2 + 1;
                    /* try { // try from 00b815bc to 00c815bf has its CatchHandler @ 00b81670 */
                if (iVar2 == 0x10) goto LAB_00b81630;
              }
              pAVar4 = (ASN1_STRING *)((long)&pAVar4->length + 2);
            } while( true );
          }
                    /* try { // try from 00b81628 to 00c8162b has its CatchHandler @ 00b81650 */
                    /* try { // try from 00b8162c to 00c81683 has its CatchHandler @ 00b814fc */
          BIO_printf(param_2,"IP Address:<invalid>");
        }
      }
      else {
        GENERAL_NAME_print(param_2,gen);
      }
LAB_00b81630:
      BIO_puts(param_2,"\n");
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(param_1);
    } while (iVar1 < iVar2);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b81628 with catch @ 00b81650
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b81564 with catch @ 00b81654
                        */
  return;
}

