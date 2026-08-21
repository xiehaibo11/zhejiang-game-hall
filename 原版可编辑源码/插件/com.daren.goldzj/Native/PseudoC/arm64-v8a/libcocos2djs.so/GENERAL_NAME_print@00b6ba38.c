
int GENERAL_NAME_print(BIO *out,GENERAL_NAME *gen)

{
  int iVar1;
  char *pcVar2;
  OTHERNAME *pOVar3;
  ASN1_STRING *pAVar4;
  
  switch(gen->type) {
  case 0:
    pcVar2 = "othername:<unsupported>";
    break;
  case 1:
    pOVar3 = (gen->d).otherName;
                    /* try { // try from 00b6ba84 to 00c6ba9f has its CatchHandler @ 00b6ba84
                       catch() { ... } // from try @ 00b6ba84 with catch @ 00b6ba84
                       catch() { ... } // from try @ 00b6bab4 with catch @ 00b6ba84 */
    pcVar2 = "email:%s";
    goto LAB_00b6baec;
  case 2:
    pOVar3 = (gen->d).otherName;
    pcVar2 = "DNS:%s";
    goto LAB_00b6baec;
  case 3:
                    /* try { // try from 00b6baa0 to 00c6bab3 has its CatchHandler @ 00b6bac4 */
    pcVar2 = "X400Name:<unsupported>";
    break;
  case 4:
                    /* try { // try from 00b6bab4 to 00c6bae3 has its CatchHandler @ 00b6ba84 */
    BIO_printf(out,"DirName:");
                    /* catch() { ... } // from try @ 00b6baa0 with catch @ 00b6bac4 */
    X509_NAME_print_ex(out,(gen->d).directoryName,0,0x82031f);
    return 1;
  case 5:
    pcVar2 = "EdiPartyName:<unsupported>";
    break;
  case 6:
    pOVar3 = (gen->d).otherName;
                    /* catch() { ... } // from try @ 00b6bb44 with catch @ 00b6bae4 */
    pcVar2 = "URI:%s";
LAB_00b6baec:
    BIO_printf(out,pcVar2,pOVar3->value);
    return 1;
  case 7:
    iVar1 = *(int *)&((gen->d).ediPartyName)->nameAssigner;
    pAVar4 = ((gen->d).ediPartyName)->partyName;
    if (iVar1 == 0x10) {
      BIO_printf(out,"IP Address");
      BIO_printf(out,":%X",
                 (ulong)CONCAT11((char)pAVar4->length,*(undefined1 *)((long)&pAVar4->length + 1)));
                    /* catch() { ... } // from try @ 00b6bb38 with catch @ 00b6bb90 */
      BIO_printf(out,":%X",
                 (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->length + 2),
                                 *(undefined1 *)((long)&pAVar4->length + 3)));
      BIO_printf(out,":%X",
                 (ulong)CONCAT11((char)pAVar4->type,*(undefined1 *)((long)&pAVar4->type + 1)));
      BIO_printf(out,":%X",
                 (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->type + 2),
                                 *(undefined1 *)((long)&pAVar4->type + 3)));
      BIO_printf(out,":%X",
                 (ulong)CONCAT11(*(undefined1 *)&pAVar4->data,
                                 *(undefined1 *)((long)&pAVar4->data + 1)));
      BIO_printf(out,":%X",
                 (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->data + 2),
                                 *(undefined1 *)((long)&pAVar4->data + 3)));
      BIO_printf(out,":%X",
                 (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->data + 4),
                                 *(undefined1 *)((long)&pAVar4->data + 5)));
      BIO_printf(out,":%X",
                 (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->data + 6),
                                 *(undefined1 *)((long)&pAVar4->data + 7)));
      BIO_puts(out,"\n");
      return 1;
    }
    if (iVar1 == 4) {
      BIO_printf(out,"IP Address:%d.%d.%d.%d",(ulong)(byte)pAVar4->length,
                 (ulong)*(byte *)((long)&pAVar4->length + 1),
                 (ulong)*(byte *)((long)&pAVar4->length + 2),
                 (ulong)*(byte *)((long)&pAVar4->length + 3));
      return 1;
                    /* try { // try from 00b6bb38 to 00c6bb43 has its CatchHandler @ 00b6bb90 */
    }
    pcVar2 = "IP Address:<invalid>";
    break;
  case 8:
                    /* try { // try from 00b6bb44 to 00c6bc63 has its CatchHandler @ 00b6bae4 */
    BIO_printf(out,"Registered ID:");
    i2a_ASN1_OBJECT(out,(gen->d).registeredID);
  default:
    goto switchD_00b6ba6c_default;
  }
  BIO_printf(out,pcVar2);
switchD_00b6ba6c_default:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6bc88 with catch @ 00b6bc64
                        */
  return 1;
}

