
bool asn1_utctime_to_tm(int *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  
  if (param_2[1] != 0x17) {
    return false;
  }
  uVar1 = *param_2;
  if ((int)uVar1 < 0xb) {
    return false;
  }
  pbVar6 = *(byte **)(param_2 + 2);
  bVar2 = *pbVar6;
  uVar8 = bVar2 - 0x30 & 0xff;
  if (param_1 == (int *)0x0) {
    if (9 < uVar8) {
      return false;
    }
    if (9 < pbVar6[1] - 0x30) {
      return false;
    }
    if (99 < ((uint)pbVar6[1] + (uint)bVar2 * 10) - 0x210) {
      return false;
    }
    if (9 < pbVar6[2] - 0x30) {
      return false;
    }
    if (9 < pbVar6[3] - 0x30) {
      return false;
    }
    if (0xb < ((uint)pbVar6[3] + (uint)pbVar6[2] * 10) - 0x211) {
      return false;
    }
    if (9 < pbVar6[4] - 0x30) {
      return false;
    }
    if (9 < pbVar6[5] - 0x30) {
      return false;
    }
    if (0x1e < ((uint)pbVar6[5] + (uint)pbVar6[4] * 10) - 0x211) {
      return false;
    }
    if (9 < pbVar6[6] - 0x30) {
      return false;
    }
    if (9 < pbVar6[7] - 0x30) {
      return false;
    }
    if (0x17 < ((uint)pbVar6[7] + (uint)pbVar6[6] * 10) - 0x210) {
      return false;
    }
    if (9 < pbVar6[8] - 0x30) {
      return false;
    }
    if (9 < pbVar6[9] - 0x30) {
      return false;
    }
    if (0x3b < ((uint)pbVar6[9] + (uint)pbVar6[8] * 10) - 0x210) {
      return false;
    }
    bVar2 = pbVar6[10];
    uVar8 = bVar2 - 0x2b;
    if ((uVar8 < 0x30) && ((1L << ((ulong)uVar8 & 0x3f) & 0x800000000005U) != 0)) goto LAB_00afaf40;
    if (9 < bVar2 - 0x30) {
      return false;
    }
    if (9 < pbVar6[0xb] - 0x30) {
      return false;
    }
    if (0x3b < ((uint)pbVar6[0xb] + (uint)bVar2 * 10) - 0x210) {
      return false;
    }
    if ((int)uVar1 < 0xc) {
      return false;
    }
    lVar9 = 0xc;
  }
  else {
    if (9 < uVar8) {
      return false;
    }
    if (9 < pbVar6[1] - 0x30) {
      return false;
    }
    iVar5 = (uint)pbVar6[1] + (uint)bVar2 * 10;
    if (99 < iVar5 - 0x210U) {
      return false;
    }
    iVar5 = iVar5 + -0x1e0;
    iVar7 = 0x34;
    if (0x61 < iVar5) {
      iVar7 = -0x30;
    }
    param_1[5] = iVar5 + iVar7;
    if (9 < pbVar6[2] - 0x30) {
      return false;
    }
    if (9 < pbVar6[3] - 0x30) {
      return false;
    }
    iVar5 = (uint)pbVar6[3] + (uint)pbVar6[2] * 10;
    if (0xb < iVar5 - 0x211U) {
      return false;
    }
    param_1[4] = iVar5 + -0x211;
    if (9 < pbVar6[4] - 0x30) {
      return false;
    }
    if (9 < pbVar6[5] - 0x30) {
      return false;
    }
    iVar5 = (uint)pbVar6[5] + (uint)pbVar6[4] * 10;
    if (0x1e < iVar5 - 0x211U) {
      return false;
    }
    param_1[3] = iVar5 + -0x210;
    if (9 < pbVar6[6] - 0x30) {
      return false;
    }
    if (9 < pbVar6[7] - 0x30) {
      return false;
    }
    iVar5 = (uint)pbVar6[7] + (uint)pbVar6[6] * 10;
    if (0x17 < iVar5 - 0x210U) {
      return false;
    }
    param_1[2] = iVar5 + -0x210;
    if (9 < pbVar6[8] - 0x30) {
      return false;
    }
    if (9 < pbVar6[9] - 0x30) {
      return false;
    }
    iVar5 = (uint)pbVar6[9] + (uint)pbVar6[8] * 10;
    if (0x3b < iVar5 - 0x210U) {
      return false;
    }
    param_1[1] = iVar5 + -0x210;
    bVar2 = pbVar6[10];
    uVar8 = bVar2 - 0x2b;
    if ((uVar8 < 0x30) && ((1L << ((ulong)uVar8 & 0x3f) & 0x800000000005U) != 0)) {
      *param_1 = 0;
LAB_00afaf40:
      lVar9 = 10;
    }
    else {
      if (9 < bVar2 - 0x30) {
        return false;
      }
      if (9 < pbVar6[0xb] - 0x30) {
        return false;
      }
      iVar5 = (uint)pbVar6[0xb] + (uint)bVar2 * 10;
      if (0x3b < iVar5 - 0x210U) {
        return false;
      }
      if ((int)uVar1 < 0xc) {
        return false;
      }
      *param_1 = iVar5 + -0x210;
      lVar9 = 0xc;
    }
  }
  bVar2 = pbVar6[lVar9];
  uVar8 = (uint)lVar9;
  if ((bVar2 != 0x2b) && (bVar2 != 0x2d)) {
    if (bVar2 == 0x5a) {
      uVar8 = uVar8 | 1;
    }
LAB_00afaf64:
    return uVar8 == uVar1;
  }
  iVar5 = 1;
  if (bVar2 == 0x2d) {
    iVar5 = -1;
  }
  if ((int)(uVar8 + 5) <= (int)uVar1) {
    uVar8 = uVar8 | 1;
    bVar2 = pbVar6[uVar8];
    uVar3 = bVar2 - 0x30;
    if (param_1 == (int *)0x0) {
      if (((((uVar3 & 0xff) < 10) && (pbVar6[(ulong)uVar8 + 1] - 0x30 < 10)) &&
          (((uint)pbVar6[(ulong)uVar8 + 1] + (uint)bVar2 * 10) - 0x210 < 0xd)) &&
         (((pbVar6[(ulong)uVar8 + 2] - 0x30 < 10 && (pbVar6[(ulong)uVar8 + 3] - 0x30 < 10)) &&
          (((uint)pbVar6[(ulong)uVar8 + 3] + (uint)pbVar6[(ulong)uVar8 + 2] * 10) - 0x210 < 0x3c))))
      {
        uVar8 = uVar8 + 4;
        goto LAB_00afaf64;
      }
    }
    else if ((((uVar3 & 0xff) < 10) && (pbVar6[(ulong)uVar8 + 1] - 0x30 < 10)) &&
            ((uVar3 = ((uint)pbVar6[(ulong)uVar8 + 1] + (uint)bVar2 * 10) - 0x210, uVar3 < 0xd &&
             (((pbVar6[(ulong)uVar8 + 2] - 0x30 < 10 && (pbVar6[(ulong)uVar8 + 3] - 0x30 < 10)) &&
              (uVar4 = ((uint)pbVar6[(ulong)uVar8 + 3] + (uint)pbVar6[(ulong)uVar8 + 2] * 10) -
                       0x210, uVar4 < 0x3c)))))) {
      iVar7 = uVar3 * 0xe10 + uVar4 * 0x3c;
      uVar8 = uVar8 + 4;
      if ((iVar7 == 0) || (iVar5 = OPENSSL_gmtime_adj(param_1,0,(long)(iVar7 * iVar5)), iVar5 != 0))
      goto LAB_00afaf64;
    }
  }
  return false;
}

