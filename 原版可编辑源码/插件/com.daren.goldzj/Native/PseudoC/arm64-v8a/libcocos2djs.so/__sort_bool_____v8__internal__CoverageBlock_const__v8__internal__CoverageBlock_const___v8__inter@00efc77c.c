
/* void std::__ndk1::__sort<bool (*&)(v8::internal::CoverageBlock const&,
   v8::internal::CoverageBlock const&), v8::internal::CoverageBlock*>(v8::internal::CoverageBlock*,
   v8::internal::CoverageBlock*, bool (*&)(v8::internal::CoverageBlock const&,
   v8::internal::CoverageBlock const&)) */

void std::__ndk1::
     __sort<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
               (CoverageBlock *param_1,CoverageBlock *param_2,
               _func_bool_CoverageBlock_ptr_CoverageBlock_ptr *param_3)

{
  CoverageBlock *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  CoverageBlock *pCVar12;
  CoverageBlock *pCVar13;
  CoverageBlock *pCVar14;
  CoverageBlock *pCVar15;
  CoverageBlock *pCVar16;
  CoverageBlock *pCVar17;
  CoverageBlock *pCVar18;
  undefined8 local_70;
  undefined4 local_68;
  
LAB_00efc7b4:
  pCVar12 = param_2 + -0xc;
  pCVar13 = param_1;
LAB_00efc7c4:
  param_1 = pCVar13;
  uVar8 = (long)param_2 - (long)param_1;
  switch(((long)uVar8 >> 2) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_00efcdb8_caseD_0;
  case 2:
    uVar8 = (**(code **)param_3)(pCVar12,param_1);
    if ((uVar8 & 1) == 0) {
      return;
    }
    break;
  case 3:
    pCVar13 = param_1 + 0xc;
    uVar8 = (**(code **)param_3)(pCVar13,param_1);
    uVar7 = (**(code **)param_3)(pCVar12,pCVar13);
    if ((uVar8 & 1) == 0) {
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      uVar10 = *(undefined8 *)pCVar13;
      uVar11 = *(undefined8 *)pCVar12;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)pCVar13 = uVar11;
      *(undefined4 *)(param_2 + -4) = uVar2;
      *(undefined8 *)pCVar12 = uVar10;
      goto LAB_00efcfc0;
    }
    if ((uVar7 & 1) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 8);
      uVar10 = *(undefined8 *)param_1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
      *(undefined8 *)param_1 = *(undefined8 *)pCVar13;
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      *(undefined8 *)pCVar13 = uVar10;
      uVar8 = (**(code **)param_3)(pCVar12,pCVar13);
      if ((uVar8 & 1) == 0) {
        return;
      }
      local_68 = *(undefined4 *)(param_1 + 0x14);
      local_70 = *(undefined8 *)pCVar13;
      uVar10 = *(undefined8 *)pCVar12;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)pCVar13 = uVar10;
      goto LAB_00efce50;
    }
    break;
  case 4:
    __sort4<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
              (param_1,param_1 + 0xc,param_1 + 0x18,pCVar12,param_3);
    return;
  case 5:
    pCVar13 = param_1 + 0xc;
    pCVar18 = param_1 + 0x18;
    pCVar15 = param_1 + 0x24;
    __sort4<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
              (param_1,pCVar13,pCVar18,pCVar15,param_3);
    uVar8 = (**(code **)param_3)(pCVar12,pCVar15);
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    uVar10 = *(undefined8 *)pCVar15;
    uVar11 = *(undefined8 *)pCVar12;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + -4);
    *(undefined8 *)pCVar15 = uVar11;
    *(undefined4 *)(param_2 + -4) = uVar2;
    *(undefined8 *)pCVar12 = uVar10;
    uVar8 = (**(code **)param_3)(pCVar15,pCVar18);
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar10 = *(undefined8 *)pCVar18;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined8 *)pCVar18 = *(undefined8 *)pCVar15;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined8 *)pCVar15 = uVar10;
    uVar8 = (**(code **)param_3)(pCVar18,pCVar13);
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar10 = *(undefined8 *)pCVar13;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)pCVar13 = *(undefined8 *)pCVar18;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)pCVar18 = uVar10;
LAB_00efcfc0:
    pCVar13 = param_1 + 0xc;
    uVar8 = (**(code **)param_3)(pCVar13,param_1);
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar10 = *(undefined8 *)param_1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
    *(undefined8 *)param_1 = *(undefined8 *)pCVar13;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    *(undefined8 *)pCVar13 = uVar10;
    return;
  default:
    if ((long)uVar8 < 0x174) {
      __insertion_sort_3<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
                (param_1,param_2,param_3);
      return;
    }
    pCVar13 = param_1 + (uVar8 / 0x18) * 0xc;
    if ((long)uVar8 < 0x2ed5) {
      uVar8 = (**(code **)param_3)(pCVar13,param_1);
      uVar7 = (**(code **)param_3)(pCVar12,pCVar13);
      if ((uVar8 & 1) == 0) {
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(pCVar13 + 8);
          uVar10 = *(undefined8 *)pCVar13;
          uVar11 = *(undefined8 *)pCVar12;
          *(undefined4 *)(pCVar13 + 8) = *(undefined4 *)(param_2 + -4);
          *(undefined8 *)pCVar13 = uVar11;
          *(undefined4 *)(param_2 + -4) = uVar2;
          *(undefined8 *)pCVar12 = uVar10;
          uVar8 = (**(code **)param_3)(pCVar13,param_1);
          if ((uVar8 & 1) == 0) goto LAB_00efcab0;
          uVar2 = *(undefined4 *)(param_1 + 8);
          uVar10 = *(undefined8 *)param_1;
          uVar11 = *(undefined8 *)pCVar13;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pCVar13 + 8);
          *(undefined8 *)param_1 = uVar11;
          *(undefined4 *)(pCVar13 + 8) = uVar2;
          *(undefined8 *)pCVar13 = uVar10;
LAB_00efcaa0:
          uVar6 = 2;
        }
      }
      else if ((uVar7 & 1) == 0) {
        uVar2 = *(undefined4 *)(param_1 + 8);
        uVar10 = *(undefined8 *)param_1;
        uVar11 = *(undefined8 *)pCVar13;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pCVar13 + 8);
        *(undefined8 *)param_1 = uVar11;
        *(undefined4 *)(pCVar13 + 8) = uVar2;
        *(undefined8 *)pCVar13 = uVar10;
        uVar8 = (**(code **)param_3)(pCVar12,pCVar13);
        if ((uVar8 & 1) != 0) {
          uVar2 = *(undefined4 *)(pCVar13 + 8);
          uVar10 = *(undefined8 *)pCVar13;
          uVar11 = *(undefined8 *)pCVar12;
          *(undefined4 *)(pCVar13 + 8) = *(undefined4 *)(param_2 + -4);
          *(undefined8 *)pCVar13 = uVar11;
          *(undefined4 *)(param_2 + -4) = uVar2;
          *(undefined8 *)pCVar12 = uVar10;
          goto LAB_00efcaa0;
        }
