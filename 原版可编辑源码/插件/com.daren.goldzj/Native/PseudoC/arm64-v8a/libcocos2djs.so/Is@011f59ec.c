
/* unibrow::Uppercase::Is(unsigned int) */

uint unibrow::Uppercase::Is(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  switch(param_1 >> 0xd) {
  case 0:
    iVar5 = 0;
    uVar2 = param_1 & 0x1fff;
    iVar8 = 0x1c7;
    break;
  case 1:
    iVar5 = 0;
    uVar2 = param_1 & 0x1fff;
    iVar8 = 0x56;
LAB_011f5aa8:
    iVar3 = iVar8 + -1;
    iVar1 = iVar5;
LAB_011f5aac:
    iVar5 = iVar1;
    iVar8 = iVar5 + ((uint)(iVar3 - iVar5) >> 1);
    iVar1 = iVar8 + 1;
LAB_011f5ac0:
    iVar6 = iVar3;
    if (iVar3 == iVar5) goto LAB_011f5c58;
    uVar7 = (&DAT_019e2ea0)[iVar8] & 0x3fffffff;
    if (uVar7 <= uVar2) {
      if (iVar1 == 0x56) {
        iVar6 = 0x55;
      }
      else {
        iVar6 = iVar8;
        if (((&DAT_019e2ea0)[iVar1] & 0x3fffffff) <= uVar2) goto LAB_011f5af0;
      }
      goto LAB_011f5c58;
    }
LAB_011f5af0:
    if (uVar2 <= uVar7) goto code_r0x011f5af8;
    goto LAB_011f5aac;
  default:
    return 0;
  case 5:
    iVar5 = 0;
    uVar2 = param_1 & 0x1fff;
    iVar8 = 0x65;
LAB_011f5b24:
    iVar3 = iVar8 + -1;
    iVar1 = iVar5;
LAB_011f5b28:
    iVar5 = iVar1;
    iVar8 = iVar5 + ((uint)(iVar3 - iVar5) >> 1);
    iVar1 = iVar8 + 1;
LAB_011f5b3c:
    iVar6 = iVar3;
    if (iVar3 == iVar5) goto LAB_011f5c7c;
    uVar7 = (&DAT_019e2ff8)[iVar8] & 0x3fffffff;
    if (uVar7 <= uVar2) {
      if (iVar1 == 0x65) {
        iVar6 = 100;
      }
      else {
        iVar6 = iVar8;
        if (((&DAT_019e2ff8)[iVar1] & 0x3fffffff) <= uVar2) goto LAB_011f5b6c;
      }
      goto LAB_011f5c7c;
    }
LAB_011f5b6c:
    if (uVar2 <= uVar7) goto code_r0x011f5b74;
    goto LAB_011f5b28;
  case 7:
    iVar5 = 0;
    uVar2 = param_1 & 0x1fff;
    iVar8 = 2;
LAB_011f5ba0:
    iVar3 = iVar8 + -1;
    iVar1 = iVar5;
    do {
      iVar5 = iVar1;
      iVar8 = iVar5 + ((uint)(iVar3 - iVar5) >> 1);
      iVar1 = iVar8 + 1;
      while( true ) {
        iVar6 = iVar3;
        if (iVar3 == iVar5) goto LAB_011f5cb0;
        uVar7 = (&DAT_019e318c)[iVar8] & 0x3fffffff;
        if (uVar7 <= uVar2) {
          if (iVar1 == 2) {
            iVar6 = 1;
            goto LAB_011f5cb0;
          }
          iVar6 = iVar8;
          if (uVar2 < ((&DAT_019e318c)[iVar1] & 0x3fffffff)) goto LAB_011f5cb0;
        }
        if (uVar7 < uVar2) break;
        if (uVar2 < uVar7) {
          iVar6 = iVar5;
          if (iVar8 == 0) {
LAB_011f5cb0:
            if (((&DAT_019e318c)[iVar6] & 0x3fffffff) != uVar2) {
              return (uint)(iVar6 == 0 && ((&DAT_019e318c)[iVar6] & 0x3fffffff) < uVar2);
            }
            return 1;
          }
          goto LAB_011f5ba0;
        }
      }
    } while( true );
  }
LAB_011f5a2c:
  iVar3 = iVar8 + -1;
  iVar1 = iVar5;
  do {
    iVar5 = iVar1;
    iVar8 = iVar5 + ((uint)(iVar3 - iVar5) >> 1);
    iVar1 = iVar8 + 1;
    while( true ) {
      iVar6 = iVar3;
      if (iVar3 == iVar5) goto LAB_011f5c34;
      uVar7 = (&DAT_019e2784)[iVar8] & 0x3fffffff;
      if (uVar7 <= uVar2) {
        if (iVar1 == 0x1c7) {
          iVar6 = 0x1c6;
          goto LAB_011f5c34;
        }
        iVar6 = iVar8;
        if (uVar2 < ((&DAT_019e2784)[iVar1] & 0x3fffffff)) goto LAB_011f5c34;
      }
      if (uVar7 < uVar2) break;
      if (uVar2 < uVar7) {
        iVar6 = iVar5;
        if (iVar8 == 0) {
LAB_011f5c34:
          uVar7 = (&DAT_019e2784)[iVar6];
          bVar4 = uVar2 <= (uVar7 & 0x3fffffff);
          if ((uVar7 & 0x3fffffff) == uVar2) {
            return 1;
          }
LAB_011f5c94:
          return (uint)!bVar4 & (uVar7 & 0x40000000) >> 0x1e;
        }
        goto LAB_011f5a2c;
      }
    }
  } while( true );
code_r0x011f5b74:
  if (uVar2 < uVar7) {
    iVar6 = iVar5;
    if (iVar8 != 0) goto LAB_011f5b24;
LAB_011f5c7c:
    uVar7 = (&DAT_019e2ff8)[iVar6];
    bVar4 = uVar2 <= (uVar7 & 0x3fffffff);
    if ((uVar7 & 0x3fffffff) == uVar2) {
      return 1;
    }
    goto LAB_011f5c94;
  }
  goto LAB_011f5b3c;
code_r0x011f5af8:
  if (uVar2 < uVar7) {
    iVar6 = iVar5;
    if (iVar8 != 0) goto LAB_011f5aa8;
LAB_011f5c58:
    uVar7 = (&DAT_019e2ea0)[iVar6];
    bVar4 = uVar2 <= (uVar7 & 0x3fffffff);
    if ((uVar7 & 0x3fffffff) == uVar2) {
      return 1;
    }
    goto LAB_011f5c94;
  }
  goto LAB_011f5ac0;
}

