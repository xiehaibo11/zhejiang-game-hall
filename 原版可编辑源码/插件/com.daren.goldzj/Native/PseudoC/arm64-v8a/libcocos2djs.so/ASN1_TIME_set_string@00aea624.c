
int ASN1_TIME_set_string(ASN1_TIME *s,char *str)

{
  int iVar1;
  size_t sVar2;
  ASN1_UTCTIME local_38;
  
  sVar2 = strlen(str);
  local_38.length = (int)sVar2;
  local_38.type = 0x17;
  local_38.flags = 0;
  local_38.data = (uchar *)str;
  iVar1 = ASN1_UTCTIME_check(&local_38);
  if (iVar1 == 0) {
    local_38.type = 0x18;
    iVar1 = ASN1_GENERALIZEDTIME_check(&local_38);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((s != (ASN1_TIME *)0x0) && (iVar1 = ASN1_STRING_copy(s,&local_38), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

