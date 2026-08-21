
/* btConvexHullInternal::mergeProjection(btConvexHullInternal::IntermediateHull&,
   btConvexHullInternal::IntermediateHull&, btConvexHullInternal::Vertex*&,
   btConvexHullInternal::Vertex*&) */

undefined8 __thiscall
btConvexHullInternal::mergeProjection
          (btConvexHullInternal *this,IntermediateHull *param_1,IntermediateHull *param_2,
          Vertex **param_3,Vertex **param_4)

{
  Vertex *pVVar1;
  Vertex *pVVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Vertex *pVVar9;
  int iVar10;
  Vertex *pVVar11;
  Vertex *pVVar12;
  Vertex *pVVar13;
  Vertex *pVVar14;
  Vertex *pVVar15;
  Vertex *pVVar16;
  Vertex *pVVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  pVVar16 = *(Vertex **)(param_1 + 0x18);
  pVVar12 = *(Vertex **)(param_2 + 0x10);
  if ((*(int *)(pVVar16 + 0x68) == *(int *)(pVVar12 + 0x68)) &&
     (*(int *)(pVVar16 + 0x6c) == *(int *)(pVVar12 + 0x6c))) {
    pVVar14 = *(Vertex **)(pVVar12 + 8);
    if (pVVar14 == pVVar12) {
      *param_3 = pVVar16;
      if (*(long *)(pVVar12 + 0x10) != 0) {
        *param_4 = *(Vertex **)(*(long *)(pVVar12 + 0x10) + 0x18);
        return 0;
      }
      *param_4 = pVVar12;
      return 0;
    }
    pVVar16 = *(Vertex **)pVVar12;
    *(Vertex **)pVVar14 = pVVar16;
    *(Vertex **)(pVVar16 + 8) = pVVar14;
    if (pVVar12 == *(Vertex **)param_2) {
      pVVar17 = pVVar16;
      if ((*(int *)(pVVar14 + 0x68) <= *(int *)(pVVar16 + 0x68)) &&
         ((*(int *)(pVVar16 + 0x68) != *(int *)(pVVar14 + 0x68) ||
          (*(int *)(pVVar14 + 0x6c) <= *(int *)(pVVar16 + 0x6c))))) {
        pVVar17 = pVVar14;
      }
      *(Vertex **)param_2 = pVVar17;
    }
    if (pVVar12 == *(Vertex **)(param_2 + 8)) {
      if ((*(int *)(pVVar16 + 0x68) <= *(int *)(pVVar14 + 0x68)) &&
         ((*(int *)(pVVar16 + 0x68) != *(int *)(pVVar14 + 0x68) ||
          (*(int *)(pVVar16 + 0x6c) <= *(int *)(pVVar14 + 0x6c))))) {
        pVVar16 = pVVar14;
      }
      *(Vertex **)(param_2 + 8) = pVVar16;
    }
  }
  pVVar14 = *(Vertex **)param_1;
  pVVar1 = *(Vertex **)(param_1 + 8);
  pVVar17 = *(Vertex **)param_2;
  pVVar2 = *(Vertex **)(param_2 + 8);
  pVVar15 = (Vertex *)0x0;
  pVVar13 = (Vertex *)0x0;
  iVar18 = 0;
  iVar19 = 1;
  pVVar16 = pVVar1;
  pVVar12 = pVVar2;
  while( true ) {
    iVar7 = *(int *)(pVVar12 + 0x68);
    iVar6 = *(int *)(pVVar16 + 0x68);
    iVar20 = (iVar7 - iVar6) * iVar19;
    pVVar9 = pVVar16;
    if (0 < iVar20) break;
    if (iVar20 < 0) {
      iVar6 = *(int *)(pVVar16 + 0x6c);
      pVVar11 = pVVar12;
      iVar22 = *(int *)(pVVar12 + 0x6c);
LAB_01265f80:
      pVVar12 = pVVar11 + 8;
      if (iVar18 == 0) {
        pVVar12 = pVVar11;
      }
      pVVar12 = *(Vertex **)pVVar12;
      pVVar16 = pVVar9;
      iVar8 = iVar7;
      do {
        iVar21 = iVar20;
        pVVar9 = pVVar16;
        iVar10 = iVar22 - iVar6;
        if (pVVar12 != pVVar11) {
          iVar20 = *(int *)(pVVar12 + 0x6c) - iVar22;
          if (-1 < iVar20) {
            iVar7 = *(int *)(pVVar12 + 0x68);
            iVar8 = (iVar7 - iVar8) * iVar19;
            if ((iVar8 == 0) || ((iVar8 < 0 && (iVar20 * iVar21 <= iVar8 * iVar10))))
            goto LAB_01265f68;
          }
        }
        pVVar16 = pVVar9 + 8;
        if (iVar18 == 0) {
          pVVar16 = pVVar9;
        }
        pVVar16 = *(Vertex **)pVVar16;
        if (pVVar16 == pVVar9) goto LAB_01266044;
        iVar7 = *(int *)(pVVar16 + 0x6c);
        iVar3 = iVar7 - iVar6;
        if (iVar3 < 1) goto LAB_01266044;
        iVar8 = *(int *)(pVVar11 + 0x68);
        iVar20 = (iVar8 - *(int *)(pVVar16 + 0x68)) * iVar19;
        if ((-1 < iVar20) ||
           ((iVar4 = (*(int *)(pVVar16 + 0x68) - *(int *)(pVVar9 + 0x68)) * iVar19, iVar6 = iVar7,
            iVar4 != 0 && ((-1 < iVar4 || (iVar4 * iVar10 <= iVar3 * iVar21)))))) goto LAB_01266044;
      } while( true );
    }
    pVVar11 = pVVar16;
    iVar7 = *(int *)(pVVar16 + 0x6c);
    if (iVar18 == 0) {
      do {
        pVVar9 = pVVar11;
        pVVar11 = *(Vertex **)(pVVar9 + 8);
        if ((pVVar11 == pVVar16) || (*(int *)(pVVar11 + 0x68) != iVar6)) break;
        bVar5 = *(int *)(pVVar11 + 0x6c) <= iVar7;
        iVar7 = *(int *)(pVVar11 + 0x6c);
      } while (bVar5);
    }
    else {
      do {
        pVVar9 = pVVar11;
        pVVar11 = *(Vertex **)pVVar9;
        if ((pVVar11 == pVVar16) || (*(int *)(pVVar11 + 0x68) != iVar6)) break;
        bVar5 = *(int *)(pVVar11 + 0x6c) <= iVar7;
        iVar7 = *(int *)(pVVar11 + 0x6c);
      } while (bVar5);
    }
    pVVar16 = pVVar12;
    iVar7 = *(int *)(pVVar12 + 0x6c);
    if (iVar18 == 0) {
      do {
        pVVar11 = pVVar16;
        pVVar16 = *(Vertex **)pVVar11;
        if ((pVVar16 == pVVar12) || (*(int *)(pVVar16 + 0x68) != iVar6)) break;
        bVar5 = iVar7 <= *(int *)(pVVar16 + 0x6c);
        iVar7 = *(int *)(pVVar16 + 0x6c);
      } while (bVar5);
    }
    else {
      do {
        pVVar11 = pVVar16;
        pVVar16 = *(Vertex **)(pVVar11 + 8);
        if ((pVVar16 == pVVar12) || (*(int *)(pVVar16 + 0x68) != iVar6)) break;
        bVar5 = iVar7 <= *(int *)(pVVar16 + 0x6c);
        iVar7 = *(int *)(pVVar16 + 0x6c);
      } while (bVar5);
    }
LAB_01266044:
    bVar5 = iVar18 == 0;
    iVar18 = iVar18 + 1;
    pVVar16 = pVVar9;
    pVVar12 = pVVar11;
    if (bVar5) {
      iVar19 = -1;
      pVVar16 = pVVar14;
      pVVar12 = pVVar17;
      pVVar15 = pVVar9;
      pVVar13 = pVVar11;
    }
    if (iVar18 == 2) {
      *(Vertex **)(pVVar16 + 8) = pVVar12;
      *(Vertex **)pVVar12 = pVVar16;
      *(Vertex **)pVVar15 = pVVar13;
      *(Vertex **)(pVVar13 + 8) = pVVar15;
      if (*(int *)(pVVar17 + 0x68) < *(int *)(pVVar14 + 0x68)) {
        *(Vertex **)param_1 = pVVar17;
      }
      if (*(int *)(pVVar1 + 0x68) <= *(int *)(pVVar2 + 0x68)) {
        *(Vertex **)(param_1 + 8) = pVVar2;
      }
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *param_3 = pVVar15;
      *param_4 = pVVar13;
      return 1;
    }
  }
  iVar7 = *(int *)(pVVar12 + 0x6c);
  do {
    pVVar11 = pVVar12;
    pVVar12 = pVVar9;
    if (iVar18 == 0) {
      pVVar12 = pVVar9 + 8;
    }
    pVVar12 = *(Vertex **)pVVar12;
    iVar22 = *(int *)(pVVar9 + 0x6c);
    iVar10 = iVar7 - iVar22;
    iVar8 = iVar20;
    if (pVVar12 != pVVar9) {
      if (iVar18 == 0) {
        while( true ) {
          iVar21 = *(int *)(pVVar12 + 0x6c);
          iVar8 = iVar20;
          if (0 < iVar21 - iVar22) break;
          iVar3 = *(int *)(pVVar12 + 0x68);
          iVar6 = (iVar3 - iVar6) * iVar19;
          if ((iVar6 != 0) && ((-1 < iVar6 || (iVar6 * iVar10 < (iVar21 - iVar22) * iVar20))))
          break;
          iVar10 = iVar7 - iVar21;
          bVar5 = *(Vertex **)(pVVar12 + 8) == pVVar12;
          iVar8 = (*(int *)(pVVar11 + 0x68) - iVar3) * iVar19;
          pVVar9 = pVVar12;
          pVVar12 = *(Vertex **)(pVVar12 + 8);
          iVar6 = iVar3;
          iVar22 = iVar21;
          iVar20 = iVar8;
          if (bVar5) break;
        }
      }
      else {
        while( true ) {
          iVar21 = *(int *)(pVVar12 + 0x6c);
          iVar8 = iVar20;
          if (0 < iVar21 - iVar22) break;
          iVar3 = *(int *)(pVVar12 + 0x68);
          iVar6 = (iVar3 - iVar6) * iVar19;
          if ((iVar6 != 0) && ((-1 < iVar6 || (iVar6 * iVar10 < (iVar21 - iVar22) * iVar20))))
          break;
          iVar10 = iVar7 - iVar21;
          bVar5 = *(Vertex **)pVVar12 == pVVar12;
          iVar8 = (*(int *)(pVVar11 + 0x68) - iVar3) * iVar19;
          pVVar9 = pVVar12;
          pVVar12 = *(Vertex **)pVVar12;
          iVar6 = iVar3;
          iVar22 = iVar21;
          iVar20 = iVar8;
          if (bVar5) break;
        }
      }
    }
    pVVar12 = pVVar11;
    if (iVar18 == 0) {
      pVVar12 = pVVar11 + 8;
    }
    pVVar12 = *(Vertex **)pVVar12;
    if (pVVar12 == pVVar11) goto LAB_01266044;
    iVar22 = *(int *)(pVVar12 + 0x6c);
    iVar21 = iVar22 - iVar7;
    if (-1 < iVar21) goto LAB_01266044;
    iVar6 = *(int *)(pVVar9 + 0x68);
    iVar20 = (*(int *)(pVVar12 + 0x68) - iVar6) * iVar19;
    if ((iVar20 < 1) ||
       ((iVar3 = (*(int *)(pVVar12 + 0x68) - *(int *)(pVVar11 + 0x68)) * iVar19, iVar7 = iVar22,
        iVar3 != 0 && ((-1 < iVar3 || (iVar3 * iVar10 <= iVar21 * iVar8)))))) goto LAB_01266044;
  } while( true );
LAB_01265f68:
  iVar20 = (iVar7 - *(int *)(pVVar9 + 0x68)) * iVar19;
  pVVar11 = pVVar12;
  iVar22 = *(int *)(pVVar12 + 0x6c);
  goto LAB_01265f80;
}