LAB_00efcab0:
        uVar6 = 1;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 8);
        uVar10 = *(undefined8 *)param_1;
        uVar6 = 1;
        uVar11 = *(undefined8 *)pCVar12;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + -4);
        *(undefined8 *)param_1 = uVar11;
        *(undefined4 *)(param_2 + -4) = uVar2;
        *(undefined8 *)pCVar12 = uVar10;
      }
    }
    else {
      lVar9 = (uVar8 / 0x30) * 0xc;
      pCVar18 = param_1 + lVar9;
      pCVar15 = pCVar13 + lVar9;
      uVar6 = __sort4<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
                        (param_1,pCVar18,pCVar13,pCVar15,param_3);
      uVar8 = (**(code **)param_3)(pCVar12,pCVar15);
      if ((uVar8 & 1) != 0) {
        uVar2 = *(undefined4 *)(pCVar15 + 8);
        uVar10 = *(undefined8 *)pCVar15;
        uVar11 = *(undefined8 *)pCVar12;
        *(undefined4 *)(pCVar15 + 8) = *(undefined4 *)(param_2 + -4);
        *(undefined8 *)pCVar15 = uVar11;
        *(undefined4 *)(param_2 + -4) = uVar2;
        *(undefined8 *)pCVar12 = uVar10;
        uVar8 = (**(code **)param_3)(pCVar15,pCVar13);
        if ((uVar8 & 1) == 0) {
          uVar6 = uVar6 + 1;
        }
        else {
          uVar2 = *(undefined4 *)(pCVar13 + 8);
          uVar10 = *(undefined8 *)pCVar13;
          uVar11 = *(undefined8 *)pCVar15;
          *(undefined4 *)(pCVar13 + 8) = *(undefined4 *)(pCVar15 + 8);
          *(undefined8 *)pCVar13 = uVar11;
          *(undefined4 *)(pCVar15 + 8) = uVar2;
          *(undefined8 *)pCVar15 = uVar10;
          uVar8 = (**(code **)param_3)(pCVar13,pCVar18);
          if ((uVar8 & 1) == 0) {
            uVar6 = uVar6 + 2;
          }
          else {
            uVar2 = *(undefined4 *)(pCVar18 + 8);
            uVar10 = *(undefined8 *)pCVar18;
            uVar11 = *(undefined8 *)pCVar13;
            *(undefined4 *)(pCVar18 + 8) = *(undefined4 *)(pCVar13 + 8);
            *(undefined8 *)pCVar18 = uVar11;
            *(undefined4 *)(pCVar13 + 8) = uVar2;
            *(undefined8 *)pCVar13 = uVar10;
            uVar8 = (**(code **)param_3)(pCVar18,param_1);
            if ((uVar8 & 1) == 0) {
              uVar6 = uVar6 + 3;
            }
            else {
              uVar2 = *(undefined4 *)(param_1 + 8);
              uVar10 = *(undefined8 *)param_1;
              uVar6 = uVar6 + 4;
              uVar11 = *(undefined8 *)pCVar18;
              *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pCVar18 + 8);
              *(undefined8 *)param_1 = uVar11;
              *(undefined4 *)(pCVar18 + 8) = uVar2;
              *(undefined8 *)pCVar18 = uVar10;
            }
          }
        }
      }
    }
    uVar8 = (**(code **)param_3)(param_1,pCVar13);
    pCVar18 = pCVar12;
    pCVar15 = param_2 + -0x18;
    if ((uVar8 & 1) == 0) goto LAB_00efcae4;
    goto LAB_00efcb38;
  }
  local_68 = *(undefined4 *)(param_1 + 8);
  local_70 = *(undefined8 *)param_1;
  uVar10 = *(undefined8 *)pCVar12;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + -4);
  *(undefined8 *)param_1 = uVar10;
