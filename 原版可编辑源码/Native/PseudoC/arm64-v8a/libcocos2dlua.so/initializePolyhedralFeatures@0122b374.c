
/* btPolyhedralConvexShape::initializePolyhedralFeatures(int) */

undefined8 __thiscall
btPolyhedralConvexShape::initializePolyhedralFeatures(btPolyhedralConvexShape *this,int param_1)

{
  bool bVar1;
  long *plVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  byte bVar9;
  int iVar10;
  btConvexPolyhedron *this_00;
  void *pvVar11;
  long lVar12;
  void *pvVar13;
  void *pvVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined4 *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  ulong uVar26;
  undefined4 *puVar27;
  long lVar28;
  undefined8 *puVar29;
  int *piVar30;
  undefined8 *puVar31;
  ulong uVar32;
  undefined8 *puVar33;
  float *pfVar34;
  ulong uVar35;
  uint uVar36;
  float *pfVar37;
  ulong uVar38;
  char *pcVar39;
  int *piVar40;
  void *pvVar41;
  long lVar42;
  uint *puVar43;
  ulong uVar44;
  uint *puVar45;
  int iVar46;
  ulong uVar47;
  float fVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  ulong local_2a8;
  int *local_2a0;
  void *local_298;
  undefined8 *local_278;
  float local_250;
  uint uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  void *local_240;
  char local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  btAlignedObjectArray abStack_220 [4];
  undefined8 local_21c;
  void *local_210;
  char local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  btAlignedObjectArray abStack_1f0 [4];
  undefined8 local_1ec;
  void *local_1e0;
  char local_1d8;
  btAlignedObjectArray<btFace> abStack_1d0 [4];
  ulong local_1cc;
  void *local_1c0;
  char local_1b8;
  btAlignedObjectArray abStack_1b0 [4];
  undefined8 local_1ac;
  void *local_1a0;
  char local_198;
  btAlignedObjectArray abStack_190 [4];
  undefined8 local_18c;
  void *local_180;
  char local_178;
  btAlignedObjectArray abStack_170 [4];
  undefined8 local_16c;
  void *local_160;
  char local_158;
  undefined4 local_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long local_140;
  undefined1 local_138;
  undefined8 local_12c;
  long local_120;
  undefined1 local_118;
  ulong local_10c;
  long local_100;
  undefined1 local_f8;
  btAlignedObjectArray abStack_f0 [4];
  undefined8 local_ec;
  void *local_e0;
  char local_d8;
  float local_d0 [5];
  float fStack_bc;
  byte bStack_b9;
  float local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  
  lVar6 = tpidr_el0;
  lVar18 = *(long *)(lVar6 + 0x28);
  if (*(undefined8 **)(this + 0x40) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0x40))();
    btAlignedFreeInternal(*(void **)(this + 0x40));
  }
  this_00 = (btConvexPolyhedron *)btAlignedAllocInternal(0xb0,0x10);
  btConvexPolyhedron::btConvexPolyhedron(this_00);
  iVar46 = 0;
  *(btConvexPolyhedron **)(this + 0x40) = this_00;
  local_d8 = '\x01';
  local_e0 = (void *)0x0;
  local_ec = 0;
  while( true ) {
    iVar10 = (**(code **)(*(long *)this + 0xc0))(this);
    if (iVar10 <= iVar46) break;
    iVar10 = (int)local_ec;
    iVar16 = (int)local_ec;
    if ((int)local_ec == local_ec._4_4_) {
      uVar17 = (int)local_ec << 1;
      if ((int)local_ec == 0) {
        uVar17 = 1;
      }
      if ((int)local_ec < (int)uVar17) {
        if (uVar17 == 0) {
          pvVar11 = (void *)0x0;
          if (0 < (int)local_ec) goto LAB_0122b464;
LAB_0122b4a0:
          iVar16 = (int)local_ec;
          if (local_e0 != (void *)0x0) goto LAB_0122b4a8;
        }
        else {
          pvVar11 = (void *)btAlignedAllocInternal
                                      (-(ulong)(uVar17 >> 0x1f) & 0xfffffff000000000 |
                                       (ulong)uVar17 << 4,0x10);
          if ((int)local_ec < 1) goto LAB_0122b4a0;
LAB_0122b464:
          lVar22 = 0;
          lVar28 = (long)(int)local_ec;
          do {
            uVar49 = *(undefined8 *)((long)local_e0 + lVar22);
            lVar28 = lVar28 + -1;
            ((undefined8 *)((long)pvVar11 + lVar22))[1] =
                 ((undefined8 *)((long)local_e0 + lVar22))[1];
            *(undefined8 *)((long)pvVar11 + lVar22) = uVar49;
            lVar22 = lVar22 + 0x10;
            iVar16 = (int)local_ec;
          } while (lVar28 != 0);
LAB_0122b4a8:
          if (local_d8 != '\0') {
            btAlignedFreeInternal(local_e0);
            iVar16 = (int)local_ec;
          }
        }
        local_d8 = '\x01';
        local_ec = (ulong)uVar17 << 0x20;
        local_e0 = pvVar11;
      }
    }
    local_ec = CONCAT44(local_ec._4_4_,iVar16 + 1);
    puVar33 = (undefined8 *)((long)local_e0 + (long)iVar10 * 0x10);
    puVar33[1] = CONCAT44(uStack_144,uStack_148);
    *puVar33 = CONCAT44(uStack_14c,local_150);
    (**(code **)(*(long *)this + 0xd8))(this,iVar46,(void *)((long)local_e0 + (long)iVar10 * 0x10));
    iVar46 = iVar46 + 1;
  }
  local_138 = 1;
  local_140 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  local_118 = 1;
  local_120 = 0;
  local_12c = 0;
  local_f8 = 1;
  local_100 = 0;
  local_10c = 0;
  if (param_1 == 0) {
    btConvexHullComputer::compute(&local_150,SUB81(local_e0,0),0,0x10,0.0,0.0);
  }
  else {
    local_158 = '\x01';
    local_160 = (void *)0x0;
    local_16c = 0;
    btGeometryUtil::getPlaneEquationsFromVertices(abStack_f0,abStack_170);
    local_178 = '\x01';
    local_180 = (void *)0x0;
    local_18c = 0;
    if (0 < (int)local_16c) {
      lVar22 = 0;
      do {
        puVar33 = (undefined8 *)((long)local_160 + lVar22 * 0x10);
        local_d0[2] = *(float *)(puVar33 + 1);
        local_d0[0] = (float)*puVar33;
        local_d0[1] = (float)((ulong)*puVar33 >> 0x20);
        fVar52 = *(float *)((long)puVar33 + 0xc);
        fVar48 = (float)(**(code **)(*(long *)this + 0x60))(this);
        iVar46 = (int)local_18c;
        if ((int)local_18c == local_18c._4_4_) {
          uVar17 = (int)local_18c << 1;
          if ((int)local_18c == 0) {
            uVar17 = 1;
          }
          if ((int)local_18c < (int)uVar17) {
            if (uVar17 == 0) {
              pvVar11 = (void *)0x0;
            }
            else {
              pvVar11 = (void *)btAlignedAllocInternal
                                          (-(ulong)(uVar17 >> 0x1f) & 0xfffffff000000000 |
                                           (ulong)uVar17 << 4,0x10);
            }
            if (0 < (int)local_18c) {
              lVar28 = 0;
              lVar42 = (long)(int)local_18c;
              do {
                lVar42 = lVar42 + -1;
                uVar49 = *(undefined8 *)((long)local_180 + lVar28);
                ((undefined8 *)((long)pvVar11 + lVar28))[1] =
                     ((undefined8 *)((long)local_180 + lVar28))[1];
                *(undefined8 *)((long)pvVar11 + lVar28) = uVar49;
                lVar28 = lVar28 + 0x10;
              } while (lVar42 != 0);
            }
            if ((local_180 != (void *)0x0) && (local_178 != '\0')) {
              btAlignedFreeInternal(local_180);
            }
            local_178 = '\x01';
            local_18c = CONCAT44(uVar17,(int)local_18c);
            iVar46 = (int)local_18c;
            local_180 = pvVar11;
          }
        }
        lVar22 = lVar22 + 1;
        puVar33 = (undefined8 *)((long)local_180 + (long)iVar46 * 0x10);
        *(float *)(puVar33 + 1) = local_d0[2];
        *(float *)((long)puVar33 + 0xc) = fVar52 - fVar48;
        *puVar33 = CONCAT44(local_d0[1],local_d0[0]);
        local_18c = CONCAT44(local_18c._4_4_,(int)local_18c + 1);
      } while (lVar22 < (int)local_16c);
    }
    local_198 = '\x01';
    local_1a0 = (void *)0x0;
    local_1ac = 0;
    btGeometryUtil::getVerticesFromPlaneEquations(abStack_190,abStack_1b0);
    btConvexHullComputer::compute(&local_150,SUB81(local_1a0,0),0,0x10,0.0,0.0);
    if (local_1a0 != (void *)0x0) {
      if (local_198 != '\0') {
        btAlignedFreeInternal(local_1a0);
      }
      local_1a0 = (void *)0x0;
    }
    if (local_180 != (void *)0x0) {
      if (local_178 != '\0') {
        btAlignedFreeInternal(local_180);
      }
      local_180 = (void *)0x0;
    }
    if (local_160 != (void *)0x0) {
      if (local_158 != '\0') {
        btAlignedFreeInternal(local_160);
      }
      local_160 = (void *)0x0;
    }
  }
  uVar17 = (uint)local_10c;
  uVar38 = local_10c & 0xffffffff;
  lVar22 = (long)(int)(uint)local_10c;
  if ((int)(uint)local_10c < 1) {
    local_278 = (undefined8 *)0x0;
  }
  else {
    local_278 = (undefined8 *)btAlignedAllocInternal(lVar22 << 4,0x10);
    puVar33 = local_278;
    lVar28 = lVar22;
    do {
      lVar28 = lVar28 + -1;
      puVar33[1] = CONCAT44(local_d0[3],local_d0[2]);
      *puVar33 = CONCAT44(local_d0[1],local_d0[0]);
      puVar33 = puVar33 + 2;
    } while (lVar28 != 0);
  }
  local_d0[4] = 0.0;
  fStack_bc = (float)((uint)bStack_b9 << 0x18);
  local_d0[0] = 0.0;
  local_d0[1] = 0.0;
  local_d0[2] = 0.0;
  local_d0[3] = 0.0;
  local_1b8 = '\x01';
  local_1c0 = (void *)0x0;
  local_1cc = 0;
  if ((int)uVar17 < 0) {
    uVar36 = ~uVar17;
    lVar28 = lVar22 * 0x30;
    while( true ) {
      pvVar11 = local_1c0;
      pvVar13 = *(void **)((long)local_1c0 + lVar28 + 0x10);
      if (pvVar13 != (void *)0x0) {
        if (*(char *)((long)local_1c0 + lVar28 + 0x18) != '\0') {
          btAlignedFreeInternal(pvVar13);
        }
        *(undefined8 *)((long)pvVar11 + lVar28 + 0x10) = 0;
      }
      *(undefined1 *)((long)pvVar11 + lVar28 + 0x18) = 1;
      *(undefined8 *)((long)pvVar11 + lVar28 + 0x10) = 0;
      *(undefined4 *)((long)pvVar11 + lVar28 + 4) = 0;
      *(undefined4 *)((long)pvVar11 + lVar28 + 8) = 0;
      if (uVar36 == 0) break;
      uVar36 = uVar36 - 1;
      lVar28 = lVar28 + 0x30;
    }
  }
  else if (uVar17 != 0) {
    btAlignedObjectArray<btFace>::reserve(abStack_1d0,uVar17);
    puVar33 = (undefined8 *)((long)local_1c0 + 0x20);
    do {
      *(undefined1 *)(puVar33 + -1) = 1;
      puVar33[-2] = 0;
      *(undefined8 *)((long)puVar33 + -0x1c) = 0;
      uVar49 = *(undefined8 *)((ulong)local_d0 | 7);
      uVar38 = uVar38 - 1;
      puVar33[1] = ((undefined8 *)((ulong)local_d0 | 7))[1];
      *puVar33 = uVar49;
      puVar33 = puVar33 + 6;
    } while (uVar38 != 0);
  }
  uVar36 = uStack_14c;
  local_1cc = CONCAT44(local_1cc._4_4_,uVar17);
  lVar28 = *(long *)(this + 0x40);
  uVar38 = (ulong)uStack_14c;
  iVar46 = *(int *)(lVar28 + 0xc);
  if (iVar46 < (int)uStack_14c) {
    lVar42 = (long)(int)uStack_14c;
    if (*(int *)(lVar28 + 0x10) < (int)uStack_14c) {
      if (uStack_14c == 0) {
        lVar12 = 0;
        iVar10 = iVar46;
      }
      else {
        lVar12 = btAlignedAllocInternal(lVar42 << 4,0x10);
        iVar10 = *(int *)(lVar28 + 0xc);
      }
      if (0 < iVar10) {
        lVar19 = 0;
        lVar23 = (long)iVar10;
        do {
          lVar23 = lVar23 + -1;
          puVar33 = (undefined8 *)(*(long *)(lVar28 + 0x18) + lVar19);
          uVar49 = *puVar33;
          ((undefined8 *)(lVar12 + lVar19))[1] = puVar33[1];
          *(undefined8 *)(lVar12 + lVar19) = uVar49;
          lVar19 = lVar19 + 0x10;
        } while (lVar23 != 0);
      }
      if (*(void **)(lVar28 + 0x18) != (void *)0x0) {
        if (*(char *)(lVar28 + 0x20) != '\0') {
          btAlignedFreeInternal(*(void **)(lVar28 + 0x18));
        }
        *(long *)(lVar28 + 0x18) = 0;
      }
      *(long *)(lVar28 + 0x18) = lVar12;
      *(undefined1 *)(lVar28 + 0x20) = 1;
      *(uint *)(lVar28 + 0x10) = uVar36;
    }
    lVar42 = lVar42 - iVar46;
    lVar12 = (long)iVar46 << 4;
    do {
      lVar42 = lVar42 + -1;
      puVar33 = (undefined8 *)(*(long *)(lVar28 + 0x18) + lVar12);
      puVar33[1] = CONCAT44(local_d0[3],local_d0[2]);
      *puVar33 = CONCAT44(local_d0[1],local_d0[0]);
      lVar12 = lVar12 + 0x10;
    } while (lVar42 != 0);
  }
  *(uint *)(lVar28 + 0xc) = uVar36;
  if (0 < (int)uVar36) {
    lVar28 = 0;
    do {
      uVar38 = uVar38 - 1;
      uVar49 = *(undefined8 *)(local_140 + lVar28);
      puVar33 = (undefined8 *)(*(long *)(*(long *)(this + 0x40) + 0x18) + lVar28);
      puVar33[1] = ((undefined8 *)(local_140 + lVar28))[1];
      *puVar33 = uVar49;
      lVar28 = lVar28 + 0x10;
    } while (uVar38 != 0);
  }
  if (0 < (int)uVar17) {
    lVar28 = 0;
    do {
      iVar46 = 0;
      piVar40 = (int *)(local_120 + (long)*(int *)(local_100 + lVar28 * 4) * 0xc);
      piVar30 = piVar40;
      do {
        pvVar11 = local_1c0;
        iVar10 = piVar30[(long)piVar30[1] * 3 + 2];
        puVar45 = (uint *)((long)local_1c0 + lVar28 * 0x30 + 4);
        uVar17 = *puVar45;
        puVar43 = (uint *)((long)local_1c0 + lVar28 * 0x30 + 8);
        if (uVar17 == *puVar43) {
          uVar36 = uVar17 << 1;
          if (uVar17 == 0) {
            uVar36 = 1;
          }
          if ((int)uVar17 < (int)uVar36) {
            if (uVar36 == 0) {
              pvVar13 = (void *)0x0;
            }
            else {
              pvVar13 = (void *)btAlignedAllocInternal
                                          (-(ulong)(uVar36 >> 0x1f) & 0xfffffffc00000000 |
                                           (ulong)uVar36 << 2,0x10);
              uVar17 = *puVar45;
            }
            puVar33 = (undefined8 *)((long)pvVar11 + lVar28 * 0x30 + 0x10);
            pvVar14 = (void *)*puVar33;
            if ((int)uVar17 < 1) {
              if (pvVar14 != (void *)0x0) goto LAB_0122ba78;
              pcVar39 = (char *)((long)pvVar11 + lVar28 * 0x30 + 0x18);
            }
            else {
              uVar38 = (ulong)(int)uVar17;
              if (uVar17 < 8) {
LAB_0122ba4c:
                uVar24 = 0;
              }
              else {
                uVar24 = uVar38 & 0xfffffffffffffff8;
                if (uVar24 != 0) {
                  if ((pvVar13 < (void *)((long)pvVar14 + uVar38 * 4)) &&
                     (pvVar14 < (void *)((long)pvVar13 + uVar38 * 4))) goto LAB_0122ba4c;
                  puVar29 = (undefined8 *)((long)pvVar13 + 0x10);
                  puVar31 = (undefined8 *)((long)pvVar14 + 0x10);
                  uVar44 = uVar24;
                  do {
                    puVar7 = puVar31 + -1;
                    uVar49 = puVar31[-2];
                    uVar51 = puVar31[1];
                    uVar50 = *puVar31;
                    uVar44 = uVar44 - 8;
                    puVar31 = puVar31 + 4;
                    puVar29[-1] = *puVar7;
                    puVar29[-2] = uVar49;
                    puVar29[1] = uVar51;
                    *puVar29 = uVar50;
                    puVar29 = puVar29 + 4;
                  } while (uVar44 != 0);
                  if (uVar24 == uVar38) goto LAB_0122ba78;
                }
              }
              lVar42 = uVar38 - uVar24;
              puVar21 = (undefined4 *)((long)pvVar14 + uVar24 * 4);
              puVar27 = (undefined4 *)((long)pvVar13 + uVar24 * 4);
              do {
                lVar42 = lVar42 + -1;
                *puVar27 = *puVar21;
                puVar21 = puVar21 + 1;
                puVar27 = puVar27 + 1;
              } while (lVar42 != 0);
LAB_0122ba78:
              pcVar39 = (char *)((long)pvVar11 + lVar28 * 0x30 + 0x18);
              if (*pcVar39 != '\0') {
                btAlignedFreeInternal(pvVar14);
              }
              *puVar33 = 0;
              uVar17 = *puVar45;
            }
            *pcVar39 = '\x01';
            *puVar33 = pvVar13;
            *puVar43 = uVar36;
          }
        }
        *(int *)(*(long *)((long)pvVar11 + lVar28 * 0x30 + 0x10) + (long)(int)uVar17 * 4) = iVar10;
        *puVar45 = *puVar45 + 1;
        pfVar3 = (float *)(local_140 + (long)iVar10 * 0x10);
        pfVar34 = (float *)(local_140 + (long)piVar30[2] * 0x10);
        fVar53 = *pfVar34 - *pfVar3;
        fVar54 = pfVar34[1] - pfVar3[1];
        fVar55 = pfVar34[2] - pfVar3[2];
        fVar52 = fVar53 * fVar53 + fVar54 * fVar54 + fVar55 * fVar55;
        fVar48 = SQRT(fVar52);
        if (NAN(fVar48)) {
          fVar48 = sqrtf(fVar52);
        }
        if (iVar46 < 2) {
          fVar48 = 1.0 / fVar48;
          lVar42 = (long)iVar46;
          iVar46 = iVar46 + 1;
          local_d0[lVar42 * 4] = fVar53 * fVar48;
          local_d0[lVar42 * 4 + 1] = fVar54 * fVar48;
          local_d0[lVar42 * 4 + 2] = fVar55 * fVar48;
          local_d0[lVar42 * 4 + 3] = 0.0;
        }
        piVar30 = piVar30 + (long)piVar30[1] * 3 + (long)piVar30[(long)piVar30[1] * 3] * 3;
      } while (piVar30 != piVar40);
      if (iVar46 == 2) {
        pfVar3 = (float *)(local_278 + lVar28 * 2);
        fVar53 = local_d0[1] * local_b8 - local_d0[2] * fStack_bc;
        fVar52 = local_d0[2] * local_d0[4] - local_b8 * local_d0[0];
        fVar48 = fStack_bc * local_d0[0] - local_d0[1] * local_d0[4];
        *pfVar3 = fVar53;
        pfVar34 = pfVar3 + 1;
        *pfVar34 = fVar52;
        pfVar37 = pfVar3 + 2;
        *pfVar37 = fVar48;
        pfVar3[3] = 0.0;
        fVar52 = fVar53 * fVar53 + fVar52 * fVar52 + fVar48 * fVar48;
        fVar48 = SQRT(fVar52);
        if (NAN(fVar48)) {
          fVar48 = sqrtf(fVar52);
        }
        fVar52 = *pfVar3;
        fVar48 = 1.0 / fVar48;
        *pfVar3 = fVar48 * fVar52;
        *pfVar34 = fVar48 * *pfVar34;
        *pfVar37 = fVar48 * *pfVar37;
        *(float *)((long)local_1c0 + lVar28 * 0x30 + 0x20) = fVar48 * fVar52;
        *(float *)((long)local_1c0 + lVar28 * 0x30 + 0x24) = *pfVar34;
        *(float *)((long)local_1c0 + lVar28 * 0x30 + 0x28) = *pfVar37;
        *(undefined4 *)((long)local_1c0 + lVar28 * 0x30 + 0x2c) = 0x7149f2ca;
      }
      else {
        local_278[lVar28 * 2] = 0;
        (local_278 + lVar28 * 2)[1] = 0;
      }
      iVar46 = *(int *)((long)local_1c0 + lVar28 * 0x30 + 4);
      fVar48 = 1e+30;
      if (0 < iVar46) {
        piVar30 = *(int **)((long)local_1c0 + lVar28 * 0x30 + 0x10);
        pfVar3 = (float *)(local_278 + lVar28 * 2);
        pfVar34 = (float *)(*(long *)(*(long *)(this + 0x40) + 0x18) + (long)*piVar30 * 0x10);
        fVar48 = (float)NEON_fminnm(*pfVar34 * *pfVar3 + pfVar34[1] * pfVar3[1] +
                                    pfVar34[2] * pfVar3[2],0x7149f2ca);
        if (iVar46 != 1) {
          lVar42 = 1;
          do {
            piVar40 = piVar30 + lVar42;
            lVar42 = lVar42 + 1;
            pfVar34 = (float *)(*(long *)(*(long *)(this + 0x40) + 0x18) + (long)*piVar40 * 0x10);
            fVar52 = *pfVar34 * *pfVar3 + pfVar34[1] * pfVar3[1] + pfVar34[2] * pfVar3[2];
            if (fVar48 <= fVar52) {
              fVar52 = fVar48;
            }
            fVar48 = fVar52;
          } while (lVar42 < iVar46);
        }
      }
      lVar42 = lVar28 * 0x30;
      lVar28 = lVar28 + 1;
      *(float *)((long)local_1c0 + lVar42 + 0x2c) = -fVar48;
    } while (lVar28 < lVar22);
  }
  if ((int)local_1cc < 1) {
    pvVar11 = (void *)0x0;
    local_298 = (void *)0x0;
  }
  else {
    uVar38 = 0;
    pvVar14 = (void *)0x0;
    pvVar11 = (void *)0x0;
    local_298 = (void *)0x0;
    uVar17 = 0;
    pvVar13 = (void *)0x0;
    do {
      pvVar41 = pvVar13;
      if (uVar38 == uVar17) {
        uVar36 = (int)uVar38 << 1;
        if (uVar38 == 0) {
          uVar36 = 1;
        }
        if ((long)uVar38 < (long)(int)uVar36) {
          uVar17 = uVar36;
          if (uVar36 == 0) {
            local_298 = (void *)0x0;
            if (0 < (long)uVar38) goto LAB_0122bdc4;
LAB_0122bdf0:
            bVar1 = pvVar11 == (void *)0x0;
            pvVar11 = local_298;
            pvVar41 = local_298;
            pvVar14 = local_298;
            if (bVar1) goto LAB_0122be90;
          }
          else {
            local_298 = (void *)btAlignedAllocInternal((long)(int)uVar36 << 2,0x10);
            if ((long)uVar38 < 1) goto LAB_0122bdf0;
LAB_0122bdc4:
            if (uVar38 < 8) {
              uVar24 = 0;
            }
            else {
              uVar24 = uVar38 & 0xfffffffffffffff8;
              if (uVar24 != 0) {
                if (((void *)((long)pvVar11 + uVar38 * 4) <= local_298) ||
                   ((void *)((long)local_298 + uVar38 * 4) <= pvVar14)) {
                  uVar44 = uVar38 & 0xfffffffffffffff8;
                  puVar33 = (undefined8 *)((long)local_298 + 0x10);
                  puVar29 = (undefined8 *)((long)pvVar11 + 0x10);
                  do {
                    puVar31 = puVar29 + -1;
                    uVar49 = puVar29[-2];
                    uVar51 = puVar29[1];
                    uVar50 = *puVar29;
                    uVar44 = uVar44 - 8;
                    puVar29 = puVar29 + 4;
                    puVar33[-1] = *puVar31;
                    puVar33[-2] = uVar49;
                    puVar33[1] = uVar51;
                    *puVar33 = uVar50;
                    puVar33 = puVar33 + 4;
                    if (uVar44 == 0) goto joined_r0x0122be5c;
                  } while( true );
                }
                uVar24 = 0;
              }
            }
            do {
              lVar22 = uVar24 * 4;
              uVar24 = uVar24 + 1;
              *(undefined4 *)((long)local_298 + lVar22) = *(undefined4 *)((long)pvVar11 + lVar22);
joined_r0x0122be5c:
            } while (uVar38 != uVar24);
          }
          btAlignedFreeInternal(pvVar13);
          pvVar11 = local_298;
          pvVar41 = local_298;
          pvVar14 = local_298;
        }
      }
LAB_0122be90:
      *(int *)((long)pvVar11 + uVar38 * 4) = (int)uVar38;
      uVar38 = uVar38 + 1;
      pvVar13 = pvVar41;
    } while ((int)uVar38 < (int)local_1cc);
    if ((int)uVar38 != 0) {
LAB_0122becc:
      uVar17 = (int)uVar38 - 1;
      uVar24 = (ulong)uVar17;
      iVar46 = *(int *)((long)pvVar11 + (long)(int)uVar17 * 4);
      local_2a0 = (int *)btAlignedAllocInternal(4,0x10);
      *local_2a0 = iVar46;
      fVar48 = *(float *)((long)local_1c0 + (long)iVar46 * 0x30 + 0x20);
      fVar52 = *(float *)((long)local_1c0 + (long)iVar46 * 0x30 + 0x24);
      fVar53 = *(float *)((long)local_1c0 + (long)iVar46 * 0x30 + 0x28);
      local_2a8 = (ulong)(int)uVar17;
      piVar30 = local_2a0;
      piVar40 = local_2a0;
      if (1 < (int)uVar38) {
        iVar46 = 1;
        uVar38 = 1;
        uVar44 = local_2a8;
        piVar25 = local_2a0;
LAB_0122bf20:
        iVar10 = (int)uVar38;
        lVar22 = 0;
        uVar32 = uVar38 & 0xffffffff;
        uVar26 = uVar38 >> 0x1f;
        piVar15 = piVar30;
        uVar38 = (long)iVar10;
        do {
          uVar35 = uVar38 & 0xfffffffffffffff8;
          uVar47 = iVar10 + lVar22;
          uVar24 = (ulong)(int)uVar24;
          do {
            local_2a8 = uVar44;
            if ((long)uVar24 < 1) goto LAB_0122c38c;
            iVar16 = *(int *)((long)pvVar11 + uVar24 * 4 + -4);
            uVar24 = uVar24 - 1;
          } while (fVar48 * *(float *)((long)local_1c0 + (long)iVar16 * 0x30 + 0x20) +
                   fVar52 * *(float *)((long)local_1c0 + (long)iVar16 * 0x30 + 0x24) +
                   fVar53 * *(float *)((long)local_1c0 + (long)iVar16 * 0x30 + 0x28) <= 0.999);
          piVar30 = piVar15;
          if (iVar46 == (int)uVar38) {
            iVar5 = iVar46 << 1;
            if (iVar46 == 0) {
              iVar5 = 1;
            }
            if ((long)uVar38 < (long)iVar5) {
              iVar46 = iVar5;
              if (iVar5 == 0) {
                local_2a0 = (int *)0x0;
                if (0 < (long)uVar38) goto LAB_0122c050;
LAB_0122c080:
                bVar1 = piVar40 == (int *)0x0;
                piVar30 = local_2a0;
                piVar40 = local_2a0;
                piVar25 = local_2a0;
                if (bVar1) goto LAB_0122c118;
              }
              else {
                local_2a0 = (int *)btAlignedAllocInternal((long)iVar5 << 2,0x10);
                if ((long)uVar38 < 1) goto LAB_0122c080;
LAB_0122c050:
                if (uVar47 < 8) {
                  uVar20 = 0;
LAB_0122c0d4:
                  do {
                    uVar47 = uVar20 + 1;
                    local_2a0[uVar20] = piVar40[uVar20];
                    uVar20 = uVar47;
                  } while (uVar38 != uVar47);
                }
                else {
                  uVar20 = uVar47 & 0xfffffffffffffff8;
                  if (uVar20 == 0) goto LAB_0122c0d4;
                  if ((local_2a0 < piVar40 + uVar47) &&
                     (piVar25 < (int *)((long)local_2a0 +
                                       (-(uVar26 & 1) & 0xfffffffc00000000 | uVar32 << 2) +
                                       lVar22 * 4))) {
                    uVar20 = 0;
                    goto LAB_0122c0d4;
                  }
                  piVar30 = local_2a0 + 4;
                  piVar25 = piVar40 + 4;
                  do {
                    piVar8 = piVar25 + -2;
                    uVar49 = *(undefined8 *)(piVar25 + -4);
                    uVar51 = *(undefined8 *)(piVar25 + 2);
                    uVar50 = *(undefined8 *)piVar25;
                    uVar35 = uVar35 - 8;
                    piVar25 = piVar25 + 8;
                    *(undefined8 *)(piVar30 + -2) = *(undefined8 *)piVar8;
                    *(undefined8 *)(piVar30 + -4) = uVar49;
                    *(undefined8 *)(piVar30 + 2) = uVar51;
                    *(undefined8 *)piVar30 = uVar50;
                    piVar30 = piVar30 + 8;
                  } while (uVar35 != 0);
                  if (uVar47 != uVar20) goto LAB_0122c0d4;
                }
              }
              btAlignedFreeInternal(piVar15);
              piVar30 = local_2a0;
              piVar40 = local_2a0;
              piVar25 = local_2a0;
            }
          }
LAB_0122c118:
          piVar40[uVar38] = iVar16;
          lVar28 = 0;
          uVar38 = uVar38 + 1;
          do {
            if (*(int *)((long)pvVar11 + lVar28 * 4) == iVar16) {
              if (lVar28 < (long)uVar44) {
                local_2a8 = uVar44 - 1;
                uVar4 = *(undefined4 *)((long)pvVar11 + lVar28 * 4);
                *(undefined4 *)((long)pvVar11 + lVar28 * 4) =
                     *(undefined4 *)((long)pvVar11 + local_2a8 * 4);
                *(undefined4 *)((long)pvVar11 + local_2a8 * 4) = uVar4;
                bVar1 = (long)uVar44 < 1;
                uVar44 = local_2a8;
                if (local_2a8 == 0 || bVar1) goto LAB_0122c180;
                goto LAB_0122bf20;
              }
              break;
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 < (long)uVar44);
          lVar22 = lVar22 + 1;
          piVar15 = piVar30;
        } while( true );
      }
      uVar38 = 1;
      iVar46 = 1;
LAB_0122c180:
      iVar10 = (int)uVar38;
      lVar22 = 0;
      uVar26 = uVar38 & 0xffffffff;
      uVar44 = uVar38 >> 0x1f;
      piVar25 = local_2a0;
      uVar38 = (long)iVar10;
      do {
        uVar47 = uVar38 & 0xfffffffffffffff8;
        uVar32 = iVar10 + lVar22;
        uVar24 = (ulong)(int)uVar24;
        do {
          if ((long)uVar24 < 1) goto LAB_0122c38c;
          iVar16 = *(int *)((long)pvVar11 + uVar24 * 4 + -4);
          uVar24 = uVar24 - 1;
        } while (fVar48 * *(float *)((long)local_1c0 + (long)iVar16 * 0x30 + 0x20) +
                 fVar52 * *(float *)((long)local_1c0 + (long)iVar16 * 0x30 + 0x24) +
                 fVar53 * *(float *)((long)local_1c0 + (long)iVar16 * 0x30 + 0x28) <= 0.999);
        piVar15 = piVar30;
        if (iVar46 == (int)uVar38) {
          iVar5 = iVar46 << 1;
          if (iVar46 == 0) {
            iVar5 = 1;
          }
          if ((long)uVar38 < (long)iVar5) {
            iVar46 = iVar5;
            if (iVar5 == 0) {
              local_2a0 = (int *)0x0;
              if (0 < (long)uVar38) goto LAB_0122c288;
LAB_0122c2bc:
              bVar1 = piVar40 == (int *)0x0;
              piVar15 = local_2a0;
              piVar40 = local_2a0;
              piVar25 = local_2a0;
              if (bVar1) goto LAB_0122c1a0;
            }
            else {
              local_2a0 = (int *)btAlignedAllocInternal((long)iVar5 << 2,0x10);
              if ((long)uVar38 < 1) goto LAB_0122c2bc;
LAB_0122c288:
              if (uVar32 < 8) {
                uVar35 = 0;
LAB_0122c340:
                do {
                  uVar32 = uVar35 + 1;
                  local_2a0[uVar35] = piVar40[uVar35];
                  uVar35 = uVar32;
                } while (uVar38 != uVar32);
              }
              else {
                uVar35 = uVar32 & 0xfffffffffffffff8;
                if (uVar35 == 0) goto LAB_0122c340;
                if ((local_2a0 < piVar40 + uVar32) &&
                   (piVar25 < (int *)((long)local_2a0 +
                                     (-(uVar44 & 1) & 0xfffffffc00000000 | uVar26 << 2) + lVar22 * 4
                                     ))) {
                  uVar35 = 0;
                  goto LAB_0122c340;
                }
                piVar25 = local_2a0 + 4;
                piVar15 = piVar40 + 4;
                do {
                  piVar8 = piVar15 + -2;
                  uVar49 = *(undefined8 *)(piVar15 + -4);
                  uVar51 = *(undefined8 *)(piVar15 + 2);
                  uVar50 = *(undefined8 *)piVar15;
                  uVar47 = uVar47 - 8;
                  piVar15 = piVar15 + 8;
                  *(undefined8 *)(piVar25 + -2) = *(undefined8 *)piVar8;
                  *(undefined8 *)(piVar25 + -4) = uVar49;
                  *(undefined8 *)(piVar25 + 2) = uVar51;
                  *(undefined8 *)piVar25 = uVar50;
                  piVar25 = piVar25 + 8;
                } while (uVar47 != 0);
                if (uVar32 != uVar35) goto LAB_0122c340;
              }
            }
            btAlignedFreeInternal(piVar30);
            piVar15 = local_2a0;
            piVar40 = local_2a0;
            piVar25 = local_2a0;
          }
        }
LAB_0122c1a0:
        piVar40[uVar38] = iVar16;
        uVar38 = uVar38 + 1;
        lVar22 = lVar22 + 1;
        piVar30 = piVar15;
      } while( true );
    }
  }
LAB_0122cba4:
  btConvexPolyhedron::initialize(*(btConvexPolyhedron **)(this + 0x40));
  if (pvVar11 != (void *)0x0) {
    btAlignedFreeInternal(local_298);
  }
  uVar38 = local_1cc & 0xffffffff;
  if (0 < (int)local_1cc) {
    lVar22 = 0;
    do {
      pvVar11 = local_1c0;
      pvVar13 = *(void **)((long)local_1c0 + lVar22 + 0x10);
      if (pvVar13 != (void *)0x0) {
        if (*(char *)((long)local_1c0 + lVar22 + 0x18) != '\0') {
          btAlignedFreeInternal(pvVar13);
        }
        *(undefined8 *)((long)pvVar11 + lVar22 + 0x10) = 0;
      }
      uVar38 = uVar38 - 1;
      *(undefined1 *)((long)pvVar11 + lVar22 + 0x18) = 1;
      *(undefined8 *)((long)pvVar11 + lVar22 + 0x10) = 0;
      *(undefined4 *)((long)pvVar11 + lVar22 + 4) = 0;
      *(undefined4 *)((long)pvVar11 + lVar22 + 8) = 0;
      lVar22 = lVar22 + 0x30;
    } while (uVar38 != 0);
  }
  if (local_1c0 != (void *)0x0) {
    if (local_1b8 != '\0') {
      btAlignedFreeInternal(local_1c0);
    }
    local_1c0 = (void *)0x0;
  }
  if (local_278 != (undefined8 *)0x0) {
    btAlignedFreeInternal(local_278);
  }
  btConvexHullComputer::~btConvexHullComputer((btConvexHullComputer *)&local_150);
  if (local_e0 != (void *)0x0) {
    if (local_d8 != '\0') {
      btAlignedFreeInternal(local_e0);
    }
    local_e0 = (void *)0x0;
  }
  if (*(long *)(lVar6 + 0x28) != lVar18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
LAB_0122c38c:
  iVar46 = (int)uVar38;
  if (1 < iVar46) {
    iVar10 = 0;
    lVar22 = 0;
    local_1f8._0_4_ = 0.0;
    local_200._4_4_ = 0.0;
    local_200._0_4_ = 0.0;
    local_1e0 = (void *)0x0;
    local_1ec = 0;
    local_1f8 = 0;
    do {
      lVar28 = (long)piVar40[lVar22];
      local_200._0_4_ = *(float *)((long)local_1c0 + lVar28 * 0x30 + 0x20) + (float)local_200;
      local_200._4_4_ = *(float *)((long)local_1c0 + lVar28 * 0x30 + 0x24) + local_200._4_4_;
      local_1f8 = CONCAT44(local_1f8._4_4_,
                           *(float *)((long)local_1c0 + lVar28 * 0x30 + 0x28) + (float)local_1f8);
      piVar30 = (int *)((long)local_1c0 + lVar28 * 0x30 + 4);
      if (0 < *piVar30) {
        lVar42 = 0;
        plVar2 = (long *)((long)local_1c0 + lVar28 * 0x30 + 0x10);
        do {
          local_1d8 = '\x01';
          iVar16 = *(int *)(*plVar2 + lVar42 * 4);
          puVar33 = (undefined8 *)(*(long *)(*(long *)(this + 0x40) + 0x18) + (long)iVar16 * 0x10);
          uVar50 = puVar33[1];
          uVar49 = *puVar33;
          uStack_248 = (uint)uVar50;
          uStack_244 = (undefined4)((ulong)uVar50 >> 0x20);
          local_250 = (float)uVar49;
          uStack_24c = (uint)((ulong)uVar49 >> 0x20);
          if (0 < iVar10) {
            lVar28 = 0;
            piVar25 = (int *)((long)local_1e0 + 0x14);
            do {
              if (*piVar25 == iVar16) goto LAB_0122c548;
              lVar28 = lVar28 + 1;
              piVar25 = piVar25 + 6;
            } while (lVar28 < iVar10);
          }
          local_d0[0] = local_250;
          local_d0[1] = (float)uStack_24c;
          local_d0[2] = (float)uStack_248;
          local_d0[3] = (float)uStack_244;
          if (iVar10 == local_1ec._4_4_) {
            iVar5 = iVar10 << 1;
            if (iVar10 == 0) {
              iVar5 = 1;
            }
            if (iVar10 < iVar5) {
              if (iVar5 == 0) {
                pvVar13 = (void *)0x0;
              }
              else {
                pvVar13 = (void *)btAlignedAllocInternal((long)iVar5 * 0x18,0x10);
                iVar10 = (int)local_1ec;
              }
              if (0 < iVar10) {
                lVar28 = 0;
                lVar12 = (long)iVar10;
                do {
                  puVar33 = (undefined8 *)((long)pvVar13 + lVar28);
                  lVar12 = lVar12 + -1;
                  puVar29 = (undefined8 *)((long)local_1e0 + lVar28);
                  lVar28 = lVar28 + 0x18;
                  puVar33[2] = puVar29[2];
                  uVar49 = *puVar29;
                  puVar33[1] = puVar29[1];
                  *puVar33 = uVar49;
                } while (lVar12 != 0);
              }
              if ((local_1e0 != (void *)0x0) && (local_1d8 != '\0')) {
                btAlignedFreeInternal(local_1e0);
              }
              local_1ec = CONCAT44(iVar5,(int)local_1ec);
              iVar10 = (int)local_1ec;
              local_1e0 = pvVar13;
            }
          }
          puVar33 = (undefined8 *)((long)local_1e0 + (long)iVar10 * 0x18);
          *(float *)(puVar33 + 2) = local_d0[4];
          *(int *)((long)puVar33 + 0x14) = iVar16;
          puVar33[1] = CONCAT44(local_d0[3],local_d0[2]);
          *puVar33 = CONCAT44(local_d0[1],local_d0[0]);
          iVar10 = (int)local_1ec + 1;
          local_1ec = CONCAT44(local_1ec._4_4_,iVar10);
LAB_0122c548:
          lVar42 = lVar42 + 1;
        } while (lVar42 < *piVar30);
      }
      local_1d8 = '\x01';
      lVar22 = lVar22 + 1;
    } while (lVar22 < iVar46);
    local_b8 = (float)CONCAT31(local_b8._1_3_,1);
    local_d0[4] = 0.0;
    fStack_bc = 0.0;
    local_d0[1] = 0.0;
    local_d0[2] = 0.0;
    iVar10 = *piVar40;
    local_b0 = *(undefined4 *)((long)local_1c0 + (long)iVar10 * 0x30 + 0x20);
    fVar52 = (float)local_200 * (float)local_200 + local_200._4_4_ * local_200._4_4_ +
             (float)local_1f8 * (float)local_1f8;
    fVar48 = SQRT(fVar52);
    local_ac = *(undefined4 *)((long)local_1c0 + (long)iVar10 * 0x30 + 0x24);
    local_a8 = *(undefined4 *)((long)local_1c0 + (long)iVar10 * 0x30 + 0x28);
    local_a4 = *(undefined4 *)((long)local_1c0 + (long)iVar10 * 0x30 + 0x2c);
    local_208 = '\x01';
    local_210 = (void *)0x0;
    local_21c = 0;
    if (NAN(fVar48)) {
      fVar48 = sqrtf(fVar52);
    }
    fVar48 = 1.0 / fVar48;
    local_200 = CONCAT44(fVar48 * local_200._4_4_,fVar48 * (float)local_200);
    local_1f8 = CONCAT44(local_1f8._4_4_,fVar48 * (float)local_1f8);
    GrahamScanConvexHull2D(abStack_1f0,abStack_220,(btVector3 *)&local_200);
    if ((int)local_21c < 1) {
    }
    else {
      lVar22 = 0;
      do {
        pvVar13 = local_210;
        if (local_d0[1] == local_d0[2]) {
          fVar48 = (float)((int)local_d0[1] << 1);
          if (local_d0[1] == 0.0) {
            fVar48 = 1.4013e-45;
          }
          if ((int)local_d0[1] < (int)fVar48) {
            if (fVar48 == 0.0) {
              pvVar14 = (void *)0x0;
            }
            else {
              pvVar14 = (void *)btAlignedAllocInternal
                                          (-(ulong)((uint)fVar48 >> 0x1f) & 0xfffffffc00000000 |
                                           (ulong)(uint)fVar48 << 2,0x10);
            }
            pvVar41 = (void *)CONCAT44(fStack_bc,local_d0[4]);
            if ((int)local_d0[1] < 1) {
              if (pvVar41 != (void *)0x0) goto LAB_0122c93c;
            }
            else {
              uVar38 = (ulong)(int)local_d0[1];
              if ((uint)local_d0[1] < 8) {
LAB_0122c910:
                uVar24 = 0;
              }
              else {
                uVar24 = uVar38 & 0xfffffffffffffff8;
                if (uVar24 != 0) {
                  if ((pvVar14 < (void *)((long)pvVar41 + uVar38 * 4)) &&
                     (pvVar41 < (void *)((long)pvVar14 + uVar38 * 4))) goto LAB_0122c910;
                  puVar33 = (undefined8 *)((long)pvVar14 + 0x10);
                  puVar29 = (undefined8 *)((long)pvVar41 + 0x10);
                  uVar44 = uVar24;
                  do {
                    puVar31 = puVar29 + -1;
                    uVar49 = puVar29[-2];
                    uVar51 = puVar29[1];
                    uVar50 = *puVar29;
                    uVar44 = uVar44 - 8;
                    puVar29 = puVar29 + 4;
                    puVar33[-1] = *puVar31;
                    puVar33[-2] = uVar49;
                    puVar33[1] = uVar51;
                    *puVar33 = uVar50;
                    puVar33 = puVar33 + 4;
                  } while (uVar44 != 0);
                  if (uVar24 == uVar38) goto LAB_0122c93c;
                }
              }
              lVar28 = uVar38 - uVar24;
              puVar21 = (undefined4 *)((long)pvVar41 + uVar24 * 4);
              puVar27 = (undefined4 *)((long)pvVar14 + uVar24 * 4);
              do {
                lVar28 = lVar28 + -1;
                *puVar27 = *puVar21;
                puVar21 = puVar21 + 1;
                puVar27 = puVar27 + 1;
              } while (lVar28 != 0);
LAB_0122c93c:
              if (local_b8._0_1_ != '\0') {
                btAlignedFreeInternal(pvVar41);
              }
            }
            local_b8 = (float)CONCAT31(local_b8._1_3_,1);
            local_d0[4] = SUB84(pvVar14,0);
            fStack_bc = (float)((ulong)pvVar14 >> 0x20);
            local_d0[2] = fVar48;
          }
        }
        *(undefined4 *)(CONCAT44(fStack_bc,local_d0[4]) + (long)(int)local_d0[1] * 4) =
             *(undefined4 *)((long)pvVar13 + lVar22 * 0x18 + 0x14);
        local_d0[1] = (float)((int)local_d0[1] + 1);
        if (0 < (int)local_1ec) {
          lVar28 = 0;
          piVar30 = (int *)((long)local_1e0 + 0x14);
          do {
            if (*piVar30 == *(int *)((long)local_210 + lVar22 * 0x18 + 0x14)) {
              *piVar30 = -1;
              break;
            }
            lVar28 = lVar28 + 1;
            piVar30 = piVar30 + 6;
          } while (lVar28 < (int)local_1ec);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < (int)local_21c);
    }
    if (0 < (int)local_1ec) {
      if (0 < (int)local_1cc) {
        lVar22 = 0;
        do {
          iVar10 = *(int *)((long)local_1e0 + lVar22 * 0x18 + 0x14);
          if (iVar10 != -1) {
            if (iVar46 < 1) {
              lVar28 = 0;
              do {
                iVar16 = *(int *)((long)local_1c0 + lVar28 * 0x30 + 4);
                if (0 < iVar16) {
                  lVar42 = 0;
                  do {
                    if (*(int *)(*(long *)((long)local_1c0 + lVar28 * 0x30 + 0x10) + lVar42 * 4) ==
                        iVar10) goto LAB_0122caf8;
                    lVar42 = lVar42 + 1;
                  } while (lVar42 < iVar16);
                }
                lVar28 = lVar28 + 1;
              } while (lVar28 < (int)local_1cc);
            }
            else {
              uVar38 = 0;
              do {
                lVar28 = 0;
                do {
                  if (uVar38 == (uint)piVar40[lVar28]) goto LAB_0122ca80;
                  lVar28 = lVar28 + 1;
                } while (lVar28 < iVar46);
                iVar16 = *(int *)((long)local_1c0 + uVar38 * 0x30 + 4);
                if (0 < iVar16) {
                  lVar28 = 0;
                  do {
                    if (*(int *)(*(long *)((long)local_1c0 + uVar38 * 0x30 + 0x10) + lVar28 * 4) ==
                        iVar10) goto LAB_0122caf8;
                    lVar28 = lVar28 + 1;
                  } while (lVar28 < iVar16);
                }
LAB_0122ca80:
                uVar38 = uVar38 + 1;
              } while ((long)uVar38 < (long)(int)local_1cc);
            }
          }
          lVar22 = lVar22 + 1;
        } while (lVar22 < (int)local_1ec);
      }
    }
    btAlignedObjectArray<btFace>::push_back
              ((btAlignedObjectArray<btFace> *)(*(long *)(this + 0x40) + 0x28),(btFace *)local_d0);
    bVar9 = 0;
    goto LAB_0122cafc;
  }
  if (iVar46 != 1) goto LAB_0122cb68;
  goto LAB_0122c63c;
LAB_0122caf8:
  bVar9 = 1;
LAB_0122cafc:
  if (local_210 != (void *)0x0) {
    if (local_208 != '\0') {
      btAlignedFreeInternal(local_210);
    }
    local_210 = (void *)0x0;
  }
  if ((void *)CONCAT44(fStack_bc,local_d0[4]) != (void *)0x0) {
    if (local_b8._0_1_ != '\0') {
      btAlignedFreeInternal((void *)CONCAT44(fStack_bc,local_d0[4]));
    }
    local_d0[4] = 0.0;
    fStack_bc = 0.0;
  }
  if (local_1e0 != (void *)0x0) {
    if (local_1d8 != '\0') {
      btAlignedFreeInternal(local_1e0);
    }
    local_1e0 = (void *)0x0;
  }
  if (!(bool)(bVar9 & 0 < iVar46)) goto LAB_0122cb68;
LAB_0122c63c:
  lVar22 = 0;
  do {
    pvVar13 = local_1c0;
    lVar28 = (long)piVar40[lVar22];
    local_238 = '\x01';
    local_240 = (void *)0x0;
    uStack_24c = 0;
    uStack_248 = 0;
    uVar17 = *(uint *)((long)local_1c0 + lVar28 * 0x30 + 4);
    if (0 < (int)uVar17) {
      uVar24 = (ulong)(int)uVar17;
      uVar44 = uVar24 * 4;
      pvVar14 = (void *)btAlignedAllocInternal(uVar44,0x10);
      uVar38 = (ulong)(int)uStack_24c;
      if ((int)uStack_24c < 1) {
        if (local_240 != (void *)0x0) goto LAB_0122c768;
      }
      else {
        if (uStack_24c < 8) {
LAB_0122c734:
          uVar26 = 0;
        }
        else {
          uVar26 = uVar38 & 0xfffffffffffffff8;
          if (uVar26 != 0) {
            if ((pvVar14 < (void *)((long)local_240 + uVar38 * 4)) &&
               (local_240 < (void *)((long)pvVar14 + uVar38 * 4))) goto LAB_0122c734;
            puVar33 = (undefined8 *)((long)pvVar14 + 0x10);
            puVar29 = (undefined8 *)((long)local_240 + 0x10);
            uVar32 = uVar26;
            do {
              puVar31 = puVar29 + -1;
              uVar49 = puVar29[-2];
              uVar51 = puVar29[1];
              uVar50 = *puVar29;
              uVar32 = uVar32 - 8;
              puVar29 = puVar29 + 4;
              puVar33[-1] = *puVar31;
              puVar33[-2] = uVar49;
              puVar33[1] = uVar51;
              *puVar33 = uVar50;
              puVar33 = puVar33 + 4;
            } while (uVar32 != 0);
            if (uVar26 == uVar38) goto LAB_0122c768;
          }
        }
        lVar42 = uVar38 - uVar26;
        puVar21 = (undefined4 *)((long)local_240 + uVar26 * 4);
        puVar27 = (undefined4 *)((long)pvVar14 + uVar26 * 4);
        do {
          lVar42 = lVar42 + -1;
          *puVar27 = *puVar21;
          puVar21 = puVar21 + 1;
          puVar27 = puVar27 + 1;
        } while (lVar42 != 0);
LAB_0122c768:
        if (local_238 != '\0') {
          btAlignedFreeInternal(local_240);
        }
      }
      local_238 = '\x01';
      uStack_248 = uVar17;
      local_240 = pvVar14;
      memset(pvVar14,0,uVar44);
      pvVar14 = *(void **)((long)pvVar13 + lVar28 * 0x30 + 0x10);
      if (uVar17 < 8) {
LAB_0122c7d4:
        uVar38 = 0;
      }
      else {
        uVar38 = uVar24 & 0xfffffffffffffff8;
        if (uVar38 != 0) {
          if ((local_240 < (void *)((long)pvVar14 + uVar44)) &&
             (pvVar14 < (void *)((long)local_240 + uVar44))) goto LAB_0122c7d4;
          puVar33 = (undefined8 *)((long)local_240 + 0x10);
          puVar29 = (undefined8 *)((long)pvVar14 + 0x10);
          uVar44 = uVar38;
          do {
            puVar31 = puVar29 + -1;
            uVar49 = puVar29[-2];
            uVar51 = puVar29[1];
            uVar50 = *puVar29;
            uVar44 = uVar44 - 8;
            puVar29 = puVar29 + 4;
            puVar33[-1] = *puVar31;
            puVar33[-2] = uVar49;
            puVar33[1] = uVar51;
            *puVar33 = uVar50;
            puVar33 = puVar33 + 4;
          } while (uVar44 != 0);
          if (uVar38 == uVar24) goto LAB_0122c7f8;
        }
      }
      lVar42 = uVar24 - uVar38;
      puVar21 = (undefined4 *)((long)local_240 + uVar38 * 4);
      puVar27 = (undefined4 *)((long)pvVar14 + uVar38 * 4);
      do {
        lVar42 = lVar42 + -1;
        *puVar21 = *puVar27;
        puVar21 = puVar21 + 1;
        puVar27 = puVar27 + 1;
      } while (lVar42 != 0);
    }
LAB_0122c7f8:
    uStack_228 = *(undefined8 *)((long)pvVar13 + lVar28 * 0x30 + 0x28);
    local_230 = *(undefined8 *)((long)pvVar13 + lVar28 * 0x30 + 0x20);
    uStack_24c = uVar17;
    btAlignedObjectArray<btFace>::push_back
              ((btAlignedObjectArray<btFace> *)(*(long *)(this + 0x40) + 0x28),(btFace *)&local_250)
    ;
    if (local_240 != (void *)0x0) {
      if (local_238 != '\0') {
        btAlignedFreeInternal(local_240);
      }
      local_240 = (void *)0x0;
    }
    lVar22 = lVar22 + 1;
  } while (lVar22 < iVar46);
LAB_0122cb68:
  if (piVar40 != (int *)0x0) {
    btAlignedFreeInternal(local_2a0);
  }
  uVar38 = local_2a8 & 0xffffffff;
  if ((int)local_2a8 == 0) goto LAB_0122cba4;
  goto LAB_0122becc;
}

