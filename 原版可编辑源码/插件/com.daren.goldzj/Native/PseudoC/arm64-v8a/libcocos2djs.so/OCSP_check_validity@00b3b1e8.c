
int OCSP_check_validity(ASN1_GENERALIZEDTIME *thisupd,ASN1_GENERALIZEDTIME *nextupd,long sec,
                       long maxsec)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long local_48;
  long local_38;
  
  time(&local_38);
  iVar1 = ASN1_GENERALIZEDTIME_check(thisupd);
  if (iVar1 == 0) {
    iVar1 = 0x7b;
    iVar2 = 0x13b;
LAB_00b3b2c4:
    ERR_put_error(0x27,0x73,iVar1,"crypto/ocsp/ocsp_cl.c",iVar2);
    uVar3 = 0;
  }
  else {
    local_48 = local_38 + sec;
    iVar1 = X509_cmp_time(thisupd,&local_48);
    if (iVar1 >= 1) {
      ERR_put_error(0x27,0x73,0x7e,"crypto/ocsp/ocsp_cl.c",0x140);
    }
    uVar3 = (uint)(iVar1 < 1);
    if (-1 < maxsec) {
      local_48 = local_38 - maxsec;
      iVar1 = X509_cmp_time(thisupd,&local_48);
      if (iVar1 < 0) {
        iVar1 = 0x7f;
        iVar2 = 0x14b;
        goto LAB_00b3b2c4;
      }
    }
  }
  if (nextupd == (ASN1_GENERALIZEDTIME *)0x0) {
    return uVar3;
  }
  iVar1 = ASN1_GENERALIZEDTIME_check(nextupd);
  if (iVar1 == 0) {
    iVar1 = 0x7a;
    iVar2 = 0x156;
  }
  else {
    local_48 = local_38 - sec;
    iVar1 = X509_cmp_time(nextupd,&local_48);
    if (-1 < iVar1) goto LAB_00b3b334;
    iVar1 = 0x7d;
    iVar2 = 0x15b;
  }
  ERR_put_error(0x27,0x73,iVar1,"crypto/ocsp/ocsp_cl.c",iVar2);
  uVar3 = 0;
LAB_00b3b334:
  iVar1 = ASN1_STRING_cmp(nextupd,thisupd);
  if (iVar1 < 0) {
    ERR_put_error(0x27,0x73,0x7c,"crypto/ocsp/ocsp_cl.c",0x163);
    uVar3 = 0;
  }
  return uVar3;
}

