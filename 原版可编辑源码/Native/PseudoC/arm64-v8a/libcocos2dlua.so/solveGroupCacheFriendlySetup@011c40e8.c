
/* btSequentialImpulseConstraintSolver::solveGroupCacheFriendlySetup(btCollisionObject**, int,
   btPersistentManifold**, int, btTypedConstraint**, int, btContactSolverInfo const&, btIDebugDraw*)
    */

undefined4
btSequentialImpulseConstraintSolver::solveGroupCacheFriendlySetup
          (btCollisionObject **param_1,int param_2,btPersistentManifold **param_3,int param_4,
          btTypedConstraint **param_5,int param_6,btContactSolverInfo *param_7,btIDebugDraw *param_8
          )

{
  long *plVar1;
  btCollisionObject *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CProfileManager *this;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  btCollisionObject *pbVar19;
  btCollisionObject *pbVar20;
  btCollisionObject *pbVar21;
  ulong uVar22;
  long lVar23;
  btCollisionObject *pbVar24;
  long *plVar25;
  btRigidBody *this_00;
  btCollisionObject *__s;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int iVar30;
  float fVar31;
  ulong in_d1;
  undefined8 uVar32;
  float in_s2;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float local_188;
  undefined4 uStack_184;
  btCollisionObject *pbStack_180;
  btCollisionObject *local_178;
  btCollisionObject *pbStack_170;
  btCollisionObject *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  btCollisionObject *local_158;
  btCollisionObject *pbStack_150;
  btCollisionObject *pbStack_148;
  btCollisionObject *local_140;
  undefined4 local_130;
  float local_12c;
  
  uVar18 = (ulong)(uint)param_6;
  uVar13 = (ulong)(uint)param_2;
  uVar3 = (uint)param_3;
  *(undefined4 *)((long)param_1 + 300) = 0xffffffff;
  CProfileManager::Start_Profile("solveGroupCacheFriendlySetup");
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (0 < (int)uVar3) {
    if (uVar3 == 1) {
      lVar14 = 0;
    }
    else {
      lVar14 = ((ulong)param_3 & 0xffffffff) - (ulong)(uVar3 & 1);
      if (lVar14 != 0) {
        plVar25 = (long *)(uVar13 + 8);
        lVar11 = lVar14;
        do {
          plVar1 = plVar25 + -1;
          lVar12 = *plVar25;
          lVar11 = lVar11 + -2;
          plVar25 = plVar25 + 2;
          *(undefined4 *)(*plVar1 + 0xe8) = 0xffffffff;
          *(undefined4 *)(lVar12 + 0xe8) = 0xffffffff;
        } while (lVar11 != 0);
        if (((ulong)param_3 & 1) == 0) goto LAB_011c41b8;
      }
    }
    lVar11 = ((ulong)param_3 & 0xffffffff) - lVar14;
    plVar25 = (long *)(uVar13 + lVar14 * 8);
    do {
      lVar11 = lVar11 + -1;
      *(undefined4 *)(*plVar25 + 0xe8) = 0xffffffff;
      plVar25 = plVar25 + 1;
    } while (lVar11 != 0);
  }
LAB_011c41b8:
  iVar6 = *(int *)(param_1 + 2);
  if (iVar6 <= (int)uVar3) {
    iVar6 = uVar3 + 1;
    if (iVar6 == 0) {
      pbVar24 = (btCollisionObject *)0x0;
    }
    else {
      pbVar24 = (btCollisionObject *)btAlignedAllocInternal((long)iVar6 * 0xf8,0x10);
    }
    lVar14 = (long)*(int *)((long)param_1 + 0xc);
    if (0 < *(int *)((long)param_1 + 0xc)) {
      lVar11 = 0x40;
      do {
        pbVar19 = pbVar24 + lVar11;
        pbVar20 = param_1[3] + lVar11;
        uVar28 = *(undefined8 *)(pbVar20 + -0x40);
        *(undefined8 *)(pbVar19 + -0x38) = *(undefined8 *)(pbVar20 + -0x38);
        *(undefined8 *)(pbVar19 + -0x40) = uVar28;
        uVar28 = *(undefined8 *)(pbVar20 + -0x30);
        *(undefined8 *)(pbVar19 + -0x28) = *(undefined8 *)(pbVar20 + -0x28);
        *(undefined8 *)(pbVar19 + -0x30) = uVar28;
        uVar28 = *(undefined8 *)(pbVar20 + -0x20);
        *(undefined8 *)(pbVar19 + -0x18) = *(undefined8 *)(pbVar20 + -0x18);
        *(undefined8 *)(pbVar19 + -0x20) = uVar28;
        uVar28 = *(undefined8 *)(pbVar20 + -0x10);
        *(undefined8 *)(pbVar19 + -8) = *(undefined8 *)(pbVar20 + -8);
        *(undefined8 *)(pbVar19 + -0x10) = uVar28;
        memcpy(pbVar19,pbVar20,0xb8);
        lVar14 = lVar14 + -1;
        lVar11 = lVar11 + 0xf8;
      } while (lVar14 != 0);
    }
    if (param_1[3] != (btCollisionObject *)0x0) {
      if (*(char *)(param_1 + 4) != '\0') {
        btAlignedFreeInternal(param_1[3]);
      }
      param_1[3] = (btCollisionObject *)0x0;
    }
    param_1[3] = pbVar24;
    *(undefined1 *)(param_1 + 4) = 1;
    *(int *)(param_1 + 2) = iVar6;
  }
  memset(&local_188,0,0xf8);
  iVar30 = *(int *)((long)param_1 + 0xc);
  if (iVar30 < 0) {
    if (iVar6 < 0) {
      if (param_1[3] != (btCollisionObject *)0x0) {
        if (*(char *)(param_1 + 4) != '\0') {
          btAlignedFreeInternal(param_1[3]);
        }
        param_1[3] = (btCollisionObject *)0x0;
      }
      param_1[3] = (btCollisionObject *)0x0;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined4 *)(param_1 + 2) = 0;
    }
    lVar11 = -(long)iVar30;
    lVar14 = (long)iVar30 * 0xf8 + 0x40;
    do {
      pbVar24 = param_1[3] + lVar14;
      *(btCollisionObject **)(pbVar24 + -0x38) = pbStack_180;
      *(ulong *)(pbVar24 + -0x40) = CONCAT44(uStack_184,local_188);
      *(btCollisionObject **)(pbVar24 + -0x28) = pbStack_170;
      *(btCollisionObject **)(pbVar24 + -0x30) = local_178;
      *(ulong *)(pbVar24 + -0x18) = CONCAT44(uStack_15c,uStack_160);
      *(btCollisionObject **)(pbVar24 + -0x20) = local_168;
      *(btCollisionObject **)(pbVar24 + -8) = pbStack_150;
      *(btCollisionObject **)(pbVar24 + -0x10) = local_158;
      memcpy(pbVar24,&pbStack_148,0xb8);
      lVar11 = lVar11 + -1;
      lVar14 = lVar14 + 0xf8;
    } while (lVar11 != 0);
  }
  *(int *)((long)param_1 + 0xc) = 0;
  if (0 < (int)uVar3) {
    lVar14 = 0;
    do {
      iVar6 = getOrInitSolverBody((btSequentialImpulseConstraintSolver *)param_1,
                                  *(btCollisionObject **)(uVar13 + lVar14 * 8),
                                  *(float *)(param_8 + 0xc));
      fVar27 = (float)in_d1;
      this_00 = *(btRigidBody **)(uVar13 + lVar14 * 8);
      if ((((this_00 != (btRigidBody *)0x0) && ((*(uint *)(this_00 + 0x100) >> 1 & 1) != 0)) &&
          (*(float *)(this_00 + 0x174) != 0.0)) && (((byte)this_00[0x228] >> 1 & 1) != 0)) {
        pbVar24 = param_1[3];
        fVar26 = (float)btRigidBody::computeGyroscopicForce(this_00,*(float *)(param_8 + 0x4c));
        fVar35 = *(float *)(this_00 + 0x128);
        fVar39 = *(float *)(this_00 + 300);
        fVar37 = *(float *)(this_00 + 0x138);
        fVar40 = *(float *)(this_00 + 0x13c);
        fVar34 = in_s2 * *(float *)(this_00 + 0x144);
        fVar38 = in_s2 * *(float *)(this_00 + 0x148);
        fVar33 = in_s2 * *(float *)(this_00 + 0x14c);
        fVar31 = *(float *)(param_8 + 0xc);
        fVar36 = *(float *)(pbVar24 + (long)iVar6 * 0xf8 + 0xe4);
        in_s2 = *(float *)(pbVar24 + (long)iVar6 * 0xf8 + 0xe8);
        fVar34 = *(float *)(pbVar24 + (long)iVar6 * 0xf8 + 0xe0) -
                 (fVar26 * *(float *)(this_00 + 0x124) + fVar27 * *(float *)(this_00 + 0x134) +
                 fVar34) * fVar31;
        in_d1 = (ulong)(uint)fVar34;
        *(float *)(pbVar24 + (long)iVar6 * 0xf8 + 0xe0) = fVar34;
        *(float *)(pbVar24 + (long)iVar6 * 0xf8 + 0xe4) =
             fVar36 - (fVar26 * fVar35 + fVar27 * fVar37 + fVar38) * fVar31;
        *(float *)(pbVar24 + (long)iVar6 * 0xf8 + 0xe8) =
             in_s2 - fVar31 * (fVar26 * fVar39 + fVar27 * fVar40 + fVar33);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)uVar3);
  }
  iVar6 = (int)param_7;
  if (0 < iVar6) {
    lVar14 = 0;
    do {
      plVar25 = *(long **)(uVar18 + lVar14 * 8);
      (**(code **)(*plVar25 + 0x10))(plVar25);
      lVar14 = lVar14 + 1;
      *(undefined4 *)(plVar25 + 7) = 0;
    } while (lVar14 < iVar6);
  }
  iVar30 = *(int *)((long)param_1 + 0x10c);
  if ((iVar30 < iVar6) && (*(int *)(param_1 + 0x22) < iVar6)) {
    if (iVar6 == 0) {
      pbVar24 = (btCollisionObject *)0x0;
    }
    else {
      pbVar24 = (btCollisionObject *)
                btAlignedAllocInternal
                          (-(((ulong)param_7 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 |
                           ((ulong)param_7 & 0xffffffff) << 3,0x10);
      iVar30 = *(int *)((long)param_1 + 0x10c);
    }
    if (0 < iVar30) {
      lVar14 = 0;
      do {
        lVar11 = lVar14 * 8;
        lVar14 = lVar14 + 1;
        *(undefined8 *)(pbVar24 + lVar11) = *(undefined8 *)(param_1[0x23] + lVar11);
      } while (iVar30 != lVar14);
    }
    if (param_1[0x23] != (btCollisionObject *)0x0) {
      if (*(char *)(param_1 + 0x24) != '\0') {
        btAlignedFreeInternal(param_1[0x23]);
      }
      param_1[0x23] = (btCollisionObject *)0x0;
    }
    param_1[0x23] = pbVar24;
    *(undefined1 *)(param_1 + 0x24) = 1;
    *(int *)(param_1 + 0x22) = iVar6;
  }
  *(int *)((long)param_1 + 0x10c) = iVar6;
  if (iVar6 < 1) {
    iVar30 = 0;
  }
  else {
    lVar11 = 0;
    lVar14 = 0;
    iVar30 = 0;
    do {
      plVar25 = *(long **)(uVar18 + lVar11);
      pbVar24 = param_1[0x23];
      puVar15 = (undefined8 *)plVar25[8];
      if (puVar15 != (undefined8 *)0x0) {
        puVar15[5] = 0;
        puVar15[4] = 0;
        puVar15[7] = 0;
        puVar15[6] = 0;
        puVar15[1] = 0;
        *puVar15 = 0;
        puVar15[3] = 0;
        puVar15[2] = 0;
        plVar25 = *(long **)(uVar18 + lVar11);
      }
      if (*(char *)((long)plVar25 + 0x1c) == '\0') {
        iVar9 = 0;
        *(undefined8 *)(pbVar24 + lVar11) = 0;
      }
      else {
        (**(code **)(*plVar25 + 0x20))(plVar25,pbVar24 + lVar11);
        iVar9 = *(int *)(pbVar24 + lVar11);
      }
      lVar14 = lVar14 + 1;
      iVar30 = iVar9 + iVar30;
      lVar11 = lVar11 + 8;
    } while (lVar14 < iVar6);
  }
  iVar9 = *(int *)((long)param_1 + 0x4c);
  if ((iVar9 < iVar30) && (*(int *)(param_1 + 10) < iVar30)) {
    if (iVar30 == 0) {
      pbVar24 = (btCollisionObject *)0x0;
    }
    else {
      pbVar24 = (btCollisionObject *)btAlignedAllocInternal((long)iVar30 * 0xa0,0x10);
      iVar9 = *(int *)((long)param_1 + 0x4c);
    }
    if (0 < iVar9) {
      lVar14 = 0;
      lVar11 = (long)iVar9;
      do {
        memcpy(pbVar24 + lVar14,param_1[0xb] + lVar14,0xa0);
        lVar11 = lVar11 + -1;
        lVar14 = lVar14 + 0xa0;
      } while (lVar11 != 0);
    }
    if (param_1[0xb] != (btCollisionObject *)0x0) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        btAlignedFreeInternal(param_1[0xb]);
      }
      param_1[0xb] = (btCollisionObject *)0x0;
    }
    param_1[0xb] = pbVar24;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(int *)(param_1 + 10) = iVar30;
  }
  *(int *)((long)param_1 + 0x4c) = iVar30;
  if (0 < iVar6) {
    pbVar24 = param_1[0x23];
    lVar14 = 0;
    iVar30 = 0;
    do {
      pbVar19 = pbVar24 + lVar14 * 8;
      iVar9 = 0;
      if (*(int *)pbVar19 != 0) {
        pbVar24 = param_1[0xb];
        lVar11 = *(long *)(uVar18 + lVar14 * 8);
        pbVar20 = *(btCollisionObject **)(lVar11 + 0x28);
        pbVar2 = *(btCollisionObject **)(lVar11 + 0x30);
        iVar7 = getOrInitSolverBody((btSequentialImpulseConstraintSolver *)param_1,pbVar20,
                                    *(float *)(param_8 + 0xc));
        iVar8 = getOrInitSolverBody((btSequentialImpulseConstraintSolver *)param_1,pbVar2,
                                    *(float *)(param_8 + 0xc));
        pbVar21 = param_1[3];
        iVar9 = *(int *)(lVar11 + 0x20);
        if (*(int *)(lVar11 + 0x20) < 1) {
          iVar9 = *(int *)(param_8 + 0x14);
        }
        if (*(int *)(param_1 + 0x25) < iVar9) {
          *(int *)(param_1 + 0x25) = iVar9;
        }
        lVar16 = (long)iVar30;
        lVar17 = (long)iVar7;
        lVar12 = (long)iVar8;
        if (0 < *(int *)pbVar19) {
          lVar23 = 0;
          __s = pbVar24 + (long)iVar30 * 0xa0;
          do {
            memset(__s,0,0xa0);
            *(undefined8 *)(__s + 0x78) = 0x7f7fffffff7fffff;
            *(undefined8 *)(__s + 0x60) = 0;
            *(int *)(__s + 0x98) = iVar7;
            *(int *)(__s + 0x9c) = iVar8;
            *(int *)(__s + 0x90) = iVar9;
            lVar23 = lVar23 + 1;
            __s = __s + 0xa0;
          } while (lVar23 < *(int *)pbVar19);
        }
        *(undefined8 *)(pbVar21 + lVar17 * 0xf8 + 0x48) = 0;
        *(undefined8 *)(pbVar21 + lVar17 * 0xf8 + 0x40) = 0;
        *(undefined8 *)(pbVar21 + lVar17 * 0xf8 + 0x58) = 0;
        *(undefined8 *)(pbVar21 + lVar17 * 0xf8 + 0x50) = 0;
        *(undefined8 *)(pbVar21 + lVar17 * 0xf8 + 0x98) = 0;
        *(undefined8 *)(pbVar21 + lVar17 * 0xf8 + 0x90) = 0;
        *(undefined8 *)(pbVar21 + lVar17 * 0xf8 + 0xa8) = 0;
        *(undefined8 *)(pbVar21 + lVar17 * 0xf8 + 0xa0) = 0;
        *(undefined8 *)(pbVar21 + lVar12 * 0xf8 + 0x48) = 0;
        *(undefined8 *)(pbVar21 + lVar12 * 0xf8 + 0x40) = 0;
        *(undefined8 *)(pbVar21 + lVar12 * 0xf8 + 0x58) = 0;
        *(undefined8 *)(pbVar21 + lVar12 * 0xf8 + 0x50) = 0;
        *(undefined8 *)(pbVar21 + lVar12 * 0xf8 + 0x98) = 0;
        *(undefined8 *)(pbVar21 + lVar12 * 0xf8 + 0x90) = 0;
        *(undefined8 *)(pbVar21 + lVar12 * 0xf8 + 0xa8) = 0;
        *(undefined8 *)(pbVar21 + lVar12 * 0xf8 + 0xa0) = 0;
        local_188 = 1.0 / *(float *)(param_8 + 0xc);
        uStack_184 = *(undefined4 *)(param_8 + 0x20);
        pbStack_180 = pbVar24 + lVar16 * 0xa0 + 0x10;
        pbStack_170 = pbVar24 + lVar16 * 0xa0 + 0x30;
        local_168 = pbVar24 + lVar16 * 0xa0 + 0x20;
        local_158 = pbVar24 + lVar16 * 0xa0 + 0x70;
        uStack_160 = 0x28;
        pbStack_150 = pbVar24 + lVar16 * 0xa0 + 0x74;
        *(undefined4 *)(pbVar24 + lVar16 * 0xa0 + 0x74) = *(undefined4 *)(param_8 + 0x28);
        local_12c = *(float *)(param_8 + 4);
        pbStack_148 = pbVar24 + lVar16 * 0xa0 + 0x78;
        local_140 = pbVar24 + lVar16 * 0xa0 + 0x7c;
        local_130 = *(undefined4 *)(param_8 + 0x14);
        plVar25 = *(long **)(uVar18 + lVar14 * 8);
        local_178 = pbVar24 + (long)iVar30 * 0xa0;
        (**(code **)(*plVar25 + 0x28))(plVar25,&local_188);
        if (0 < *(int *)pbVar19) {
          lVar23 = 0;
          pbVar24 = pbVar24 + lVar16 * 0xa0 + 0x44;
          do {
            fVar27 = *(float *)(*(long *)(uVar18 + lVar14 * 8) + 0x18);
            if (fVar27 <= *(float *)(pbVar24 + 0x38)) {
              *(float *)(pbVar24 + 0x38) = fVar27;
            }
            if (*(float *)(pbVar24 + 0x34) <= -fVar27) {
              *(float *)(pbVar24 + 0x34) = -fVar27;
            }
            *(long *)(pbVar24 + 0x44) = lVar11;
            lVar16 = *(long *)(lVar11 + 0x28);
            fVar27 = *(float *)(pbVar24 + -0x44);
            fVar26 = *(float *)(pbVar24 + -0x40);
            fVar31 = *(float *)(pbVar24 + -0x3c);
            fVar33 = *(float *)(pbVar24 + -0x24);
            fVar35 = *(float *)(pbVar24 + -0x20);
            fVar34 = *(float *)(lVar16 + 0x124);
            fVar39 = *(float *)(lVar16 + 0x134);
            fVar44 = *(float *)(lVar16 + 0x144);
            fVar36 = *(float *)(lVar16 + 0x128);
            fVar38 = *(float *)(lVar16 + 300);
            fVar40 = *(float *)(lVar16 + 0x138);
            fVar42 = *(float *)(lVar16 + 0x13c);
            fVar48 = *(float *)(lVar16 + 0x148);
            fVar45 = *(float *)(lVar16 + 0x14c);
            fVar49 = *(float *)(lVar16 + 0x250);
            fVar46 = *(float *)(lVar16 + 0x254);
            fVar37 = *(float *)(lVar16 + 600);
            *(undefined4 *)(pbVar24 + 8) = 0;
            *(float *)(pbVar24 + -4) =
                 (fVar34 * fVar27 + fVar36 * fVar26 + fVar38 * fVar31) * fVar49;
            *(float *)pbVar24 = (fVar27 * fVar39 + fVar26 * fVar40 + fVar31 * fVar42) * fVar46;
            *(float *)(pbVar24 + 4) = (fVar27 * fVar44 + fVar26 * fVar48 + fVar31 * fVar45) * fVar37
            ;
            lVar16 = *(long *)(lVar11 + 0x30);
            fVar39 = *(float *)(pbVar24 + -0x1c);
            fVar27 = *(float *)(pbVar24 + -0x44);
            fVar26 = *(float *)(pbVar24 + -0x40);
            fVar31 = *(float *)(pbVar24 + -0x24);
            fVar34 = *(float *)(pbVar24 + -0x20);
            fVar36 = *(float *)(lVar16 + 0x124);
            fVar42 = *(float *)(lVar16 + 0x134);
            fVar48 = *(float *)(lVar16 + 0x144);
            fVar37 = *(float *)(lVar16 + 0x128);
            fVar44 = *(float *)(lVar16 + 0x138);
            fVar50 = *(float *)(lVar16 + 0x148);
            fVar40 = *(float *)(lVar16 + 300);
            fVar46 = *(float *)(lVar16 + 0x13c);
            fVar49 = *(float *)(lVar16 + 0x14c);
            fVar51 = *(float *)(lVar16 + 0x250);
            fVar38 = *(float *)(lVar16 + 0x254);
            fVar45 = *(float *)(lVar16 + 600);
            *(undefined4 *)(pbVar24 + 0x18) = 0;
            *(float *)(pbVar24 + 0xc) =
                 (fVar36 * fVar33 + fVar37 * fVar35 + fVar40 * fVar39) * fVar51;
            *(float *)(pbVar24 + 0x10) =
                 (fVar33 * fVar42 + fVar35 * fVar44 + fVar39 * fVar46) * fVar38;
            *(float *)(pbVar24 + 0x14) =
                 (fVar33 * fVar48 + fVar35 * fVar50 + fVar39 * fVar49) * fVar45;
            fVar33 = *(float *)(pbVar24 + -0x3c);
            fVar40 = *(float *)(pbVar20 + 0x174);
            fVar42 = (float)*(undefined8 *)(pbVar24 + -0x34);
            fVar44 = (float)((ulong)*(undefined8 *)(pbVar24 + -0x34) >> 0x20);
            fVar37 = *(float *)(pbVar24 + -0x2c);
            fVar35 = *(float *)(pbVar24 + -0x14);
            fVar36 = *(float *)(pbVar24 + -0x10);
            fVar45 = *(float *)(pbVar2 + 0x174);
            fVar38 = *(float *)(pbVar24 + -0xc);
            fVar40 = fVar42 * fVar42 * fVar40 + fVar44 * fVar44 * fVar40 + fVar37 * fVar40 * fVar37
                     + fVar27 * (*(float *)(pbVar20 + 0x124) * fVar27 +
                                 *(float *)(pbVar20 + 0x128) * fVar26 +
                                *(float *)(pbVar20 + 300) * fVar33) +
                       fVar26 * (fVar27 * *(float *)(pbVar20 + 0x134) +
                                 fVar26 * *(float *)(pbVar20 + 0x138) +
                                fVar33 * *(float *)(pbVar20 + 0x13c)) +
                       fVar33 * (fVar27 * *(float *)(pbVar20 + 0x144) +
                                 fVar26 * *(float *)(pbVar20 + 0x148) +
                                fVar33 * *(float *)(pbVar20 + 0x14c)) +
                     fVar35 * fVar45 * fVar35 + fVar36 * fVar45 * fVar36 + fVar38 * fVar45 * fVar38
                     + fVar31 * (*(float *)(pbVar2 + 0x124) * fVar31 +
                                 *(float *)(pbVar2 + 0x128) * fVar34 +
                                *(float *)(pbVar2 + 300) * fVar39) +
                       fVar34 * (fVar31 * *(float *)(pbVar2 + 0x134) +
                                 fVar34 * *(float *)(pbVar2 + 0x138) +
                                fVar39 * *(float *)(pbVar2 + 0x13c)) +
                       fVar39 * (fVar31 * *(float *)(pbVar2 + 0x144) +
                                 fVar34 * *(float *)(pbVar2 + 0x148) +
                                fVar39 * *(float *)(pbVar2 + 0x14c));
            fVar39 = 0.0;
            fVar42 = 1.0 / fVar40;
            if (ABS(fVar40) <= 1.1920929e-07) {
              fVar42 = 0.0;
            }
            *(float *)(pbVar24 + 0x28) = fVar42;
            fVar40 = 0.0;
            fVar48 = 0.0;
            fVar49 = 0.0;
            fVar44 = 0.0;
            fVar45 = 0.0;
            fVar46 = 0.0;
            if (*(long *)(pbVar21 + lVar17 * 0xf8 + 0xf0) != 0) {
              fVar40 = *(float *)(pbVar21 + lVar17 * 0xf8 + 0xd8);
              fVar48 = *(float *)(pbVar21 + lVar17 * 0xf8 + 0xd4);
              fVar49 = *(float *)(pbVar21 + lVar17 * 0xf8 + 0xd0);
              fVar44 = *(float *)(pbVar21 + lVar17 * 0xf8 + 0xe0);
              fVar45 = *(float *)(pbVar21 + lVar17 * 0xf8 + 0xe4);
              fVar46 = *(float *)(pbVar21 + lVar17 * 0xf8 + 0xe8);
            }
            fVar50 = 0.0;
            fVar47 = 0.0;
            fVar41 = 0.0;
            fVar51 = 0.0;
            fVar43 = 0.0;
            if (*(long *)(pbVar21 + lVar12 * 0xf8 + 0xf0) != 0) {
              fVar39 = *(float *)(pbVar21 + lVar12 * 0xf8 + 0xd8);
              fVar50 = *(float *)(pbVar21 + lVar12 * 0xf8 + 0xd4);
              fVar47 = *(float *)(pbVar21 + lVar12 * 0xf8 + 0xd0);
              fVar41 = *(float *)(pbVar21 + lVar12 * 0xf8 + 0xe0);
              fVar51 = *(float *)(pbVar21 + lVar12 * 0xf8 + 0xe4);
              fVar43 = *(float *)(pbVar21 + lVar12 * 0xf8 + 0xe8);
            }
            *(float *)(pbVar24 + 0x2c) =
                 *(float *)(pbVar24 + 0x2c) * fVar42 +
                 fVar42 * (0.0 - local_12c *
                                 ((*(float *)(pbVar20 + 0x154) + fVar49) *
                                  *(float *)(pbVar24 + -0x34) +
                                  (*(float *)(pbVar20 + 0x158) + fVar48) *
                                  *(float *)(pbVar24 + -0x30) +
                                  (*(float *)(pbVar20 + 0x15c) + fVar40) * fVar37 +
                                  (fVar44 + *(float *)(pbVar20 + 0x164)) * fVar27 +
                                  (fVar45 + *(float *)(pbVar20 + 0x168)) * fVar26 +
                                  (fVar46 + *(float *)(pbVar20 + 0x16c)) * fVar33 +
                                 (*(float *)(pbVar2 + 0x154) + fVar47) * fVar35 +
                                 (*(float *)(pbVar2 + 0x158) + fVar50) * fVar36 +
                                 (*(float *)(pbVar2 + 0x15c) + fVar39) * fVar38 +
                                 (fVar41 + *(float *)(pbVar2 + 0x164)) * fVar31 +
                                 (fVar51 + *(float *)(pbVar2 + 0x168)) * fVar34 +
                                 (fVar43 + *(float *)(pbVar2 + 0x16c)) * *(float *)(pbVar24 + -0x1c)
                                 ));
            *(undefined4 *)(pbVar24 + 0x20) = 0;
            lVar23 = lVar23 + 1;
            pbVar24 = pbVar24 + 0xa0;
          } while (lVar23 < *(int *)pbVar19);
        }
        pbVar24 = param_1[0x23];
        iVar9 = *(int *)(pbVar24 + lVar14 * 8);
      }
      lVar14 = lVar14 + 1;
      iVar30 = iVar9 + iVar30;
    } while (lVar14 < iVar6);
  }
  this = (CProfileManager *)(**(code **)(*param_1 + 0x38))(param_1,param_4,(int)param_5,param_8);
  uVar3 = *(uint *)((long)param_1 + 0x4c);
  uVar10 = *(uint *)((long)param_1 + 0xcc);
  uVar4 = *(uint *)((long)param_1 + 0x2c);
  uVar5 = *(uint *)((long)param_1 + 0x6c);
  if (((int)uVar10 < (int)uVar3) && (*(int *)(param_1 + 0x1a) < (int)uVar3)) {
    if (uVar3 == 0) {
      pbVar24 = (btCollisionObject *)0x0;
    }
    else {
      pbVar24 = (btCollisionObject *)btAlignedAllocInternal((long)(int)uVar3 << 2,0x10);
      uVar10 = *(uint *)((long)param_1 + 0xcc);
    }
    this = (CProfileManager *)param_1[0x1b];
    if ((int)uVar10 < 1) {
      if (this != (CProfileManager *)0x0) goto LAB_011c4d90;
    }
    else {
      uVar13 = (ulong)(int)uVar10;
      if (uVar10 < 8) {
LAB_011c4d64:
        uVar18 = 0;
      }
      else {
        uVar18 = uVar13 & 0xfffffffffffffff8;
        if (uVar18 != 0) {
          if ((pbVar24 < (btCollisionObject *)(this + uVar13 * 4)) && (this < pbVar24 + uVar13 * 4))
          goto LAB_011c4d64;
          pbVar19 = pbVar24 + 0x10;
          pbVar20 = (btCollisionObject *)(this + 0x10);
          uVar22 = uVar18;
          do {
            pbVar2 = pbVar20 + -8;
            uVar28 = *(undefined8 *)(pbVar20 + -0x10);
            uVar32 = *(undefined8 *)(pbVar20 + 8);
            uVar29 = *(undefined8 *)pbVar20;
            uVar22 = uVar22 - 8;
            pbVar20 = pbVar20 + 0x20;
            *(undefined8 *)(pbVar19 + -8) = *(undefined8 *)pbVar2;
            *(undefined8 *)(pbVar19 + -0x10) = uVar28;
            *(undefined8 *)(pbVar19 + 8) = uVar32;
            *(undefined8 *)pbVar19 = uVar29;
            pbVar19 = pbVar19 + 0x20;
          } while (uVar22 != 0);
          if (uVar18 == uVar13) goto LAB_011c4d90;
        }
      }
      lVar14 = uVar13 - uVar18;
      pbVar19 = (btCollisionObject *)(this + uVar18 * 4);
      pbVar20 = pbVar24 + uVar18 * 4;
      do {
        lVar14 = lVar14 + -1;
        *(undefined4 *)pbVar20 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar20 = pbVar20 + 4;
      } while (lVar14 != 0);
LAB_011c4d90:
      if (*(char *)(param_1 + 0x1c) != '\0') {
        this = (CProfileManager *)btAlignedFreeInternal(this);
      }
      param_1[0x1b] = (btCollisionObject *)0x0;
    }
    param_1[0x1b] = pbVar24;
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(uint *)(param_1 + 0x1a) = uVar3;
  }
  *(uint *)((long)param_1 + 0xcc) = uVar3;
  lVar14 = (long)(int)uVar4;
  if (((byte)param_8[0x40] >> 4 & 1) == 0) {
    uVar10 = *(uint *)((long)param_1 + 0xac);
    if (((int)uVar10 < (int)uVar4) && (*(int *)(param_1 + 0x16) < (int)uVar4)) {
      if (uVar4 == 0) {
        pbVar24 = (btCollisionObject *)0x0;
      }
      else {
        pbVar24 = (btCollisionObject *)btAlignedAllocInternal(lVar14 << 2,0x10);
        uVar10 = *(uint *)((long)param_1 + 0xac);
      }
      this = (CProfileManager *)param_1[0x17];
      if ((int)uVar10 < 1) {
        if (this != (CProfileManager *)0x0) goto LAB_011c4f04;
      }
      else {
        uVar13 = (ulong)(int)uVar10;
        if (uVar10 < 8) {
LAB_011c4e70:
          uVar18 = 0;
        }
        else {
          uVar18 = uVar13 & 0xfffffffffffffff8;
          if (uVar18 != 0) {
            if ((pbVar24 < (btCollisionObject *)(this + uVar13 * 4)) &&
               (this < pbVar24 + uVar13 * 4)) goto LAB_011c4e70;
            pbVar19 = pbVar24 + 0x10;
            pbVar20 = (btCollisionObject *)(this + 0x10);
            uVar22 = uVar18;
            do {
              pbVar2 = pbVar20 + -8;
              uVar28 = *(undefined8 *)(pbVar20 + -0x10);
              uVar32 = *(undefined8 *)(pbVar20 + 8);
              uVar29 = *(undefined8 *)pbVar20;
              uVar22 = uVar22 - 8;
              pbVar20 = pbVar20 + 0x20;
              *(undefined8 *)(pbVar19 + -8) = *(undefined8 *)pbVar2;
              *(undefined8 *)(pbVar19 + -0x10) = uVar28;
              *(undefined8 *)(pbVar19 + 8) = uVar32;
              *(undefined8 *)pbVar19 = uVar29;
              pbVar19 = pbVar19 + 0x20;
            } while (uVar22 != 0);
            if (uVar18 == uVar13) goto LAB_011c4f04;
          }
        }
        lVar14 = uVar13 - uVar18;
        pbVar19 = (btCollisionObject *)(this + uVar18 * 4);
        pbVar20 = pbVar24 + uVar18 * 4;
        do {
          lVar14 = lVar14 + -1;
          *(undefined4 *)pbVar20 = *(undefined4 *)pbVar19;
          pbVar19 = pbVar19 + 4;
          pbVar20 = pbVar20 + 4;
        } while (lVar14 != 0);
LAB_011c4f04:
        if (*(char *)(param_1 + 0x18) != '\0') {
          this = (CProfileManager *)btAlignedFreeInternal(this);
        }
        param_1[0x17] = (btCollisionObject *)0x0;
      }
      param_1[0x17] = pbVar24;
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(uint *)(param_1 + 0x16) = uVar4;
    }
    *(uint *)((long)param_1 + 0xac) = uVar4;
  }
  else {
    uVar10 = *(uint *)((long)param_1 + 0xac);
    iVar6 = (int)(lVar14 << 1);
    if (((int)uVar10 < iVar6) && (*(int *)(param_1 + 0x16) < iVar6)) {
      if (uVar4 == 0) {
        pbVar24 = (btCollisionObject *)0x0;
      }
      else {
        pbVar24 = (btCollisionObject *)btAlignedAllocInternal(lVar14 << 3,0x10);
        uVar10 = *(uint *)((long)param_1 + 0xac);
      }
      this = (CProfileManager *)param_1[0x17];
      if ((int)uVar10 < 1) {
        if (this != (CProfileManager *)0x0) goto LAB_011c4f30;
      }
      else {
        uVar13 = (ulong)(int)uVar10;
        if (uVar10 < 8) {
LAB_011c4ed8:
          uVar18 = 0;
        }
        else {
          uVar18 = uVar13 & 0xfffffffffffffff8;
          if (uVar18 != 0) {
            if ((pbVar24 < (btCollisionObject *)(this + uVar13 * 4)) &&
               (this < pbVar24 + uVar13 * 4)) goto LAB_011c4ed8;
            pbVar19 = pbVar24 + 0x10;
            pbVar20 = (btCollisionObject *)(this + 0x10);
            uVar22 = uVar18;
            do {
              pbVar2 = pbVar20 + -8;
              uVar28 = *(undefined8 *)(pbVar20 + -0x10);
              uVar32 = *(undefined8 *)(pbVar20 + 8);
              uVar29 = *(undefined8 *)pbVar20;
              uVar22 = uVar22 - 8;
              pbVar20 = pbVar20 + 0x20;
              *(undefined8 *)(pbVar19 + -8) = *(undefined8 *)pbVar2;
              *(undefined8 *)(pbVar19 + -0x10) = uVar28;
              *(undefined8 *)(pbVar19 + 8) = uVar32;
              *(undefined8 *)pbVar19 = uVar29;
              pbVar19 = pbVar19 + 0x20;
            } while (uVar22 != 0);
            if (uVar18 == uVar13) goto LAB_011c4f30;
          }
        }
        lVar14 = uVar13 - uVar18;
        pbVar19 = (btCollisionObject *)(this + uVar18 * 4);
        pbVar20 = pbVar24 + uVar18 * 4;
        do {
          lVar14 = lVar14 + -1;
          *(undefined4 *)pbVar20 = *(undefined4 *)pbVar19;
          pbVar19 = pbVar19 + 4;
          pbVar20 = pbVar20 + 4;
        } while (lVar14 != 0);
LAB_011c4f30:
        if (*(char *)(param_1 + 0x18) != '\0') {
          this = (CProfileManager *)btAlignedFreeInternal(this);
        }
        param_1[0x17] = (btCollisionObject *)0x0;
      }
      param_1[0x17] = pbVar24;
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(int *)(param_1 + 0x16) = iVar6;
    }
    *(int *)((long)param_1 + 0xac) = iVar6;
  }
  uVar10 = *(uint *)((long)param_1 + 0xec);
  if (((int)uVar10 < (int)uVar5) && (*(int *)(param_1 + 0x1e) < (int)uVar5)) {
    if (uVar5 == 0) {
      pbVar24 = (btCollisionObject *)0x0;
    }
    else {
      pbVar24 = (btCollisionObject *)btAlignedAllocInternal((long)(int)uVar5 << 2,0x10);
      uVar10 = *(uint *)((long)param_1 + 0xec);
    }
    this = (CProfileManager *)param_1[0x1f];
    if ((int)uVar10 < 1) {
      if (this != (CProfileManager *)0x0) goto LAB_011c4ff8;
    }
    else {
      uVar13 = (ulong)(int)uVar10;
      if (uVar10 < 8) {
LAB_011c4fcc:
        uVar18 = 0;
      }
      else {
        uVar18 = uVar13 & 0xfffffffffffffff8;
        if (uVar18 != 0) {
          if ((pbVar24 < (btCollisionObject *)(this + uVar13 * 4)) && (this < pbVar24 + uVar13 * 4))
          goto LAB_011c4fcc;
          pbVar19 = pbVar24 + 0x10;
          pbVar20 = (btCollisionObject *)(this + 0x10);
          uVar22 = uVar18;
          do {
            pbVar2 = pbVar20 + -8;
            uVar28 = *(undefined8 *)(pbVar20 + -0x10);
            uVar32 = *(undefined8 *)(pbVar20 + 8);
            uVar29 = *(undefined8 *)pbVar20;
            uVar22 = uVar22 - 8;
            pbVar20 = pbVar20 + 0x20;
            *(undefined8 *)(pbVar19 + -8) = *(undefined8 *)pbVar2;
            *(undefined8 *)(pbVar19 + -0x10) = uVar28;
            *(undefined8 *)(pbVar19 + 8) = uVar32;
            *(undefined8 *)pbVar19 = uVar29;
            pbVar19 = pbVar19 + 0x20;
          } while (uVar22 != 0);
          if (uVar18 == uVar13) goto LAB_011c4ff8;
        }
      }
      lVar14 = uVar13 - uVar18;
      pbVar19 = (btCollisionObject *)(this + uVar18 * 4);
      pbVar20 = pbVar24 + uVar18 * 4;
      do {
        lVar14 = lVar14 + -1;
        *(undefined4 *)pbVar20 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar20 = pbVar20 + 4;
      } while (lVar14 != 0);
LAB_011c4ff8:
      if (*(char *)(param_1 + 0x20) != '\0') {
        this = (CProfileManager *)btAlignedFreeInternal(this);
      }
      param_1[0x1f] = (btCollisionObject *)0x0;
    }
    param_1[0x1f] = pbVar24;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(uint *)(param_1 + 0x1e) = uVar5;
  }
  *(uint *)((long)param_1 + 0xec) = uVar5;
  if (0 < (int)uVar3) {
    pbVar24 = param_1[0x1b];
    if (uVar3 < 8) {
      uVar13 = 0;
    }
    else {
      uVar13 = (ulong)uVar3 - (ulong)(uVar3 & 7);
      if (uVar13 != 0) {
        uVar29 = 0x300000002;
        uVar28 = 0x100000000;
        pbVar19 = pbVar24 + 0x10;
        uVar18 = uVar13;
        do {
          iVar6 = (int)((ulong)uVar28 >> 0x20);
          iVar30 = (int)((ulong)uVar29 >> 0x20);
          *(undefined8 *)(pbVar19 + -8) = uVar29;
          *(undefined8 *)(pbVar19 + -0x10) = uVar28;
          *(ulong *)(pbVar19 + 8) = CONCAT44(iVar30 + 4,(int)uVar29 + 4);
          *(ulong *)pbVar19 = CONCAT44(iVar6 + 4,(int)uVar28 + 4);
          uVar28 = CONCAT44(iVar6 + 8,(int)uVar28 + 8);
          uVar29 = CONCAT44(iVar30 + 8,(int)uVar29 + 8);
          uVar18 = uVar18 - 8;
          pbVar19 = pbVar19 + 0x20;
        } while (uVar18 != 0);
        if ((uVar3 & 7) == 0) goto LAB_011c5088;
      }
    }
    do {
      *(int *)(pbVar24 + uVar13 * 4) = (int)uVar13;
      uVar13 = uVar13 + 1;
    } while (uVar3 != uVar13);
  }