LAB_00efce50:
  *(undefined4 *)(param_2 + -4) = local_68;
  *(undefined8 *)pCVar12 = local_70;
  return;
LAB_00efcae4:
  while (pCVar18 = pCVar15, param_1 != pCVar18) {
    uVar8 = (**(code **)param_3)(pCVar18,pCVar13);
    pCVar15 = pCVar18 + -0xc;
    if ((uVar8 & 1) != 0) goto code_r0x00efcb04;
  }
  pCVar18 = param_1 + 0xc;
  uVar8 = (**(code **)param_3)(param_1,pCVar12);
  if ((uVar8 & 1) == 0) {
    if (pCVar18 == pCVar12) {
      return;
    }
    pCVar18 = param_1 + 0x18;
    while (uVar8 = (**(code **)param_3)(param_1,pCVar18 + -0xc), (uVar8 & 1) == 0) {
      pCVar18 = pCVar18 + 0xc;
      if (param_2 == pCVar18) {
        return;
      }
    }
    uVar2 = *(undefined4 *)(pCVar18 + -4);
    uVar10 = *(undefined8 *)(pCVar18 + -0xc);
    uVar11 = *(undefined8 *)pCVar12;
    *(undefined4 *)(pCVar18 + -4) = *(undefined4 *)(param_2 + -4);
    *(undefined8 *)(pCVar18 + -0xc) = uVar11;
    *(undefined4 *)(param_2 + -4) = uVar2;
    *(undefined8 *)pCVar12 = uVar10;
  }
  pCVar15 = pCVar12;
  if (pCVar18 == pCVar12) {
    return;
  }
  while( true ) {
    pCVar13 = pCVar18 + -0xc;
    do {
      pCVar16 = pCVar13;
      pCVar13 = pCVar16 + 0xc;
      uVar8 = (**(code **)param_3)(param_1,pCVar13);
    } while ((uVar8 & 1) == 0);
    pCVar18 = pCVar16 + 0x18;
    do {
      pCVar14 = pCVar15;
      pCVar15 = pCVar14 + -0xc;
      uVar8 = (**(code **)param_3)(param_1,pCVar15);
    } while ((uVar8 & 1) != 0);
    if (pCVar15 <= pCVar13) break;
    uVar2 = *(undefined4 *)(pCVar16 + 0x14);
    uVar10 = *(undefined8 *)pCVar13;
    uVar11 = *(undefined8 *)pCVar15;
    *(undefined4 *)(pCVar16 + 0x14) = *(undefined4 *)(pCVar14 + -4);
    *(undefined8 *)pCVar13 = uVar11;
    *(undefined4 *)(pCVar14 + -4) = uVar2;
    *(undefined8 *)pCVar15 = uVar10;
  }
  goto LAB_00efc7c4;
