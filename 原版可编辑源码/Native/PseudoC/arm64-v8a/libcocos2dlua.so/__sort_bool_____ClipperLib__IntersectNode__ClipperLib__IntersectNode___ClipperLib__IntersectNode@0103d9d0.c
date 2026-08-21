
/* void std::__ndk1::__sort<bool (*&)(ClipperLib::IntersectNode*, ClipperLib::IntersectNode*),
   ClipperLib::IntersectNode**>(ClipperLib::IntersectNode**, ClipperLib::IntersectNode**, bool
   (*&)(ClipperLib::IntersectNode*, ClipperLib::IntersectNode*)) */

void std::__ndk1::
     __sort<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
               (IntersectNode **param_1,IntersectNode **param_2,
               _func_bool_IntersectNode_ptr_IntersectNode_ptr *param_3)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 auVar14 [16];
  
LAB_0103d9fc:
  pauVar11 = (undefined1 (*) [16])(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
  pauVar12 = (undefined1 (*) [16])param_1;
LAB_0103da10:
  param_1 = (IntersectNode **)pauVar12;
  lVar7 = (long)param_2 - (long)param_1;
  uVar6 = lVar7 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_0103dd74_caseD_0;
  case 2:
    uVar6 = (**(code **)param_3)
                      (*(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8),
                       *(undefined8 *)*(undefined1 (*) [16])param_1);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar8 = *(undefined8 *)*(undefined1 (*) [16])param_1;
    *(undefined8 *)*(undefined1 (*) [16])param_1 =
         *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
    *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar8;
    return;
  case 3:
    uVar6 = (**(code **)param_3)
                      (*(undefined8 *)(*(undefined1 (*) [16])param_1 + 8),
                       *(undefined8 *)*(undefined1 (*) [16])param_1);
    uVar5 = (**(code **)param_3)
                      (*(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8),
                       *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8));
    if ((uVar6 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar8 = *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8);
      *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) =
           *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar8;
      uVar6 = (**(code **)param_3)
                        (*(undefined8 *)(*(undefined1 (*) [16])param_1 + 8),
                         *(undefined8 *)*(undefined1 (*) [16])param_1);
      if ((uVar6 & 1) == 0) {
        return;
      }
      auVar14 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
      *(long *)(*(undefined1 (*) [16])param_1 + 8) = auVar14._8_8_;
      *(long *)*(undefined1 (*) [16])param_1 = auVar14._0_8_;
      return;
    }
    uVar8 = *(undefined8 *)*(undefined1 (*) [16])param_1;
    if ((uVar5 & 1) != 0) {
      *(undefined8 *)*(undefined1 (*) [16])param_1 =
           *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar8;
      return;
    }
    *(undefined8 *)*(undefined1 (*) [16])param_1 =
         *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8);
    *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) = uVar8;
    uVar6 = (**(code **)param_3)(*(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8))
    ;
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar8 = *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8);
    *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) =
         *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
    *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar8;
    return;
  case 4:
    __sort4<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
              (param_1,(IntersectNode **)(*(undefined1 (*) [16])param_1 + 8),
               (IntersectNode **)((long)param_1 + 0x10),(IntersectNode **)pauVar11,param_3);
    return;
  case 5:
    FUN_0103e06c(param_1,*(undefined1 (*) [16])param_1 + 8,
                 (undefined1 (*) [16])((long)param_1 + 0x10),
                 *(undefined1 (*) [16])((long)param_1 + 0x10) + 8,pauVar11,param_3);
    return;
  default:
    if (lVar7 < 0xf8) {
      __insertion_sort_3<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
                (param_1,param_2,param_3);
      return;
    }
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    pauVar12 = (undefined1 (*) [16])
               (*(undefined1 (*) [16])param_1 + (uVar5 & 0x3ffffffffffffffe) * 4);
    if (lVar7 < 0x1f39) {
      uVar6 = (**(code **)param_3)
                        (*(undefined8 *)*pauVar12,*(undefined8 *)*(undefined1 (*) [16])param_1);
      uVar5 = (**(code **)param_3)(*(undefined8 *)*pauVar11,*(undefined8 *)*pauVar12);
      if ((uVar6 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          iVar4 = 0;
        }
        else {
          uVar8 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar11;
          *(undefined8 *)*pauVar11 = uVar8;
          uVar6 = (**(code **)param_3)
                            (*(undefined8 *)*pauVar12,*(undefined8 *)*(undefined1 (*) [16])param_1);
          if ((uVar6 & 1) == 0) goto LAB_0103dccc;
          uVar8 = *(undefined8 *)*(undefined1 (*) [16])param_1;
          *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = uVar8;
LAB_0103dcbc:
          iVar4 = 2;
        }
      }
      else {
        uVar8 = *(undefined8 *)*(undefined1 (*) [16])param_1;
        if ((uVar5 & 1) == 0) {
          *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = uVar8;
          uVar6 = (**(code **)param_3)(*(undefined8 *)*pauVar11);
          if ((uVar6 & 1) != 0) {
            uVar8 = *(undefined8 *)*pauVar12;
            *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar11;
            *(undefined8 *)*pauVar11 = uVar8;
            goto LAB_0103dcbc;
          }
LAB_0103dccc:
          iVar4 = 1;
        }
        else {
          iVar4 = 1;
          *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar11;
          *(undefined8 *)*pauVar11 = uVar8;
        }
      }
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar7 = (uVar5 & 0x7ffffffffffffffc) * 2;
      iVar4 = FUN_0103e06c(param_1,*(undefined1 (*) [16])param_1 + lVar7,pauVar12,*pauVar12 + lVar7,
                           pauVar11,param_3);
    }
    uVar6 = (**(code **)param_3)
                      (*(undefined8 *)*(undefined1 (*) [16])param_1,*(undefined8 *)*pauVar12);
    pauVar13 = pauVar11;
    pauVar10 = (undefined1 (*) [16])((long)param_2 + -0x10);
    if ((uVar6 & 1) == 0) break;
    goto LAB_0103db14;
  }
  while (pauVar13 = pauVar10, (undefined1 (*) [16])param_1 != pauVar13) {
    uVar6 = (**(code **)param_3)(*(undefined8 *)*pauVar13,*(undefined8 *)*pauVar12);
    pauVar10 = (undefined1 (*) [16])(pauVar13[-1] + 8);
    if ((uVar6 & 1) != 0) goto code_r0x0103db00;
  }
  pauVar13 = (undefined1 (*) [16])(*(undefined1 (*) [16])param_1 + 8);
  uVar6 = (**(code **)param_3)
                    (*(undefined8 *)*(undefined1 (*) [16])param_1,*(undefined8 *)*pauVar11);
  if ((uVar6 & 1) == 0) {
    if (pauVar13 == pauVar11) {
      return;
    }
    pauVar13 = (undefined1 (*) [16])((long)param_1 + 0x10);
    while (uVar6 = (**(code **)param_3)
                             (*(undefined8 *)*(undefined1 (*) [16])param_1,
                              *(undefined8 *)(pauVar13[-1] + 8)), (uVar6 & 1) == 0) {
      pauVar13 = (undefined1 (*) [16])(*pauVar13 + 8);
      if ((undefined1 (*) [16])param_2 == pauVar13) {
        return;
      }
    }
    uVar8 = *(undefined8 *)(pauVar13[-1] + 8);
    *(undefined8 *)(pauVar13[-1] + 8) = *(undefined8 *)*pauVar11;
    *(undefined8 *)*pauVar11 = uVar8;
  }
  pauVar10 = pauVar11;
  if (pauVar13 == pauVar11) {
    return;
  }
  while( true ) {
    pauVar12 = (undefined1 (*) [16])(pauVar13[-1] + 8);
    do {
      pauVar13 = pauVar12;
      pauVar12 = (undefined1 (*) [16])(*pauVar13 + 8);
      uVar6 = (**(code **)param_3)
                        (*(undefined8 *)*(undefined1 (*) [16])param_1,*(undefined8 *)*pauVar12);
    } while ((uVar6 & 1) == 0);
    pauVar13 = pauVar13 + 1;
    do {
      pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
      uVar6 = (**(code **)param_3)
                        (*(undefined8 *)*(undefined1 (*) [16])param_1,*(undefined8 *)*pauVar10);
    } while ((uVar6 & 1) != 0);
    if (pauVar10 <= pauVar12) break;
    uVar8 = *(undefined8 *)*pauVar12;
    *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar10;
    *(undefined8 *)*pauVar10 = uVar8;
  }
  goto LAB_0103da10;