LAB_011c5088:
  if (0 < (int)uVar4) {
    pbVar24 = param_1[0x17];
    if (uVar4 < 8) {
      uVar13 = 0;
    }
    else {
      uVar13 = (ulong)uVar4 - (ulong)(uVar4 & 7);
      if (uVar13 != 0) {
        uVar29 = 0x300000002;
        uVar28 = 0x100000000;
        pbVar19 = pbVar24 + 0x10;
        uVar18 = uVar13;
        do {
          iVar6 = (int)((ulong)uVar28 >> 0x20);
          iVar30 = (int)((ulong)uVar29 >> 0x20);
          *(undefined8 *)(pbVar19 + -8) = uVar29;
          *(undefined8 *)(pbVar19 + -0x10) = uVar28;
          *(ulong *)(pbVar19 + 8) = CONCAT44(iVar30 + 4,(int)uVar29 + 4);
          *(ulong *)pbVar19 = CONCAT44(iVar6 + 4,(int)uVar28 + 4);
          uVar28 = CONCAT44(iVar6 + 8,(int)uVar28 + 8);
          uVar29 = CONCAT44(iVar30 + 8,(int)uVar29 + 8);
          uVar18 = uVar18 - 8;
          pbVar19 = pbVar19 + 0x20;
        } while (uVar18 != 0);
        if ((uVar4 & 7) == 0) goto LAB_011c50f4;
      }
    }
    do {
      *(int *)(pbVar24 + uVar13 * 4) = (int)uVar13;
      uVar13 = uVar13 + 1;
    } while (uVar4 != uVar13);
  }
