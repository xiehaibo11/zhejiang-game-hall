
/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<unsigned int, unsigned int>&,
   unsigned int*>(unsigned int*, unsigned int*, std::__ndk1::__less<unsigned int, unsigned int>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<unsigned_int,unsigned_int>&,unsigned_int*>
               (uint *param_1,uint *param_2,__less *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    uVar1 = *param_1;
    if (param_2[-1] < uVar1) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar1;
    }
    break;
  case 3:
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_2[-1];
    if (uVar2 < uVar1) {
      if (uVar3 < uVar2) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar2;
        param_1[1] = uVar1;
        if (uVar1 <= param_2[-1]) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = uVar1;
    }
    else if (uVar3 < uVar2) {
      param_1[1] = uVar3;
      param_2[-1] = uVar2;
      uVar1 = *param_1;
      if (param_1[1] < uVar1) {
        *param_1 = param_1[1];
        param_1[1] = uVar1;
      }
    }
    break;
  case 4:
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar5 = uVar3;
    if (uVar2 < uVar1) {
      if (uVar3 < uVar2) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar2;
        param_1[1] = uVar1;
        if (uVar1 <= uVar3) goto LAB_014acad8;
        param_1[1] = uVar3;
      }
      param_1[2] = uVar1;
      uVar5 = uVar1;
    }
    else if (uVar3 < uVar2) {
      param_1[1] = uVar3;
      param_1[2] = uVar2;
      uVar5 = uVar2;
      if (uVar3 < uVar1) {
        *param_1 = uVar3;
        param_1[1] = uVar1;
      }
    }
LAB_014acad8:
    if (param_2[-1] < uVar5) {
      param_1[2] = param_2[-1];
      param_2[-1] = uVar5;
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      if (uVar2 < uVar1) {
        uVar3 = *param_1;
        param_1[1] = uVar2;
        param_1[2] = uVar1;
        if (uVar2 < uVar3) {
          *param_1 = uVar2;
          param_1[1] = uVar3;
        }
      }
    }
    break;
  case 5:
    FUN_014ac74c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar5 = uVar3;
    if (uVar2 < uVar1) {
      if (uVar3 < uVar2) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar2;
        param_1[1] = uVar1;
        if (uVar1 <= uVar3) goto LAB_014aca20;
        param_1[1] = uVar3;
      }
      param_1[2] = uVar1;
      uVar5 = uVar1;
    }
    else if (uVar3 < uVar2) {
      param_1[1] = uVar3;
      param_1[2] = uVar2;
      uVar5 = uVar2;
      if (uVar3 < uVar1) {
        *param_1 = uVar3;
        param_1[1] = uVar1;
      }
    }
LAB_014aca20:
    if (param_1 + 3 != param_2) {
      iVar7 = 0;
      lVar9 = 0xc;
      puVar8 = param_1 + 3;
      do {
        uVar1 = *puVar8;
        lVar10 = lVar9;
        if (uVar1 < uVar5) {
          do {
            lVar4 = lVar10 + -4;
            *(uint *)((long)param_1 + lVar10) = uVar5;
            puVar6 = param_1;
            if (lVar4 == 0) goto LAB_014aca70;
            uVar5 = *(uint *)((long)param_1 + lVar10 + -8);
            lVar10 = lVar4;
          } while (uVar1 < uVar5);
          puVar6 = (uint *)((long)param_1 + lVar4);
LAB_014aca70:
          iVar7 = iVar7 + 1;
          *puVar6 = uVar1;
          if (iVar7 == 8) {
            return puVar8 + 1 == param_2;
          }
        }
        if (puVar8 + 1 == param_2) {
          return true;
        }
        uVar5 = *puVar8;
        lVar9 = lVar9 + 4;
        puVar8 = puVar8 + 1;
      } while( true );
    }
  }
  return true;
}