code_r0x0103db00:
  uVar8 = *(undefined8 *)*(undefined1 (*) [16])param_1;
  iVar4 = iVar4 + 1;
  *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar13;
  *(undefined8 *)*pauVar13 = uVar8;
LAB_0103db14:
  pauVar10 = (undefined1 (*) [16])(*(undefined1 (*) [16])param_1 + 8);
  pauVar9 = pauVar10;
  pauVar1 = pauVar12;
  if (pauVar10 < pauVar13) {
    while( true ) {
      pauVar12 = pauVar1;
      pauVar10 = (undefined1 (*) [16])(pauVar9[-1] + 8);
      do {
        pauVar9 = pauVar10;
        pauVar10 = (undefined1 (*) [16])(*pauVar9 + 8);
        uVar6 = (**(code **)param_3)(*(undefined8 *)*pauVar10,*(undefined8 *)*pauVar12);
      } while ((uVar6 & 1) != 0);
      pauVar9 = pauVar9 + 1;
      do {
        pauVar13 = (undefined1 (*) [16])(pauVar13[-1] + 8);
        uVar6 = (**(code **)param_3)(*(undefined8 *)*pauVar13,*(undefined8 *)*pauVar12);
      } while ((uVar6 & 1) == 0);
      if (pauVar13 < pauVar10) break;
      uVar8 = *(undefined8 *)*pauVar10;
      iVar4 = iVar4 + 1;
      *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar13;
      *(undefined8 *)*pauVar13 = uVar8;
      pauVar1 = pauVar13;
      if (pauVar12 != pauVar10) {
        pauVar1 = pauVar12;
      }
    }
  }
  if ((pauVar10 != pauVar12) &&
     (uVar6 = (**(code **)param_3)(*(undefined8 *)*pauVar12,*(undefined8 *)*pauVar10),
     (uVar6 & 1) != 0)) {
    uVar8 = *(undefined8 *)*pauVar10;
    iVar4 = iVar4 + 1;
    *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar12;
    *(undefined8 *)*pauVar12 = uVar8;
  }
  if (iVar4 == 0) {
    bVar2 = __insertion_sort_incomplete<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
                      (param_1,(IntersectNode **)pauVar10,param_3);
    bVar3 = __insertion_sort_incomplete<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
                      ((IntersectNode **)(*pauVar10 + 8),param_2,param_3);
    if (bVar3) goto LAB_0103dd54;
    pauVar12 = (undefined1 (*) [16])(*pauVar10 + 8);
    if (bVar2) goto LAB_0103da10;
  }
  if ((long)param_2 - (long)pauVar10 <= (long)pauVar10 - (long)param_1) {
    __sort<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
              ((IntersectNode **)(*pauVar10 + 8),param_2,param_3);
    param_2 = (IntersectNode **)pauVar10;
    goto LAB_0103d9fc;
  }
  __sort<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
            (param_1,(IntersectNode **)pauVar10,param_3);
  pauVar12 = (undefined1 (*) [16])(*pauVar10 + 8);
  goto LAB_0103da10;
LAB_0103dd54:
  param_2 = (IntersectNode **)pauVar10;
  if (bVar2) {
switchD_0103dd74_caseD_0:
    return;
  }
  goto LAB_0103d9fc;
}

