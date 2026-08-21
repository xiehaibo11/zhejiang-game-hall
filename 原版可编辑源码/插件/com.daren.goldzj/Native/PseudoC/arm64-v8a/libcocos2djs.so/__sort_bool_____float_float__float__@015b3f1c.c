
/* void std::__ndk1::__sort<bool (*&)(float, float), float*>(float*, float*, bool (*&)(float,
   float)) */

void std::__ndk1::__sort<bool(*&)(float,float),float*>
               (float *param_1,float *param_2,_func_bool_float_float *param_3)

{
  float fVar1;
  float *pfVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 uVar14;
  
LAB_015b3f44:
  pfVar9 = param_2 + -1;
  pfVar10 = param_1;
LAB_015b3f50:
  param_1 = pfVar10;
  lVar8 = (long)param_2 - (long)param_1;
  uVar7 = lVar8 >> 2;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_015b42ac_caseD_0;
  case 2:
    uVar7 = (**(code **)param_3)(param_2[-1],*param_1);
    if ((uVar7 & 1) == 0) {
      return;
    }
    fVar1 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = fVar1;
    return;
  case 3:
    uVar7 = (**(code **)param_3)(param_1[1],*param_1);
    uVar6 = (**(code **)param_3)(param_2[-1],param_1[1]);
    if ((uVar7 & 1) == 0) {
      if ((uVar6 & 1) == 0) {
        return;
      }
      fVar1 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = fVar1;
      uVar7 = (**(code **)param_3)(param_1[1],*param_1);
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar14 = NEON_rev64(*(undefined8 *)param_1,4);
      *(undefined8 *)param_1 = uVar14;
      return;
    }
    fVar1 = *param_1;
    if ((uVar6 & 1) != 0) {
      *param_1 = param_2[-1];
      param_2[-1] = fVar1;
      return;
    }
    *param_1 = param_1[1];
    param_1[1] = fVar1;
    uVar7 = (**(code **)param_3)(param_2[-1],fVar1);
    if ((uVar7 & 1) == 0) {
      return;
    }
    fVar1 = param_1[1];
    param_1[1] = param_2[-1];
    param_2[-1] = fVar1;
    return;
  case 4:
    __sort4<bool(*&)(float,float),float*>(param_1,param_1 + 1,param_1 + 2,pfVar9,param_3);
    return;
  case 5:
    FUN_015b45a4(param_1,param_1 + 1,param_1 + 2,param_1 + 3,pfVar9,param_3);
    return;
  default:
    if (lVar8 < 0x7c) {
      __insertion_sort_3<bool(*&)(float,float),float*>(param_1,param_2,param_3);
      return;
    }
    uVar6 = uVar7;
    if ((long)uVar7 < 0) {
      uVar6 = uVar7 + 1;
    }
    pfVar10 = (float *)((long)param_1 + (uVar6 & 0x7ffffffffffffffe) * 2);
    if (lVar8 < 0xf9d) {
      uVar7 = (**(code **)param_3)(*pfVar10,*param_1);
      uVar6 = (**(code **)param_3)(*pfVar9,*pfVar10);
      if ((uVar7 & 1) == 0) {
        if ((uVar6 & 1) == 0) {
          iVar5 = 0;
        }
        else {
          fVar1 = *pfVar10;
          *pfVar10 = *pfVar9;
          *pfVar9 = fVar1;
          uVar7 = (**(code **)param_3)(*pfVar10,*param_1);
          if ((uVar7 & 1) == 0) goto LAB_015b4204;
          fVar1 = *param_1;
          *param_1 = *pfVar10;
          *pfVar10 = fVar1;
LAB_015b41f4:
          iVar5 = 2;
        }
      }
      else {
        fVar1 = *param_1;
        if ((uVar6 & 1) == 0) {
          *param_1 = *pfVar10;
          *pfVar10 = fVar1;
          uVar7 = (**(code **)param_3)(*pfVar9,fVar1);
          if ((uVar7 & 1) != 0) {
            fVar1 = *pfVar10;
            *pfVar10 = *pfVar9;
            *pfVar9 = fVar1;
            goto LAB_015b41f4;
          }
LAB_015b4204:
          iVar5 = 1;
        }
        else {
          iVar5 = 1;
          *param_1 = *pfVar9;
          *pfVar9 = fVar1;
        }
      }
    }
    else {
      uVar6 = uVar7 + 3;
      if (-1 < (long)uVar7) {
        uVar6 = uVar7;
      }
      iVar5 = FUN_015b45a4(param_1,(long)param_1 + (uVar6 & 0xfffffffffffffffc),pfVar10,
                           (long)pfVar10 + (uVar6 & 0xfffffffffffffffc),pfVar9,param_3);
    }
    uVar7 = (**(code **)param_3)(*param_1,*pfVar10);
    pfVar11 = pfVar9;
    pfVar13 = param_2 + -2;
    if ((uVar7 & 1) == 0) break;
    goto LAB_015b404c;
  }
  while (pfVar11 = pfVar13, param_1 != pfVar11) {
    uVar7 = (**(code **)param_3)(*pfVar11,*pfVar10);
    pfVar13 = pfVar11 + -1;
    if ((uVar7 & 1) != 0) goto code_r0x015b4038;
  }
  pfVar11 = param_1 + 1;
  uVar7 = (**(code **)param_3)(*param_1,*pfVar9);
  if ((uVar7 & 1) == 0) {
    if (pfVar11 == pfVar9) {
      return;
    }
    pfVar11 = param_1 + 2;
    while (uVar7 = (**(code **)param_3)(*param_1,pfVar11[-1]), (uVar7 & 1) == 0) {
      pfVar11 = pfVar11 + 1;
      if (param_2 == pfVar11) {
        return;
      }
    }
    fVar1 = pfVar11[-1];
    pfVar11[-1] = *pfVar9;
    *pfVar9 = fVar1;
  }
  pfVar13 = pfVar9;
  if (pfVar11 == pfVar9) {
    return;
  }
  while( true ) {
    pfVar10 = pfVar11 + -1;
    do {
      pfVar11 = pfVar10;
      pfVar10 = pfVar11 + 1;
      uVar7 = (**(code **)param_3)(*param_1,*pfVar10);
    } while ((uVar7 & 1) == 0);
    pfVar11 = pfVar11 + 2;
    do {
      pfVar13 = pfVar13 + -1;
      uVar7 = (**(code **)param_3)(*param_1,*pfVar13);
    } while ((uVar7 & 1) != 0);
    if (pfVar13 <= pfVar10) break;
    fVar1 = *pfVar10;
    *pfVar10 = *pfVar13;
    *pfVar13 = fVar1;
  }
  goto LAB_015b3f50;
