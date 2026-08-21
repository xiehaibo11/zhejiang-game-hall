
/* btConvexHullInternal::findEdgeForCoplanarFaces(btConvexHullInternal::Vertex*,
   btConvexHullInternal::Vertex*, btConvexHullInternal::Edge*&, btConvexHullInternal::Edge*&,
   btConvexHullInternal::Vertex*, btConvexHullInternal::Vertex*) */

void __thiscall
btConvexHullInternal::findEdgeForCoplanarFaces
          (btConvexHullInternal *this,Vertex *param_1,Vertex *param_2,Edge **param_3,Edge **param_4,
          Vertex *param_5,Vertex *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  Edge *pEVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  Vertex *pVVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  Edge *pEVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  ulong uVar36;
  int iVar37;
  ulong uVar38;
  Edge *pEVar39;
  ulong uVar40;
  long lVar41;
  int iVar42;
  long lVar43;
  Edge *pEVar44;
  ulong uVar45;
  ulong uVar46;
  
  pEVar6 = *param_3;
  pEVar39 = *param_4;
  pVVar20 = param_1;
  if (pEVar6 != (Edge *)0x0) {
    pVVar20 = *(Vertex **)(pEVar6 + 0x18);
  }
  iVar32 = *(int *)(pVVar20 + 0x68);
  iVar33 = *(int *)(pVVar20 + 0x6c);
  iVar18 = *(int *)(pVVar20 + 0x70);
  pVVar20 = param_2;
  if (pEVar39 != (Edge *)0x0) {
    pVVar20 = *(Vertex **)(pEVar39 + 0x18);
  }
  pEVar44 = pEVar6;
  if (pEVar6 == (Edge *)0x0) {
    pEVar44 = pEVar39;
  }
  lVar31 = *(long *)(pEVar44 + 0x18);
  iVar34 = *(int *)(pVVar20 + 0x68);
  iVar35 = *(int *)(pVVar20 + 0x6c);
  iVar37 = *(int *)(pVVar20 + 0x70);
  iVar42 = *(int *)(param_1 + 0x68);
  iVar1 = *(int *)(param_1 + 0x6c);
  iVar2 = *(int *)(param_1 + 0x70);
  lVar23 = (long)*(int *)(param_2 + 0x6c) - (long)iVar1;
  lVar21 = (long)*(int *)(param_2 + 0x68) - (long)iVar42;
  iVar4 = *(int *)(lVar31 + 0x70) - iVar2;
  iVar22 = (int)lVar23;
  lVar25 = (long)*(int *)(param_2 + 0x70) - (long)iVar2;
  iVar11 = *(int *)(lVar31 + 0x68) - iVar42;
  iVar15 = *(int *)(lVar31 + 0x6c) - iVar1;
  iVar24 = (int)lVar25;
  iVar19 = (int)lVar21;
  lVar8 = (long)(iVar4 * iVar19 - iVar11 * iVar24);
  lVar41 = (long)(iVar11 * iVar22 - iVar15 * iVar19);
  lVar31 = (long)(iVar15 * iVar24 - iVar4 * iVar22);
  lVar30 = lVar41 * lVar23 - lVar8 * lVar25;
  lVar43 = lVar41 * iVar2 + lVar31 * iVar42 + lVar8 * iVar1;
  lVar25 = lVar31 * lVar25 - lVar41 * lVar21;
  lVar23 = lVar8 * lVar21 - lVar31 * lVar23;
  lVar21 = lVar30 * iVar32 + lVar25 * iVar33 + lVar23 * iVar18;
  pEVar44 = pEVar39;
  if ((pEVar6 != (Edge *)0x0) && (pEVar27 = pEVar6, *(Vertex **)(pEVar6 + 0x18) != param_5)) {
    do {
      pEVar27 = *(Edge **)(*(long *)(pEVar27 + 0x10) + 8);
      lVar12 = *(long *)(pEVar27 + 0x18);
      if ((*(int *)(lVar12 + 0x68) * lVar31 + *(int *)(lVar12 + 0x6c) * lVar8 +
           *(int *)(lVar12 + 0x70) * lVar41 < lVar43) ||
         ((*(int *)(pEVar27 + 0x28) == *(int *)(this + 0xa0) ||
          (lVar12 = lVar30 * *(int *)(lVar12 + 0x68) + lVar25 * *(int *)(lVar12 + 0x6c) +
                    lVar23 * *(int *)(lVar12 + 0x70), lVar12 <= lVar21)))) break;
      *param_3 = pEVar27;
      pVVar20 = *(Vertex **)(pEVar27 + 0x18);
      iVar32 = *(int *)(pVVar20 + 0x68);
      iVar33 = *(int *)(pVVar20 + 0x6c);
      iVar18 = *(int *)(pVVar20 + 0x70);
      lVar21 = lVar12;
    } while (pVVar20 != param_5);
    pEVar44 = *param_4;
  }
  lVar12 = lVar30 * iVar34 + lVar25 * iVar35 + lVar23 * iVar37;
  if (pEVar44 != (Edge *)0x0) {
    pVVar20 = *(Vertex **)(pEVar44 + 0x18);
    while (pVVar20 != param_6) {
      pEVar27 = (Edge *)**(undefined8 **)(pEVar44 + 0x10);
      lVar16 = *(long *)(pEVar27 + 0x18);
      if (((*(int *)(lVar16 + 0x68) * lVar31 + *(int *)(lVar16 + 0x6c) * lVar8 +
            *(int *)(lVar16 + 0x70) * lVar41 < lVar43) ||
          (*(int *)(pEVar27 + 0x28) == *(int *)(this + 0xa0))) ||
         (lVar16 = lVar30 * *(int *)(lVar16 + 0x68) + lVar25 * *(int *)(lVar16 + 0x6c) +
                   lVar23 * *(int *)(lVar16 + 0x70), lVar16 <= lVar12)) break;
      *param_4 = pEVar27;
      pVVar20 = *(Vertex **)(pEVar27 + 0x18);
      iVar34 = *(int *)(pVVar20 + 0x68);
      iVar35 = *(int *)(pVVar20 + 0x6c);
      iVar37 = *(int *)(pVVar20 + 0x70);
      lVar12 = lVar16;
      pEVar44 = pEVar27;
    }
  }
  uVar29 = lVar12 - lVar21;
  if (0 < (long)uVar29) {
    do {
      pEVar39 = *param_3;
      iVar42 = (iVar34 - iVar32) * iVar19 + (iVar35 - iVar33) * iVar22 + (iVar37 - iVar18) * iVar24;
      uVar28 = (ulong)iVar42;
      uVar45 = uVar29;
      if (pEVar39 != (Edge *)0x0) {
        do {
          if ((*(Vertex **)(pEVar39 + 0x18) == param_5) ||
             (pEVar44 = *(Edge **)(*(long *)pEVar39 + 0x10),
             *(int *)(pEVar44 + 0x28) <= *(int *)(this + 0xa0))) break;
          lVar21 = *(long *)(pEVar44 + 0x18);
          iVar1 = *(int *)(lVar21 + 0x68);
          iVar2 = *(int *)(lVar21 + 0x6c);
          iVar4 = *(int *)(lVar21 + 0x70);
          iVar11 = (iVar1 - iVar32) * iVar19 + (iVar2 - iVar33) * iVar22 + (iVar4 - iVar18) * iVar24
          ;
          lVar21 = lVar30 * (iVar1 - iVar32) + lVar25 * (iVar2 - iVar33) + lVar23 * (iVar4 - iVar18)
          ;
          uVar45 = (ulong)iVar11;
          if (lVar21 == 0) {
            if (-1 < iVar11) break;
          }
          else {
            if (-1 < lVar21) break;
            if (iVar11 < 1) {
              iVar15 = -(uint)(iVar11 != 0);
              uVar36 = 0;
              if (iVar11 != 0) {
                uVar36 = -uVar45;
              }
              if (iVar42 < 1) goto LAB_01267b30;
LAB_01267b08:
              iVar11 = 1;
              uVar45 = uVar28;
            }
            else {
              iVar15 = 1;
              uVar36 = uVar45;
              if (0 < iVar42) goto LAB_01267b08;
LAB_01267b30:
              iVar11 = -(uint)(iVar42 != 0);
              uVar45 = 0;
              if (iVar42 != 0) {
                uVar45 = -uVar28;
              }
            }
            iVar3 = -iVar15;
            uVar7 = uVar29;
            if ((long)uVar29 < 1) {
              if ((long)uVar29 < 0) {
                iVar11 = -iVar11;
                uVar7 = -uVar29;
              }
              else {
                uVar7 = 0;
              }
            }
            if (iVar11 == iVar3) {
              if (iVar15 == 0) goto LAB_01267c3c;
              uVar14 = (uVar7 & 0xffffffff) * (uVar36 & 0xffffffff);
              uVar17 = (uVar7 >> 0x20) * (uVar36 & 0xffffffff);
              uVar40 = (uVar7 & 0xffffffff) * (uVar36 >> 0x20);
              uVar46 = -lVar21 & 0xffffffff;
              uVar13 = (ulong)-lVar21 >> 0x20;
              uVar10 = (uVar45 & 0xffffffff) * uVar46;
              uVar46 = (uVar45 >> 0x20) * uVar46;
              uVar38 = (uVar45 & 0xffffffff) * uVar13;
              uVar9 = (uVar17 & 0xffffffff) + (uVar40 & 0xffffffff);
              uVar7 = (uVar7 >> 0x20) * (uVar36 >> 0x20) + (uVar17 >> 0x20) + (uVar40 >> 0x20) +
                      (uVar9 >> 0x20);
              uVar9 = uVar9 << 0x20;
              uVar17 = uVar14 + uVar9;
              uVar36 = (uVar46 & 0xffffffff) + (uVar38 & 0xffffffff);
              if (CARRY8(uVar14,uVar9)) {
                uVar7 = uVar7 + 1;
              }
              uVar45 = (uVar45 >> 0x20) * uVar13 + (uVar46 >> 0x20) + (uVar38 >> 0x20) +
                       (uVar36 >> 0x20);
              uVar36 = uVar36 << 0x20;
              uVar9 = uVar10 + uVar36;
              if (CARRY8(uVar10,uVar36)) {
                uVar45 = uVar45 + 1;
              }
              iVar11 = iVar15;
              if (((uVar45 <= uVar7) && (iVar11 = iVar3, uVar7 == uVar45)) &&
                 (iVar11 = iVar15, uVar9 <= uVar17)) {
                iVar11 = (uint)(uVar9 < uVar17) * iVar3;
              }
            }
            else {
              iVar11 = iVar3 - iVar11;
            }
            if (iVar11 < 0) break;
          }
LAB_01267c3c:
          bVar5 = pEVar39 != pEVar6;
          iVar42 = (iVar34 - iVar1) * iVar19 + (iVar35 - iVar2) * iVar22 + (iVar37 - iVar4) * iVar24
          ;
          pEVar39 = (Edge *)0x0;
          if (bVar5) {
            pEVar39 = pEVar44;
          }
          uVar29 = lVar30 * (iVar34 - iVar1) + lVar25 * (iVar35 - iVar2) + lVar23 * (iVar37 - iVar4)
          ;
          uVar28 = (ulong)iVar42;
          *param_3 = pEVar39;
          iVar32 = iVar1;
          iVar33 = iVar2;
          iVar18 = iVar4;
        } while (pEVar39 != (Edge *)0x0);
        pEVar44 = *param_4;
        uVar45 = uVar29;
      }
      if (pEVar44 == (Edge *)0x0) {
        return;
      }
      if (*(Vertex **)(pEVar44 + 0x18) == param_6) {
        return;
      }
      pEVar44 = (Edge *)**(undefined8 **)(pEVar44 + 0x10);
      if (*(int *)(pEVar44 + 0x28) <= *(int *)(this + 0xa0)) {
        return;
      }
      lVar21 = *(long *)(pEVar44 + 0x18);
      iVar37 = *(int *)(lVar21 + 0x70) - iVar37;
      iVar34 = *(int *)(lVar21 + 0x68) - iVar34;
      iVar35 = *(int *)(lVar21 + 0x6c) - iVar35;
      if (iVar34 * lVar31 + iVar35 * lVar8 != -lVar41 * (long)iVar37) {
        return;
      }
      uVar29 = lVar30 * (*(int *)(lVar21 + 0x68) - iVar32) +
               lVar25 * (*(int *)(lVar21 + 0x6c) - iVar33) +
               lVar23 * (*(int *)(lVar21 + 0x70) - iVar18);
      if ((long)uVar29 < 1) {
        return;
      }
      iVar1 = iVar34 * iVar19 + iVar35 * iVar22 + iVar37 * iVar24;
      lVar21 = lVar30 * iVar34 + lVar25 * iVar35 + lVar23 * iVar37;
      uVar36 = (ulong)iVar1;
      if (lVar21 == 0) {
        if (-1 < iVar1) {
          return;
        }
      }
      else {
        if (-1 < lVar21) {
          return;
        }
        if (iVar1 < 1) {
          iVar34 = -(uint)(iVar1 != 0);
          uVar7 = 0;
          if (iVar1 != 0) {
            uVar7 = -uVar36;
          }
          if (iVar42 < 1) goto LAB_0126793c;
LAB_01267918:
          iVar35 = 1;
          uVar36 = uVar28;
        }
        else {
          iVar34 = 1;
          uVar7 = uVar36;
          if (0 < iVar42) goto LAB_01267918;
LAB_0126793c:
          iVar35 = -(uint)(iVar42 != 0);
          uVar36 = 0;
          if (iVar42 != 0) {
            uVar36 = -uVar28;
          }
        }
        iVar42 = -iVar34;
        if ((long)uVar45 < 1) {
          if ((long)uVar45 < 0) {
            iVar35 = -iVar35;
            uVar45 = -uVar45;
          }
          else {
            uVar45 = 0;
          }
        }
        if (iVar35 == iVar42) {
          if (iVar34 == 0) {
            return;
          }
          uVar38 = (uVar45 & 0xffffffff) * (uVar7 & 0xffffffff);
          uVar9 = (uVar45 >> 0x20) * (uVar7 & 0xffffffff);
          uVar10 = (uVar45 & 0xffffffff) * (uVar7 >> 0x20);
          uVar13 = -lVar21 & 0xffffffff;
          uVar17 = (ulong)-lVar21 >> 0x20;
          uVar40 = (uVar36 & 0xffffffff) * uVar13;
          uVar13 = (uVar36 >> 0x20) * uVar13;
          uVar14 = (uVar36 & 0xffffffff) * uVar17;
          uVar28 = (uVar9 & 0xffffffff) + (uVar10 & 0xffffffff);
          uVar7 = (uVar45 >> 0x20) * (uVar7 >> 0x20) + (uVar9 >> 0x20) + (uVar10 >> 0x20) +
                  (uVar28 >> 0x20);
          uVar28 = uVar28 << 0x20;
          uVar9 = uVar38 + uVar28;
          uVar45 = (uVar13 & 0xffffffff) + (uVar14 & 0xffffffff);
          if (CARRY8(uVar38,uVar28)) {
            uVar7 = uVar7 + 1;
          }
          uVar28 = (uVar36 >> 0x20) * uVar17 + (uVar13 >> 0x20) + (uVar14 >> 0x20) +
                   (uVar45 >> 0x20);
          uVar45 = uVar45 << 0x20;
          uVar36 = uVar40 + uVar45;
          if (CARRY8(uVar40,uVar45)) {
            uVar28 = uVar28 + 1;
          }
          if (uVar7 < uVar28) {
LAB_01267a28:
            uVar26 = 0xffffffff;
          }
          else if (uVar28 < uVar7) {
            uVar26 = 1;
          }
          else {
            if (uVar9 < uVar36) goto LAB_01267a28;
            uVar26 = (uint)(uVar36 < uVar9);
          }
          iVar42 = uVar26 * iVar42;
        }
        else {
          iVar42 = iVar42 - iVar35;
        }
        if (iVar42 < 1) {
          return;
        }
      }
      *param_4 = pEVar44;
      lVar21 = *(long *)(pEVar44 + 0x18);
      iVar34 = *(int *)(lVar21 + 0x68);
      iVar35 = *(int *)(lVar21 + 0x6c);
      iVar37 = *(int *)(lVar21 + 0x70);
    } while( true );
  }
  if (-1 < (long)uVar29) {
    return;
  }
  do {
    while( true ) {
      iVar42 = (iVar34 - iVar32) * iVar19 + (iVar35 - iVar33) * iVar22 + (iVar37 - iVar18) * iVar24;
      uVar45 = (ulong)iVar42;
      if (((pEVar44 == (Edge *)0x0) || (*(Vertex **)(pEVar44 + 0x18) == param_6)) ||
         (pEVar6 = *(Edge **)(*(long *)(pEVar44 + 8) + 0x10),
         *(int *)(pEVar6 + 0x28) <= *(int *)(this + 0xa0))) break;
      lVar21 = *(long *)(pEVar6 + 0x18);
      iVar1 = *(int *)(lVar21 + 0x68);
      iVar2 = *(int *)(lVar21 + 0x6c);
      iVar4 = *(int *)(lVar21 + 0x70);
      iVar11 = (iVar1 - iVar34) * iVar19 + (iVar2 - iVar35) * iVar22 + (iVar4 - iVar37) * iVar24;
      lVar21 = lVar30 * (iVar1 - iVar34) + lVar25 * (iVar2 - iVar35) + lVar23 * (iVar4 - iVar37);
      uVar28 = (ulong)iVar11;
      if (lVar21 == 0) {
        if (iVar11 < 1) break;
      }
      else {
        if (-1 < lVar21) break;
        if (iVar11 < 1) {
          iVar15 = -(uint)(iVar11 != 0);
          uVar36 = 0;
          if (iVar11 != 0) {
            uVar36 = -uVar28;
          }
          if (iVar42 < 1) goto LAB_012674c4;
LAB_01267498:
          iVar11 = 1;
          uVar28 = uVar45;
        }
        else {
          iVar15 = 1;
          uVar36 = uVar28;
          if (0 < iVar42) goto LAB_01267498;
LAB_012674c4:
          iVar11 = -(uint)(iVar42 != 0);
          uVar28 = 0;
          if (iVar42 != 0) {
            uVar28 = -uVar45;
          }
        }
        iVar3 = -iVar15;
        uVar7 = uVar29;
        if ((long)uVar29 < 1) {
          if (-1 < (long)uVar29) {
            uVar7 = 0;
            goto joined_r0x01267588;
          }
          iVar11 = -iVar11;
          uVar7 = -uVar29;
          if (iVar11 == iVar3) goto LAB_012674e8;
LAB_0126758c:
          iVar3 = iVar3 - iVar11;
        }
        else {
joined_r0x01267588:
          if (iVar11 != iVar3) goto LAB_0126758c;
LAB_012674e8:
          if (iVar15 == 0) goto LAB_012677e4;
          uVar40 = (uVar7 & 0xffffffff) * (uVar36 & 0xffffffff);
          uVar17 = (uVar7 >> 0x20) * (uVar36 & 0xffffffff);
          uVar13 = (uVar7 & 0xffffffff) * (uVar36 >> 0x20);
          uVar14 = -lVar21 & 0xffffffff;
          uVar10 = (ulong)-lVar21 >> 0x20;
          uVar46 = (uVar28 & 0xffffffff) * uVar14;
          uVar14 = (uVar28 >> 0x20) * uVar14;
          uVar38 = (uVar28 & 0xffffffff) * uVar10;
          uVar9 = (uVar17 & 0xffffffff) + (uVar13 & 0xffffffff);
          uVar7 = (uVar7 >> 0x20) * (uVar36 >> 0x20) + (uVar17 >> 0x20) + (uVar13 >> 0x20) +
                  (uVar9 >> 0x20);
          uVar9 = uVar9 << 0x20;
          uVar17 = uVar40 + uVar9;
          uVar36 = (uVar14 & 0xffffffff) + (uVar38 & 0xffffffff);
          if (CARRY8(uVar40,uVar9)) {
            uVar7 = uVar7 + 1;
          }
          uVar28 = (uVar28 >> 0x20) * uVar10 + (uVar14 >> 0x20) + (uVar38 >> 0x20) +
                   (uVar36 >> 0x20);
          uVar36 = uVar36 << 0x20;
          uVar9 = uVar46 + uVar36;
          if (CARRY8(uVar46,uVar36)) {
            uVar28 = uVar28 + 1;
          }
          if (uVar7 < uVar28) {
            uVar26 = 0xffffffff;
          }
          else if (uVar7 == uVar28) {
            if (uVar17 < uVar9) {
              uVar26 = 0xffffffff;
            }
            else {
              uVar26 = (uint)(uVar9 < uVar17);
            }
          }
          else {
            uVar26 = 1;
          }
          iVar3 = uVar26 * iVar3;
        }
        if (0 < iVar3) break;
      }
LAB_012677e4:
      bVar5 = pEVar44 != pEVar39;
      pEVar44 = (Edge *)0x0;
      if (bVar5) {
        pEVar44 = pEVar6;
      }
      *param_4 = pEVar44;
      uVar29 = lVar30 * (iVar1 - iVar32) + lVar25 * (iVar2 - iVar33) + lVar23 * (iVar4 - iVar18);
      iVar34 = iVar1;
      iVar35 = iVar2;
      iVar37 = iVar4;
    }
    pEVar6 = *param_3;
    if (pEVar6 == (Edge *)0x0) {
      return;
    }
    if (*(Vertex **)(pEVar6 + 0x18) == param_5) {
      return;
    }
    pEVar6 = *(Edge **)(*(long *)(pEVar6 + 0x10) + 8);
    if (*(int *)(pEVar6 + 0x28) <= *(int *)(this + 0xa0)) {
      return;
    }
    lVar21 = *(long *)(pEVar6 + 0x18);
    iVar32 = *(int *)(lVar21 + 0x68) - iVar32;
    iVar33 = *(int *)(lVar21 + 0x6c) - iVar33;
    iVar18 = *(int *)(lVar21 + 0x70) - iVar18;
    if (iVar32 * lVar31 + iVar33 * lVar8 != -lVar41 * (long)iVar18) {
      return;
    }
    uVar28 = lVar30 * (iVar34 - *(int *)(lVar21 + 0x68)) +
             lVar25 * (iVar35 - *(int *)(lVar21 + 0x6c)) +
             lVar23 * (iVar37 - *(int *)(lVar21 + 0x70));
    if (-1 < (long)uVar28) {
      return;
    }
    iVar1 = iVar32 * iVar19 + iVar33 * iVar22 + iVar18 * iVar24;
    lVar21 = lVar30 * iVar32 + lVar25 * iVar33 + lVar23 * iVar18;
    uVar36 = (ulong)iVar1;
    if (lVar21 == 0) {
      if (iVar1 < 1) {
        return;
      }
    }
    else {
      if (-1 < lVar21) {
        return;
      }
      if (iVar1 < 1) {
        iVar32 = -(uint)(iVar1 != 0);
        uVar7 = 0;
        if (iVar1 != 0) {
          uVar7 = -uVar36;
        }
        if (iVar42 < 1) goto LAB_01267694;
LAB_0126766c:
        iVar33 = 1;
        uVar36 = uVar45;
      }
      else {
        iVar32 = 1;
        uVar7 = uVar36;
        if (0 < iVar42) goto LAB_0126766c;
LAB_01267694:
        iVar33 = -(uint)(iVar42 != 0);
        uVar36 = 0;
        if (iVar42 != 0) {
          uVar36 = -uVar45;
        }
      }
      iVar18 = -iVar32;
      if ((long)uVar29 < 1) {
        if ((long)uVar29 < 0) {
          iVar33 = -iVar33;
          uVar29 = -uVar29;
        }
        else {
          uVar29 = 0;
        }
      }
      if (iVar33 == iVar18) {
        if (iVar32 == 0) {
          return;
        }
        uVar13 = (uVar29 & 0xffffffff) * (uVar7 & 0xffffffff);
        uVar9 = (uVar29 >> 0x20) * (uVar7 & 0xffffffff);
        uVar17 = (uVar29 & 0xffffffff) * (uVar7 >> 0x20);
        uVar40 = -lVar21 & 0xffffffff;
        uVar38 = (ulong)-lVar21 >> 0x20;
        uVar14 = (uVar36 & 0xffffffff) * uVar40;
        uVar40 = (uVar36 >> 0x20) * uVar40;
        uVar10 = (uVar36 & 0xffffffff) * uVar38;
        uVar45 = (uVar9 & 0xffffffff) + (uVar17 & 0xffffffff);
        uVar7 = (uVar29 >> 0x20) * (uVar7 >> 0x20) + (uVar9 >> 0x20) + (uVar17 >> 0x20) +
                (uVar45 >> 0x20);
        uVar45 = uVar45 << 0x20;
        uVar9 = uVar13 + uVar45;
        uVar29 = (uVar40 & 0xffffffff) + (uVar10 & 0xffffffff);
        if (CARRY8(uVar13,uVar45)) {
          uVar7 = uVar7 + 1;
        }
        uVar45 = (uVar36 >> 0x20) * uVar38 + (uVar40 >> 0x20) + (uVar10 >> 0x20) + (uVar29 >> 0x20);
        uVar29 = uVar29 << 0x20;
        uVar36 = uVar14 + uVar29;
        if (CARRY8(uVar14,uVar29)) {
          uVar45 = uVar45 + 1;
        }
        if (uVar7 < uVar45) {
LAB_01267780:
          uVar26 = 0xffffffff;
        }
        else if (uVar45 < uVar7) {
          uVar26 = 1;
        }
        else {
          if (uVar9 < uVar36) goto LAB_01267780;
          uVar26 = (uint)(uVar36 < uVar9);
        }
        iVar18 = uVar26 * iVar18;
      }
      else {
        iVar18 = iVar18 - iVar33;
      }
      if (-1 < iVar18) {
        return;
      }
    }
    *param_3 = pEVar6;
    lVar21 = *(long *)(pEVar6 + 0x18);
    pEVar44 = *param_4;
    iVar32 = *(int *)(lVar21 + 0x68);
    iVar33 = *(int *)(lVar21 + 0x6c);
    iVar18 = *(int *)(lVar21 + 0x70);
    uVar29 = uVar28;
  } while( true );
}

