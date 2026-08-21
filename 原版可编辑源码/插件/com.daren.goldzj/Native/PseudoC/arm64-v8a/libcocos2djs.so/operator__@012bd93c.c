
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::Hints::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::Hints const&)
   const */

bool __thiscall v8::internal::compiler::Hints::operator==(Hints *this,Hints *param_1)

{
  Hints *pHVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  int *piVar16;
  Hints *pHVar17;
  Hints *pHVar18;
  Hints *pHVar19;
  Hints *pHVar20;
  long lVar21;
  long lVar22;
  
  plVar5 = *(long **)this;
  plVar7 = *(long **)param_1;
  if (plVar5 == plVar7) {
    return true;
  }
  if ((plVar5 == (long *)0x0) ||
     ((((*plVar5 == 0 && (plVar5[1] == 0)) && (plVar5[2] == 0)) &&
      ((plVar5[3] == 0 && (plVar5[4] == 0)))))) {
    if (plVar7 == (long *)0x0) {
      return true;
    }
    if (((*plVar7 == 0) && (plVar7[1] == 0)) &&
       ((plVar7[2] == 0 && ((plVar7[3] == 0 && (plVar7[4] == 0)))))) {
      return true;
    }
  }
  if (plVar5 == (long *)0x0) {
    return false;
  }
  if (plVar7 == (long *)0x0) {
    return false;
  }
  plVar8 = (long *)*plVar5;
  plVar10 = (long *)*plVar7;
  if (plVar8 != plVar10) {
    if (plVar8 == (long *)0x0) {
      lVar12 = 0;
      if (plVar10 != (long *)0x0) goto LAB_012bd9ec;
LAB_012bda94:
      if (lVar12 != 0) {
        return false;
      }
    }
    else {
      lVar12 = plVar8[2];
      if (plVar10 == (long *)0x0) goto LAB_012bda94;
LAB_012bd9ec:
      if (lVar12 != plVar10[2]) {
        return false;
      }
    }
    if (plVar10 != (long *)0x0) {
      plVar13 = plVar10;
      if (plVar8 == (long *)0x0) {
        return false;
      }
      do {
        plVar14 = plVar8;
        while (*plVar14 != *plVar13) {
          plVar14 = (long *)plVar14[1];
          if (plVar14 == (long *)0x0) {
            return false;
          }
        }
        plVar14 = plVar13 + 1;
        plVar13 = (long *)*plVar14;
      } while ((long *)*plVar14 != (long *)0x0);
    }
    if (plVar8 != (long *)0x0) {
      if (plVar10 == (long *)0x0) {
        return false;
      }
      do {
        plVar13 = plVar10;
        while (*plVar13 != *plVar8) {
          plVar13 = (long *)plVar13[1];
          if (plVar13 == (long *)0x0) {
            return false;
          }
        }
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != (long *)0x0);
    }
  }
  lVar12 = plVar5[2];
  lVar21 = plVar7[2];
  if (lVar12 != lVar21) {
    if (lVar12 == 0) {
      lVar6 = 0;
      if (lVar21 != 0) goto LAB_012bda7c;
LAB_012bdaac:
      if (lVar6 != 0) {
        return false;
      }
    }
    else {
      lVar6 = *(long *)(lVar12 + 0x20);
      if (lVar21 == 0) goto LAB_012bdaac;
LAB_012bda7c:
      if (lVar6 != *(long *)(lVar21 + 0x20)) {
        return false;
      }
    }
    if (lVar21 != 0) {
      lVar6 = lVar21;
      if (lVar12 == 0) {
        return false;
      }
      do {
        lVar22 = lVar12;
        while ((*(long *)(lVar22 + 8) != *(long *)(lVar6 + 8) ||
               (uVar3 = operator==((Hints *)(lVar22 + 0x10),(Hints *)(lVar6 + 0x10)),
               (uVar3 & 1) == 0))) {
          lVar22 = *(long *)(lVar22 + 0x18);
          if (lVar22 == 0) {
            return false;
          }
        }
        plVar5 = (long *)(lVar6 + 0x18);
        lVar6 = *plVar5;
      } while (*plVar5 != 0);
    }
    if (lVar12 != 0) {
      if (lVar21 == 0) {
        return false;
      }
      do {
        lVar6 = lVar21;
        while ((*(long *)(lVar6 + 8) != *(long *)(lVar12 + 8) ||
               (uVar3 = operator==((Hints *)(lVar6 + 0x10),(Hints *)(lVar12 + 0x10)),
               (uVar3 & 1) == 0))) {
          lVar6 = *(long *)(lVar6 + 0x18);
          if (lVar6 == 0) {
            return false;
          }
        }
        lVar12 = *(long *)(lVar12 + 0x18);
      } while (lVar12 != 0);
    }
  }
  lVar12 = *(long *)this;
  if (lVar12 == 0) {
    plVar5 = (long *)0x0;
    lVar21 = *(long *)param_1;
    if (lVar21 != 0) goto LAB_012bdb60;
LAB_012bdb7c:
    plVar7 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
LAB_012bdb88:
      if (plVar5 == (long *)0x0) {
        lVar6 = 0;
        if (plVar7 != (long *)0x0) goto LAB_012bdb94;
LAB_012bdbac:
        if (lVar6 != 0) {
          return false;
        }
      }
      else {
        lVar6 = plVar5[2];
        if (plVar7 == (long *)0x0) goto LAB_012bdbac;
LAB_012bdb94:
        if (lVar6 != plVar7[2]) {
          return false;
        }
      }
      if (plVar7 != (long *)0x0) {
        plVar8 = plVar7;
        if (plVar5 == (long *)0x0) {
          return false;
        }
        do {
          plVar10 = plVar5;
          while (*plVar10 != *plVar8) {
            plVar10 = (long *)plVar10[1];
            if (plVar10 == (long *)0x0) {
              return false;
            }
          }
          plVar10 = plVar8 + 1;
          plVar8 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      if (plVar5 != (long *)0x0) {
        if (plVar7 == (long *)0x0) {
          return false;
        }
        do {
          plVar8 = plVar7;
          while (*plVar8 != *plVar5) {
            plVar8 = (long *)plVar8[1];
            if (plVar8 == (long *)0x0) {
              return false;
            }
          }
          plVar5 = (long *)plVar5[1];
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  else {
    plVar5 = *(long **)(lVar12 + 8);
    lVar21 = *(long *)param_1;
    if (lVar21 == 0) goto LAB_012bdb7c;
LAB_012bdb60:
    plVar7 = *(long **)(lVar21 + 8);
    if (plVar5 != plVar7) goto LAB_012bdb88;
  }
  if (lVar12 == 0) {
    piVar9 = (int *)0x0;
    if (lVar21 != 0) goto LAB_012bdc30;
LAB_012bdc48:
    piVar11 = (int *)0x0;
    if (piVar9 == (int *)0x0) goto LAB_012bdd10;
  }
  else {
    piVar9 = *(int **)(lVar12 + 0x18);
    if (lVar21 == 0) goto LAB_012bdc48;
LAB_012bdc30:
    piVar11 = *(int **)(lVar21 + 0x18);
    if (piVar9 == piVar11) goto LAB_012bdd10;
  }
  if (piVar9 == (int *)0x0) {
    lVar6 = 0;
    if (piVar11 != (int *)0x0) goto LAB_012bdc60;
LAB_012bdc78:
    if (lVar6 != 0) {
      return false;
    }
  }
  else {
    lVar6 = *(long *)(piVar9 + 6);
    if (piVar11 == (int *)0x0) goto LAB_012bdc78;
LAB_012bdc60:
    if (lVar6 != *(long *)(piVar11 + 6)) {
      return false;
    }
  }
  if (piVar11 != (int *)0x0) {
    piVar15 = piVar11;
    if (piVar9 == (int *)0x0) {
      return false;
    }
    do {
      piVar16 = piVar9;
      while ((*(long *)(piVar16 + 2) != *(long *)(piVar15 + 2) || (*piVar16 != *piVar15))) {
        piVar16 = *(int **)(piVar16 + 4);
        if (piVar16 == (int *)0x0) {
          return false;
        }
      }
      piVar16 = piVar15 + 4;
      piVar15 = *(int **)piVar16;
    } while (*(int **)piVar16 != (int *)0x0);
  }
  if (piVar9 != (int *)0x0) {
    if (piVar11 == (int *)0x0) {
      return false;
    }
    do {
      piVar15 = piVar11;
      while ((*(long *)(piVar15 + 2) != *(long *)(piVar9 + 2) || (*piVar15 != *piVar9))) {
        piVar15 = *(int **)(piVar15 + 4);
        if (piVar15 == (int *)0x0) {
          return false;
        }
      }
      piVar9 = *(int **)(piVar9 + 4);
    } while (piVar9 != (int *)0x0);
  }
LAB_012bdd10:
  if (lVar12 == 0) {
    pHVar17 = (Hints *)0x0;
  }
  else {
    pHVar17 = *(Hints **)(lVar12 + 0x20);
  }
  if (lVar21 == 0) {
    pHVar20 = (Hints *)0x0;
    if (pHVar17 == (Hints *)0x0) {
      return true;
    }
  }
  else {
    pHVar20 = *(Hints **)(lVar21 + 0x20);
    if (pHVar17 == pHVar20) {
      return true;
    }
  }
  bVar2 = pHVar17 == (Hints *)0x0;
  if (pHVar17 == (Hints *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)((long)pHVar17 + 0x30);
  }
  if (pHVar20 == (Hints *)0x0) {
    if (lVar12 != 0) {
      return false;
    }
  }
  else if (lVar12 != *(long *)(pHVar20 + 0x30)) {
    return false;
  }
  if (pHVar20 != (Hints *)0x0) {
    pHVar19 = pHVar17;
    pHVar18 = pHVar20;
    if (pHVar17 == (Hints *)0x0) {
      return false;
    }
    do {
      while ((*(long *)(pHVar19 + 0x10) - *(long *)(pHVar19 + 8) !=
              *(long *)(pHVar18 + 0x10) - *(long *)(pHVar18 + 8) ||
             (uVar3 = operator==(pHVar19,pHVar18), (uVar3 & 1) == 0))) {
LAB_012bdd90:
        pHVar1 = pHVar19 + 0x28;
        pHVar19 = *(Hints **)pHVar1;
        if (*(Hints **)pHVar1 == (Hints *)0x0) {
          return false;
        }
      }
      lVar12 = *(long *)(pHVar19 + 8);
      if (*(long *)(pHVar19 + 0x10) != lVar12) {
        lVar21 = 0;
        uVar3 = 0;
        do {
          uVar4 = operator==((Hints *)(lVar12 + lVar21),(Hints *)(*(long *)(pHVar18 + 8) + lVar21));
          if ((uVar4 & 1) == 0) goto LAB_012bdd90;
          lVar12 = *(long *)(pHVar19 + 8);
          uVar3 = uVar3 + 1;
          lVar21 = lVar21 + 8;
        } while (uVar3 < (ulong)(*(long *)(pHVar19 + 0x10) - lVar12 >> 3));
      }
      pHVar1 = pHVar18 + 0x28;
      pHVar19 = pHVar17;
      pHVar18 = *(Hints **)pHVar1;
    } while (*(Hints **)pHVar1 != (Hints *)0x0);
  }
  pHVar19 = pHVar20;
  if (pHVar17 == (Hints *)0x0) {
    return true;
  }
joined_r0x012bde14:
  pHVar18 = pHVar20;
  if (pHVar19 == (Hints *)0x0) {
    return bVar2;
  }
  do {
    if ((*(long *)(pHVar18 + 0x10) - *(long *)(pHVar18 + 8) ==
         *(long *)(pHVar17 + 0x10) - *(long *)(pHVar17 + 8)) &&
       (uVar3 = operator==(pHVar18,pHVar17), (uVar3 & 1) != 0)) {
      lVar12 = *(long *)(pHVar18 + 8);
      if (*(long *)(pHVar18 + 0x10) == lVar12) break;
      lVar21 = 0;
      uVar3 = 0;
      while (uVar4 = operator==((Hints *)(lVar12 + lVar21),
                                (Hints *)(*(long *)(pHVar17 + 8) + lVar21)), (uVar4 & 1) != 0) {
        lVar12 = *(long *)(pHVar18 + 8);
        uVar3 = uVar3 + 1;
        lVar21 = lVar21 + 8;
        if ((ulong)(*(long *)(pHVar18 + 0x10) - lVar12 >> 3) <= uVar3) goto LAB_012bde94;
      }
    }
    pHVar19 = pHVar18 + 0x28;
    pHVar18 = *(Hints **)pHVar19;
    if (*(Hints **)pHVar19 == (Hints *)0x0) {
      return false;
    }
  } while( true );
LAB_012bde94:
  pHVar17 = *(Hints **)(pHVar17 + 0x28);
  bVar2 = true;
  pHVar19 = pHVar17;
  goto joined_r0x012bde14;
}

