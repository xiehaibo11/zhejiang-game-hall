
int OCSP_single_get0_status
              (OCSP_SINGLERESP *single,int *reason,ASN1_GENERALIZEDTIME **revtime,
              ASN1_GENERALIZEDTIME **thisupd,ASN1_GENERALIZEDTIME **nextupd)

{
  int iVar1;
  ASN1_ENUMERATED *a;
  OCSP_REVOKEDINFO *pOVar3;
  int iVar4;
  long lVar2;
  
  if (single == (OCSP_SINGLERESP *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = single->certStatus->type;
    if (iVar4 == 1) {
      pOVar3 = (single->certStatus->value).revoked;
      if (revtime != (ASN1_GENERALIZEDTIME **)0x0) {
        *revtime = pOVar3->revocationTime;
      }
      if (reason != (int *)0x0) {
        a = pOVar3->revocationReason;
        if (a == (ASN1_ENUMERATED *)0x0) {
          iVar1 = -1;
        }
        else {
          lVar2 = ASN1_ENUMERATED_get(a);
          iVar1 = (int)lVar2;
        }
        *reason = iVar1;
      }
    }
    if (thisupd != (ASN1_GENERALIZEDTIME **)0x0) {
      *thisupd = single->thisUpdate;
    }
    if (nextupd != (ASN1_GENERALIZEDTIME **)0x0) {
      *nextupd = single->nextUpdate;
    }
  }
  return iVar4;
}

