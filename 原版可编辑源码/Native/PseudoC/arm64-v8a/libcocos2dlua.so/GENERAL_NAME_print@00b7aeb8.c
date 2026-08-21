
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
    pcVar2 = "email:%s";
    goto LAB_00b7af6c;
  case 2:
    pOVar3 = (gen->d).otherName;
    pcVar2 = "DNS:%s";
    goto LAB_00b7af6c;
  case 3:
    pcVar2 = "X400Name:<unsupported>";
    break;
  case 4:
    BIO_printf(out,"DirName:");
    X509_NAME_print_ex(out,(gen->d).directoryName,0,0x82031f);
    return 1;
  case 5:
    pcVar2 = "EdiPartyName:<unsupported>";
    break;
  case 6:
    pOVar3 = (gen->d).otherName;
    pcVar2 = "URI:%s";
LAB_00b7af6c:
    BIO_printf(out,pcVar2,pOVar3->value);
    return 1;
  case 7:
    iVar1 = *(int *)&((gen->d).ediPartyName)->nameAssigner;
    pAVar4 = ((gen->d).ediPartyName)->partyName;
    if (iVar1 == 0x10) {
      BIO_printf(out,"IP Address");
      BIO_printf(out,":%X",
                 (ulong)CONCAT11((char)pAVar4->length,*(undefined1 *)((long)&pAVar4->length + 1)));
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
    }
    pcVar2 = "IP Address:<invalid>";
    break;
  case 8:
    BIO_printf(out,"Registered ID:");
    i2a_ASN1_OBJECT(out,(gen->d).registeredID);
  default:
    goto switchD_00b7aeec_default;
  }
  BIO_printf(out,pcVar2);
switchD_00b7aeec_default:
  return 1;
}

