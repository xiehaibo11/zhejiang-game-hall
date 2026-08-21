
int ASN1_UTCTIME_set_string(ASN1_UTCTIME *s,char *str)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int local_48 [2];
  char *local_40;
  
  local_48[1] = 0x17;
  sVar3 = strlen(str);
  local_48[0] = (int)sVar3;
  local_40 = str;
  iVar1 = asn1_utctime_to_tm(0,local_48);
  iVar2 = 0;
  if (iVar1 != 0) {
    if (s != (ASN1_UTCTIME *)0x0) {
      iVar2 = ASN1_STRING_set(s,str,(int)sVar3);
      if (iVar2 == 0) {
        return 0;
      }
      s->type = 0x17;
    }
    iVar2 = 1;
  }
  return iVar2;
}

