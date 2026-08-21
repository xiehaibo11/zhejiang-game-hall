
/* void std::__ndk1::__insertion_sort_3<bool (*&)(float, float), float*>(float*, float*, bool
   (*&)(float, float)) */

void std::__ndk1::__insertion_sort_3<bool(*&)(float,float),float*>
               (float *param_1,float *param_2,_func_bool_float_float *param_3)

{
  float fVar1;
  float fVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  uVar4 = (**(code **)param_3)(param_1[1],*param_1);
  uVar5 = (**(code **)param_3)(param_1[2],param_1[1]);
  if ((uVar4 & 1) == 0) {
    if ((uVar5 & 1) != 0) {
      uVar11 = *(ulong *)(param_1 + 1);
      uVar12 = NEON_rev64(uVar11,4);
      *(undefined8 *)(param_1 + 1) = uVar12;
      uVar4 = (**(code **)param_3)(uVar11 >> 0x20,*param_1);
      if ((uVar4 & 1) != 0) {
        uVar12 = NEON_rev64(*(undefined8 *)param_1,4);
        *(undefined8 *)param_1 = uVar12;
      }
    }
  }
  else {
    fVar1 = *param_1;
    if ((uVar5 & 1) == 0) {
      *param_1 = param_1[1];
      param_1[1] = fVar1;
      uVar4 = (**(code **)param_3)(param_1[2],fVar1);
      if ((uVar4 & 1) != 0) {
        uVar12 = NEON_rev64(*(undefined8 *)(param_1 + 1),4);
        *(undefined8 *)(param_1 + 1) = uVar12;
      }
    }
    else {
      fVar2 = param_1[2];
      param_1[2] = fVar1;
      *param_1 = fVar2;
    }
  }
  if (param_1 + 3 != param_2) {
    lVar8 = 0;
    pfVar6 = param_1 + 3;
    pfVar9 = param_1 + 2;
    do {
      pfVar7 = pfVar6;
      uVar4 = (**(code **)param_3)(*pfVar7,*pfVar9);
      if ((uVar4 & 1) != 0) {
        fVar1 = *pfVar7;
        lVar3 = lVar8;
        do {
          lVar10 = lVar3;
          *(undefined4 *)((long)param_1 + lVar10 + 0xc) =
               *(undefined4 *)((long)param_1 + lVar10 + 8);
          pfVar6 = param_1;
          if (lVar10 == -8) goto LAB_015b4784;
          uVar4 = (**(code **)param_3)(fVar1,*(undefined4 *)((long)param_1 + lVar10 + 4));
          lVar3 = lVar10 + -4;
        } while ((uVar4 & 1) != 0);
        pfVar6 = (float *)((long)param_1 + lVar10 + 8);
LAB_015b4784:
        *pfVar6 = fVar1;
      }
      lVar8 = lVar8 + 4;
      pfVar6 = pfVar7 + 1;
      pfVar9 = pfVar7;
    } while (pfVar7 + 1 != param_2);
  }
  return;
}

