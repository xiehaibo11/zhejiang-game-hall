
/* void std::__ndk1::__sort<bool (*&)(v8::internal::BreakLocation const&,
   v8::internal::BreakLocation const&), v8::internal::BreakLocation*>(v8::internal::BreakLocation*,
   v8::internal::BreakLocation*, bool (*&)(v8::internal::BreakLocation const&,
   v8::internal::BreakLocation const&)) */

void std::__ndk1::
     __sort<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
               (BreakLocation *param_1,BreakLocation *param_2,
               _func_bool_BreakLocation_ptr_BreakLocation_ptr *param_3)

{
  BreakLocation *pBVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  BreakLocation *pBVar9;
  BreakLocation *pBVar10;
  BreakLocation *pBVar11;
  BreakLocation *pBVar12;
  BreakLocation *pBVar13;
  BreakLocation *pBVar14;
  BreakLocation *pBVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
LAB_00ed7a94:
  pBVar9 = param_2 + -0x18;
  pBVar10 = param_1;
LAB_00ed7aa4:
  param_1 = pBVar10;
  uVar6 = (long)param_2 - (long)param_1;
  switch(((long)uVar6 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_00ed809c_caseD_0;
  case 2:
    uVar6 = (**(code **)param_3)(pBVar9,param_1);
    if ((uVar6 & 1) == 0) {
      return;
    }
    break;
  case 3:
    pBVar10 = param_1 + 0x18;
    uVar6 = (**(code **)param_3)(pBVar10,param_1);
    uVar5 = (**(code **)param_3)(pBVar9,pBVar10);
    if ((uVar6 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      uVar18 = *(undefined8 *)(param_1 + 0x20);
      uVar16 = *(undefined8 *)pBVar10;
      uVar19 = *(undefined8 *)(param_2 + -0x10);
      uVar17 = *(undefined8 *)pBVar9;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_1 + 0x20) = uVar19;
      *(undefined8 *)pBVar10 = uVar17;
      *(undefined8 *)(param_2 + -8) = uVar8;
      *(undefined8 *)(param_2 + -0x10) = uVar18;
      *(undefined8 *)pBVar9 = uVar16;
      goto LAB_00ed82a4;
    }
    if ((uVar5 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      uVar17 = *(undefined8 *)(param_1 + 8);
      uVar16 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)param_1 = *(undefined8 *)pBVar10;
      *(undefined8 *)(param_1 + 0x28) = uVar8;
      *(undefined8 *)(param_1 + 0x20) = uVar17;
      *(undefined8 *)pBVar10 = uVar16;
      uVar6 = (**(code **)param_3)(pBVar9,pBVar10);
      if ((uVar6 & 1) == 0) {
        return;
      }
      local_70 = *(undefined8 *)(param_1 + 0x28);
      uStack_78 = *(undefined8 *)(param_1 + 0x20);
      local_80 = *(undefined8 *)pBVar10;
      uVar16 = *(undefined8 *)(param_2 + -0x10);
      uVar8 = *(undefined8 *)pBVar9;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_1 + 0x20) = uVar16;
      *(undefined8 *)pBVar10 = uVar8;
      goto LAB_00ed8134;
    }
    break;
  case 4:
    __sort4<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
              (param_1,param_1 + 0x18,param_1 + 0x30,pBVar9,param_3);
    return;
  case 5:
    pBVar10 = param_1 + 0x18;
    pBVar13 = param_1 + 0x30;
    pBVar15 = param_1 + 0x48;
    __sort4<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
              (param_1,pBVar10,pBVar13,pBVar15,param_3);
    uVar6 = (**(code **)param_3)(pBVar9,pBVar15);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    uVar18 = *(undefined8 *)(param_1 + 0x50);
    uVar16 = *(undefined8 *)pBVar15;
    uVar19 = *(undefined8 *)(param_2 + -0x10);
    uVar17 = *(undefined8 *)pBVar9;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_1 + 0x50) = uVar19;
    *(undefined8 *)pBVar15 = uVar17;
    *(undefined8 *)(param_2 + -8) = uVar8;
    *(undefined8 *)(param_2 + -0x10) = uVar18;
    *(undefined8 *)pBVar9 = uVar16;
    uVar6 = (**(code **)param_3)(pBVar15,pBVar13);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar17 = *(undefined8 *)(param_1 + 0x38);
    uVar16 = *(undefined8 *)pBVar13;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)pBVar13 = *(undefined8 *)pBVar15;
    *(undefined8 *)(param_1 + 0x58) = uVar8;
    *(undefined8 *)(param_1 + 0x50) = uVar17;
    *(undefined8 *)pBVar15 = uVar16;
    uVar6 = (**(code **)param_3)(pBVar13,pBVar10);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    uVar16 = *(undefined8 *)pBVar10;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)pBVar10 = *(undefined8 *)pBVar13;
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    *(undefined8 *)(param_1 + 0x38) = uVar17;
    *(undefined8 *)pBVar13 = uVar16;
