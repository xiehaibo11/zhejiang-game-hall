
/* btConvexHullInternal::merge(btConvexHullInternal::IntermediateHull&,
   btConvexHullInternal::IntermediateHull&) */

void __thiscall
btConvexHullInternal::merge
          (btConvexHullInternal *this,IntermediateHull *param_1,IntermediateHull *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  Edge *pEVar5;
  Edge *pEVar6;
  Vertex *pVVar7;
  Edge *pEVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  Edge *pEVar14;
  undefined8 *puVar15;
  Edge *pEVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  Vertex *pVVar29;
  Vertex *pVVar30;
  Vertex *pVVar31;
  Edge *pEVar32;
  undefined8 uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  Edge *local_140;
  Edge *local_138;
  Edge *local_118;
  Edge *local_110;
  Edge *local_108;
  long *local_100;
  Edge *local_f8;
  Edge *local_f0;
  ulong local_e8;
  ulong local_e0;
  int local_d8;
  ulong local_d0;
  ulong uStack_c8;
  int local_c0;
  Edge *local_b0;
  long lStack_a8;
  long local_a0;
  Edge *local_98;
  long lStack_90;
  long local_88;
  ulong local_80;
  ulong uStack_78;
  Vertex *local_70;
  Vertex *local_68;
  
  if (*(long *)(param_2 + 8) != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      uVar33 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar33;
      uVar33 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar33;
    }
    else {
      *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + -1;
      local_70 = (Vertex *)0x0;
      local_68 = (Vertex *)0x0;
      uVar4 = mergeProjection(this,param_1,param_2,&local_68,&local_70);
      pVVar31 = local_68;
      pVVar30 = local_70;
      if ((uVar4 & 1) == 0) {
        iVar11 = *(int *)(local_70 + 0x6c);
        iVar28 = *(int *)(local_70 + 0x70);
        iVar25 = *(int *)(local_70 + 0x68) + 1;
      }
      else {
        pEVar6 = *(Edge **)(local_68 + 0x10);
        local_98 = (Edge *)0x0;
        iVar25 = *(int *)(local_70 + 0x68) - *(int *)(local_68 + 0x68);
        iVar11 = *(int *)(local_70 + 0x70) - *(int *)(local_68 + 0x70);
        iVar28 = -iVar25;
        iVar26 = *(int *)(local_70 + 0x6c) - *(int *)(local_68 + 0x6c);
        lVar21 = (long)iVar28;
        lVar17 = (long)iVar26;
        lVar18 = (long)iVar11 * (long)iVar26;
        lVar23 = -(lVar21 * iVar11);
        lVar24 = (long)iVar28 * (long)iVar25 - (long)iVar26 * (long)iVar26;
        pEVar14 = (Edge *)0x0;
        if (pEVar6 != (Edge *)0x0) {
          pEVar8 = pEVar6;
          do {
            lVar9 = *(long *)(pEVar8 + 0x18);
            lVar10 = (long)(*(int *)(lVar9 + 0x68) - *(int *)(local_68 + 0x68));
            lVar27 = (long)(*(int *)(lVar9 + 0x6c) - *(int *)(local_68 + 0x6c));
            if ((lVar27 * lVar21 - -lVar17 * lVar10 == 0) &&
               (0 < lVar23 * lVar10 + lVar18 * lVar27 +
                    lVar24 * (*(int *)(lVar9 + 0x70) - *(int *)(local_68 + 0x70)))) {
              if (pEVar14 == (Edge *)0x0) {
LAB_01266400:
                pEVar14 = pEVar8;
              }
              else if (*(Edge **)pEVar14 == pEVar8) {
                if (*(Edge **)(pEVar14 + 8) == pEVar8) {
                  lVar27 = *(long *)(pEVar14 + 0x18);
                  lVar10 = *(long *)(*(long *)(pEVar8 + 0x10) + 0x18);
                  iVar28 = *(int *)(lVar9 + 0x70) - *(int *)(lVar10 + 0x70);
                  iVar25 = *(int *)(lVar27 + 0x70) - *(int *)(lVar10 + 0x70);
                  if ((iVar25 * (*(int *)(lVar9 + 0x68) - *(int *)(lVar10 + 0x68)) -
                      iVar28 * (*(int *)(lVar27 + 0x68) - *(int *)(lVar10 + 0x68))) * lVar21 +
                      (iVar28 * (*(int *)(lVar27 + 0x6c) - *(int *)(lVar10 + 0x6c)) -
                      iVar25 * (*(int *)(lVar9 + 0x6c) - *(int *)(lVar10 + 0x6c))) * lVar17 < 1)
                  goto LAB_01266400;
                }
              }
              else if (*(Edge **)(pEVar14 + 8) == pEVar8) goto LAB_01266400;
            }
            pEVar8 = *(Edge **)pEVar8;
            local_98 = pEVar14;
          } while (pEVar8 != pEVar6);
        }
        pEVar6 = *(Edge **)(local_70 + 0x10);
        pEVar14 = (Edge *)0x0;
        local_b0 = (Edge *)0x0;
        if (pEVar6 != (Edge *)0x0) {
          pEVar8 = pEVar6;
          do {
            lVar9 = *(long *)(pEVar8 + 0x18);
            lVar10 = (long)(*(int *)(lVar9 + 0x68) - *(int *)(local_70 + 0x68));
            lVar27 = (long)(*(int *)(lVar9 + 0x6c) - *(int *)(local_70 + 0x6c));
            if ((lVar27 * lVar21 - -lVar17 * lVar10 == 0) &&
               (0 < lVar23 * lVar10 + lVar18 * lVar27 +
                    lVar24 * (*(int *)(lVar9 + 0x70) - *(int *)(local_70 + 0x70)))) {
              if (pEVar14 != (Edge *)0x0) {
                if (*(Edge **)pEVar14 != pEVar8) goto LAB_01266568;
                if (*(Edge **)(pEVar14 + 8) == pEVar8) {
                  lVar27 = *(long *)(pEVar14 + 0x18);
                  lVar10 = *(long *)(*(long *)(pEVar8 + 0x10) + 0x18);
                  iVar28 = *(int *)(lVar9 + 0x70) - *(int *)(lVar10 + 0x70);
                  iVar25 = *(int *)(lVar27 + 0x70) - *(int *)(lVar10 + 0x70);
                  if ((iVar25 * (*(int *)(lVar9 + 0x68) - *(int *)(lVar10 + 0x68)) -
                      iVar28 * (*(int *)(lVar27 + 0x68) - *(int *)(lVar10 + 0x68))) * lVar21 +
                      (iVar28 * (*(int *)(lVar27 + 0x6c) - *(int *)(lVar10 + 0x6c)) -
                      iVar25 * (*(int *)(lVar9 + 0x6c) - *(int *)(lVar10 + 0x6c))) * lVar17 < 1)
                  goto LAB_01266568;
                }
              }
              pEVar14 = pEVar8;
            }
LAB_01266568:
            pEVar8 = *(Edge **)pEVar8;
            local_b0 = pEVar14;
          } while (pEVar8 != pEVar6);
        }
        if (local_98 != (Edge *)0x0 || local_b0 != (Edge *)0x0) {
          findEdgeForCoplanarFaces
                    (this,local_68,local_70,&local_98,&local_b0,(Vertex *)0x0,(Vertex *)0x0);
          if (local_98 != (Edge *)0x0) {
            pVVar31 = *(Vertex **)(local_98 + 0x18);
            local_68 = pVVar31;
          }
          if (local_b0 != (Edge *)0x0) {
            pVVar30 = *(Vertex **)(local_b0 + 0x18);
            local_70 = pVVar30;
          }
        }
        iVar11 = *(int *)(pVVar30 + 0x6c);
        iVar25 = *(int *)(pVVar30 + 0x68);
        iVar28 = *(int *)(pVVar30 + 0x70) + 1;
      }
      local_110 = (Edge *)0x0;
      pEVar14 = (Edge *)0x0;
      lVar17 = 0;
      local_108 = (Edge *)0x0;
      local_100 = (long *)0x0;
      local_140 = (Edge *)0x0;
      local_138 = (Edge *)0x0;
      local_118 = (Edge *)0x0;
      bVar2 = true;
      pVVar7 = pVVar31;
      pVVar29 = pVVar30;
      do {
        uVar4 = (long)*(int *)(pVVar29 + 0x68) - (long)*(int *)(pVVar7 + 0x68);
        lVar18 = (long)*(int *)(pVVar29 + 0x6c) - (long)*(int *)(pVVar7 + 0x6c);
        uVar13 = (long)*(int *)(pVVar29 + 0x70) - (long)*(int *)(pVVar7 + 0x70);
        uStack_78 = uVar13 | 0xffffffff00000000;
        local_80 = uVar4 & 0xffffffff | lVar18 << 0x20;
        lStack_90 = (long)((int)uVar4 * (iVar28 - *(int *)(pVVar7 + 0x70)) -
                          (int)uVar13 * (iVar25 - *(int *)(pVVar7 + 0x68)));
        local_98 = (Edge *)(long)((int)uVar13 * (iVar11 - *(int *)(pVVar7 + 0x6c)) -
                                 (int)lVar18 * (iVar28 - *(int *)(pVVar7 + 0x70)));
        local_88 = (long)((int)lVar18 * (iVar25 - *(int *)(pVVar7 + 0x68)) -
                         (int)uVar4 * (iVar11 - *(int *)(pVVar7 + 0x6c)));
        local_b0 = (Edge *)(lVar18 * local_88 - lStack_90 * uVar13);
        lStack_a8 = (long)local_98 * uVar13 - uVar4 * local_88;
        local_a0 = lStack_90 * uVar4 - (long)local_98 * lVar18;
        local_c0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        pEVar6 = (Edge *)findMaxAngle(this,false,pVVar7,(Point32 *)&local_80,(Point64 *)&local_98,
                                      (Point64 *)&local_b0,(Rational64 *)&local_d0);
        local_d8 = 0;
        local_e8 = 0;
        local_e0 = 0;
        pEVar8 = (Edge *)findMaxAngle(this,true,pVVar29,(Point32 *)&local_80,(Point64 *)&local_98,
                                      (Point64 *)&local_b0,(Rational64 *)&local_e8);
        pVVar7 = local_68;
        pVVar29 = local_70;
        if (pEVar6 == (Edge *)0x0 && pEVar8 == (Edge *)0x0) {
          lVar17 = newEdgePair(this,local_68,local_70);
          *(long *)lVar17 = lVar17;
          *(long *)(lVar17 + 8) = lVar17;
          *(long *)(pVVar7 + 0x10) = lVar17;
          lVar17 = *(long *)(lVar17 + 0x10);
          *(long *)lVar17 = lVar17;
          *(long *)(lVar17 + 8) = lVar17;
          *(long *)(pVVar29 + 0x10) = lVar17;
          return;
        }
        iVar26 = 1;
        if (((pEVar6 != (Edge *)0x0) && (iVar26 = -1, pEVar8 != (Edge *)0x0)) &&
           (iVar26 = local_c0 - local_d8, iVar26 == 0)) {
          if (local_c0 == 0) {
            iVar26 = 0;
          }
          else {
            uVar13 = (local_e0 >> 0x20) * (local_d0 & 0xffffffff);
            uVar22 = (local_e0 & 0xffffffff) * (local_d0 >> 0x20);
            uVar4 = (local_e8 >> 0x20) * (uStack_c8 & 0xffffffff);
            uVar19 = (local_e8 & 0xffffffff) * (uStack_c8 >> 0x20);
            uVar36 = (uVar13 & 0xffffffff) + (uVar22 & 0xffffffff);
            uVar38 = (uVar4 & 0xffffffff) + (uVar19 & 0xffffffff);
            uVar37 = uVar36 << 0x20;
            uVar39 = uVar38 << 0x20;
            uVar34 = uVar37 + (local_e0 & 0xffffffff) * (local_d0 & 0xffffffff);
            uVar35 = uVar39 + (local_e8 & 0xffffffff) * (uStack_c8 & 0xffffffff);
            uVar13 = (local_e0 >> 0x20) * (local_d0 >> 0x20) + (uVar13 >> 0x20) + (uVar22 >> 0x20) +
                     (uVar36 >> 0x20) + (ulong)(uVar34 < uVar37);
            uVar4 = (local_e8 >> 0x20) * (uStack_c8 >> 0x20) + (uVar4 >> 0x20) + (uVar19 >> 0x20) +
                    (uVar38 >> 0x20) + (ulong)(uVar35 < uVar39);
            if (uVar13 < uVar4) {
LAB_01266894:
              uVar12 = 0xffffffff;
            }
            else if (uVar13 == uVar4) {
              if (uVar34 < uVar35) goto LAB_01266894;
              uVar12 = (uint)(uVar35 < uVar34);
            }
            else {
              uVar12 = 1;
            }
            iVar26 = uVar12 * local_c0;
          }
        }
        if (bVar2) {
LAB_0126690c:
          pEVar5 = (Edge *)newEdgePair(this,local_68,local_70);
          pEVar16 = pEVar5;
          if (local_118 != (Edge *)0x0) {
            *(Edge **)(local_118 + 8) = pEVar5;
            pEVar16 = local_140;
          }
          local_140 = pEVar16;
          pEVar32 = *(Edge **)(pEVar5 + 0x10);
          *(Edge **)pEVar5 = local_118;
          pEVar16 = pEVar32;
          if (local_108 != (Edge *)0x0) {
            *(Edge **)local_108 = pEVar32;
            pEVar16 = local_138;
          }
          *(Edge **)(pEVar32 + 8) = local_108;
          local_118 = pEVar5;
          local_138 = pEVar16;
          local_108 = pEVar32;
        }
        else {
          if (-1 < iVar26) {
            uVar4 = local_e0;
            if (local_d8 < 0) goto joined_r0x0126696c;
            goto LAB_0126690c;
          }
          uVar4 = uStack_c8;
          if (-1 < local_c0) goto LAB_0126690c;
joined_r0x0126696c:
          if (uVar4 != 0) goto LAB_0126690c;
        }
        local_f8 = pEVar8;
        local_f0 = pEVar6;
        if (iVar26 == 0) {
          findEdgeForCoplanarFaces
                    (this,local_68,local_70,&local_f0,&local_f8,(Vertex *)0x0,(Vertex *)0x0);
LAB_012669a4:
          pVVar29 = local_70;
          if (local_f8 != (Edge *)0x0) {
            if (local_100 != (long *)0x0) {
              pEVar16 = (Edge *)*local_100;
              while (pEVar16 != pEVar8) {
                pEVar5 = *(Edge **)pEVar16;
                puVar15 = *(undefined8 **)(pEVar16 + 0x10);
                if (pEVar5 == pEVar16) {
                  pEVar32 = (Edge *)0x0;
                }
                else {
                  *(long *)(pEVar5 + 8) = *(long *)(pEVar16 + 8);
                  **(undefined8 **)(pEVar16 + 8) = pEVar5;
                  pEVar32 = pEVar5;
                }
                *(Edge **)(puVar15[3] + 0x10) = pEVar32;
                puVar20 = (undefined8 *)*puVar15;
                puVar1 = puVar15 + 1;
                if (puVar20 == puVar15) {
                  puVar20 = (undefined8 *)0x0;
                }
                else {
                  puVar20[1] = *puVar1;
                  *(undefined8 **)*puVar1 = puVar20;
                }
                *(undefined8 **)(*(long *)(pEVar16 + 0x18) + 0x10) = puVar20;
                *(long *)(pEVar16 + 0x20) = 0;
                *(long *)(pEVar16 + 0x18) = 0;
                *(long *)(pEVar16 + 0x10) = 0;
                *(long *)(pEVar16 + 8) = 0;
                *(long *)pEVar16 = *(long *)(this + 0x50);
                *(Edge **)(this + 0x50) = pEVar16;
                puVar15[2] = 0;
                *puVar1 = 0;
                puVar15[4] = 0;
                puVar15[3] = 0;
                *puVar15 = *(undefined8 *)(this + 0x50);
                *(undefined8 **)(this + 0x50) = puVar15;
                *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
                pEVar16 = pEVar5;
              }
            }
            if (local_108 == (Edge *)0x0) {
              if (local_100 == (long *)0x0) {
                local_110 = pEVar8;
              }
            }
            else {
              if (local_100 == (long *)0x0) {
                local_100 = *(long **)(pEVar8 + 8);
                local_110 = local_138;
              }
              *local_100 = (long)local_138;
              *(long **)(local_138 + 8) = local_100;
              *(Edge **)local_108 = pEVar8;
              *(Edge **)(pEVar8 + 8) = local_108;
              local_138 = (Edge *)0x0;
            }
            iVar25 = *(int *)(local_70 + 0x68);
            iVar11 = *(int *)(local_70 + 0x6c);
            iVar28 = *(int *)(local_70 + 0x70);
            local_100 = *(long **)(local_f8 + 0x10);
            local_108 = (Edge *)0x0;
            pVVar29 = *(Vertex **)(local_f8 + 0x18);
          }
        }
        else {
          pVVar29 = local_70;
          if (-1 < iVar26) goto LAB_012669a4;
        }
        if ((iVar26 < 1) && (local_f0 != (Edge *)0x0)) {
          if (lVar17 != 0) {
            pEVar8 = *(Edge **)(lVar17 + 8);
            while (pEVar8 != pEVar6) {
              pEVar5 = pEVar8 + 8;
              pEVar16 = *(Edge **)pEVar5;
              pEVar32 = *(Edge **)pEVar8;
              puVar15 = *(undefined8 **)(pEVar8 + 0x10);
              if (pEVar32 == pEVar8) {
                pEVar32 = (Edge *)0x0;
              }
              else {
                *(Edge **)(pEVar32 + 8) = pEVar16;
                **(undefined8 **)pEVar5 = pEVar32;
              }
              *(Edge **)(puVar15[3] + 0x10) = pEVar32;
              puVar20 = (undefined8 *)*puVar15;
              puVar1 = puVar15 + 1;
              if (puVar20 == puVar15) {
                puVar20 = (undefined8 *)0x0;
              }
              else {
                puVar20[1] = *puVar1;
                *(undefined8 **)*puVar1 = puVar20;
              }
              *(undefined8 **)(*(long *)(pEVar8 + 0x18) + 0x10) = puVar20;
              *(long *)(pEVar8 + 0x10) = 0;
              *(long *)pEVar5 = 0;
              *(long *)(pEVar8 + 0x20) = 0;
              *(long *)(pEVar8 + 0x18) = 0;
              *(long *)pEVar8 = *(long *)(this + 0x50);
              *(Edge **)(this + 0x50) = pEVar8;
              puVar15[2] = 0;
              *puVar1 = 0;
              puVar15[4] = 0;
              puVar15[3] = 0;
              *puVar15 = *(undefined8 *)(this + 0x50);
              *(undefined8 **)(this + 0x50) = puVar15;
              *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
              pEVar8 = pEVar16;
            }
          }
          if (local_118 == (Edge *)0x0) {
            if (lVar17 == 0) {
              pEVar14 = pEVar6;
            }
          }
          else {
            if (lVar17 == 0) {
              lVar17 = *(long *)pEVar6;
              pEVar14 = local_140;
            }
            *(long *)local_140 = lVar17;
            *(Edge **)(lVar17 + 8) = local_140;
            *(Edge **)pEVar6 = local_118;
            *(Edge **)(local_118 + 8) = pEVar6;
            local_140 = (Edge *)0x0;
          }
          lVar17 = *(long *)(local_f0 + 0x10);
          local_118 = (Edge *)0x0;
          iVar25 = *(int *)(local_68 + 0x68);
          iVar11 = *(int *)(local_68 + 0x6c);
          iVar28 = *(int *)(local_68 + 0x70);
          local_68 = *(Vertex **)(local_f0 + 0x18);
        }
        bVar3 = true;
        if ((local_68 == pVVar31) && (pVVar29 == pVVar30)) {
          if (lVar17 == 0) {
            *(Edge **)local_140 = local_118;
            *(Edge **)(local_118 + 8) = local_140;
            *(Edge **)(local_68 + 0x10) = local_118;
          }
          else {
            pEVar6 = *(Edge **)(lVar17 + 8);
            while (pEVar6 != pEVar14) {
              pEVar16 = pEVar6 + 8;
              pEVar8 = *(Edge **)pEVar16;
              pEVar5 = *(Edge **)pEVar6;
              puVar15 = *(undefined8 **)(pEVar6 + 0x10);
              if (pEVar5 == pEVar6) {
                pEVar5 = (Edge *)0x0;
              }
              else {
                *(Edge **)(pEVar5 + 8) = pEVar8;
                **(undefined8 **)pEVar16 = pEVar5;
              }
              *(Edge **)(puVar15[3] + 0x10) = pEVar5;
              puVar20 = (undefined8 *)*puVar15;
              puVar1 = puVar15 + 1;
              if (puVar20 == puVar15) {
                puVar20 = (undefined8 *)0x0;
              }
              else {
                puVar20[1] = *puVar1;
                *(undefined8 **)*puVar1 = puVar20;
              }
              *(undefined8 **)(*(long *)(pEVar6 + 0x18) + 0x10) = puVar20;
              *(long *)(pEVar6 + 0x10) = 0;
              *(long *)pEVar16 = 0;
              *(long *)(pEVar6 + 0x20) = 0;
              *(long *)(pEVar6 + 0x18) = 0;
              *(long *)pEVar6 = *(long *)(this + 0x50);
              *(Edge **)(this + 0x50) = pEVar6;
              puVar15[2] = 0;
              *puVar1 = 0;
              puVar15[4] = 0;
              puVar15[3] = 0;
              *puVar15 = *(undefined8 *)(this + 0x50);
              *(undefined8 **)(this + 0x50) = puVar15;
              *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
              pEVar6 = pEVar8;
            }
            if (local_118 != (Edge *)0x0) {
              *(long *)local_140 = lVar17;
              *(Edge **)(lVar17 + 8) = local_140;
              *(Edge **)pEVar14 = local_118;
              *(Edge **)(local_118 + 8) = pEVar14;
            }
          }
          if (local_100 == (long *)0x0) {
            local_100 = (long *)0x0;
            *(Edge **)local_108 = local_138;
            *(Edge **)(local_138 + 8) = local_108;
            *(Edge **)(pVVar29 + 0x10) = local_108;
            bVar3 = false;
          }
          else {
            pEVar6 = (Edge *)*local_100;
            while (pEVar6 != local_110) {
              pEVar8 = *(Edge **)pEVar6;
              puVar15 = *(undefined8 **)(pEVar6 + 0x10);
              if (pEVar8 == pEVar6) {
                pEVar16 = (Edge *)0x0;
              }
              else {
                *(long *)(pEVar8 + 8) = *(long *)(pEVar6 + 8);
                **(undefined8 **)(pEVar6 + 8) = pEVar8;
                pEVar16 = pEVar8;
              }
              *(Edge **)(puVar15[3] + 0x10) = pEVar16;
              puVar20 = (undefined8 *)*puVar15;
              puVar1 = puVar15 + 1;
              if (puVar20 == puVar15) {
                puVar20 = (undefined8 *)0x0;
              }
              else {
                puVar20[1] = *puVar1;
                *(undefined8 **)*puVar1 = puVar20;
              }
              *(undefined8 **)(*(long *)(pEVar6 + 0x18) + 0x10) = puVar20;
              *(long *)(pEVar6 + 0x20) = 0;
              *(long *)(pEVar6 + 0x18) = 0;
              *(long *)(pEVar6 + 0x10) = 0;
              *(long *)(pEVar6 + 8) = 0;
              *(long *)pEVar6 = *(long *)(this + 0x50);
              *(Edge **)(this + 0x50) = pEVar6;
              puVar15[2] = 0;
              *puVar1 = 0;
              puVar15[4] = 0;
              puVar15[3] = 0;
              *puVar15 = *(undefined8 *)(this + 0x50);
              *(undefined8 **)(this + 0x50) = puVar15;
              *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
              pEVar6 = pEVar8;
            }
            if (local_108 == (Edge *)0x0) {
              local_108 = (Edge *)0x0;
              bVar3 = false;
            }
            else {
              bVar3 = false;
              *local_100 = (long)local_138;
              *(long **)(local_138 + 8) = local_100;
              *(Edge **)local_108 = local_110;
              *(Edge **)(local_110 + 8) = local_108;
            }
          }
        }
        else {
          bVar2 = false;
        }
        pVVar7 = local_68;
        local_70 = pVVar29;
      } while (bVar3);
    }
  }
  return;
}

