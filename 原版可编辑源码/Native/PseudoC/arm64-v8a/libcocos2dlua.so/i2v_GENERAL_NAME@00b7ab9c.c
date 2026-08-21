
stack_st_CONF_VALUE *
i2v_GENERAL_NAME(X509V3_EXT_METHOD *method,GENERAL_NAME *gen,stack_st_CONF_VALUE *ret)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  char *value;
  ASN1_IA5STRING *pAVar4;
  ASN1_STRING *pAVar5;
  char acStack_148 [8];
  char local_140 [256];
  stack_st_CONF_VALUE *local_38;
  
  local_38 = ret;
  switch(gen->type) {
  case 0:
    pcVar2 = "othername";
    value = "<unsupported>";
    break;
  case 1:
    pAVar4 = (gen->d).rfc822Name;
    pcVar2 = "email";
    goto LAB_00b7ac5c;
  case 2:
    pAVar4 = (gen->d).rfc822Name;
    pcVar2 = "DNS";
    goto LAB_00b7ac5c;
  case 3:
    pcVar2 = "X400Name";
    value = "<unsupported>";
    break;
  case 4:
    X509_NAME_oneline((gen->d).directoryName,local_140,0x100);
    pcVar2 = "DirName";
    goto LAB_00b7ae7c;
  case 5:
    pcVar2 = "EdiPartyName";
    value = "<unsupported>";
    break;
  case 6:
    pAVar4 = (gen->d).rfc822Name;
    pcVar2 = "URI";
LAB_00b7ac5c:
    X509V3_add_value_uchar(pcVar2,(char *)pAVar4->data,&local_38);
    return local_38;
  case 7:
    iVar1 = *(int *)&((gen->d).ediPartyName)->nameAssigner;
    pAVar5 = ((gen->d).ediPartyName)->partyName;
    if (iVar1 == 0x10) {
      local_140[0] = '\0';
      BIO_snprintf(acStack_148,5,"%X",
                   (ulong)CONCAT11((char)pAVar5->length,*(undefined1 *)((long)&pAVar5->length + 1)))
      ;
      strcat(local_140,acStack_148);
      sVar3 = strlen(local_140);
      (local_140 + sVar3)[0] = ':';
      (local_140 + sVar3)[1] = '\0';
      BIO_snprintf(acStack_148,5,"%X",
                   (ulong)CONCAT11(*(undefined1 *)((long)&pAVar5->length + 2),
                                   *(undefined1 *)((long)&pAVar5->length + 3)));
      strcat(local_140,acStack_148);
      sVar3 = strlen(local_140);
      (local_140 + sVar3)[0] = ':';
      (local_140 + sVar3)[1] = '\0';
      BIO_snprintf(acStack_148,5,"%X",
                   (ulong)CONCAT11((char)pAVar5->type,*(undefined1 *)((long)&pAVar5->type + 1)));
      strcat(local_140,acStack_148);
      sVar3 = strlen(local_140);
      (local_140 + sVar3)[0] = ':';
      (local_140 + sVar3)[1] = '\0';
      BIO_snprintf(acStack_148,5,"%X",
                   (ulong)CONCAT11(*(undefined1 *)((long)&pAVar5->type + 2),
                                   *(undefined1 *)((long)&pAVar5->type + 3)));
      strcat(local_140,acStack_148);
      sVar3 = strlen(local_140);
      (local_140 + sVar3)[0] = ':';
      (local_140 + sVar3)[1] = '\0';
      BIO_snprintf(acStack_148,5,"%X",
                   (ulong)CONCAT11(*(undefined1 *)&pAVar5->data,
                                   *(undefined1 *)((long)&pAVar5->data + 1)));
      strcat(local_140,acStack_148);
      sVar3 = strlen(local_140);
      (local_140 + sVar3)[0] = ':';
      (local_140 + sVar3)[1] = '\0';
      BIO_snprintf(acStack_148,5,"%X",
                   (ulong)CONCAT11(*(undefined1 *)((long)&pAVar5->data + 2),
                                   *(undefined1 *)((long)&pAVar5->data + 3)));
      strcat(local_140,acStack_148);
      sVar3 = strlen(local_140);
      (local_140 + sVar3)[0] = ':';
      (local_140 + sVar3)[1] = '\0';
      BIO_snprintf(acStack_148,5,"%X",
                   (ulong)CONCAT11(*(undefined1 *)((long)&pAVar5->data + 4),
                                   *(undefined1 *)((long)&pAVar5->data + 5)));
      strcat(local_140,acStack_148);
      sVar3 = strlen(local_140);
      (local_140 + sVar3)[0] = ':';
      (local_140 + sVar3)[1] = '\0';
      BIO_snprintf(acStack_148,5,"%X",
                   (ulong)CONCAT11(*(undefined1 *)((long)&pAVar5->data + 6),
                                   *(undefined1 *)((long)&pAVar5->data + 7)));
      strcat(local_140,acStack_148);
    }
    else {
      if (iVar1 != 4) {
        pcVar2 = "IP Address";
        value = "<invalid>";
        break;
      }
      BIO_snprintf(local_140,0x100,"%d.%d.%d.%d",(ulong)(byte)pAVar5->length,
                   (ulong)*(byte *)((long)&pAVar5->length + 1),
                   (ulong)*(byte *)((long)&pAVar5->length + 2),
                   (ulong)*(byte *)((long)&pAVar5->length + 3));
    }
    pcVar2 = "IP Address";
    goto LAB_00b7ae7c;
  case 8:
    i2t_ASN1_OBJECT(local_140,0x100,(gen->d).registeredID);
    pcVar2 = "Registered ID";
LAB_00b7ae7c:
    value = local_140;
    break;
  default:
    goto switchD_00b7abd4_default;
  }
  X509V3_add_value(pcVar2,value,&local_38);
switchD_00b7abd4_default:
  return local_38;
}