code_r0x015b4038:
  fVar1 = *param_1;
  iVar5 = iVar5 + 1;
  *param_1 = *pfVar11;
  *pfVar11 = fVar1;
LAB_015b404c:
  pfVar13 = param_1 + 1;
  pfVar2 = pfVar10;
  pfVar12 = pfVar13;
  if (pfVar13 < pfVar11) {
    while( true ) {
      pfVar10 = pfVar2;
      pfVar13 = pfVar12 + -1;
      do {
        pfVar12 = pfVar13;
        pfVar13 = pfVar12 + 1;
        uVar7 = (**(code **)param_3)(*pfVar13,*pfVar10);
      } while ((uVar7 & 1) != 0);
      pfVar12 = pfVar12 + 2;
      do {
        pfVar11 = pfVar11 + -1;
        uVar7 = (**(code **)param_3)(*pfVar11,*pfVar10);
      } while ((uVar7 & 1) == 0);
      if (pfVar11 < pfVar13) break;
      fVar1 = *pfVar13;
      iVar5 = iVar5 + 1;
      *pfVar13 = *pfVar11;
      *pfVar11 = fVar1;
      pfVar2 = pfVar11;
      if (pfVar10 != pfVar13) {
        pfVar2 = pfVar10;
      }
    }
  }
  if ((pfVar13 != pfVar10) && (uVar7 = (**(code **)param_3)(*pfVar10,*pfVar13), (uVar7 & 1) != 0)) {
    fVar1 = *pfVar13;
    iVar5 = iVar5 + 1;
    *pfVar13 = *pfVar10;
    *pfVar10 = fVar1;
  }
  if (iVar5 == 0) {
    bVar3 = __insertion_sort_incomplete<bool(*&)(float,float),float*>(param_1,pfVar13,param_3);
    bVar4 = __insertion_sort_incomplete<bool(*&)(float,float),float*>(pfVar13 + 1,param_2,param_3);
    if (bVar4) goto LAB_015b428c;
    pfVar10 = pfVar13 + 1;
    if (bVar3) goto LAB_015b3f50;
  }
  if ((long)param_2 - (long)pfVar13 <= (long)pfVar13 - (long)param_1) {
    __sort<bool(*&)(float,float),float*>(pfVar13 + 1,param_2,param_3);
    param_2 = pfVar13;
    goto LAB_015b3f44;
  }
  __sort<bool(*&)(float,float),float*>(param_1,pfVar13,param_3);
  pfVar10 = pfVar13 + 1;
  goto LAB_015b3f50;
LAB_015b428c:
  param_2 = pfVar13;
  if (bVar3) {
switchD_015b42ac_caseD_0:
    return;
  }
  goto LAB_015b3f44;
}

