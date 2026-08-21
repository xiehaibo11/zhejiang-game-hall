
undefined8 FUN_00b625f0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ASN1_TIME *pAVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  time_t *t;
  
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 200) = param_2;
  }
  uVar5 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  if ((uVar5 >> 1 & 1) == 0) {
    if ((uVar5 >> 0x15 & 1) == 0) {
      t = (time_t *)0x0;
      goto LAB_00b62630;
    }
LAB_00b626e4:
    uVar3 = 1;
  }
  else {
    t = (time_t *)(*(long *)(param_1 + 0x20) + 8);
LAB_00b62630:
    pAVar2 = (ASN1_TIME *)X509_CRL_get0_lastUpdate(param_2);
    iVar1 = X509_cmp_time(pAVar2,t);
    if (iVar1 == 0) {
      if (param_3 != 0) {
        pcVar6 = *(code **)(param_1 + 0x38);
        uVar7 = 0xf;
LAB_00b62668:
        *(undefined4 *)(param_1 + 0xb0) = uVar7;
        uVar3 = (*pcVar6)(0,param_1);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        goto LAB_00b6267c;
      }
    }
    else if (iVar1 < 1) {
LAB_00b6267c:
      lVar4 = X509_CRL_get0_nextUpdate(param_2);
      if (lVar4 == 0) {
LAB_00b626b8:
        if (param_3 == 0) goto LAB_00b626e4;
LAB_00b626e0:
        *(undefined8 *)(param_1 + 200) = 0;
        goto LAB_00b626e4;
      }
      pAVar2 = (ASN1_TIME *)X509_CRL_get0_nextUpdate(param_2);
      iVar1 = X509_cmp_time(pAVar2,t);
      if (iVar1 == 0) {
        if (param_3 != 0) {
          pcVar6 = *(code **)(param_1 + 0x38);
          uVar7 = 0x10;
LAB_00b626cc:
          *(undefined4 *)(param_1 + 0xb0) = uVar7;
          uVar3 = (*pcVar6)(0,param_1);
          if ((int)uVar3 == 0) {
            return uVar3;
          }
          goto LAB_00b626e0;
        }
      }
      else {
        if ((-1 < iVar1) || ((*(byte *)(param_1 + 0xd0) >> 1 & 1) != 0)) goto LAB_00b626b8;
        if (param_3 != 0) {
          pcVar6 = *(code **)(param_1 + 0x38);
          uVar7 = 0xc;
          goto LAB_00b626cc;
        }
      }
    }
    else if (param_3 != 0) {
      pcVar6 = *(code **)(param_1 + 0x38);
      uVar7 = 0xb;
      goto LAB_00b62668;
    }
    uVar3 = 0;
  }
  return uVar3;
}