LAB_00ed82a4:
    pBVar10 = param_1 + 0x18;
    uVar6 = (**(code **)param_3)(pBVar10,param_1);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar17 = *(undefined8 *)(param_1 + 8);
    uVar16 = *(undefined8 *)param_1;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)param_1 = *(undefined8 *)pBVar10;
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)(param_1 + 0x20) = uVar17;
    *(undefined8 *)pBVar10 = uVar16;
    return;
  default:
    if ((long)uVar6 < 0x2e8) {
      __insertion_sort_3<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
                (param_1,param_2,param_3);
      return;
    }
    pBVar10 = param_1 + (uVar6 / 0x30) * 0x18;
    if ((long)uVar6 < 0x5da9) {
      uVar6 = (**(code **)param_3)(pBVar10,param_1);
      uVar5 = (**(code **)param_3)(pBVar9,pBVar10);
      if ((uVar6 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(pBVar10 + 0x10);
          uVar18 = *(undefined8 *)(pBVar10 + 8);
          uVar16 = *(undefined8 *)pBVar10;
          uVar19 = *(undefined8 *)(param_2 + -0x10);
          uVar17 = *(undefined8 *)pBVar9;
          *(undefined8 *)(pBVar10 + 0x10) = *(undefined8 *)(param_2 + -8);
          *(undefined8 *)(pBVar10 + 8) = uVar19;
          *(undefined8 *)pBVar10 = uVar17;
          *(undefined8 *)(param_2 + -8) = uVar8;
          *(undefined8 *)(param_2 + -0x10) = uVar18;
          *(undefined8 *)pBVar9 = uVar16;
          uVar6 = (**(code **)param_3)(pBVar10,param_1);
          if ((uVar6 & 1) == 0) goto LAB_00ed7d90;
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          uVar18 = *(undefined8 *)(param_1 + 8);
          uVar16 = *(undefined8 *)param_1;
          uVar19 = *(undefined8 *)(pBVar10 + 8);
          uVar17 = *(undefined8 *)pBVar10;
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pBVar10 + 0x10);
          *(undefined8 *)(param_1 + 8) = uVar19;
          *(undefined8 *)param_1 = uVar17;
          *(undefined8 *)(pBVar10 + 0x10) = uVar8;
          *(undefined8 *)(pBVar10 + 8) = uVar18;
          *(undefined8 *)pBVar10 = uVar16;
LAB_00ed7d80:
          uVar4 = 2;
        }
      }
      else if ((uVar5 & 1) == 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        uVar18 = *(undefined8 *)(param_1 + 8);
        uVar16 = *(undefined8 *)param_1;
        uVar19 = *(undefined8 *)(pBVar10 + 8);
        uVar17 = *(undefined8 *)pBVar10;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pBVar10 + 0x10);
        *(undefined8 *)(param_1 + 8) = uVar19;
        *(undefined8 *)param_1 = uVar17;
        *(undefined8 *)(pBVar10 + 0x10) = uVar8;
        *(undefined8 *)(pBVar10 + 8) = uVar18;
        *(undefined8 *)pBVar10 = uVar16;
        uVar6 = (**(code **)param_3)(pBVar9,pBVar10);
        if ((uVar6 & 1) != 0) {
          uVar8 = *(undefined8 *)(pBVar10 + 0x10);
          uVar18 = *(undefined8 *)(pBVar10 + 8);
          uVar16 = *(undefined8 *)pBVar10;
          uVar19 = *(undefined8 *)(param_2 + -0x10);
          uVar17 = *(undefined8 *)pBVar9;
          *(undefined8 *)(pBVar10 + 0x10) = *(undefined8 *)(param_2 + -8);
          *(undefined8 *)(pBVar10 + 8) = uVar19;
          *(undefined8 *)pBVar10 = uVar17;
          *(undefined8 *)(param_2 + -8) = uVar8;
          *(undefined8 *)(param_2 + -0x10) = uVar18;
          *(undefined8 *)pBVar9 = uVar16;
          goto LAB_00ed7d80;
        }
