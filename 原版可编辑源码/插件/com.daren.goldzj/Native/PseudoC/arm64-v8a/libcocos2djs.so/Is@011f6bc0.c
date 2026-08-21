
/* unibrow::WhiteSpace::Is(unsigned int) */

bool unibrow::WhiteSpace::Is(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = param_1 >> 0xd;
  if (uVar2 == 7) {
    return (param_1 & 0x1fff) == 0x1eff;
  }
  if (uVar2 == 1) {
    iVar5 = 0;
    uVar2 = param_1 & 0x1fff;
    iVar8 = 5;
LAB_011f6c7c:
    iVar3 = iVar8 + -1;
    iVar1 = iVar5;
LAB_011f6c80:
    iVar5 = iVar1;
    iVar8 = iVar5 + ((uint)(iVar3 - iVar5) >> 1);
    iVar1 = iVar8 + 1;
LAB_011f6c94:
    iVar6 = iVar3;
    if (iVar3 == iVar5) goto LAB_011f6d34;
    uVar7 = (&DAT_019e4ac8)[iVar8] & 0x3fffffff;
    if (uVar7 <= uVar2) {
      if (iVar1 == 5) {
        iVar6 = 4;
      }
      else {
        iVar6 = iVar8;
        if (((&DAT_019e4ac8)[iVar1] & 0x3fffffff) <= uVar2) goto LAB_011f6cc4;
      }
      goto LAB_011f6d34;
    }
LAB_011f6cc4:
    if (uVar2 <= uVar7) goto code_r0x011f6ccc;
    goto LAB_011f6c80;
  }
  if (uVar2 != 0) {
    return false;
  }
  iVar5 = 0;
  uVar2 = param_1 & 0x1fff;
  iVar8 = 6;
LAB_011f6bec:
  iVar3 = iVar8 + -1;
  iVar1 = iVar5;
  do {
    iVar5 = iVar1;
    iVar8 = iVar5 + ((uint)(iVar3 - iVar5) >> 1);
    iVar1 = iVar8 + 1;
    while( true ) {
      iVar6 = iVar3;
      if (iVar3 == iVar5) goto LAB_011f6d08;
      uVar7 = (&DAT_019e4ab0)[iVar8] & 0x3fffffff;
      if (uVar7 <= uVar2) {
        if (iVar1 == 6) {
          iVar6 = 5;
          goto LAB_011f6d08;
        }
        iVar6 = iVar8;
        if (uVar2 < ((&DAT_019e4ab0)[iVar1] & 0x3fffffff)) goto LAB_011f6d08;
      }
      if (uVar7 < uVar2) break;
      if (uVar2 < uVar7) {
        iVar6 = iVar5;
        if (iVar8 == 0) {
LAB_011f6d08:
          uVar7 = (&DAT_019e4ab0)[iVar6] & 0x3fffffff;
          if (uVar7 == uVar2) {
            return true;
          }
          bVar4 = iVar6 == 1;
LAB_011f6d50:
          return (bool)(bVar4 & uVar7 < (param_1 & 0x1fff));
        }
        goto LAB_011f6bec;
      }
    }
  } while( true );
code_r0x011f6ccc:
  if (uVar2 < uVar7) {
    iVar6 = iVar5;
    if (iVar8 != 0) goto LAB_011f6c7c;
LAB_011f6d34:
    uVar7 = (&DAT_019e4ac8)[iVar6] & 0x3fffffff;
    if (uVar7 == uVar2) {
      return true;
    }
    bVar4 = iVar6 == 0;
    goto LAB_011f6d50;
  }
  goto LAB_011f6c94;
}

