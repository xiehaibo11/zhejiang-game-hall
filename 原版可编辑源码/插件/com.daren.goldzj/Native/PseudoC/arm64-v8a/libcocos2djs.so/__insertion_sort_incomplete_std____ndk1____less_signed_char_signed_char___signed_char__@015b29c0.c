
/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<signed char, signed char>&,
   signed char*>(signed char*, signed char*, std::__ndk1::__less<signed char, signed char>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<signed_char,signed_char>&,signed_char*>
               (signed *param_1,signed *param_2,__less *param_3)

{
  signed sVar1;
  signed sVar2;
  signed sVar3;
  long lVar4;
  signed *psVar5;
  signed *psVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  switch((long)param_2 - (long)param_1) {
  case 0:
  case 1:
    break;
  case 2:
    sVar1 = *param_1;
    if ((int)(uint)(byte)param_2[-1] < (int)(char)sVar1) {
      *param_1 = param_2[-1];
      param_2[-1] = sVar1;
    }
    break;
  case 3:
    sVar1 = param_1[1];
    sVar2 = *param_1;
    sVar3 = param_2[-1];
    if ((char)sVar1 < (char)sVar2) {
      if ((int)(uint)(byte)sVar3 < (int)(char)sVar1) {
        *param_1 = sVar3;
      }
      else {
        *param_1 = sVar1;
        param_1[1] = sVar2;
        if ((int)(char)sVar2 <= (int)(uint)(byte)param_2[-1]) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = sVar2;
    }
    else if ((int)(uint)(byte)sVar3 < (int)(char)sVar1) {
      param_1[1] = sVar3;
      param_2[-1] = sVar1;
      sVar1 = *param_1;
      if ((char)param_1[1] < (char)sVar1) {
        *param_1 = param_1[1];
        param_1[1] = sVar1;
      }
    }
    break;
  case 4:
    sVar1 = param_1[1];
    iVar8 = (int)(char)sVar1;
    sVar2 = *param_1;
    sVar3 = param_1[2];
    iVar9 = (int)(char)sVar3;
    if ((char)sVar1 < (char)sVar2) {
      if ((char)sVar3 < (char)sVar1) {
        *param_1 = sVar3;
      }
      else {
        *param_1 = sVar1;
        param_1[1] = sVar2;
        if ((char)sVar2 <= iVar9) goto LAB_015b2bf0;
        param_1[1] = sVar3;
      }
      param_1[2] = sVar2;
      iVar8 = (int)(char)sVar2;
    }
    else if (iVar9 < (char)sVar1) {
      param_1[1] = sVar3;
      param_1[2] = sVar1;
      if (iVar9 < (char)sVar2) {
        *param_1 = sVar3;
        param_1[1] = sVar2;
      }
    }
    else {
LAB_015b2bf0:
      iVar8 = (int)(char)sVar3;
    }
    if ((int)(uint)(byte)param_2[-1] < iVar8) {
      param_1[2] = param_2[-1];
      param_2[-1] = SUB41(iVar8,0);
      sVar1 = param_1[2];
      sVar2 = param_1[1];
      if ((char)sVar1 < (char)sVar2) {
        sVar3 = *param_1;
        param_1[1] = sVar1;
        param_1[2] = sVar2;
        if ((char)sVar1 < (char)sVar3) {
          *param_1 = sVar1;
          param_1[1] = sVar3;
        }
      }
    }
    break;
  case 5:
    FUN_015b2838(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    sVar1 = param_1[1];
    sVar2 = *param_1;
    sVar3 = param_1[2];
    uVar7 = (uint)(char)sVar3;
    iVar8 = (int)(char)sVar3;
    if ((char)sVar1 < (char)sVar2) {
      if ((char)sVar3 < (char)sVar1) {
        *param_1 = sVar3;
      }
      else {
        *param_1 = sVar1;
        param_1[1] = sVar2;
        if ((char)sVar2 <= iVar8) goto LAB_015b2b30;
        param_1[1] = sVar3;
      }
      param_1[2] = sVar2;
      uVar7 = (int)(char)sVar2;
    }
    else if (iVar8 < (char)sVar1) {
      param_1[1] = sVar3;
      param_1[2] = sVar1;
      uVar7 = (int)(char)sVar1;
      if (iVar8 < (char)sVar2) {
        *param_1 = sVar3;
        param_1[1] = sVar2;
      }
    }
LAB_015b2b30:
    if (param_1 + 3 != param_2) {
      lVar10 = 0;
      iVar8 = 0;
      psVar6 = param_1 + 3;
      do {
        sVar1 = *psVar6;
        lVar4 = lVar10;
        if ((char)sVar1 < (char)uVar7) {
          do {
            lVar11 = lVar4;
            param_1[lVar11 + 3] = SUB41(uVar7,0);
            psVar5 = param_1;
            if (lVar11 == -2) goto LAB_015b2b84;
            uVar7 = (uint)(char)param_1[lVar11 + 1];
            lVar4 = lVar11 + -1;
          } while ((char)sVar1 < (char)param_1[lVar11 + 1]);
          psVar5 = param_1 + lVar11 + 2;
LAB_015b2b84:
          iVar8 = iVar8 + 1;
          *psVar5 = sVar1;
          if (iVar8 == 8) {
            return psVar6 + 1 == param_2;
          }
        }
        if (psVar6 + 1 == param_2) {
          return true;
        }
        uVar7 = (uint)(byte)*psVar6;
        lVar10 = lVar10 + 1;
        psVar6 = psVar6 + 1;
      } while( true );
    }
  }
  return true;
}

