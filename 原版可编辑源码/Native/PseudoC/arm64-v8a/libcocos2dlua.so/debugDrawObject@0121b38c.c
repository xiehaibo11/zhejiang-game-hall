
/* btCollisionWorld::debugDrawObject(btTransform const&, btCollisionShape const*, btVector3 const&)
    */

void __thiscall
btCollisionWorld::debugDrawObject
          (btCollisionWorld *this,btTransform *param_1,btCollisionShape *param_2,btVector3 *param_3)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_1d0;
  undefined **ppuStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulong local_128;
  undefined8 uStack_120;
  ulong local_118;
  undefined8 uStack_110;
  ulong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0 [4];
  
  plVar7 = (long *)(**(code **)(*(long *)this + 0x28))();
  (**(code **)(*plVar7 + 0x70))(0x3f800000,plVar7,param_1);
  switch(*(int *)(param_2 + 8)) {
  case 0:
    fVar21 = *(float *)(param_2 + 0x28);
    fVar23 = *(float *)(param_2 + 0x2c);
    fVar26 = *(float *)(param_2 + 0x30);
    uVar16 = *(undefined4 *)(param_2 + 0x34);
    fVar18 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    fVar17 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    fVar19 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    local_140 = (undefined **)CONCAT44(fVar23 + fVar17,fVar21 + fVar18);
    uStack_138 = (undefined **)CONCAT44(uVar16,fVar26 + fVar19);
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    local_1d0 = (undefined **)CONCAT44(-(fVar23 + fVar17),-(fVar21 + fVar18));
    ppuStack_1c8 = (undefined **)(ulong)(uint)-(fVar26 + fVar19);
    (**(code **)(*plVar7 + 0x90))(plVar7,&local_1d0,&local_140,param_1,param_3);
    break;
  default:
    if (*(int *)(param_2 + 8) < 7) {
      lVar9 = *(long *)(param_2 + 0x40);
      if (lVar9 == 0) {
        iVar5 = (**(code **)(*(long *)param_2 + 200))(param_2);
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            (**(code **)(*(long *)param_2 + 0xd0))(param_2,iVar5,&local_140,&local_1d0);
            local_c0 = (float)local_140 * *(float *)param_1 +
                       local_140._4_4_ * *(float *)(param_1 + 4) +
                       (float)uStack_138 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
            fStack_bc = (float)local_140 * *(float *)(param_1 + 0x10) +
                        local_140._4_4_ * *(float *)(param_1 + 0x14) +
                        (float)uStack_138 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
            local_b8 = (float)local_140 * *(float *)(param_1 + 0x20) +
                       local_140._4_4_ * *(float *)(param_1 + 0x24) +
                       (float)uStack_138 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
            local_d0 = (float)local_1d0 * *(float *)param_1 +
                       local_1d0._4_4_ * *(float *)(param_1 + 4) +
                       ppuStack_1c8._0_4_ * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
            fStack_cc = (float)local_1d0 * *(float *)(param_1 + 0x10) +
                        local_1d0._4_4_ * *(float *)(param_1 + 0x14) +
                        ppuStack_1c8._0_4_ * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34)
            ;
            local_c8 = (float)local_1d0 * *(float *)(param_1 + 0x20) +
                       local_1d0._4_4_ * *(float *)(param_1 + 0x24) +
                       ppuStack_1c8._0_4_ * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
            local_b4 = 0;
            local_c4 = 0;
            plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
            (**(code **)(*plVar7 + 0x10))(plVar7,&local_c0,&local_d0,param_3);
            iVar5 = iVar5 + 1;
            iVar6 = (**(code **)(*(long *)param_2 + 200))(param_2);
          } while (iVar5 < iVar6);
        }
      }
      else if (0 < *(int *)(lVar9 + 0x2c)) {
        lVar11 = 0;
        do {
          fVar18 = 0.0;
          iVar5 = *(int *)(*(long *)(lVar9 + 0x38) + lVar11 * 0x30 + 4);
          if (iVar5 == 0) {
            fVar19 = 0.0;
            fVar17 = 0.0;
          }
          else {
            fVar19 = 0.0;
            fVar17 = 0.0;
            fVar18 = 0.0;
            if (0 < iVar5) {
              lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + lVar11 * 0x30 + 0x10);
              lVar12 = 0;
              fVar17 = 0.0;
              fVar19 = 0.0;
              fVar18 = 0.0;
              iVar6 = *(int *)(lVar8 + (long)(iVar5 + -1) * 4);
              while( true ) {
                iVar3 = *(int *)(lVar8 + lVar12 * 4);
                lVar8 = (long)iVar3 * 0x10;
                pfVar2 = (float *)(*(long *)(lVar9 + 0x18) + lVar8);
                fVar18 = fVar18 + *pfVar2;
                fVar19 = fVar19 + pfVar2[1];
                fVar17 = fVar17 + pfVar2[2];
                plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
                pfVar2 = (float *)(*(long *)(lVar9 + 0x18) + (long)iVar6 * 0x10);
                fVar21 = *pfVar2;
                fVar23 = pfVar2[1];
                fVar26 = pfVar2[2];
                pfVar2 = (float *)(*(long *)(lVar9 + 0x18) + lVar8);
                local_140 = (undefined **)
                            CONCAT44(fVar21 * *(float *)(param_1 + 0x10) +
                                     fVar23 * *(float *)(param_1 + 0x14) +
                                     fVar26 * *(float *)(param_1 + 0x18) +
                                     *(float *)(param_1 + 0x34),
                                     fVar21 * *(float *)param_1 + fVar23 * *(float *)(param_1 + 4) +
                                     fVar26 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30));
                uStack_138 = (undefined **)
                             (ulong)(uint)(fVar21 * *(float *)(param_1 + 0x20) +
                                           fVar23 * *(float *)(param_1 + 0x24) +
                                           fVar26 * *(float *)(param_1 + 0x28) +
                                          *(float *)(param_1 + 0x38));
                fVar21 = *pfVar2;
                fVar23 = pfVar2[1];
                fVar26 = pfVar2[2];
                local_1d0 = (undefined **)
                            CONCAT44(fVar21 * *(float *)(param_1 + 0x10) +
                                     fVar23 * *(float *)(param_1 + 0x14) +
                                     fVar26 * *(float *)(param_1 + 0x18) +
                                     *(float *)(param_1 + 0x34),
                                     fVar21 * *(float *)param_1 + fVar23 * *(float *)(param_1 + 4) +
                                     fVar26 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30));
                ppuStack_1c8 = (undefined **)
                               (ulong)(uint)(fVar21 * *(float *)(param_1 + 0x20) +
                                             fVar23 * *(float *)(param_1 + 0x24) +
                                             fVar26 * *(float *)(param_1 + 0x28) +
                                            *(float *)(param_1 + 0x38));
                (**(code **)(*plVar7 + 0x10))(plVar7,&local_140,&local_1d0,param_3);
                lVar12 = lVar12 + 1;
                if (*(int *)(*(long *)(lVar9 + 0x38) + lVar11 * 0x30 + 4) <= lVar12) break;
                lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + lVar11 * 0x30 + 0x10);
                iVar6 = iVar3;
              }
            }
          }
          plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
          uVar4 = (**(code **)(*plVar7 + 0x60))();
          if ((uVar4 >> 0xe & 1) != 0) {
            local_140 = (undefined **)0x3f8000003f800000;
            uStack_138 = (undefined **)0x0;
            fVar21 = 1.0 / (float)iVar5;
            lVar12 = *(long *)(lVar9 + 0x38) + lVar11 * 0x30;
            fVar23 = *(float *)(lVar12 + 0x20);
            fVar26 = *(float *)(lVar12 + 0x24);
            fVar20 = *(float *)(lVar12 + 0x28);
            fVar18 = fVar21 * fVar18;
            fVar19 = fVar21 * fVar19;
            fVar21 = fVar21 * fVar17;
            plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
            fVar23 = fVar18 + fVar23;
            fVar26 = fVar19 + fVar26;
            fVar20 = fVar21 + fVar20;
            local_c0 = fVar23 * *(float *)param_1 + fVar26 * *(float *)(param_1 + 4) +
                       fVar20 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
            fStack_bc = fVar23 * *(float *)(param_1 + 0x10) + fVar26 * *(float *)(param_1 + 0x14) +
                        fVar20 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
            local_b8 = fVar23 * *(float *)(param_1 + 0x20) + fVar26 * *(float *)(param_1 + 0x24) +
                       fVar20 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
            local_1d0 = (undefined **)
                        CONCAT44(fVar18 * *(float *)(param_1 + 0x10) +
                                 fVar19 * *(float *)(param_1 + 0x14) +
                                 fVar21 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34),
                                 fVar18 * *(float *)param_1 + fVar19 * *(float *)(param_1 + 4) +
                                 fVar21 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30));
            ppuStack_1c8 = (undefined **)
                           (ulong)(uint)(fVar18 * *(float *)(param_1 + 0x20) +
                                         fVar19 * *(float *)(param_1 + 0x24) +
                                         fVar21 * *(float *)(param_1 + 0x28) +
                                        *(float *)(param_1 + 0x38));
            local_b4 = 0;
            (**(code **)(*plVar7 + 0x10))(plVar7,&local_1d0,&local_c0,&local_140);
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(lVar9 + 0x2c));
      }
    }
    iVar5 = *(int *)(param_2 + 8);
    if (iVar5 - 0x15U < 9) {
      local_c0 = 1e+18;
      fStack_bc = 1e+18;
      local_b8 = 1e+18;
      local_b4 = 0;
      local_d0 = -1e+18;
      fStack_cc = -1e+18;
      local_c8 = -1e+18;
      local_c4 = 0;
      local_130 = (**(code **)(*(long *)this + 0x28))(this);
      local_140 = &PTR__DebugDrawcallback_01731ed8;
      uStack_138 = &PTR__DebugDrawcallback_01731f08;
      uStack_120 = *(undefined8 *)(param_3 + 8);
      local_128 = *(ulong *)param_3;
      uStack_110 = *(undefined8 *)(param_1 + 8);
      local_118 = *(ulong *)param_1;
      uStack_100 = *(undefined8 *)(param_1 + 0x18);
      local_108 = *(ulong *)(param_1 + 0x10);
      uStack_f0 = *(undefined8 *)(param_1 + 0x28);
      local_f8 = *(undefined8 *)(param_1 + 0x20);
      uStack_e0 = *(undefined8 *)(param_1 + 0x38);
      local_e8 = *(undefined8 *)(param_1 + 0x30);
      (**(code **)(*(long *)param_2 + 0x80))(param_2,&local_140,&local_d0,&local_c0);
      btInternalTriangleIndexCallback::~btInternalTriangleIndexCallback
                ((btInternalTriangleIndexCallback *)((ulong)&local_140 | 8));
      btTriangleCallback::~btTriangleCallback((btTriangleCallback *)&local_140);
      iVar5 = *(int *)(param_2 + 8);
    }
    if (iVar5 == 3) {
      local_150 = 0x5d5e0b6b;
      uStack_14c = 0x5d5e0b6b;
      local_148 = 0x5d5e0b6b;
      uStack_144 = 0;
      local_160 = 0xdd5e0b6b;
      uStack_15c = 0xdd5e0b6b;
      local_158 = 0xdd5e0b6b;
      uStack_154 = 0;
      local_1c0 = (**(code **)(*(long *)this + 0x28))(this);
      local_1d0 = &PTR__DebugDrawcallback_01731ed8;
      ppuStack_1c8 = &PTR__DebugDrawcallback_01731f08;
      uStack_1b0 = *(undefined8 *)(param_3 + 8);
      local_1b8 = *(undefined8 *)param_3;
      uStack_1a0 = *(undefined8 *)(param_1 + 8);
      local_1a8 = *(undefined8 *)param_1;
      uStack_190 = *(undefined8 *)(param_1 + 0x18);
      local_198 = *(undefined8 *)(param_1 + 0x10);
      uStack_180 = *(undefined8 *)(param_1 + 0x28);
      local_188 = *(undefined8 *)(param_1 + 0x20);
      uStack_170 = *(undefined8 *)(param_1 + 0x38);
      local_178 = *(undefined8 *)(param_1 + 0x30);
      (**(code **)(**(long **)(param_2 + 0x70) + 0x10))
                (*(long **)(param_2 + 0x70),
                 (btInternalTriangleIndexCallback *)((ulong)&local_1d0 | 8),&local_160,&local_150);
      btInternalTriangleIndexCallback::~btInternalTriangleIndexCallback
                ((btInternalTriangleIndexCallback *)((ulong)&local_1d0 | 8));
      btTriangleCallback::~btTriangleCallback((btTriangleCallback *)&local_1d0);
    }
    break;
  case 8:
    uVar14 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
                    /* WARNING: Could not recover jumptable at 0x0121b8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x20))(uVar14,plVar7,param_1,param_3);
    return;
  case 9:
    iVar5 = *(int *)(param_2 + 0x6c);
    if (0 < iVar5) {
      lVar11 = (long)iVar5 * 0x10 + -8;
      lVar9 = (long)iVar5;
      do {
        pfVar2 = (float *)(*(long *)(param_2 + 0x78) + lVar11);
        fVar22 = pfVar2[-2];
        fVar24 = pfVar2[-1];
        fVar15 = *pfVar2;
        plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
        fVar17 = *(float *)param_1;
        fVar19 = *(float *)(param_1 + 4);
        fVar21 = *(float *)(param_1 + 0x10);
        fVar23 = *(float *)(param_1 + 0x14);
        fVar20 = *(float *)(param_1 + 0x20);
        fVar25 = *(float *)(param_1 + 0x24);
        fVar18 = *(float *)(param_1 + 8);
        fVar26 = *(float *)(param_1 + 0x18);
        fVar27 = *(float *)(param_1 + 0x28);
        local_140 = (undefined **)
                    CONCAT44(fVar17 * 0.0 + fVar19 + fVar18 * 0.0,
                             fVar17 + fVar19 * 0.0 + fVar18 * 0.0);
        uStack_138 = (undefined **)(ulong)(uint)(fVar18 + fVar17 * 0.0 + fVar19 * 0.0);
        local_130 = CONCAT44(fVar21 * 0.0 + fVar23 + fVar26 * 0.0,
                             fVar21 + fVar23 * 0.0 + fVar26 * 0.0);
        local_128 = (ulong)(uint)(fVar26 + fVar21 * 0.0 + fVar23 * 0.0);
        uStack_120 = CONCAT44(fVar20 * 0.0 + fVar25 + fVar27 * 0.0,
                              fVar20 + fVar25 * 0.0 + fVar27 * 0.0);
        local_118 = (ulong)(uint)(fVar27 + fVar20 * 0.0 + fVar25 * 0.0);
        uStack_110 = CONCAT44(fVar22 * fVar21 + fVar24 * fVar23 + fVar15 * fVar26 +
                              *(float *)(param_1 + 0x34),
                              fVar22 * fVar17 + fVar24 * fVar19 + fVar15 * fVar18 +
                              *(float *)(param_1 + 0x30));
        local_108 = (ulong)(uint)(fVar22 * fVar20 + fVar24 * fVar25 + fVar15 * fVar27 +
                                 *(float *)(param_1 + 0x38));
        (**(code **)(*plVar7 + 0x20))
                  (*(undefined4 *)(*(long *)(param_2 + 0x98) + (lVar9 + -1) * 4),plVar7,&local_140,
                   param_3);
        lVar11 = lVar11 + -0x10;
        bVar1 = 1 < lVar9;
        lVar9 = lVar9 + -1;
      } while (bVar1);
    }
    break;
  case 10:
    uVar10 = (ulong)*(int *)(param_2 + 0x40);
    uVar13 = (ulong)*(uint *)(param_2 + (long)((*(int *)(param_2 + 0x40) + 2) % 3) * 4 + 0x28);
    fVar18 = *(float *)(param_2 + uVar10 * 4 + 0x28);
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x98);
    goto LAB_0121bd10;
  case 0xb:
    uVar13 = (ulong)*(uint *)(param_2 + 0x44);
    fVar18 = *(float *)(param_2 + 0x48);
    uVar4 = *(uint *)(param_2 + 0x50);
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    uVar10 = (ulong)uVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0xa8);
    goto LAB_0121bd44;
  case 0xd:
    uVar10 = (ulong)*(int *)(param_2 + 0x40);
    uVar13 = (**(code **)(*(long *)param_2 + 0xb8))(param_2);
    fVar21 = *(float *)(param_2 + 0x28);
    fVar23 = *(float *)(param_2 + 0x2c);
    fVar26 = *(float *)(param_2 + 0x30);
    uVar16 = *(undefined4 *)(param_2 + 0x34);
    fVar18 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    fVar17 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    fVar19 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
    local_b0[0] = fVar21 + fVar18;
    local_b0[1] = fVar23 + fVar17;
    local_b0[2] = fVar26 + fVar19;
    local_b0[3] = (float)uVar16;
    fVar18 = local_b0[uVar10];
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0xa0);
LAB_0121bd10:
    uVar10 = uVar10 & 0xffffffff;
LAB_0121bd44:
                    /* WARNING: Could not recover jumptable at 0x0121bd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar13,fVar18,plVar7,uVar10,param_1,param_3);
    return;
  case 0x1c:
    uVar16 = *(undefined4 *)(param_2 + 0x4c);
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
                    /* WARNING: Could not recover jumptable at 0x0121b948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0xb0))(uVar16,plVar7,param_2 + 0x3c,param_1,param_3);
    return;
  case 0x1f:
    iVar5 = *(int *)(param_2 + 0x1c);
    if (0 < iVar5) {
      lVar9 = (long)iVar5 + 1;
      lVar11 = (long)iVar5 * 0x58 + -0x28;
      do {
        fVar19 = *(float *)param_1;
        fVar17 = *(float *)(param_1 + 4);
        fVar36 = *(float *)(param_1 + 8);
        fVar21 = *(float *)(param_1 + 0x10);
        fVar23 = *(float *)(param_1 + 0x14);
        pfVar2 = (float *)(*(long *)(param_2 + 0x28) + lVar11);
        fVar24 = pfVar2[-0xc];
        fVar25 = pfVar2[-0xb];
        fVar28 = pfVar2[-8];
        fVar29 = pfVar2[-7];
        fVar31 = pfVar2[-4];
        fVar32 = pfVar2[-3];
        fVar26 = *(float *)(param_1 + 0x18);
        fVar20 = *(float *)(param_1 + 0x20);
        fVar15 = *(float *)(param_1 + 0x24);
        fVar22 = *(float *)(param_1 + 0x28);
        fVar27 = pfVar2[-10];
        fVar30 = pfVar2[-6];
        fVar33 = pfVar2[-2];
        fVar34 = *pfVar2;
        fVar35 = pfVar2[1];
        fVar18 = pfVar2[2];
        local_140 = (undefined **)
                    CONCAT44(fVar25 * fVar19 + fVar29 * fVar17 + fVar32 * fVar36,
                             fVar24 * fVar19 + fVar28 * fVar17 + fVar31 * fVar36);
        uStack_138 = (undefined **)
                     (ulong)(uint)(fVar27 * fVar19 + fVar30 * fVar17 + fVar33 * fVar36);
        local_130 = CONCAT44(fVar25 * fVar21 + fVar29 * fVar23 + fVar32 * fVar26,
                             fVar24 * fVar21 + fVar28 * fVar23 + fVar31 * fVar26);
        local_128 = (ulong)(uint)(fVar27 * fVar21 + fVar30 * fVar23 + fVar33 * fVar26);
        uStack_120 = CONCAT44(fVar25 * fVar20 + fVar29 * fVar15 + fVar32 * fVar22,
                              fVar24 * fVar20 + fVar28 * fVar15 + fVar31 * fVar22);
        local_118 = (ulong)(uint)(fVar27 * fVar20 + fVar30 * fVar15 + fVar33 * fVar22);
        uStack_110 = CONCAT44(fVar34 * fVar21 + fVar35 * fVar23 + fVar18 * fVar26 +
                              *(float *)(param_1 + 0x34),
                              fVar34 * fVar19 + fVar35 * fVar17 + fVar18 * fVar36 +
                              *(float *)(param_1 + 0x30));
        local_108 = (ulong)(uint)(fVar34 * fVar20 + fVar35 * fVar15 + fVar18 * fVar22 +
                                 *(float *)(param_1 + 0x38));
        (**(code **)(*(long *)this + 0x38))(this,&local_140,*(undefined8 *)(pfVar2 + 4),param_3);
        lVar9 = lVar9 + -1;
        lVar11 = lVar11 + -0x58;
      } while (1 < lVar9);
    }
  }
  return;
}