LAB_00ed7d90:
        uVar4 = 1;
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        uVar18 = *(undefined8 *)(param_1 + 8);
        uVar16 = *(undefined8 *)param_1;
        uVar4 = 1;
        uVar19 = *(undefined8 *)(param_2 + -0x10);
        uVar17 = *(undefined8 *)pBVar9;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_1 + 8) = uVar19;
        *(undefined8 *)param_1 = uVar17;
        *(undefined8 *)(param_2 + -8) = uVar8;
        *(undefined8 *)(param_2 + -0x10) = uVar18;
        *(undefined8 *)pBVar9 = uVar16;
      }
    }
    else {
      lVar7 = (uVar6 / 0x60) * 0x18;
      pBVar13 = param_1 + lVar7;
      pBVar15 = pBVar10 + lVar7;
      uVar4 = __sort4<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
                        (param_1,pBVar13,pBVar10,pBVar15,param_3);
      uVar6 = (**(code **)param_3)(pBVar9,pBVar15);
      if ((uVar6 & 1) != 0) {
        uVar8 = *(undefined8 *)(pBVar15 + 0x10);
        uVar18 = *(undefined8 *)(pBVar15 + 8);
        uVar16 = *(undefined8 *)pBVar15;
        uVar19 = *(undefined8 *)(param_2 + -0x10);
        uVar17 = *(undefined8 *)pBVar9;
        *(undefined8 *)(pBVar15 + 0x10) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(pBVar15 + 8) = uVar19;
        *(undefined8 *)pBVar15 = uVar17;
        *(undefined8 *)(param_2 + -8) = uVar8;
        *(undefined8 *)(param_2 + -0x10) = uVar18;
        *(undefined8 *)pBVar9 = uVar16;
        uVar6 = (**(code **)param_3)(pBVar15,pBVar10);
        if ((uVar6 & 1) == 0) {
          uVar4 = uVar4 + 1;
        }
        else {
          uVar8 = *(undefined8 *)(pBVar10 + 0x10);
          uVar18 = *(undefined8 *)(pBVar10 + 8);
          uVar16 = *(undefined8 *)pBVar10;
          uVar19 = *(undefined8 *)(pBVar15 + 8);
          uVar17 = *(undefined8 *)pBVar15;
          *(undefined8 *)(pBVar10 + 0x10) = *(undefined8 *)(pBVar15 + 0x10);
          *(undefined8 *)(pBVar10 + 8) = uVar19;
          *(undefined8 *)pBVar10 = uVar17;
          *(undefined8 *)(pBVar15 + 0x10) = uVar8;
          *(undefined8 *)(pBVar15 + 8) = uVar18;
          *(undefined8 *)pBVar15 = uVar16;
          uVar6 = (**(code **)param_3)(pBVar10,pBVar13);
          if ((uVar6 & 1) == 0) {
            uVar4 = uVar4 + 2;
          }
          else {
            uVar8 = *(undefined8 *)(pBVar13 + 0x10);
            uVar18 = *(undefined8 *)(pBVar13 + 8);
            uVar16 = *(undefined8 *)pBVar13;
            uVar19 = *(undefined8 *)(pBVar10 + 8);
            uVar17 = *(undefined8 *)pBVar10;
            *(undefined8 *)(pBVar13 + 0x10) = *(undefined8 *)(pBVar10 + 0x10);
            *(undefined8 *)(pBVar13 + 8) = uVar19;
            *(undefined8 *)pBVar13 = uVar17;
            *(undefined8 *)(pBVar10 + 0x10) = uVar8;
            *(undefined8 *)(pBVar10 + 8) = uVar18;
            *(undefined8 *)pBVar10 = uVar16;
            uVar6 = (**(code **)param_3)(pBVar13,param_1);
            if ((uVar6 & 1) == 0) {
              uVar4 = uVar4 + 3;
            }
            else {
              uVar8 = *(undefined8 *)(param_1 + 0x10);
              uVar18 = *(undefined8 *)(param_1 + 8);
              uVar16 = *(undefined8 *)param_1;
              uVar4 = uVar4 + 4;
              uVar19 = *(undefined8 *)(pBVar13 + 8);
              uVar17 = *(undefined8 *)pBVar13;
              *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pBVar13 + 0x10);
              *(undefined8 *)(param_1 + 8) = uVar19;
              *(undefined8 *)param_1 = uVar17;
              *(undefined8 *)(pBVar13 + 0x10) = uVar8;
              *(undefined8 *)(pBVar13 + 8) = uVar18;
              *(undefined8 *)pBVar13 = uVar16;
            }
          }
        }
      }
    }
    uVar6 = (**(code **)param_3)(param_1,pBVar10);
    pBVar13 = param_2 + -0x30;
    pBVar15 = pBVar9;
    if ((uVar6 & 1) == 0) goto LAB_00ed7dc4;
    goto LAB_00ed7e1c;
  }
  local_70 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = *(undefined8 *)(param_1 + 8);
  local_80 = *(undefined8 *)param_1;
  uVar16 = *(undefined8 *)(param_2 + -0x10);
  uVar8 = *(undefined8 *)pBVar9;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + -8);
  *(undefined8 *)(param_1 + 8) = uVar16;
  *(undefined8 *)param_1 = uVar8;
