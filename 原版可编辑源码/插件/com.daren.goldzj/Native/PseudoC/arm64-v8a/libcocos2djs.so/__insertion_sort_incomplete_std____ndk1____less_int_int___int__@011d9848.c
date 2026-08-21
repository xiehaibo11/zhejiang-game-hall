
/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<int, int>&, int*>(int*, int*,
   std::__ndk1::__less<int, int>&) */

bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<int,int>&,int*>
               (int *param_1,int *param_2,__less *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    iVar6 = *param_1;
    if (param_2[-1] < iVar6) {
      *param_1 = param_2[-1];
      param_2[-1] = iVar6;
    }
    break;
  case 3:
    iVar6 = *param_1;
    iVar1 = param_1[1];
    iVar2 = param_2[-1];
    if (iVar1 < iVar6) {
      if (iVar2 < iVar1) {
        *param_1 = iVar2;
      }
      else {
        *param_1 = iVar1;
        param_1[1] = iVar6;
        if (iVar6 <= param_2[-1]) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = iVar6;
    }
    else if (iVar2 < iVar1) {
      param_1[1] = iVar2;
      param_2[-1] = iVar1;
      iVar6 = *param_1;
      if (param_1[1] < iVar6) {
        *param_1 = param_1[1];
        param_1[1] = iVar6;
      }
    }
    break;
  case 4:
    iVar6 = *param_1;
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    iVar4 = iVar2;
    if (iVar1 < iVar6) {
      if (iVar2 < iVar1) {
        *param_1 = iVar2;
      }
      else {
        *param_1 = iVar1;
        param_1[1] = iVar6;
        if (iVar6 <= iVar2) goto LAB_011d9a4c;
        param_1[1] = iVar2;
      }
      param_1[2] = iVar6;
      iVar4 = iVar6;
    }
    else if (iVar2 < iVar1) {
      param_1[1] = iVar2;
      param_1[2] = iVar1;
      iVar4 = iVar1;
      if (iVar2 < iVar6) {
        *param_1 = iVar2;
        param_1[1] = iVar6;
      }
    }
LAB_011d9a4c:
    if (param_2[-1] < iVar4) {
      param_1[2] = param_2[-1];
      param_2[-1] = iVar4;
      iVar6 = param_1[1];
      iVar1 = param_1[2];
      if (iVar1 < iVar6) {
        iVar2 = *param_1;
        param_1[1] = iVar1;
        param_1[2] = iVar6;
        if (iVar1 < iVar2) {
          *param_1 = iVar1;
          param_1[1] = iVar2;
        }
      }
    }
    break;
  case 5:
    FUN_011d96c0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    iVar6 = *param_1;
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    iVar4 = iVar2;
    if (iVar1 < iVar6) {
      if (iVar2 < iVar1) {
        *param_1 = iVar2;
      }
      else {
        *param_1 = iVar1;
        param_1[1] = iVar6;
        if (iVar6 <= iVar2) goto LAB_011d9994;
        param_1[1] = iVar2;
      }
      param_1[2] = iVar6;
      iVar4 = iVar6;
    }
    else if (iVar2 < iVar1) {
      param_1[1] = iVar2;
      param_1[2] = iVar1;
      iVar4 = iVar1;
      if (iVar2 < iVar6) {
        *param_1 = iVar2;
        param_1[1] = iVar6;
      }
    }
LAB_011d9994:
    if (param_1 + 3 != param_2) {
      iVar6 = 0;
      lVar8 = 0xc;
      piVar7 = param_1 + 3;
      do {
        iVar1 = *piVar7;
        lVar9 = lVar8;
        if (iVar1 < iVar4) {
          do {
            lVar3 = lVar9 + -4;
            *(int *)((long)param_1 + lVar9) = iVar4;
            piVar5 = param_1;
            if (lVar3 == 0) goto LAB_011d99e4;
            iVar4 = *(int *)((long)param_1 + lVar9 + -8);
            lVar9 = lVar3;
          } while (iVar1 < iVar4);
          piVar5 = (int *)((long)param_1 + lVar3);
LAB_011d99e4:
          iVar6 = iVar6 + 1;
          *piVar5 = iVar1;
          if (iVar6 == 8) {
            return piVar7 + 1 == param_2;
          }
        }
        if (piVar7 + 1 == param_2) {
          return true;
        }
        iVar4 = *piVar7;
        lVar8 = lVar8 + 4;
        piVar7 = piVar7 + 1;
      } while( true );
    }
  }
  return true;
}

