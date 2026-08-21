
ulong ASN1_TIME_diff(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  time_t atStack_a0 [7];
  undefined1 auStack_68 [56];
  time_t tStack_28;
  
  if (param_3 == 0) {
    time(atStack_a0);
    lVar3 = OPENSSL_gmtime(atStack_a0,auStack_68);
    if (lVar3 == 0) {
      return (ulong)(lVar3 != 0);
    }
LAB_00afab60:
    if (param_4 == 0) {
      time(&tStack_28);
      lVar3 = OPENSSL_gmtime(&tStack_28,atStack_a0);
      if (lVar3 == 0) {
        return (ulong)(lVar3 != 0);
      }
    }
    else {
      if (*(int *)(param_4 + 4) == 0x18) {
        uVar2 = asn1_generalizedtime_to_tm(atStack_a0,param_4);
        iVar1 = (int)uVar2;
      }
      else {
        if (*(int *)(param_4 + 4) != 0x17) goto LAB_00afabb0;
        uVar2 = asn1_utctime_to_tm(atStack_a0,param_4);
        iVar1 = (int)uVar2;
      }
      if (iVar1 == 0) {
        return uVar2;
      }
    }
    uVar2 = OPENSSL_gmtime_diff(param_1,param_2,auStack_68,atStack_a0);
  }
  else {
    if (*(int *)(param_3 + 4) == 0x18) {
      uVar2 = asn1_generalizedtime_to_tm(auStack_68,param_3);
      iVar1 = (int)uVar2;
joined_r0x00afabc4:
      if (iVar1 == 0) {
        return uVar2;
      }
      goto LAB_00afab60;
    }
    if (*(int *)(param_3 + 4) == 0x17) {
      uVar2 = asn1_utctime_to_tm(auStack_68,param_3);
      iVar1 = (int)uVar2;
      goto joined_r0x00afabc4;
    }
LAB_00afabb0:
    uVar2 = 0;
  }
  return uVar2;
}