LAB_00ed8134:
  *(undefined8 *)(param_2 + -8) = local_70;
  *(undefined8 *)(param_2 + -0x10) = uStack_78;
  *(undefined8 *)pBVar9 = local_80;
  return;
LAB_00ed7dc4:
  while (pBVar15 = pBVar13, param_1 != pBVar15) {
    uVar6 = (**(code **)param_3)(pBVar15,pBVar10);
    pBVar13 = pBVar15 + -0x18;
    if ((uVar6 & 1) != 0) goto code_r0x00ed7de4;
  }
  pBVar13 = param_1 + 0x18;
  uVar6 = (**(code **)param_3)(param_1,pBVar9);
  if ((uVar6 & 1) == 0) {
    if (pBVar13 == pBVar9) {
      return;
    }
    pBVar13 = param_1 + 0x30;
    while (uVar6 = (**(code **)param_3)(param_1,pBVar13 + -0x18), (uVar6 & 1) == 0) {
      pBVar13 = pBVar13 + 0x18;
      if (param_2 == pBVar13) {
        return;
      }
    }
    uVar8 = *(undefined8 *)(pBVar13 + -8);
    uVar18 = *(undefined8 *)(pBVar13 + -0x10);
    uVar16 = *(undefined8 *)(pBVar13 + -0x18);
    uVar19 = *(undefined8 *)(param_2 + -0x10);
    uVar17 = *(undefined8 *)pBVar9;
    *(undefined8 *)(pBVar13 + -8) = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(pBVar13 + -0x10) = uVar19;
    *(undefined8 *)(pBVar13 + -0x18) = uVar17;
    *(undefined8 *)(param_2 + -8) = uVar8;
    *(undefined8 *)(param_2 + -0x10) = uVar18;
    *(undefined8 *)pBVar9 = uVar16;
  }
  pBVar15 = pBVar9;
  if (pBVar13 == pBVar9) {
    return;
  }
  while( true ) {
    pBVar10 = pBVar13 + -0x18;
    do {
      pBVar12 = pBVar10;
      pBVar10 = pBVar12 + 0x18;
      uVar6 = (**(code **)param_3)(param_1,pBVar10);
    } while ((uVar6 & 1) == 0);
    pBVar13 = pBVar12 + 0x30;
    do {
      pBVar11 = pBVar15;
      pBVar15 = pBVar11 + -0x18;
      uVar6 = (**(code **)param_3)(param_1,pBVar15);
    } while ((uVar6 & 1) != 0);
    if (pBVar15 <= pBVar10) break;
    uVar8 = *(undefined8 *)(pBVar12 + 0x28);
    uVar18 = *(undefined8 *)(pBVar12 + 0x20);
    uVar16 = *(undefined8 *)pBVar10;
    uVar19 = *(undefined8 *)(pBVar11 + -0x10);
    uVar17 = *(undefined8 *)pBVar15;
    *(undefined8 *)(pBVar12 + 0x28) = *(undefined8 *)(pBVar11 + -8);
    *(undefined8 *)(pBVar12 + 0x20) = uVar19;
    *(undefined8 *)pBVar10 = uVar17;
    *(undefined8 *)(pBVar11 + -8) = uVar8;
    *(undefined8 *)(pBVar11 + -0x10) = uVar18;
    *(undefined8 *)pBVar15 = uVar16;
  }
  goto LAB_00ed7aa4;
