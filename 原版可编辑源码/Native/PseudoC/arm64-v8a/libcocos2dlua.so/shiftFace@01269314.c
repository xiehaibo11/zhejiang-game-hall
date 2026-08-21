
/* btConvexHullInternal::shiftFace(btConvexHullInternal::Face*, float,
   btAlignedObjectArray<btConvexHullInternal::Vertex*>) */

undefined8 __thiscall
btConvexHullInternal::shiftFace(float param_2,btConvexHullInternal *this,long param_1,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  Vertex *pVVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  uint uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  undefined8 *puVar45;
  long *plVar46;
  int iVar47;
  int iVar48;
  long lVar49;
  ulong uVar50;
  long *plVar51;
  ulong uVar52;
  ulong uVar53;
  undefined8 *puVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  undefined8 *puVar58;
  ulong uVar59;
  int iVar60;
  long lVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  long lVar66;
  ulong uVar67;
  long *plVar68;
  long *plVar69;
  undefined8 *puVar70;
  long lVar71;
  long *plVar72;
  ulong uVar73;
  uint uVar74;
  ulong uVar75;
  Int128 *this_00;
  long lVar76;
  long lVar77;
  long lVar78;
  ulong uVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  long local_1d8;
  Rational128 aRStack_170 [40];
  Rational128 aRStack_148 [40];
  Rational128 aRStack_120 [40];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long local_a8;
  long lStack_a0;
  long local_98;
  float local_90 [4];
  
  iVar13 = *(int *)(this + 0xa8);
  iVar14 = *(int *)(this + 0xac);
  *(float *)((long)&local_d0 + (long)iVar13 * 4) = (float)*(int *)(param_1 + 0x28);
  *(float *)((long)&local_d0 + (long)iVar14 * 4) = (float)*(int *)(param_1 + 0x2c);
  iVar34 = *(int *)(this + 0xa4);
  *(float *)((long)&local_d0 + (long)iVar34 * 4) = (float)*(int *)(param_1 + 0x30);
  fVar80 = (float)local_d0;
  fVar81 = local_d0._4_4_;
  fVar82 = *(float *)this;
  fVar83 = *(float *)(this + 4);
  fVar84 = (float)uStack_c8;
  fVar85 = *(float *)(this + 8);
  *(float *)((long)&local_d0 + (long)iVar13 * 4) = (float)*(int *)(param_1 + 0x38);
  fVar80 = fVar80 * fVar82;
  fVar81 = fVar81 * fVar83;
  fVar84 = fVar84 * fVar85;
  *(float *)((long)&local_d0 + (long)iVar14 * 4) = (float)*(int *)(param_1 + 0x3c);
  *(float *)((long)&local_d0 + (long)iVar34 * 4) = (float)*(int *)(param_1 + 0x40);
  fVar82 = fVar82 * (float)local_d0;
  fVar83 = fVar83 * local_d0._4_4_;
  fVar85 = fVar85 * (float)uStack_c8;
  fVar86 = fVar81 * fVar85 - fVar84 * fVar83;
  fVar84 = fVar84 * fVar82 - fVar80 * fVar85;
  fVar82 = fVar80 * fVar83 - fVar81 * fVar82;
  fVar81 = fVar82 * fVar82 + fVar86 * fVar86 + fVar84 * fVar84;
  fVar80 = SQRT(fVar81);
  if (NAN(fVar80)) {
    fVar80 = sqrtf(fVar81);
  }
  fVar80 = 1.0 / fVar80;
  param_2 = -param_2;
  local_90[0] = fVar86 * fVar80 * param_2;
  local_90[1] = fVar84 * fVar80 * param_2;
  local_90[2] = fVar82 * fVar80 * param_2;
  local_90[3] = 0.0;
  if (*(float *)this != 0.0) {
    local_90[0] = local_90[0] / *(float *)this;
  }
  if (*(float *)(this + 4) != 0.0) {
    local_90[1] = local_90[1] / *(float *)(this + 4);
  }
  if (*(float *)(this + 8) != 0.0) {
    local_90[2] = local_90[2] / *(float *)(this + 8);
  }
  if (((int)local_90[*(int *)(this + 0xac)] != 0 || (int)local_90[*(int *)(this + 0xa8)] != 0) ||
      (int)local_90[*(int *)(this + 0xa4)] != 0) {
    local_a8 = (long)(*(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x2c) -
                     *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x30));
    lStack_a0 = (long)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x30) -
                      *(int *)(param_1 + 0x28) * *(int *)(param_1 + 0x40));
    local_98 = (long)(*(int *)(param_1 + 0x28) * *(int *)(param_1 + 0x3c) -
                     *(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x2c));
    uVar1 = (long)*(int *)(param_1 + 0x18) + (long)(int)local_90[*(int *)(this + 0xa8)];
    uVar2 = (long)*(int *)(param_1 + 0x1c) + (long)(int)local_90[*(int *)(this + 0xac)];
    uVar3 = (long)*(int *)(param_1 + 0x20) + (long)(int)local_90[*(int *)(this + 0xa4)];
    lVar71 = local_a8 * uVar1 + lStack_a0 * uVar2 + uVar3 * local_98;
    if (local_a8 * *(int *)(param_1 + 0x18) + lStack_a0 * *(int *)(param_1 + 0x1c) +
        *(int *)(param_1 + 0x20) * local_98 <= lVar71) {
      return 0;
    }
    lVar76 = *(long *)(*(Point64 **)(param_1 + 8) + 0x10);
    Vertex::dot(*(Point64 **)(param_1 + 8));
    iVar13 = Rational128::compare((Rational128 *)&local_d0,lVar71);
    lVar78 = lVar76;
    if (iVar13 < 0) {
      do {
        Vertex::dot(*(Point64 **)(lVar78 + 0x18));
        iVar13 = Rational128::compare((Rational128 *)&local_f8,(Rational128 *)&local_d0);
        lVar77 = lVar78;
        if (0 < iVar13) {
          iVar13 = Rational128::compare((Rational128 *)&local_f8,lVar71);
          if (-1 < iVar13) {
            if (lVar78 == 0) {
              return 1;
            }
            goto LAB_012695e8;
          }
          uStack_c8 = uStack_f0;
          local_d0 = local_f8;
          uStack_c0 = local_e8;
          lVar76 = *(long *)(lVar78 + 0x10);
          lVar77 = lVar76;
        }
        lVar78 = *(long *)(lVar77 + 8);
      } while (*(long *)(lVar77 + 8) != lVar76);
    }
    else {
      lVar77 = lVar76;
      do {
        Vertex::dot(*(Point64 **)(lVar77 + 0x18));
        iVar14 = Rational128::compare((Rational128 *)&local_f8,(Rational128 *)&local_d0);
        if (iVar14 < 0) {
          iVar14 = Rational128::compare((Rational128 *)&local_f8,lVar71);
          if (-1 < iVar14) {
            iVar13 = iVar14;
          }
          uStack_c8 = uStack_f0;
          local_d0 = local_f8;
          uStack_c0 = local_e8;
          lVar76 = *(long *)(lVar77 + 0x10);
          lVar78 = lVar76;
          lVar77 = lVar76;
          if (-1 >= iVar14) break;
        }
        lVar77 = *(long *)(lVar77 + 8);
        lVar78 = 0;
      } while (lVar77 != lVar76);
      if (lVar78 == 0) {
        return 0;
      }
LAB_012695e8:
      if (iVar13 == 0) {
        plVar68 = (long *)**(long **)(lVar78 + 0x10);
        do {
          Vertex::dot((Point64 *)plVar68[3]);
          iVar14 = Rational128::compare(aRStack_120,lVar71);
          if (0 < iVar14) goto LAB_01269634;
          plVar68 = (long *)*plVar68;
        } while (plVar68 != (long *)*(long *)(lVar78 + 0x10));
      }
      else {
LAB_01269634:
        iVar14 = (int)uVar1;
        uVar79 = -uVar1;
        if (-1 < iVar14) {
          uVar79 = uVar1;
        }
        iVar34 = (int)uVar2;
        iVar47 = (int)uVar3;
        uVar4 = -uVar2;
        if (-1 < iVar34) {
          uVar4 = uVar2;
        }
        uVar5 = -uVar3;
        if (-1 < iVar47) {
          uVar5 = uVar3;
        }
        local_1d8 = 0;
        plVar68 = (long *)0x0;
        plVar46 = (long *)0x0;
        while( true ) {
          lVar76 = lVar78;
          if (iVar13 == 0) {
            plVar69 = (long *)**(long **)(lVar78 + 0x10);
            plVar72 = plVar69;
            while( true ) {
              Vertex::dot((Point64 *)plVar72[3]);
              iVar15 = Rational128::compare(aRStack_148,lVar71);
              lVar76 = lVar78;
              if (-1 < iVar15) break;
              lVar78 = plVar72[2];
              plVar72 = (long *)*plVar72;
              if (plVar72 == plVar69) {
                return 1;
              }
            }
          }
          lVar77 = lVar76;
          if ((local_1d8 != 0) && (lVar77 = local_1d8, lVar76 == local_1d8)) break;
          lVar78 = *(long *)(lVar76 + 0x10);
          do {
            lVar78 = *(long *)(*(long *)(lVar78 + 0x10) + 8);
            Vertex::dot(*(Point64 **)(lVar78 + 0x18));
            iVar15 = Rational128::compare(aRStack_170,lVar71);
          } while (iVar15 < 0);
          if (iVar15 != 0) {
            plVar72 = *(long **)(lVar78 + 0x10);
            lVar19 = *(long *)(lVar78 + 0x18);
            plVar69 = (long *)plVar72[1];
            if (plVar69 == plVar72) {
              *(undefined8 *)(lVar19 + 0x10) = 0;
            }
            else {
              *(long **)(lVar19 + 0x10) = plVar69;
              lVar41 = *plVar72;
              *plVar69 = lVar41;
              *(long **)(lVar41 + 8) = plVar69;
              *plVar72 = (long)plVar72;
              plVar72[1] = (long)plVar72;
            }
            lVar36 = *(long *)(lVar78 + 0x20);
            lVar42 = plVar72[4];
            iVar8 = *(int *)(lVar42 + 0x18);
            iVar9 = *(int *)(lVar42 + 0x1c);
            iVar11 = *(int *)(lVar42 + 0x20);
            lVar41 = (long)(*(int *)(lVar36 + 0x40) * *(int *)(lVar36 + 0x2c) -
                           *(int *)(lVar36 + 0x3c) * *(int *)(lVar36 + 0x30));
            lVar61 = (long)(*(int *)(lVar36 + 0x38) * *(int *)(lVar36 + 0x30) -
                           *(int *)(lVar36 + 0x28) * *(int *)(lVar36 + 0x40));
            lVar43 = (long)(*(int *)(lVar36 + 0x28) * *(int *)(lVar36 + 0x3c) -
                           *(int *)(lVar36 + 0x38) * *(int *)(lVar36 + 0x2c));
            lVar66 = (long)(*(int *)(lVar42 + 0x40) * *(int *)(lVar42 + 0x2c) -
                           *(int *)(lVar42 + 0x3c) * *(int *)(lVar42 + 0x30));
            lVar49 = (long)(*(int *)(lVar42 + 0x38) * *(int *)(lVar42 + 0x30) -
                           *(int *)(lVar42 + 0x28) * *(int *)(lVar42 + 0x40));
            lVar42 = (long)(*(int *)(lVar42 + 0x28) * *(int *)(lVar42 + 0x3c) -
                           *(int *)(lVar42 + 0x38) * *(int *)(lVar42 + 0x2c));
            uVar37 = *(int *)(param_1 + 0x28) * lVar41 + *(int *)(param_1 + 0x2c) * lVar61 +
                     *(int *)(param_1 + 0x30) * lVar43;
            uVar32 = *(int *)(param_1 + 0x28) * lVar66 + lVar49 * *(int *)(param_1 + 0x2c) +
                     *(int *)(param_1 + 0x30) * lVar42;
            uVar52 = *(int *)(param_1 + 0x38) * lVar66 + *(int *)(param_1 + 0x3c) * lVar49 +
                     *(int *)(param_1 + 0x40) * lVar42;
            uVar29 = *(int *)(param_1 + 0x38) * lVar41 + *(int *)(param_1 + 0x3c) * lVar61 +
                     *(int *)(param_1 + 0x40) * lVar43;
            uVar63 = -uVar37;
            if ((long)uVar37 >= 0) {
              uVar63 = uVar37;
            }
            uVar16 = -uVar52;
            if ((long)uVar52 >= 0) {
              uVar16 = uVar52;
            }
            uVar56 = uVar63 & 0xffffffff;
            uVar63 = uVar63 >> 0x20;
            uVar20 = uVar16 & 0xffffffff;
            uVar16 = uVar16 >> 0x20;
            uVar21 = (uVar16 * uVar56 & 0xffffffff) + (uVar20 * uVar63 & 0xffffffff);
            uVar38 = uVar16 * uVar63 + (uVar16 * uVar56 >> 0x20) + (uVar20 * uVar63 >> 0x20) +
                     (uVar21 >> 0x20);
            uVar21 = uVar21 << 0x20;
            uVar57 = uVar20 * uVar56 + uVar21;
            if (CARRY8(uVar20 * uVar56,uVar21)) {
              uVar38 = uVar38 + 1;
            }
            if ((long)uVar37 < 0 != (long)uVar52 < 0) {
              bVar12 = uVar57 == 0;
              uVar38 = ~uVar38;
              uVar57 = -uVar57;
              if (bVar12) {
                uVar38 = uVar38 + 1;
              }
            }
            uVar21 = -uVar29;
            if ((long)uVar29 >= 0) {
              uVar21 = uVar29;
            }
            uVar73 = -uVar32;
            if ((long)uVar32 >= 0) {
              uVar73 = uVar32;
            }
            uVar27 = uVar21 & 0xffffffff;
            uVar21 = uVar21 >> 0x20;
            uVar75 = uVar73 & 0xffffffff;
            uVar73 = uVar73 >> 0x20;
            uVar44 = (uVar27 * uVar73 & 0xffffffff) + (uVar21 * uVar75 & 0xffffffff);
            uVar39 = uVar21 * uVar73 + (uVar27 * uVar73 >> 0x20) + (uVar21 * uVar75 >> 0x20) +
                     (uVar44 >> 0x20);
            uVar44 = uVar44 << 0x20;
            lVar22 = uVar27 * uVar75 + uVar44;
            if (CARRY8(uVar27 * uVar75,uVar44)) {
              uVar39 = uVar39 + 1;
            }
            if ((long)uVar32 < 0 != (long)uVar29 < 0) {
              bVar12 = lVar22 == 0;
              uVar39 = ~uVar39;
              lVar22 = -lVar22;
              if (bVar12) {
                uVar39 = uVar39 + 1;
              }
            }
            puVar70 = *(undefined8 **)(this + 0x30);
            lVar41 = ((long)*(int *)(lVar36 + 0x18) - (long)iVar14) * lVar41 +
                     ((long)*(int *)(lVar36 + 0x1c) - (long)iVar34) * lVar61 +
                     ((long)*(int *)(lVar36 + 0x20) - (long)iVar47) * lVar43;
            uVar44 = uVar57 - lVar22;
            uVar38 = uVar38 + ~uVar39;
            if (lVar22 == 0) {
              uVar38 = uVar38 + 1;
            }
            if (uVar44 < uVar57) {
              uVar38 = uVar38 + 1;
            }
            if (puVar70 == (undefined8 *)0x0) {
              puVar70 = *(undefined8 **)(this + 0x28);
              if (puVar70 == (undefined8 *)0x0) {
                puVar70 = (undefined8 *)btAlignedAllocInternal(0x18,0x10);
                iVar10 = *(int *)(this + 0x38);
                puVar70[2] = 0;
                *(int *)(puVar70 + 1) = iVar10;
                uVar17 = btAlignedAllocInternal((long)iVar10 << 7,0x10);
                *puVar70 = uVar17;
                puVar70[2] = *(undefined8 *)(this + 0x20);
                *(undefined8 **)(this + 0x20) = puVar70;
              }
              else {
                *(undefined8 *)(this + 0x28) = puVar70[2];
              }
              iVar10 = *(int *)(puVar70 + 1);
              puVar70 = (undefined8 *)*puVar70;
              if (0 < iVar10) {
                puVar45 = puVar70 + 0x10;
                puVar54 = puVar45;
                if (iVar10 == 1) {
                  puVar54 = (undefined8 *)0x0;
                }
                *puVar70 = puVar54;
                if (iVar10 != 1) {
                  iVar48 = iVar10;
                  if (iVar10 < 3) {
                    iVar48 = 2;
                  }
                  uVar57 = (ulong)(iVar48 - 2U) + 1;
                  if (uVar57 < 2) {
                    iVar48 = 1;
                  }
                  else {
                    uVar35 = ~(iVar48 - 2U) & 1;
                    lVar36 = uVar57 - uVar35;
                    if (lVar36 == 0) {
                      iVar48 = 1;
                    }
                    else {
                      lVar43 = 0;
                      iVar48 = (int)lVar36 + 1;
                      puVar45 = puVar45 + lVar36 * 0x10;
                      puVar54 = puVar70;
                      do {
                        puVar58 = puVar54 + 0x20;
                        iVar60 = (int)lVar43;
                        lVar43 = lVar43 + 2;
                        puVar7 = puVar54 + 0x30;
                        puVar6 = puVar58;
                        if (iVar10 <= (int)lVar43) {
                          puVar6 = (undefined8 *)0x0;
                        }
                        if (iVar10 <= iVar60 + 3) {
                          puVar7 = (undefined8 *)0x0;
                        }
                        puVar54[0x10] = puVar6;
                        *puVar58 = puVar7;
                        puVar54 = puVar58;
                      } while (lVar36 != lVar43);
                      if (uVar35 == 0) goto LAB_01269b60;
                    }
                  }
                  do {
                    iVar48 = iVar48 + 1;
                    puVar54 = puVar45 + 0x10;
                    if (iVar10 <= iVar48) {
                      puVar54 = (undefined8 *)0x0;
                    }
                    *puVar45 = puVar54;
                    puVar45 = puVar45 + 0x10;
                  } while (iVar48 < iVar10);
                }
              }
            }
LAB_01269b60:
            *(undefined8 *)(this + 0x30) = *puVar70;
            puVar70[4] = 0;
            puVar70[1] = 0;
            *puVar70 = 0;
            puVar70[3] = 0;
            puVar70[2] = 0;
            *(undefined8 *)((long)puVar70 + 0x74) = 0xffffffffffffffff;
            uVar39 = lVar41 * *(int *)(param_1 + 0x28);
            uVar57 = -uVar39;
            if ((long)uVar39 >= 0) {
              uVar57 = uVar39;
            }
            uVar55 = (uVar57 & 0xffffffff) * uVar16;
            uVar59 = (uVar57 >> 0x20) * uVar20;
            uVar50 = (uVar55 & 0xffffffff) + (uVar59 & 0xffffffff);
            uVar53 = (uVar57 & 0xffffffff) * uVar20;
            uVar57 = (uVar57 >> 0x20) * uVar16 + (uVar55 >> 0x20) + (uVar59 >> 0x20) +
                     (uVar50 >> 0x20);
            uVar50 = uVar50 << 0x20;
            uVar55 = uVar53 + uVar50;
            if (CARRY8(uVar53,uVar50)) {
              uVar57 = uVar57 + 1;
            }
            lVar36 = ((long)iVar8 - (long)iVar14) * lVar66 + ((long)iVar9 - (long)iVar34) * lVar49 +
                     ((long)iVar11 - (long)iVar47) * lVar42;
            if ((long)uVar52 < 0 != (long)uVar39 < 0) {
              bVar12 = uVar55 == 0;
              uVar57 = ~uVar57;
              uVar55 = -uVar55;
              if (bVar12) {
                uVar57 = uVar57 + 1;
              }
            }
            uVar50 = lVar36 * *(int *)(param_1 + 0x28);
            uVar39 = -uVar50;
            if ((long)uVar50 >= 0) {
              uVar39 = uVar50;
            }
            uVar62 = (uVar39 & 0xffffffff) * uVar27;
            uVar59 = (uVar39 & 0xffffffff) * uVar21;
            uVar64 = (uVar39 >> 0x20) * uVar27;
            uVar53 = (uVar59 & 0xffffffff) + (uVar64 & 0xffffffff);
            uVar39 = (uVar39 >> 0x20) * uVar21 + (uVar59 >> 0x20) + (uVar64 >> 0x20) +
                     (uVar53 >> 0x20);
            uVar53 = uVar53 << 0x20;
            lVar42 = uVar62 + uVar53;
            if (CARRY8(uVar62,uVar53)) {
              uVar39 = uVar39 + 1;
            }
            if ((long)uVar29 < 0 != (long)uVar50 < 0) {
              bVar12 = lVar42 == 0;
              uVar39 = ~uVar39;
              lVar42 = -lVar42;
              if (bVar12) {
                uVar39 = uVar39 + 1;
              }
            }
            uVar59 = uVar55 - lVar42;
            uVar53 = lVar36 * *(int *)(param_1 + 0x38);
            uVar50 = -uVar53;
            if ((long)uVar53 >= 0) {
              uVar50 = uVar53;
            }
            uVar18 = (uVar50 & 0xffffffff) * uVar56;
            uVar65 = (uVar50 & 0xffffffff) * uVar63;
            uVar64 = (uVar50 >> 0x20) * uVar56;
            uVar62 = (uVar65 & 0xffffffff) + (uVar64 & 0xffffffff);
            uVar50 = (uVar50 >> 0x20) * uVar63 + (uVar65 >> 0x20) + (uVar64 >> 0x20) +
                     (uVar62 >> 0x20);
            uVar62 = uVar62 << 0x20;
            uVar64 = uVar18 + uVar62;
            if (CARRY8(uVar18,uVar62)) {
              uVar50 = uVar50 + 1;
            }
            if ((long)uVar37 < 0 != (long)uVar53 < 0) {
              bVar12 = uVar64 == 0;
              uVar50 = ~uVar50;
              uVar64 = -uVar64;
              if (bVar12) {
                uVar50 = uVar50 + 1;
              }
            }
            uVar62 = lVar41 * *(int *)(param_1 + 0x38);
            uVar53 = -uVar62;
            if ((long)uVar62 >= 0) {
              uVar53 = uVar62;
            }
            uVar65 = (uVar53 & 0xffffffff) * uVar75;
            uVar67 = (uVar53 & 0xffffffff) * uVar73;
            uVar23 = (uVar53 >> 0x20) * uVar75;
            uVar18 = (uVar67 & 0xffffffff) + (uVar23 & 0xffffffff);
            uVar53 = (uVar53 >> 0x20) * uVar73 + (uVar67 >> 0x20) + (uVar23 >> 0x20) +
                     (uVar18 >> 0x20);
            uVar18 = uVar18 << 0x20;
            lVar43 = uVar65 + uVar18;
            if (CARRY8(uVar65,uVar18)) {
              uVar53 = uVar53 + 1;
            }
            if ((long)uVar32 < 0 != (long)uVar62 < 0) {
              bVar12 = lVar43 == 0;
              uVar53 = ~uVar53;
              lVar43 = -lVar43;
              if (bVar12) {
                uVar53 = uVar53 + 1;
              }
            }
            uVar65 = (uVar64 + uVar59) - lVar43;
            uVar62 = uVar38;
            uVar18 = uVar44;
            if ((long)uVar38 < 0) {
              uVar62 = ~uVar38;
              uVar18 = -uVar44;
              if (uVar44 == 0) {
                uVar62 = uVar62 + 1;
              }
            }
            uVar28 = (uVar18 & 0xffffffff) * (uVar79 & 0xffffffff);
            uVar24 = (uVar18 & 0xffffffff) * (uVar79 >> 0x20);
            uVar30 = (uVar18 >> 0x20) * (uVar79 & 0xffffffff);
            uVar67 = (uVar24 & 0xffffffff) + (uVar30 & 0xffffffff);
            uVar23 = uVar67 << 0x20;
            uVar25 = uVar28 + uVar23;
            uVar62 = uVar62 * uVar79 + (uVar18 >> 0x20) * (uVar79 >> 0x20) + (uVar24 >> 0x20) +
                     (uVar30 >> 0x20) + (uVar67 >> 0x20);
            if (CARRY8(uVar28,uVar23)) {
              uVar62 = uVar62 + 1;
            }
            if (iVar14 < 0 != (long)uVar38 < 0) {
              bVar12 = uVar25 == 0;
              uVar62 = ~uVar62;
              uVar25 = -uVar25;
              if (bVar12) {
                uVar62 = uVar62 + 1;
              }
            }
            lVar42 = uVar57 + ~uVar39 + (ulong)(lVar42 == 0) + (ulong)(uVar59 < uVar55) + uVar50 +
                     (ulong)CARRY8(uVar64,uVar59) + ~uVar53 + (ulong)(lVar43 == 0) +
                     (ulong)(uVar65 < uVar64 + uVar59) + uVar62;
            uVar57 = lVar41 * *(int *)(param_1 + 0x2c);
            if (CARRY8(uVar25,uVar65)) {
              lVar42 = lVar42 + 1;
            }
            uVar39 = -uVar57;
            if ((long)uVar57 >= 0) {
              uVar39 = uVar57;
            }
            uVar53 = (uVar39 & 0xffffffff) * uVar20;
            uVar55 = (uVar39 & 0xffffffff) * uVar16;
            uVar59 = (uVar39 >> 0x20) * uVar20;
            uVar50 = (uVar55 & 0xffffffff) + (uVar59 & 0xffffffff);
            uVar39 = (uVar39 >> 0x20) * uVar16 + (uVar55 >> 0x20) + (uVar59 >> 0x20) +
                     (uVar50 >> 0x20);
            uVar50 = uVar50 << 0x20;
            uVar55 = uVar53 + uVar50;
            if (CARRY8(uVar53,uVar50)) {
              uVar39 = uVar39 + 1;
            }
            if ((long)uVar52 < 0 != (long)uVar57 < 0) {
              bVar12 = uVar55 == 0;
              uVar39 = ~uVar39;
              uVar55 = -uVar55;
              if (bVar12) {
                uVar39 = uVar39 + 1;
              }
            }
            uVar50 = lVar36 * *(int *)(param_1 + 0x2c);
            uVar57 = -uVar50;
            if ((long)uVar50 >= 0) {
              uVar57 = uVar50;
            }
            uVar62 = (uVar57 & 0xffffffff) * uVar27;
            uVar59 = (uVar57 & 0xffffffff) * uVar21;
            uVar64 = (uVar57 >> 0x20) * uVar27;
            uVar53 = (uVar59 & 0xffffffff) + (uVar64 & 0xffffffff);
            uVar57 = (uVar57 >> 0x20) * uVar21 + (uVar59 >> 0x20) + (uVar64 >> 0x20) +
                     (uVar53 >> 0x20);
            uVar53 = uVar53 << 0x20;
            lVar43 = uVar62 + uVar53;
            if (CARRY8(uVar62,uVar53)) {
              uVar57 = uVar57 + 1;
            }
            if ((long)uVar29 < 0 != (long)uVar50 < 0) {
              bVar12 = lVar43 == 0;
              uVar57 = ~uVar57;
              lVar43 = -lVar43;
              if (bVar12) {
                uVar57 = uVar57 + 1;
              }
            }
            uVar59 = uVar55 - lVar43;
            uVar53 = lVar36 * *(int *)(param_1 + 0x3c);
            uVar50 = -uVar53;
            if ((long)uVar53 >= 0) {
              uVar50 = uVar53;
            }
            uVar18 = (uVar50 & 0xffffffff) * uVar56;
            uVar23 = (uVar50 & 0xffffffff) * uVar63;
            uVar64 = (uVar50 >> 0x20) * uVar56;
            uVar62 = (uVar23 & 0xffffffff) + (uVar64 & 0xffffffff);
            uVar50 = (uVar50 >> 0x20) * uVar63 + (uVar23 >> 0x20) + (uVar64 >> 0x20) +
                     (uVar62 >> 0x20);
            uVar62 = uVar62 << 0x20;
            uVar64 = uVar18 + uVar62;
            if (CARRY8(uVar18,uVar62)) {
              uVar50 = uVar50 + 1;
            }
            if ((long)uVar37 < 0 != (long)uVar53 < 0) {
              bVar12 = uVar64 == 0;
              uVar50 = ~uVar50;
              uVar64 = -uVar64;
              if (bVar12) {
                uVar50 = uVar50 + 1;
              }
            }
            uVar62 = lVar41 * *(int *)(param_1 + 0x3c);
            uVar53 = -uVar62;
            if ((long)uVar62 >= 0) {
              uVar53 = uVar62;
            }
            uVar67 = (uVar53 & 0xffffffff) * uVar75;
            uVar23 = (uVar53 & 0xffffffff) * uVar73;
            uVar24 = (uVar53 >> 0x20) * uVar75;
            uVar18 = (uVar23 & 0xffffffff) + (uVar24 & 0xffffffff);
            uVar53 = (uVar53 >> 0x20) * uVar73 + (uVar23 >> 0x20) + (uVar24 >> 0x20) +
                     (uVar18 >> 0x20);
            uVar18 = uVar18 << 0x20;
            lVar49 = uVar67 + uVar18;
            if (CARRY8(uVar67,uVar18)) {
              uVar53 = uVar53 + 1;
            }
            if ((long)uVar32 < 0 != (long)uVar62 < 0) {
              bVar12 = lVar49 == 0;
              uVar53 = ~uVar53;
              lVar49 = -lVar49;
              if (bVar12) {
                uVar53 = uVar53 + 1;
              }
            }
            uVar23 = (uVar64 + uVar59) - lVar49;
            uVar62 = uVar38;
            uVar18 = uVar44;
            if ((long)uVar38 < 0) {
              uVar62 = ~uVar38;
              uVar18 = -uVar44;
              if (uVar44 == 0) {
                uVar62 = uVar62 + 1;
              }
            }
            uVar31 = (uVar18 & 0xffffffff) * (uVar4 & 0xffffffff);
            uVar30 = (uVar18 & 0xffffffff) * (uVar4 >> 0x20);
            uVar33 = (uVar18 >> 0x20) * (uVar4 & 0xffffffff);
            uVar24 = (uVar30 & 0xffffffff) + (uVar33 & 0xffffffff);
            uVar67 = uVar24 << 0x20;
            uVar28 = uVar31 + uVar67;
            uVar62 = uVar62 * uVar4 + (uVar18 >> 0x20) * (uVar4 >> 0x20) + (uVar30 >> 0x20) +
                     (uVar33 >> 0x20) + (uVar24 >> 0x20);
            if (CARRY8(uVar31,uVar67)) {
              uVar62 = uVar62 + 1;
            }
            if (iVar34 < 0 != (long)uVar38 < 0) {
              bVar12 = uVar28 == 0;
              uVar62 = ~uVar62;
              uVar28 = -uVar28;
              if (bVar12) {
                uVar62 = uVar62 + 1;
              }
            }
            uVar18 = lVar41 * *(int *)(param_1 + 0x30);
            lVar43 = uVar39 + ~uVar57 + (ulong)(lVar43 == 0) + (ulong)(uVar59 < uVar55) + uVar50 +
                     (ulong)CARRY8(uVar64,uVar59) + ~uVar53 + (ulong)(lVar49 == 0) +
                     (ulong)(uVar23 < uVar64 + uVar59) + uVar62;
            if (CARRY8(uVar28,uVar23)) {
              lVar43 = lVar43 + 1;
            }
            uVar57 = -uVar18;
            if ((long)uVar18 >= 0) {
              uVar57 = uVar18;
            }
            uVar55 = (uVar57 & 0xffffffff) * uVar20;
            uVar50 = (uVar57 & 0xffffffff) * uVar16;
            uVar20 = (uVar57 >> 0x20) * uVar20;
            uVar39 = (uVar50 & 0xffffffff) + (uVar20 & 0xffffffff);
            uVar16 = (uVar57 >> 0x20) * uVar16 + (uVar50 >> 0x20) + (uVar20 >> 0x20) +
                     (uVar39 >> 0x20);
            uVar39 = uVar39 << 0x20;
            uVar57 = uVar55 + uVar39;
            if (CARRY8(uVar55,uVar39)) {
              uVar16 = uVar16 + 1;
            }
            if ((long)uVar52 < 0 != (long)uVar18 < 0) {
              bVar12 = uVar57 == 0;
              uVar16 = ~uVar16;
              uVar57 = -uVar57;
              if (bVar12) {
                uVar16 = uVar16 + 1;
              }
            }
            uVar20 = lVar36 * *(int *)(param_1 + 0x30);
            uVar52 = -uVar20;
            if ((long)uVar20 >= 0) {
              uVar52 = uVar20;
            }
            uVar50 = (uVar52 & 0xffffffff) * uVar27;
            uVar55 = (uVar52 & 0xffffffff) * uVar21;
            uVar27 = (uVar52 >> 0x20) * uVar27;
            uVar39 = (uVar55 & 0xffffffff) + (uVar27 & 0xffffffff);
            uVar52 = (uVar52 >> 0x20) * uVar21 + (uVar55 >> 0x20) + (uVar27 >> 0x20) +
                     (uVar39 >> 0x20);
            uVar39 = uVar39 << 0x20;
            lVar49 = uVar50 + uVar39;
            if (CARRY8(uVar50,uVar39)) {
              uVar52 = uVar52 + 1;
            }
            if ((long)uVar29 < 0 != (long)uVar20 < 0) {
              bVar12 = lVar49 == 0;
              uVar52 = ~uVar52;
              lVar49 = -lVar49;
              if (bVar12) {
                uVar52 = uVar52 + 1;
              }
            }
            uVar20 = uVar57 - lVar49;
            uVar21 = lVar36 * *(int *)(param_1 + 0x40);
            uVar29 = -uVar21;
            if ((long)uVar21 >= 0) {
              uVar29 = uVar21;
            }
            uVar50 = (uVar29 & 0xffffffff) * uVar56;
            uVar27 = (uVar29 & 0xffffffff) * uVar63;
            uVar56 = (uVar29 >> 0x20) * uVar56;
            uVar39 = (uVar27 & 0xffffffff) + (uVar56 & 0xffffffff);
            uVar63 = (uVar29 >> 0x20) * uVar63 + (uVar27 >> 0x20) + (uVar56 >> 0x20) +
                     (uVar39 >> 0x20);
            uVar39 = uVar39 << 0x20;
            uVar29 = uVar50 + uVar39;
            if (CARRY8(uVar50,uVar39)) {
              uVar63 = uVar63 + 1;
            }
            if ((long)uVar37 < 0 != (long)uVar21 < 0) {
              bVar12 = uVar29 == 0;
              uVar63 = ~uVar63;
              uVar29 = -uVar29;
              if (bVar12) {
                uVar63 = uVar63 + 1;
              }
            }
            uVar21 = lVar41 * *(int *)(param_1 + 0x40);
            uVar37 = -uVar21;
            if ((long)uVar21 >= 0) {
              uVar37 = uVar21;
            }
            uVar27 = (uVar37 & 0xffffffff) * uVar75;
            uVar39 = (uVar37 & 0xffffffff) * uVar73;
            uVar75 = (uVar37 >> 0x20) * uVar75;
            uVar56 = (uVar39 & 0xffffffff) + (uVar75 & 0xffffffff);
            uVar37 = (uVar37 >> 0x20) * uVar73 + (uVar39 >> 0x20) + (uVar75 >> 0x20) +
                     (uVar56 >> 0x20);
            uVar56 = uVar56 << 0x20;
            lVar41 = uVar27 + uVar56;
            if (CARRY8(uVar27,uVar56)) {
              uVar37 = uVar37 + 1;
            }
            if ((long)uVar32 < 0 != (long)uVar21 < 0) {
              bVar12 = lVar41 == 0;
              uVar37 = ~uVar37;
              lVar41 = -lVar41;
              if (bVar12) {
                uVar37 = uVar37 + 1;
              }
            }
            uVar56 = (uVar29 + uVar20) - lVar41;
            uVar32 = uVar38;
            uVar21 = uVar44;
            if ((long)uVar38 < 0) {
              uVar32 = ~uVar38;
              uVar21 = -uVar44;
              if (uVar44 == 0) {
                uVar32 = uVar32 + 1;
              }
            }
            uVar50 = (uVar21 & 0xffffffff) * (uVar5 & 0xffffffff);
            uVar75 = (uVar21 & 0xffffffff) * (uVar5 >> 0x20);
            uVar55 = (uVar21 >> 0x20) * (uVar5 & 0xffffffff);
            uVar39 = (uVar75 & 0xffffffff) + (uVar55 & 0xffffffff);
            uVar73 = uVar39 << 0x20;
            uVar27 = uVar50 + uVar73;
            uVar32 = uVar32 * uVar5 + (uVar21 >> 0x20) * (uVar5 >> 0x20) + (uVar75 >> 0x20) +
                     (uVar55 >> 0x20) + (uVar39 >> 0x20);
            if (CARRY8(uVar50,uVar73)) {
              uVar32 = uVar32 + 1;
            }
            if (iVar47 < 0 != (long)uVar38 < 0) {
              bVar12 = uVar27 == 0;
              uVar32 = ~uVar32;
              uVar27 = -uVar27;
              if (bVar12) {
                uVar32 = uVar32 + 1;
              }
            }
            *(ulong *)(puVar70 + 5) = uVar25 + uVar65;
            puVar70[6] = lVar42;
            lVar41 = uVar16 + ~uVar52 + (ulong)(lVar49 == 0) + (ulong)(uVar20 < uVar57) + uVar63 +
                     (ulong)CARRY8(uVar29,uVar20) + ~uVar37 + (ulong)(lVar41 == 0) +
                     (ulong)(uVar56 < uVar29 + uVar20) + uVar32;
            if (CARRY8(uVar27,uVar56)) {
              lVar41 = lVar41 + 1;
            }
            *(ulong *)(puVar70 + 7) = uVar28 + uVar23;
            puVar70[8] = lVar43;
            *(ulong *)(puVar70 + 9) = uVar27 + uVar56;
            puVar70[10] = lVar41;
            this_00 = (Int128 *)(puVar70 + 0xb);
            *(ulong *)this_00 = uVar44;
            puVar70[0xc] = uVar38;
            fVar80 = (float)Int128::toScalar((Int128 *)(puVar70 + 5));
            fVar81 = (float)Int128::toScalar(this_00);
            *(int *)(puVar70 + 0xd) = (int)(fVar80 / fVar81);
            fVar80 = (float)Int128::toScalar((Int128 *)(puVar70 + 7));
            fVar81 = (float)Int128::toScalar(this_00);
            *(int *)((long)puVar70 + 0x6c) = (int)(fVar80 / fVar81);
            fVar80 = (float)Int128::toScalar((Int128 *)(puVar70 + 9));
            fVar81 = (float)Int128::toScalar(this_00);
            *(int *)(puVar70 + 0xe) = (int)(fVar80 / fVar81);
            *(undefined8 **)(lVar78 + 0x18) = puVar70;
            puVar70[2] = plVar72;
            uVar35 = *(uint *)(param_4 + 4);
            uVar74 = *(uint *)(param_4 + 8);
            if (uVar35 == *(uint *)(param_4 + 8)) {
              uVar40 = uVar35 << 1;
              if (uVar35 == 0) {
                uVar40 = 1;
              }
              uVar74 = uVar35;
              if ((int)uVar35 < (int)uVar40) {
                if (uVar40 == 0) {
                  lVar41 = 0;
                }
                else {
                  lVar41 = btAlignedAllocInternal
                                     (-(ulong)(uVar40 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar40 << 3,0x10);
                  uVar35 = *(uint *)(param_4 + 4);
                }
                if (0 < (int)uVar35) {
                  lVar36 = 0;
                  do {
                    lVar42 = lVar36 * 8;
                    lVar36 = lVar36 + 1;
                    *(undefined8 *)(lVar41 + lVar42) =
                         *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar42);
                  } while ((int)uVar35 != lVar36);
                }
                if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                  if (*(char *)(param_4 + 0x18) != '\0') {
                    btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                    uVar35 = *(uint *)(param_4 + 4);
                  }
                  *(undefined8 *)(param_4 + 0x10) = 0;
                }
                *(undefined1 *)(param_4 + 0x18) = 1;
                *(long *)(param_4 + 0x10) = lVar41;
                *(uint *)(param_4 + 8) = uVar40;
                uVar74 = uVar40;
              }
            }
            uVar40 = uVar35 + 1;
            *(undefined8 **)(*(long *)(param_4 + 0x10) + (long)(int)uVar35 * 8) = puVar70;
            *(uint *)(param_4 + 4) = uVar40;
            if (uVar40 == uVar74) {
              uVar35 = uVar74 << 1;
              if (uVar74 == 0) {
                uVar35 = 1;
              }
              uVar40 = uVar74;
              if ((int)uVar74 < (int)uVar35) {
                if (uVar35 == 0) {
                  lVar41 = 0;
                }
                else {
                  lVar41 = btAlignedAllocInternal
                                     (-(ulong)(uVar35 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar35 << 3,0x10);
                  uVar74 = *(uint *)(param_4 + 4);
                }
                if (0 < (int)uVar74) {
                  lVar36 = 0;
                  do {
                    lVar42 = lVar36 * 8;
                    lVar36 = lVar36 + 1;
                    *(undefined8 *)(lVar41 + lVar42) =
                         *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar42);
                  } while ((int)uVar74 != lVar36);
                }
                if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                  if (*(char *)(param_4 + 0x18) != '\0') {
                    btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                    uVar74 = *(uint *)(param_4 + 4);
                  }
                  *(undefined8 *)(param_4 + 0x10) = 0;
                }
                *(undefined1 *)(param_4 + 0x18) = 1;
                *(long *)(param_4 + 0x10) = lVar41;
                *(uint *)(param_4 + 8) = uVar35;
                uVar40 = uVar74;
                uVar74 = uVar35;
              }
            }
            uVar35 = uVar40 + 1;
            *(long *)(*(long *)(param_4 + 0x10) + (long)(int)uVar40 * 8) = lVar19;
            *(uint *)(param_4 + 4) = uVar35;
            if (uVar35 == uVar74) {
              uVar40 = uVar74 << 1;
              if (uVar74 == 0) {
                uVar40 = 1;
              }
              uVar35 = uVar74;
              if ((int)uVar74 < (int)uVar40) {
                if (uVar40 == 0) {
                  lVar19 = 0;
                }
                else {
                  lVar19 = btAlignedAllocInternal
                                     (-(ulong)(uVar40 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar40 << 3,0x10);
                  uVar35 = *(uint *)(param_4 + 4);
                }
                if (0 < (int)uVar35) {
                  lVar41 = 0;
                  do {
                    lVar36 = lVar41 * 8;
                    lVar41 = lVar41 + 1;
                    *(undefined8 *)(lVar19 + lVar36) =
                         *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar36);
                  } while ((int)uVar35 != lVar41);
                }
                if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                  if (*(char *)(param_4 + 0x18) != '\0') {
                    btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                    uVar35 = *(uint *)(param_4 + 4);
                  }
                  *(undefined8 *)(param_4 + 0x10) = 0;
                }
                *(undefined1 *)(param_4 + 0x18) = 1;
                *(long *)(param_4 + 0x10) = lVar19;
                *(uint *)(param_4 + 8) = uVar40;
              }
            }
            *(undefined8 *)(*(long *)(param_4 + 0x10) + (long)(int)uVar35 * 8) = 0;
            *(uint *)(param_4 + 4) = uVar35 + 1;
          }
          if (iVar15 == 0 && iVar13 == 0) {
            pVVar26 = *(Vertex **)(lVar78 + 0x18);
            plVar72 = (long *)**(undefined8 **)(lVar76 + 0x10);
            if ((Vertex *)plVar72[3] != pVVar26) goto LAB_0126a6a0;
          }
          else {
            pVVar26 = *(Vertex **)(lVar78 + 0x18);
LAB_0126a6a0:
            plVar72 = (long *)newEdgePair(this,*(Vertex **)(lVar76 + 0x18),pVVar26);
            if (iVar13 == 0) {
              plVar69 = *(long **)(lVar76 + 0x10);
              lVar76 = *plVar69;
              *plVar72 = lVar76;
              *(long **)(lVar76 + 8) = plVar72;
LAB_0126a6dc:
              *plVar69 = (long)plVar72;
              plVar72[1] = (long)plVar69;
            }
            else if (plVar68 != (long *)0x0) {
              plVar69 = *(long **)(lVar76 + 0x10);
              goto LAB_0126a6dc;
            }
            if (iVar15 == 0) {
              lVar76 = *(long *)(lVar78 + 0x10);
              plVar69 = (long *)plVar72[2];
              puVar70 = *(undefined8 **)(lVar76 + 8);
              *puVar70 = plVar69;
              plVar69[1] = (long)puVar70;
            }
            else {
              plVar69 = (long *)plVar72[2];
              lVar76 = *(long *)(lVar78 + 0x10);
            }
            *plVar69 = lVar76;
            *(long **)(lVar76 + 8) = plVar69;
          }
          if (plVar68 != (long *)0x0) {
            plVar69 = (long *)plVar68[2];
            if (iVar13 < 1) {
              if (plVar72 != plVar69) {
                uVar35 = *(uint *)(param_4 + 4);
                uVar74 = *(uint *)(param_4 + 8);
                if (uVar35 == *(uint *)(param_4 + 8)) {
                  uVar40 = uVar35 << 1;
                  if (uVar35 == 0) {
                    uVar40 = 1;
                  }
                  uVar74 = uVar35;
                  if ((int)uVar35 < (int)uVar40) {
                    if (uVar40 == 0) {
                      lVar76 = 0;
                    }
                    else {
                      lVar76 = btAlignedAllocInternal
                                         (-(ulong)(uVar40 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar40 << 3,0x10);
                      uVar35 = *(uint *)(param_4 + 4);
                    }
                    if (0 < (int)uVar35) {
                      lVar19 = 0;
                      do {
                        lVar41 = lVar19 * 8;
                        lVar19 = lVar19 + 1;
                        *(undefined8 *)(lVar76 + lVar41) =
                             *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar41);
                      } while ((int)uVar35 != lVar19);
                    }
                    if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                      if (*(char *)(param_4 + 0x18) != '\0') {
                        btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                        uVar35 = *(uint *)(param_4 + 4);
                      }
                      *(undefined8 *)(param_4 + 0x10) = 0;
                    }
                    *(undefined1 *)(param_4 + 0x18) = 1;
                    *(long *)(param_4 + 0x10) = lVar76;
                    *(uint *)(param_4 + 8) = uVar40;
                    uVar74 = uVar40;
                  }
                }
                uVar40 = uVar35 + 1;
                *(long *)(*(long *)(param_4 + 0x10) + (long)(int)uVar35 * 8) = plVar68[3];
                *(uint *)(param_4 + 4) = uVar40;
                plVar69 = (long *)*plVar72;
                if (plVar69 != (long *)plVar68[2]) {
                  do {
                    plVar51 = (long *)*plVar69;
                    puVar70 = (undefined8 *)plVar69[2];
                    lVar76 = plVar69[3];
                    if (plVar51 == plVar69) {
                      plVar51 = (long *)0x0;
                    }
                    else {
                      plVar51[1] = plVar69[1];
                      *(long **)plVar69[1] = plVar51;
                    }
                    *(long **)(puVar70[3] + 0x10) = plVar51;
                    puVar54 = (undefined8 *)*puVar70;
                    puVar45 = puVar70 + 1;
                    if (puVar54 == puVar70) {
                      puVar54 = (undefined8 *)0x0;
                    }
                    else {
                      puVar54[1] = *puVar45;
                      *(undefined8 **)*puVar45 = puVar54;
                    }
                    *(undefined8 **)(lVar76 + 0x10) = puVar54;
                    plVar69[4] = 0;
                    plVar69[3] = 0;
                    plVar69[2] = 0;
                    plVar69[1] = 0;
                    *plVar69 = *(long *)(this + 0x50);
                    *(long **)(this + 0x50) = plVar69;
                    puVar70[2] = 0;
                    *puVar45 = 0;
                    puVar70[4] = 0;
                    puVar70[3] = 0;
                    *puVar70 = *(undefined8 *)(this + 0x50);
                    *(undefined8 **)(this + 0x50) = puVar70;
                    *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
                    uVar35 = *(uint *)(param_4 + 4);
                    uVar74 = *(uint *)(param_4 + 8);
                    if (uVar35 == *(uint *)(param_4 + 8)) {
                      uVar40 = uVar35 << 1;
                      if (uVar35 == 0) {
                        uVar40 = 1;
                      }
                      uVar74 = uVar35;
                      if ((int)uVar35 < (int)uVar40) {
                        if (uVar40 == 0) {
                          lVar19 = 0;
                        }
                        else {
                          lVar19 = btAlignedAllocInternal
                                             (-(ulong)(uVar40 >> 0x1f) & 0xfffffff800000000 |
                                              (ulong)uVar40 << 3,0x10);
                          uVar35 = *(uint *)(param_4 + 4);
                        }
                        if (0 < (int)uVar35) {
                          lVar41 = 0;
                          do {
                            lVar36 = lVar41 * 8;
                            lVar41 = lVar41 + 1;
                            *(undefined8 *)(lVar19 + lVar36) =
                                 *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar36);
                          } while ((int)uVar35 != lVar41);
                        }
                        if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                          if (*(char *)(param_4 + 0x18) != '\0') {
                            btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                            uVar35 = *(uint *)(param_4 + 4);
                          }
                          *(undefined8 *)(param_4 + 0x10) = 0;
                        }
                        *(undefined1 *)(param_4 + 0x18) = 1;
                        *(long *)(param_4 + 0x10) = lVar19;
                        *(uint *)(param_4 + 8) = uVar40;
                        uVar74 = uVar40;
                      }
                    }
                    uVar40 = uVar35 + 1;
                    *(long *)(*(long *)(param_4 + 0x10) + (long)(int)uVar35 * 8) = lVar76;
                    *(uint *)(param_4 + 4) = uVar40;
                    plVar69 = (long *)*plVar72;
                  } while (plVar69 != (long *)plVar68[2]);
                }
                if (uVar40 == uVar74) {
                  uVar35 = uVar74 << 1;
                  if (uVar74 == 0) {
                    uVar35 = 1;
                  }
                  uVar40 = uVar74;
                  if ((int)uVar74 < (int)uVar35) {
                    if (uVar35 == 0) {
                      lVar76 = 0;
                    }
                    else {
                      lVar76 = btAlignedAllocInternal
                                         (-(ulong)(uVar35 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar35 << 3,0x10);
                      uVar40 = *(uint *)(param_4 + 4);
                    }
                    if (0 < (int)uVar40) {
                      lVar19 = 0;
                      do {
                        lVar41 = lVar19 * 8;
                        lVar19 = lVar19 + 1;
                        *(undefined8 *)(lVar76 + lVar41) =
                             *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar41);
                      } while ((int)uVar40 != lVar19);
                    }
                    if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                      if (*(char *)(param_4 + 0x18) != '\0') {
                        btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                        uVar40 = *(uint *)(param_4 + 4);
                      }
                      *(undefined8 *)(param_4 + 0x10) = 0;
                    }
                    *(undefined1 *)(param_4 + 0x18) = 1;
                    *(long *)(param_4 + 0x10) = lVar76;
                    *(uint *)(param_4 + 8) = uVar35;
                  }
                }
                *(undefined8 *)(*(long *)(param_4 + 0x10) + (long)(int)uVar40 * 8) = 0;
                *(uint *)(param_4 + 4) = uVar40 + 1;
              }
            }
            else {
              *plVar72 = (long)plVar69;
              plVar69[1] = (long)plVar72;
            }
          }
          plVar72[4] = param_1;
          plVar69 = plVar72;
          if (plVar46 != (long *)0x0) {
            plVar69 = plVar46;
          }
          *(undefined8 *)(plVar72[2] + 0x20) = *(undefined8 *)(lVar78 + 0x20);
          plVar68 = plVar72;
          plVar46 = plVar69;
          local_1d8 = lVar77;
          iVar13 = iVar15;
        }
        if (iVar13 < 1) {
          if (plVar46 != (long *)plVar68[2]) {
            uVar35 = *(uint *)(param_4 + 4);
            uVar74 = *(uint *)(param_4 + 8);
            if (uVar35 == *(uint *)(param_4 + 8)) {
              uVar40 = uVar35 << 1;
              if (uVar35 == 0) {
                uVar40 = 1;
              }
              uVar74 = uVar35;
              if ((int)uVar35 < (int)uVar40) {
                if (uVar40 == 0) {
                  lVar71 = 0;
                }
                else {
                  lVar71 = btAlignedAllocInternal
                                     (-(ulong)(uVar40 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar40 << 3,0x10);
                  uVar35 = *(uint *)(param_4 + 4);
                }
                if (0 < (int)uVar35) {
                  lVar78 = 0;
                  do {
                    lVar76 = lVar78 * 8;
                    lVar78 = lVar78 + 1;
                    *(undefined8 *)(lVar71 + lVar76) =
                         *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar76);
                  } while ((int)uVar35 != lVar78);
                }
                if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                  if (*(char *)(param_4 + 0x18) != '\0') {
                    btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                    uVar35 = *(uint *)(param_4 + 4);
                  }
                  *(undefined8 *)(param_4 + 0x10) = 0;
                }
                *(long *)(param_4 + 0x10) = lVar71;
                *(undefined1 *)(param_4 + 0x18) = 1;
                *(uint *)(param_4 + 8) = uVar40;
                uVar74 = uVar40;
              }
            }
            uVar40 = uVar35 + 1;
            *(long *)(*(long *)(param_4 + 0x10) + (long)(int)uVar35 * 8) = plVar68[3];
            *(uint *)(param_4 + 4) = uVar40;
            plVar72 = (long *)*plVar46;
            if (plVar72 != (long *)plVar68[2]) {
              do {
                plVar69 = (long *)*plVar72;
                puVar70 = (undefined8 *)plVar72[2];
                lVar71 = plVar72[3];
                if (plVar69 == plVar72) {
                  plVar69 = (long *)0x0;
                }
                else {
                  plVar69[1] = plVar72[1];
                  *(long **)plVar72[1] = plVar69;
                }
                *(long **)(puVar70[3] + 0x10) = plVar69;
                puVar54 = (undefined8 *)*puVar70;
                puVar45 = puVar70 + 1;
                if (puVar54 == puVar70) {
                  puVar54 = (undefined8 *)0x0;
                }
                else {
                  puVar54[1] = *puVar45;
                  *(undefined8 **)*puVar45 = puVar54;
                }
                *(undefined8 **)(lVar71 + 0x10) = puVar54;
                plVar72[4] = 0;
                plVar72[3] = 0;
                plVar72[2] = 0;
                plVar72[1] = 0;
                *plVar72 = *(long *)(this + 0x50);
                *(long **)(this + 0x50) = plVar72;
                puVar70[2] = 0;
                *puVar45 = 0;
                puVar70[4] = 0;
                puVar70[3] = 0;
                *puVar70 = *(undefined8 *)(this + 0x50);
                *(undefined8 **)(this + 0x50) = puVar70;
                *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
                uVar35 = *(uint *)(param_4 + 4);
                uVar74 = *(uint *)(param_4 + 8);
                if (uVar35 == *(uint *)(param_4 + 8)) {
                  uVar40 = uVar35 << 1;
                  if (uVar35 == 0) {
                    uVar40 = 1;
                  }
                  uVar74 = uVar35;
                  if ((int)uVar35 < (int)uVar40) {
                    if (uVar40 == 0) {
                      lVar78 = 0;
                    }
                    else {
                      lVar78 = btAlignedAllocInternal
                                         (-(ulong)(uVar40 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar40 << 3,0x10);
                      uVar35 = *(uint *)(param_4 + 4);
                    }
                    if (0 < (int)uVar35) {
                      lVar76 = 0;
                      do {
                        lVar77 = lVar76 * 8;
                        lVar76 = lVar76 + 1;
                        *(undefined8 *)(lVar78 + lVar77) =
                             *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar77);
                      } while ((int)uVar35 != lVar76);
                    }
                    if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                      if (*(char *)(param_4 + 0x18) != '\0') {
                        btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                        uVar35 = *(uint *)(param_4 + 4);
                      }
                      *(undefined8 *)(param_4 + 0x10) = 0;
                    }
                    *(undefined1 *)(param_4 + 0x18) = 1;
                    *(long *)(param_4 + 0x10) = lVar78;
                    *(uint *)(param_4 + 8) = uVar40;
                    uVar74 = uVar40;
                  }
                }
                uVar40 = uVar35 + 1;
                *(long *)(*(long *)(param_4 + 0x10) + (long)(int)uVar35 * 8) = lVar71;
                *(uint *)(param_4 + 4) = uVar40;
                plVar72 = (long *)*plVar46;
              } while (plVar72 != (long *)plVar68[2]);
            }
            if (uVar40 == uVar74) {
              uVar35 = uVar74 << 1;
              if (uVar74 == 0) {
                uVar35 = 1;
              }
              uVar40 = uVar74;
              if ((int)uVar74 < (int)uVar35) {
                if (uVar35 == 0) {
                  lVar71 = 0;
                }
                else {
                  lVar71 = btAlignedAllocInternal
                                     (-(ulong)(uVar35 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar35 << 3,0x10);
                  uVar40 = *(uint *)(param_4 + 4);
                }
                if (0 < (int)uVar40) {
                  lVar78 = 0;
                  do {
                    lVar76 = lVar78 * 8;
                    lVar78 = lVar78 + 1;
                    *(undefined8 *)(lVar71 + lVar76) =
                         *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar76);
                  } while ((int)uVar40 != lVar78);
                }
                if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                  if (*(char *)(param_4 + 0x18) != '\0') {
                    btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                    uVar40 = *(uint *)(param_4 + 4);
                  }
                  *(undefined8 *)(param_4 + 0x10) = 0;
                }
                *(long *)(param_4 + 0x10) = lVar71;
                *(undefined1 *)(param_4 + 0x18) = 1;
                *(uint *)(param_4 + 8) = uVar35;
              }
            }
            *(undefined8 *)(*(long *)(param_4 + 0x10) + (long)(int)uVar40 * 8) = 0;
            *(uint *)(param_4 + 4) = uVar40 + 1;
          }
        }
        else {
          *(long *)(plVar46[2] + 0x18) = plVar68[3];
          puVar70 = *(undefined8 **)(local_1d8 + 0x10);
          *puVar70 = plVar46;
          plVar46[1] = (long)puVar70;
          lVar71 = plVar68[2];
          *plVar46 = lVar71;
          *(long **)(lVar71 + 8) = plVar46;
        }
        *(undefined8 *)(this + 0xb8) = **(undefined8 **)(param_4 + 0x10);
        iVar13 = *(int *)(param_4 + 4);
        if (0 < iVar13) {
          uVar79 = 0;
          do {
            if ((int)uVar79 < iVar13) {
              do {
                plVar68 = (long *)(*(long *)(param_4 + 0x10) + (long)(int)uVar79 * 8);
                lVar71 = plVar68[1];
                uVar35 = (int)uVar79 + 2;
                uVar79 = (ulong)uVar35;
                if (lVar71 != 0) {
                  lVar78 = *plVar68;
                  bVar12 = false;
                  uVar79 = (ulong)(int)uVar35;
                  do {
                    plVar46 = (long *)(lVar71 + 0x18);
                    plVar68 = (long *)(lVar78 + 0x18);
                    if (*(long *)(lVar78 + 0x20) != 0) {
                      plVar68 = (long *)(*(long *)(lVar78 + 0x20) + 0x10);
                    }
                    *plVar68 = *plVar46;
                    if (*(long *)(lVar71 + 0x20) != 0) {
                      *(long *)(lVar78 + 0x20) = *(long *)(lVar71 + 0x20);
                    }
                    for (lVar76 = *plVar46; lVar76 != 0; lVar76 = *(long *)(lVar76 + 0x10)) {
                      *(long *)(lVar76 + 8) = lVar78;
                    }
                    *plVar46 = 0;
                    *(undefined8 *)(lVar71 + 0x20) = 0;
                    lVar76 = *(long *)(lVar71 + 0x10);
                    if (lVar76 != 0) {
                      if (!bVar12) {
                        iVar14 = *(int *)(param_4 + 4);
                        if (iVar14 == *(int *)(param_4 + 8)) {
                          uVar35 = iVar14 << 1;
                          if (iVar14 == 0) {
                            uVar35 = 1;
                          }
                          if (iVar14 < (int)uVar35) {
                            if (uVar35 == 0) {
                              lVar76 = 0;
                            }
                            else {
                              lVar76 = btAlignedAllocInternal
                                                 (-(ulong)(uVar35 >> 0x1f) & 0xfffffff800000000 |
                                                  (ulong)uVar35 << 3,0x10);
                              iVar14 = *(int *)(param_4 + 4);
                            }
                            if (0 < iVar14) {
                              lVar77 = 0;
                              do {
                                lVar19 = lVar77 * 8;
                                lVar77 = lVar77 + 1;
                                *(undefined8 *)(lVar76 + lVar19) =
                                     *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar19);
                              } while (iVar14 != lVar77);
                            }
                            if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                              if (*(char *)(param_4 + 0x18) != '\0') {
                                btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                                iVar14 = *(int *)(param_4 + 4);
                              }
                              *(undefined8 *)(param_4 + 0x10) = 0;
                            }
                            *(undefined1 *)(param_4 + 0x18) = 1;
                            *(long *)(param_4 + 0x10) = lVar76;
                            *(uint *)(param_4 + 8) = uVar35;
                          }
                        }
                        *(long *)(*(long *)(param_4 + 0x10) + (long)iVar14 * 8) = lVar78;
                        *(int *)(param_4 + 4) = iVar14 + 1;
                        lVar76 = *(long *)(lVar71 + 0x10);
                      }
                      do {
                        iVar14 = *(int *)(param_4 + 4);
                        if (iVar14 == *(int *)(param_4 + 8)) {
                          uVar35 = iVar14 << 1;
                          if (iVar14 == 0) {
                            uVar35 = 1;
                          }
                          if (iVar14 < (int)uVar35) {
                            if (uVar35 == 0) {
                              lVar77 = 0;
                            }
                            else {
                              lVar77 = btAlignedAllocInternal
                                                 (-(ulong)(uVar35 >> 0x1f) & 0xfffffff800000000 |
                                                  (ulong)uVar35 << 3,0x10);
                              iVar14 = *(int *)(param_4 + 4);
                            }
                            if (0 < iVar14) {
                              lVar19 = 0;
                              do {
                                lVar41 = lVar19 * 8;
                                lVar19 = lVar19 + 1;
                                *(undefined8 *)(lVar77 + lVar41) =
                                     *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar41);
                              } while (iVar14 != lVar19);
                            }
                            if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                              if (*(char *)(param_4 + 0x18) != '\0') {
                                btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                                iVar14 = *(int *)(param_4 + 4);
                              }
                              *(undefined8 *)(param_4 + 0x10) = 0;
                            }
                            *(undefined1 *)(param_4 + 0x18) = 1;
                            *(long *)(param_4 + 0x10) = lVar77;
                            *(uint *)(param_4 + 8) = uVar35;
                          }
                        }
                        *(undefined8 *)(*(long *)(param_4 + 0x10) + (long)iVar14 * 8) =
                             *(undefined8 *)(lVar76 + 0x18);
                        *(int *)(param_4 + 4) = iVar14 + 1;
                        plVar68 = *(long **)(lVar71 + 0x10);
                        plVar46 = (long *)*plVar68;
                        puVar70 = (undefined8 *)plVar68[2];
                        if (plVar46 == plVar68) {
                          plVar46 = (long *)0x0;
                        }
                        else {
                          plVar46[1] = plVar68[1];
                          *(long **)plVar68[1] = plVar46;
                        }
                        *(long **)(puVar70[3] + 0x10) = plVar46;
                        puVar54 = (undefined8 *)*puVar70;
                        puVar45 = puVar70 + 1;
                        if (puVar54 == puVar70) {
                          puVar54 = (undefined8 *)0x0;
                        }
                        else {
                          puVar54[1] = *puVar45;
                          *(undefined8 **)*puVar45 = puVar54;
                        }
                        *(undefined8 **)(plVar68[3] + 0x10) = puVar54;
                        plVar68[4] = 0;
                        plVar68[3] = 0;
                        plVar68[2] = 0;
                        plVar68[1] = 0;
                        *plVar68 = *(long *)(this + 0x50);
                        *(long **)(this + 0x50) = plVar68;
                        puVar70[2] = 0;
                        *puVar45 = 0;
                        puVar70[4] = 0;
                        puVar70[3] = 0;
                        *puVar70 = *(undefined8 *)(this + 0x50);
                        *(undefined8 **)(this + 0x50) = puVar70;
                        *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
                        lVar76 = *(long *)(lVar71 + 0x10);
                      } while (lVar76 != 0);
                      bVar12 = true;
                    }
                    lVar76 = *(long *)(param_4 + 0x10);
                    lVar71 = *(long *)(lVar76 + uVar79 * 8);
                    uVar79 = uVar79 + 1;
                  } while (lVar71 != 0);
                  if (bVar12) {
                    iVar14 = *(int *)(param_4 + 4);
                    if (iVar14 == *(int *)(param_4 + 8)) {
                      uVar35 = iVar14 << 1;
                      if (iVar14 == 0) {
                        uVar35 = 1;
                      }
                      if (iVar14 < (int)uVar35) {
                        if (uVar35 == 0) {
                          lVar76 = 0;
                        }
                        else {
                          lVar76 = btAlignedAllocInternal
                                             (-(ulong)(uVar35 >> 0x1f) & 0xfffffff800000000 |
                                              (ulong)uVar35 << 3,0x10);
                          iVar14 = *(int *)(param_4 + 4);
                        }
                        if (0 < iVar14) {
                          lVar71 = 0;
                          do {
                            lVar78 = lVar71 * 8;
                            lVar71 = lVar71 + 1;
                            *(undefined8 *)(lVar76 + lVar78) =
                                 *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar78);
                          } while (iVar14 != lVar71);
                        }
                        if (*(void **)(param_4 + 0x10) != (void *)0x0) {
                          if (*(char *)(param_4 + 0x18) != '\0') {
                            btAlignedFreeInternal(*(void **)(param_4 + 0x10));
                            iVar14 = *(int *)(param_4 + 4);
                          }
                          *(undefined8 *)(param_4 + 0x10) = 0;
                        }
                        *(undefined1 *)(param_4 + 0x18) = 1;
                        *(long *)(param_4 + 0x10) = lVar76;
                        *(uint *)(param_4 + 8) = uVar35;
                      }
                    }
                    *(undefined8 *)(lVar76 + (long)iVar14 * 8) = 0;
                    *(int *)(param_4 + 4) = iVar14 + 1;
                  }
                }
              } while ((int)uVar79 < iVar13);
              iVar13 = *(int *)(param_4 + 4);
            }
          } while ((int)uVar79 < iVar13);
        }
        if (iVar13 < 0) {
          if (*(int *)(param_4 + 8) < 0) {
            if (*(void **)(param_4 + 0x10) != (void *)0x0) {
              if (*(char *)(param_4 + 0x18) != '\0') {
                btAlignedFreeInternal(*(void **)(param_4 + 0x10));
              }
              *(undefined8 *)(param_4 + 0x10) = 0;
            }
            *(undefined8 *)(param_4 + 0x10) = 0;
            *(undefined1 *)(param_4 + 0x18) = 1;
            *(undefined4 *)(param_4 + 8) = 0;
          }
          lVar71 = (long)iVar13;
          do {
            *(undefined8 *)(*(long *)(param_4 + 0x10) + lVar71 * 8) = 0;
            lVar71 = lVar71 + 1;
          } while (lVar71 != 0);
        }
        *(undefined4 *)(param_4 + 4) = 0;
        *(ulong *)(param_1 + 0x18) = uVar1 & 0xffffffff | uVar2 << 0x20;
        *(ulong *)(param_1 + 0x20) = uVar3 | 0xffffffff00000000;
      }
    }
  }
  return 1;
}

