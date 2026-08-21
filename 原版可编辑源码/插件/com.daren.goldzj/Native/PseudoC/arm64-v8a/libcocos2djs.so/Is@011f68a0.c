
/* unibrow::ID_Continue::Is(unsigned int) */

uint unibrow::ID_Continue::Is(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  
  switch(param_1 >> 0xd) {
  case 0:
    iVar4 = 0;
    uVar2 = param_1 & 0x1fff;
    iVar8 = 0x13b;
    break;
  case 1:
    iVar4 = 0;
    uVar2 = param_1 & 0x1fff;
    iVar8 = 0x13;
LAB_011f695c:
    iVar3 = iVar8 + -1;
    iVar1 = iVar4;
    do {
      iVar4 = iVar1;
      iVar8 = iVar4 + ((uint)(iVar3 - iVar4) >> 1);
      iVar1 = iVar8 + 1;
      while( true ) {
        iVar5 = iVar3;
        if (iVar3 == iVar4) goto LAB_011f6b1c;
        uVar7 = (&DAT_019e4938)[iVar8] & 0x3fffffff;
        if (uVar7 <= uVar2) {
          if (iVar1 == 0x13) {
            iVar5 = 0x12;
            goto LAB_011f6b1c;
          }
          iVar5 = iVar8;
          if (uVar2 < ((&DAT_019e4938)[iVar1] & 0x3fffffff)) goto LAB_011f6b1c;
        }
        if (uVar7 < uVar2) break;
        if (uVar2 < uVar7) {
          iVar5 = iVar4;
          if (iVar8 == 0) {
LAB_011f6b1c:
            uVar7 = (&DAT_019e4938)[iVar5] & 0x3fffffff;
            if (uVar7 == uVar2) {
              return 1;
            }
            uVar6 = (ulong)iVar5;
            uVar9 = 0x2a525;
LAB_011f6bac:
            return (uint)(uVar9 >> (uVar6 & 0x3f)) & (uint)(uVar7 < (param_1 & 0x1fff));
          }
          goto LAB_011f695c;
        }
      }
    } while( true );
  default:
    return 0;
  case 5:
    iVar4 = 0;
    uVar2 = param_1 & 0x1fff;
    iVar8 = 0x3f;
LAB_011f69d8:
    iVar3 = iVar8 + -1;
    iVar1 = iVar4;
LAB_011f69dc:
    iVar4 = iVar1;
    iVar8 = iVar4 + ((uint)(iVar3 - iVar4) >> 1);
    iVar1 = iVar8 + 1;
LAB_011f69f0:
    iVar5 = iVar3;
    if (iVar3 == iVar4) goto LAB_011f6b50;
    uVar7 = (&DAT_019e4984)[iVar8] & 0x3fffffff;
    if (uVar7 <= uVar2) {
      if (iVar1 == 0x3f) {
        iVar5 = 0x3e;
      }
      else {
        iVar5 = iVar8;
        if (((&DAT_019e4984)[iVar1] & 0x3fffffff) <= uVar2) goto LAB_011f6a20;
      }
      goto LAB_011f6b50;
    }
LAB_011f6a20:
    if (uVar2 <= uVar7) goto code_r0x011f6a28;
    goto LAB_011f69dc;
  case 7:
    iVar4 = 0;
    uVar2 = param_1 & 0x1fff;
    iVar8 = 0xc;
LAB_011f6a54:
    iVar3 = iVar8 + -1;
    iVar1 = iVar4;
LAB_011f6a58:
    iVar4 = iVar1;
    iVar8 = iVar4 + ((uint)(iVar3 - iVar4) >> 1);
    iVar1 = iVar8 + 1;
LAB_011f6a6c:
    iVar5 = iVar3;
    if (iVar3 == iVar4) goto LAB_011f6b8c;
    uVar7 = (&DAT_019e4a80)[iVar8] & 0x3fffffff;
    if (uVar7 <= uVar2) {
      if (iVar1 == 0xc) {
        iVar5 = 0xb;
      }
      else {
        iVar5 = iVar8;
        if (((&DAT_019e4a80)[iVar1] & 0x3fffffff) <= uVar2) goto LAB_011f6a9c;
      }
      goto LAB_011f6b8c;
    }
LAB_011f6a9c:
    if (uVar2 <= uVar7) goto code_r0x011f6aa4;
    goto LAB_011f6a58;
  }
LAB_011f68e0:
  iVar3 = iVar8 + -1;
  iVar1 = iVar4;
  do {
    iVar4 = iVar1;
    iVar8 = iVar4 + ((uint)(iVar3 - iVar4) >> 1);
    iVar1 = iVar8 + 1;
    while( true ) {
      iVar5 = iVar3;
      if (iVar3 == iVar4) goto LAB_011f6ae8;
      uVar7 = (&DAT_019e444c)[iVar8] & 0x3fffffff;
      if (uVar7 <= uVar2) {
        if (iVar1 == 0x13b) {
          iVar5 = 0x13a;
          goto LAB_011f6ae8;
        }
        iVar5 = iVar8;
        if (uVar2 < ((&DAT_019e444c)[iVar1] & 0x3fffffff)) goto LAB_011f6ae8;
      }
      if (uVar7 < uVar2) break;
      if (uVar2 < uVar7) {
        iVar5 = iVar4;
        if (iVar8 == 0) {
LAB_011f6ae8:
          uVar7 = (&DAT_019e444c)[iVar5] & 0x3fffffff;
          if (uVar7 != uVar2) {
            return (uint)(uVar7 < uVar2) & ((&DAT_019e444c)[iVar5] & 0x40000000) >> 0x1e;
          }
          return 1;
        }
        goto LAB_011f68e0;
      }
    }
  } while( true );
code_r0x011f6aa4:
  if (uVar2 < uVar7) {
    iVar5 = iVar4;
    if (iVar8 != 0) goto LAB_011f6a54;
LAB_011f6b8c:
    uVar7 = (&DAT_019e4a80)[iVar5] & 0x3fffffff;
    if (uVar7 == uVar2) {
      return 1;
    }
    uVar6 = (ulong)iVar5;
    uVar9 = 0x2aa;
    goto LAB_011f6bac;
  }
  goto LAB_011f6a6c;
code_r0x011f6a28:
  if (uVar2 < uVar7) {
    iVar5 = iVar4;
    if (iVar8 != 0) goto LAB_011f69d8;
LAB_011f6b50:
    uVar7 = (&DAT_019e4984)[iVar5] & 0x3fffffff;
    if (uVar7 == uVar2) {
      return 1;
    }
    uVar6 = (ulong)iVar5;
    uVar9 = 0x2aa54a94aaaaa849;
    goto LAB_011f6bac;
  }
  goto LAB_011f69f0;
}

