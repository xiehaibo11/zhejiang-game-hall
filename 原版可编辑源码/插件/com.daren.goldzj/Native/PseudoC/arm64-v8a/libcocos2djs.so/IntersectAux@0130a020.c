
/* v8::internal::compiler::Type::IntersectAux(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::UnionType*, int,
   v8::internal::compiler::RangeType::Limits*, v8::internal::Zone*) */

ulong v8::internal::compiler::Type::IntersectAux
                (int *param_1,int *param_2,undefined8 param_3,uint param_4,double *param_5,
                undefined8 param_6)

{
  int **ppiVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int *local_60;
  int *apiStack_58 [11];
  
  do {
    piVar5 = param_2;
    param_2 = param_1;
    local_60 = piVar5;
    apiStack_58[0] = param_2;
    if ((((ulong)param_2 & 1) == 0) && (*param_2 == 3)) {
      uVar2 = param_2[1];
      if (0 < (int)uVar2) {
        lVar7 = 0;
        do {
          param_4 = IntersectAux(*(undefined8 *)(*(long *)(param_2 + 2) + lVar7),piVar5,param_3,
                                 param_4,param_5,param_6);
          lVar7 = lVar7 + 8;
        } while ((ulong)uVar2 * 8 - lVar7 != 0);
      }
      goto LAB_0130a350;
    }
    if ((((ulong)piVar5 & 1) == 0) && (*piVar5 == 3)) {
      uVar2 = piVar5[1];
      if (0 < (int)uVar2) {
        lVar7 = 0;
        do {
          param_4 = IntersectAux(param_2,*(undefined8 *)(*(long *)(piVar5 + 2) + lVar7),param_3,
                                 param_4,param_5,param_6);
          lVar7 = lVar7 + 8;
        } while ((ulong)uVar2 * 8 - lVar7 != 0);
      }
      goto LAB_0130a350;
    }
    uVar2 = BitsetLub((Type *)apiStack_58);
    uVar3 = BitsetLub((Type *)&local_60);
    if ((uVar3 & uVar2) == 0) goto LAB_0130a350;
    if ((((ulong)param_2 & 1) == 0) && (*param_2 == 4)) {
      if (((ulong)piVar5 & 1) == 0) {
        if (*piVar5 == 4) {
          dVar9 = *(double *)(piVar5 + 2);
          if (*(double *)(piVar5 + 2) <= *(double *)(param_2 + 2)) {
            dVar9 = *(double *)(param_2 + 2);
          }
          dVar11 = *(double *)(piVar5 + 4);
          if (*(double *)(param_2 + 4) <= *(double *)(piVar5 + 4)) {
            dVar11 = *(double *)(param_2 + 4);
          }
          if (dVar9 <= dVar11) {
            dVar8 = *param_5;
            dVar10 = param_5[1];
            dVar12 = dVar8;
            if (dVar9 <= dVar8) {
              dVar12 = dVar9;
            }
            dVar13 = dVar10;
            if (dVar10 <= dVar11) {
              dVar13 = dVar11;
            }
            if (dVar8 <= dVar10) {
              dVar9 = dVar12;
              dVar11 = dVar13;
            }
            *param_5 = dVar9;
            param_5[1] = dVar11;
          }
        }
        goto LAB_0130a350;
      }
      uVar2 = (uint)piVar5 & 0x45e;
      dVar9 = 0.0;
      if (((ulong)piVar5 & 0x45e) == 0) {
        dVar11 = 1.0;
        goto LAB_0130a314;
      }
      if ((uVar2 | 0x10) == uVar2) {
        dVar11 = -INFINITY;
        dVar9 = INFINITY;
        goto LAB_0130a314;
      }
      if ((uVar2 | 8) == uVar2) {
        lVar7 = 1;
LAB_0130a2d4:
        dVar11 = *(double *)(BitsetType::BoundariesArray + lVar7 * 0x10 + 8);
      }
      else {
        if ((uVar2 | 0x40) == uVar2) {
          lVar7 = 2;
          goto LAB_0130a2d4;
        }
        if ((uVar2 | 0x400) == uVar2) {
          lVar7 = 3;
          goto LAB_0130a2d4;
        }
        if ((uVar2 | 2) == uVar2) {
          lVar7 = 4;
          goto LAB_0130a2d4;
        }
        dVar11 = 0.0;
        if ((uVar2 | 4) == uVar2) {
          lVar7 = 5;
          goto LAB_0130a2d4;
        }
      }
      lVar7 = 0;
      goto LAB_0130a2e0;
    }
  } while ((((ulong)piVar5 & 1) == 0) && (param_1 = piVar5, *piVar5 == 4));
  if ((((uint)piVar5 | (uint)param_2) & 1) == 0) {
    uVar4 = SimplyEquals((Type *)apiStack_58,piVar5);
    if ((uVar4 & 1) == 0) goto LAB_0130a350;
  }
  else {
    ppiVar1 = apiStack_58;
    if (((ulong)param_2 & 1) != 0) {
      ppiVar1 = &local_60;
    }
    param_2 = *ppiVar1;
  }
  uVar4 = AddToUnion(param_2,param_3,param_4,param_6);
  return uVar4;
  while (lVar7 = lVar6 + -0x10,
        (*(uint *)(BitsetType::BoundariesArray + lVar6 + 0x50) | uVar2) != uVar2) {
LAB_0130a2e0:
    lVar6 = lVar7;
    if (lVar6 + -0x10 == -0x70) goto LAB_0130a314;
  }
  dVar9 = *(double *)(BitsetType::BoundariesArray + lVar6 + 0x68) + -1.0;
LAB_0130a314:
  if (dVar11 <= *(double *)(param_2 + 2)) {
    dVar11 = *(double *)(param_2 + 2);
  }
  if (*(double *)(param_2 + 4) <= dVar9) {
    dVar9 = *(double *)(param_2 + 4);
  }
  if (dVar11 <= dVar9) {
    dVar8 = *param_5;
    dVar10 = param_5[1];
    dVar12 = dVar8;
    if (dVar11 <= dVar8) {
      dVar12 = dVar11;
    }
    dVar13 = dVar10;
    if (dVar10 <= dVar9) {
      dVar13 = dVar9;
    }
    if (dVar8 <= dVar10) {
      dVar11 = dVar12;
      dVar9 = dVar13;
    }
    *param_5 = dVar11;
    param_5[1] = dVar9;
  }
LAB_0130a350:
  return (ulong)param_4;
}

