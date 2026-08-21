
/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(float, float), float*>(float*, float*,
   bool (*&)(float, float)) */

bool std::__ndk1::__insertion_sort_incomplete<bool(*&)(float,float),float*>
               (float *param_1,float *param_2,_func_bool_float_float *param_3)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  long lVar8;
  float *pfVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    uVar3 = (**(code **)param_3)(param_2[-1],*param_1);
    if ((uVar3 & 1) == 0) {
      return true;
    }
    fVar7 = *param_1;
    *param_1 = param_2[-1];
    goto LAB_015b49d8;
  case 3:
    uVar3 = (**(code **)param_3)(param_1[1],*param_1);
    uVar4 = (**(code **)param_3)(param_2[-1],param_1[1]);
    if ((uVar3 & 1) == 0) {
      if ((uVar4 & 1) == 0) {
        return true;
      }
      fVar7 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = fVar7;
      uVar3 = (**(code **)param_3)(param_1[1],*param_1);
      if ((uVar3 & 1) == 0) {
        return true;
      }
      uVar12 = NEON_rev64(*(undefined8 *)param_1,4);
      *(undefined8 *)param_1 = uVar12;
      return true;
    }
    fVar7 = *param_1;
    if ((uVar4 & 1) != 0) {
      *param_1 = param_2[-1];
      param_2[-1] = fVar7;
      return true;
    }
    *param_1 = param_1[1];
    param_1[1] = fVar7;
    uVar3 = (**(code **)param_3)(param_2[-1],fVar7);
    if ((uVar3 & 1) == 0) {
      return true;
    }
    fVar7 = param_1[1];
    param_1[1] = param_2[-1];
LAB_015b49d8:
    param_2[-1] = fVar7;
    break;
  case 4:
    __sort4<bool(*&)(float,float),float*>(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_015b45a4(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    uVar3 = (**(code **)param_3)(param_1[1],*param_1);
    uVar4 = (**(code **)param_3)(param_1[2],param_1[1]);
    if ((uVar3 & 1) == 0) {
      if ((uVar4 & 1) != 0) {
        uVar3 = *(ulong *)(param_1 + 1);
        uVar12 = NEON_rev64(uVar3,4);
        *(undefined8 *)(param_1 + 1) = uVar12;
        uVar3 = (**(code **)param_3)(uVar3 >> 0x20,*param_1);
        if ((uVar3 & 1) != 0) {
          uVar12 = NEON_rev64(*(undefined8 *)param_1,4);
          *(undefined8 *)param_1 = uVar12;
        }
      }
    }
    else {
      fVar7 = *param_1;
      if ((uVar4 & 1) == 0) {
        *param_1 = param_1[1];
        param_1[1] = fVar7;
        uVar3 = (**(code **)param_3)(param_1[2],fVar7);
        if ((uVar3 & 1) != 0) {
          uVar12 = NEON_rev64(*(undefined8 *)(param_1 + 1),4);
          *(undefined8 *)(param_1 + 1) = uVar12;
        }
      }
      else {
        fVar1 = param_1[2];
        param_1[2] = fVar7;
        *param_1 = fVar1;
      }
    }
    if (param_1 + 3 != param_2) {
      lVar8 = 0;
      iVar10 = 0;
      pfVar5 = param_1 + 3;
      pfVar9 = param_1 + 2;
      do {
        pfVar6 = pfVar5;
        uVar3 = (**(code **)param_3)(*pfVar6,*pfVar9);
        if ((uVar3 & 1) != 0) {
          fVar7 = *pfVar6;
          lVar2 = lVar8;
          do {
            lVar11 = lVar2;
            *(undefined4 *)((long)param_1 + lVar11 + 0xc) =
                 *(undefined4 *)((long)param_1 + lVar11 + 8);
            pfVar5 = param_1;
            if (lVar11 == -8) goto LAB_015b4a24;
            uVar3 = (**(code **)param_3)(fVar7,*(undefined4 *)((long)param_1 + lVar11 + 4));
            lVar2 = lVar11 + -4;
          } while ((uVar3 & 1) != 0);
          pfVar5 = (float *)((long)param_1 + lVar11 + 8);
LAB_015b4a24:
          iVar10 = iVar10 + 1;
          *pfVar5 = fVar7;
          if (iVar10 == 8) {
            return pfVar6 + 1 == param_2;
          }
        }
        lVar8 = lVar8 + 4;
        pfVar5 = pfVar6 + 1;
        pfVar9 = pfVar6;
      } while (pfVar6 + 1 != param_2);
    }
  }
  return true;
}