code_r0x00efcb04:
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar10 = *(undefined8 *)param_1;
  uVar6 = uVar6 + 1;
  uVar3 = *(undefined4 *)(pCVar18 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)pCVar18;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(pCVar18 + 8) = uVar2;
  *(undefined8 *)pCVar18 = uVar10;
LAB_00efcb38:
  pCVar15 = param_1 + 0xc;
  pCVar16 = pCVar15;
  if (pCVar15 < pCVar18) {
    while( true ) {
      pCVar15 = pCVar16 + -0xc;
      do {
        pCVar14 = pCVar15;
        pCVar15 = pCVar14 + 0xc;
        uVar8 = (**(code **)param_3)(pCVar15,pCVar13);
      } while ((uVar8 & 1) != 0);
      pCVar16 = pCVar14 + 0x18;
      do {
        pCVar17 = pCVar18;
        pCVar18 = pCVar17 + -0xc;
        uVar8 = (**(code **)param_3)(pCVar18,pCVar13);
      } while ((uVar8 & 1) == 0);
      if (pCVar18 < pCVar15) break;
      uVar2 = *(undefined4 *)(pCVar14 + 0x14);
      uVar10 = *(undefined8 *)pCVar15;
      uVar6 = uVar6 + 1;
      uVar11 = *(undefined8 *)pCVar18;
      pCVar1 = pCVar18;
      if (pCVar13 != pCVar15) {
        pCVar1 = pCVar13;
      }
      *(undefined4 *)(pCVar14 + 0x14) = *(undefined4 *)(pCVar17 + -4);
      *(undefined8 *)pCVar15 = uVar11;
      *(undefined4 *)(pCVar17 + -4) = uVar2;
      *(undefined8 *)pCVar18 = uVar10;
      pCVar13 = pCVar1;
    }
  }
  if ((pCVar15 != pCVar13) && (uVar8 = (**(code **)param_3)(pCVar13,pCVar15), (uVar8 & 1) != 0)) {
    uVar2 = *(undefined4 *)(pCVar15 + 8);
    uVar10 = *(undefined8 *)pCVar15;
    uVar6 = uVar6 + 1;
    uVar11 = *(undefined8 *)pCVar13;
    *(undefined4 *)(pCVar15 + 8) = *(undefined4 *)(pCVar13 + 8);
    *(undefined8 *)pCVar15 = uVar11;
    *(undefined4 *)(pCVar13 + 8) = uVar2;
    *(undefined8 *)pCVar13 = uVar10;
  }
  if (uVar6 == 0) {
    bVar4 = __insertion_sort_incomplete<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
                      (param_1,pCVar15,param_3);
    bVar5 = __insertion_sort_incomplete<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
                      (pCVar15 + 0xc,param_2,param_3);
    if (bVar5) goto LAB_00efcd98;
    pCVar13 = pCVar15 + 0xc;
    if (bVar4) goto LAB_00efc7c4;
  }
  if (((long)param_2 - (long)pCVar15 >> 2) * -0x5555555555555555 <=
      ((long)pCVar15 - (long)param_1 >> 2) * -0x5555555555555555) {
    __sort<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
              (pCVar15 + 0xc,param_2,param_3);
    param_2 = pCVar15;
    goto LAB_00efc7b4;
  }
  __sort<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
            (param_1,pCVar15,param_3);
  pCVar13 = pCVar15 + 0xc;
  goto LAB_00efc7c4;
LAB_00efcd98:
  param_2 = pCVar15;
  if (bVar4) {
switchD_00efcdb8_caseD_0:
    return;
  }
  goto LAB_00efc7b4;
}