LAB_011c50f4:
  if (0 < (int)uVar5) {
    pbVar24 = param_1[0x1f];
    if (uVar5 < 8) {
      uVar13 = 0;
    }
    else {
      uVar13 = (ulong)uVar5 - (ulong)(uVar5 & 7);
      if (uVar13 != 0) {
        uVar29 = 0x300000002;
        uVar28 = 0x100000000;
        pbVar19 = pbVar24 + 0x10;
        uVar18 = uVar13;
        do {
          iVar6 = (int)((ulong)uVar28 >> 0x20);
          iVar30 = (int)((ulong)uVar29 >> 0x20);
          *(undefined8 *)(pbVar19 + -8) = uVar29;
          *(undefined8 *)(pbVar19 + -0x10) = uVar28;
          *(ulong *)(pbVar19 + 8) = CONCAT44(iVar30 + 4,(int)uVar29 + 4);
          *(ulong *)pbVar19 = CONCAT44(iVar6 + 4,(int)uVar28 + 4);
          uVar28 = CONCAT44(iVar6 + 8,(int)uVar28 + 8);
          uVar29 = CONCAT44(iVar30 + 8,(int)uVar29 + 8);
          uVar18 = uVar18 - 8;
          pbVar19 = pbVar19 + 0x20;
        } while (uVar18 != 0);
        if ((uVar5 & 7) == 0) goto LAB_011c5160;
      }
    }
    do {
      *(int *)(pbVar24 + uVar13 * 4) = (int)uVar13;
      uVar13 = uVar13 + 1;
    } while (uVar5 != uVar13);
  }
LAB_011c5160:
  CProfileManager::Stop_Profile(this);
  return 0;
}