code_r0x00ed7de4:
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar18 = *(undefined8 *)(param_1 + 8);
  uVar16 = *(undefined8 *)param_1;
  uVar4 = uVar4 + 1;
  uVar19 = *(undefined8 *)(pBVar15 + 8);
  uVar17 = *(undefined8 *)pBVar15;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pBVar15 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar19;
  *(undefined8 *)param_1 = uVar17;
  *(undefined8 *)(pBVar15 + 0x10) = uVar8;
  *(undefined8 *)(pBVar15 + 8) = uVar18;
  *(undefined8 *)pBVar15 = uVar16;
LAB_00ed7e1c:
  pBVar13 = param_1 + 0x18;
  pBVar12 = pBVar13;
  if (pBVar13 < pBVar15) {
    while( true ) {
      pBVar13 = pBVar12 + -0x18;
      do {
        pBVar11 = pBVar13;
        pBVar13 = pBVar11 + 0x18;
        uVar6 = (**(code **)param_3)(pBVar13,pBVar10);
      } while ((uVar6 & 1) != 0);
      pBVar12 = pBVar11 + 0x30;
      do {
        pBVar14 = pBVar15;
        pBVar15 = pBVar14 + -0x18;
        uVar6 = (**(code **)param_3)(pBVar15,pBVar10);
      } while ((uVar6 & 1) == 0);
      if (pBVar15 < pBVar13) break;
      uVar8 = *(undefined8 *)(pBVar11 + 0x28);
      uVar18 = *(undefined8 *)(pBVar11 + 0x20);
      uVar16 = *(undefined8 *)pBVar13;
      uVar4 = uVar4 + 1;
      uVar19 = *(undefined8 *)(pBVar14 + -0x10);
      uVar17 = *(undefined8 *)pBVar15;
      pBVar1 = pBVar15;
      if (pBVar10 != pBVar13) {
        pBVar1 = pBVar10;
      }
      *(undefined8 *)(pBVar11 + 0x28) = *(undefined8 *)(pBVar14 + -8);
      *(undefined8 *)(pBVar11 + 0x20) = uVar19;
      *(undefined8 *)pBVar13 = uVar17;
      *(undefined8 *)(pBVar14 + -8) = uVar8;
      *(undefined8 *)(pBVar14 + -0x10) = uVar18;
      *(undefined8 *)pBVar15 = uVar16;
      pBVar10 = pBVar1;
    }
  }
  if ((pBVar13 != pBVar10) && (uVar6 = (**(code **)param_3)(pBVar10,pBVar13), (uVar6 & 1) != 0)) {
    uVar8 = *(undefined8 *)(pBVar13 + 0x10);
    uVar18 = *(undefined8 *)(pBVar13 + 8);
    uVar16 = *(undefined8 *)pBVar13;
    uVar4 = uVar4 + 1;
    uVar19 = *(undefined8 *)(pBVar10 + 8);
    uVar17 = *(undefined8 *)pBVar10;
    *(undefined8 *)(pBVar13 + 0x10) = *(undefined8 *)(pBVar10 + 0x10);
    *(undefined8 *)(pBVar13 + 8) = uVar19;
    *(undefined8 *)pBVar13 = uVar17;
    *(undefined8 *)(pBVar10 + 0x10) = uVar8;
    *(undefined8 *)(pBVar10 + 8) = uVar18;
    *(undefined8 *)pBVar10 = uVar16;
  }
  if (uVar4 == 0) {
    bVar2 = __insertion_sort_incomplete<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
                      (param_1,pBVar13,param_3);
    bVar3 = __insertion_sort_incomplete<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
                      (pBVar13 + 0x18,param_2,param_3);
    if (bVar3) goto LAB_00ed807c;
    pBVar10 = pBVar13 + 0x18;
    if (bVar2) goto LAB_00ed7aa4;
  }
  if (((long)param_2 - (long)pBVar13 >> 3) * -0x5555555555555555 <=
      ((long)pBVar13 - (long)param_1 >> 3) * -0x5555555555555555) {
    __sort<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
              (pBVar13 + 0x18,param_2,param_3);
    param_2 = pBVar13;
    goto LAB_00ed7a94;
  }
  __sort<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
            (param_1,pBVar13,param_3);
  pBVar10 = pBVar13 + 0x18;
  goto LAB_00ed7aa4;
LAB_00ed807c:
  param_2 = pBVar13;
  if (bVar2) {
switchD_00ed809c_caseD_0:
    return;
  }
  goto LAB_00ed7a94;
}

