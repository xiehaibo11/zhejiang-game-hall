
ulong ASN1_TIME_diff(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  time_t atStack_a0 [7];
  undefined1 auStack_68 [56];
  time_t tStack_28;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aea6d0 with catch @ 00aea6ac
                       catch(type#1 @ 00000000) { ... } // from try @ 00aea774 with catch @ 00aea6ac
                        */
  if (param_3 == 0) {
    time(atStack_a0);
    lVar3 = OPENSSL_gmtime(atStack_a0,auStack_68);
    if (lVar3 == 0) {
      return (ulong)(lVar3 != 0);
    }
LAB_00aea6e0:
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
        if (*(int *)(param_4 + 4) != 0x17) goto LAB_00aea730;
        uVar2 = asn1_utctime_to_tm(atStack_a0,param_4);
        iVar1 = (int)uVar2;
      }
      if (iVar1 == 0) {
        return uVar2;
      }
    }
                    /* try { // try from 00aea770 to 00bea773 has its CatchHandler @ 00aea8bc */
                    /* try { // try from 00aea774 to 00bea92b has its CatchHandler @ 00aea6ac */
    uVar2 = OPENSSL_gmtime_diff(param_1,param_2,auStack_68,atStack_a0);
  }
  else {
                    /* try { // try from 00aea6c4 to 00bea6cf has its CatchHandler @ 00aea8d0 */
    if (*(int *)(param_3 + 4) == 0x18) {
      uVar2 = asn1_generalizedtime_to_tm(auStack_68,param_3);
      iVar1 = (int)uVar2;
joined_r0x00aea744:
      if (iVar1 == 0) {
        return uVar2;
      }
      goto LAB_00aea6e0;
    }
    if (*(int *)(param_3 + 4) == 0x17) {
                    /* try { // try from 00aea6d0 to 00bea76f has its CatchHandler @ 00aea6ac */
      uVar2 = asn1_utctime_to_tm(auStack_68,param_3);
      iVar1 = (int)uVar2;
      goto joined_r0x00aea744;
    }
LAB_00aea730:
    uVar2 = 0;
  }
  return uVar2;
}

