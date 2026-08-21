
/* btCompoundCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btCompoundCollisionAlgorithm::processCollision
          (btCompoundCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btCollisionObjectWrapper *pbVar1;
  btCollisionObjectWrapper *pbVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  long *plVar6;
  btPersistentManifold *this_00;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  btDbvt *this_01;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
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
  float fVar37;
  float local_170;
  float local_16c;
  float local_168;
  undefined8 local_160;
  ulong uStack_158;
  float local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  float local_128;
  undefined4 local_124;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined **local_e0;
  btCollisionObjectWrapper *pbStack_d8;
  btCollisionObjectWrapper *local_d0;
  undefined8 uStack_c8;
  btDispatcherInfo *local_c0;
  btManifoldResult *pbStack_b8;
  long *local_b0;
  undefined8 uStack_a8;
  
  pbVar1 = param_2;
  if (this[0x30] == (btCompoundCollisionAlgorithm)0x0) {
    pbVar1 = param_1;
  }
  lVar11 = *(long *)(pbVar1 + 8);
  pbVar2 = param_1;
  if (this[0x30] == (btCompoundCollisionAlgorithm)0x0) {
    pbVar2 = param_2;
  }
  if (*(int *)(lVar11 + 0x60) != *(int *)(this + 0x44)) {
    uVar3 = *(uint *)(this + 0x14);
    if (0 < (int)uVar3) {
      uVar12 = 0;
      do {
        puVar5 = *(undefined8 **)(*(long *)(this + 0x20) + uVar12 * 8);
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)();
          (**(code **)(**(long **)(this + 8) + 0x78))
                    (*(long **)(this + 8),*(undefined8 *)(*(long *)(this + 0x20) + uVar12 * 8));
        }
        uVar12 = uVar12 + 1;
      } while (uVar3 != uVar12);
    }
    preallocateChildAlgorithms(this,param_1,param_2);
  }
  this_01 = *(btDbvt **)(lVar11 + 0x58);
  uStack_c8 = *(undefined8 *)(this + 8);
  local_b0 = *(long **)(this + 0x20);
  uStack_a8 = *(undefined8 *)(this + 0x38);
  local_128 = (float)CONCAT31(local_128._1_3_,1);
  local_130 = (void *)0x0;
  local_e0 = &PTR__ICollide_01734248;
  local_13c = 0;
  iVar8 = *(int *)(this + 0x14);
  pbStack_d8 = pbVar1;
  local_d0 = pbVar2;
  local_c0 = param_3;
  pbStack_b8 = param_4;
  if (0 < iVar8) {
    lVar10 = 0;
    plVar6 = (long *)*local_b0;
    while( true ) {
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_140);
        iVar8 = (int)local_13c;
        if (0 < (int)local_13c) {
          lVar13 = 0;
          do {
            this_00 = *(btPersistentManifold **)((long)local_130 + lVar13 * 8);
            if (*(int *)(this_00 + 0x318) != 0) {
              *(btPersistentManifold **)(param_4 + 8) = this_00;
              if (*(long *)(this_00 + 0x308) == *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
                btPersistentManifold::refreshContactPoints
                          (this_00,(btTransform *)(*(long *)(this_00 + 0x308) + 8),
                           (btTransform *)(*(long *)(*(long *)(param_4 + 0x18) + 0x10) + 8));
              }
              else {
                btPersistentManifold::refreshContactPoints
                          (this_00,(btTransform *)(*(long *)(*(long *)(param_4 + 0x18) + 0x10) + 8),
                           (btTransform *)(*(long *)(*(long *)(param_4 + 0x10) + 0x10) + 8));
              }
              *(undefined8 *)(param_4 + 8) = 0;
              iVar8 = (int)local_13c;
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < iVar8);
        }
        if (iVar8 < 0) {
          if ((long)local_13c < 0) {
            if ((local_130 != (void *)0x0) && (local_128._0_1_ != '\0')) {
              btAlignedFreeInternal(local_130);
            }
            local_128 = (float)CONCAT31(local_128._1_3_,1);
            local_130 = (void *)0x0;
            local_13c = 0;
          }
          lVar13 = (long)iVar8;
          do {
            *(undefined8 *)((long)local_130 + lVar13 * 8) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0);
        }
        local_13c = local_13c & 0xffffffff00000000;
        iVar8 = *(int *)(this + 0x14);
      }
      lVar10 = lVar10 + 1;
      if (iVar8 <= lVar10) break;
      plVar6 = *(long **)(*(long *)(this + 0x20) + lVar10 * 8);
    }
    if (local_130 != (void *)0x0) {
      if (local_128._0_1_ != '\0') {
        btAlignedFreeInternal(local_130);
      }
      local_130 = (void *)0x0;
    }
  }
  if (this_01 == (btDbvt *)0x0) {
    iVar8 = *(int *)(this + 0x14);
    if (iVar8 < 1) goto LAB_012400e0;
    lVar10 = 0;
    lVar13 = 0x40;
    do {
      btCompoundLeafCallback::ProcessChildShape
                ((btCompoundLeafCallback *)&local_e0,
                 *(btCollisionShape **)(*(long *)(lVar11 + 0x28) + lVar13),(int)lVar10);
      lVar10 = lVar10 + 1;
      lVar13 = lVar13 + 0x58;
    } while (lVar10 < iVar8);
  }
  else {
    pfVar7 = *(float **)(pbVar1 + 0x18);
    pfVar9 = *(float **)(pbVar2 + 0x18);
    fVar26 = pfVar7[4];
    fVar24 = pfVar7[5];
    fVar27 = pfVar7[0xd];
    fVar15 = pfVar7[8];
    fVar17 = pfVar7[9];
    fVar28 = pfVar7[0xe];
    fVar22 = pfVar7[6];
    fVar19 = pfVar7[10];
    fVar29 = pfVar9[4];
    fVar30 = pfVar9[5];
    fVar31 = pfVar9[8];
    fVar32 = pfVar9[9];
    fVar33 = pfVar9[6];
    fVar34 = pfVar9[10];
    fVar35 = pfVar9[0xd];
    fVar36 = pfVar9[0xe];
    fVar37 = *pfVar9;
    fVar20 = pfVar9[1];
    fVar25 = -pfVar7[0xc];
    fVar14 = *pfVar7;
    fVar16 = pfVar7[1];
    fVar18 = pfVar7[2];
    fVar21 = pfVar9[0xc];
    fVar23 = pfVar9[2];
    local_140 = fVar14 * fVar37 + fVar26 * fVar29 + fVar15 * fVar31;
    local_128 = fVar16 * fVar23 + fVar24 * fVar33 + fVar17 * fVar34;
    local_120 = fVar18 * fVar37 + fVar22 * fVar29 + fVar19 * fVar31;
    fStack_11c = fVar18 * fVar20 + fVar22 * fVar30 + fVar19 * fVar32;
    local_118 = fVar18 * fVar23 + fVar22 * fVar33 + fVar19 * fVar34;
    local_110 = ((fVar14 * fVar25 - fVar26 * fVar27) - fVar15 * fVar28) +
                fVar14 * fVar21 + fVar26 * fVar35 + fVar15 * fVar36;
    fStack_10c = ((fVar16 * fVar25 - fVar24 * fVar27) - fVar17 * fVar28) +
                 fVar16 * fVar21 + fVar24 * fVar35 + fVar17 * fVar36;
    local_13c = CONCAT44(fVar14 * fVar23 + fVar26 * fVar33 + fVar15 * fVar34,
                         fVar14 * fVar20 + fVar26 * fVar30 + fVar15 * fVar32);
    local_108 = ((fVar18 * fVar25 - fVar22 * fVar27) - fVar19 * fVar28) +
                fVar18 * fVar21 + fVar22 * fVar35 + fVar19 * fVar36;
    local_134 = 0;
    local_130 = (void *)CONCAT44(fVar16 * fVar20 + fVar24 * fVar30 + fVar17 * fVar32,
                                 fVar16 * fVar37 + fVar24 * fVar29 + fVar17 * fVar31);
    local_124 = 0;
    local_114 = 0;
    local_104 = 0;
    (**(code **)(**(long **)(pbVar2 + 8) + 0x10))
              (*(long **)(pbVar2 + 8),&local_140,&local_f0,&local_100);
    uStack_158 = (ulong)(uint)local_e8;
    local_160 = CONCAT44(local_ec,local_f0);
    btDbvt::collideTV(this_01,*(btDbvtNode **)this_01,(btDbvtAabbMm *)&local_160,
                      (ICollide *)&local_e0);
  }
  iVar8 = *(int *)(this + 0x14);
LAB_012400e0:
  if (0 < iVar8) {
    lVar10 = 0;
    lVar13 = 0x40;
    do {
      if (*(long *)(*(long *)(this + 0x20) + lVar10 * 8) != 0) {
        pfVar7 = *(float **)(pbVar1 + 0x18);
        puVar5 = (undefined8 *)(*(long *)(lVar11 + 0x28) + lVar13);
        fVar19 = *pfVar7;
        fVar16 = pfVar7[1];
        fVar14 = *(float *)(puVar5 + -8);
        fVar23 = *(float *)((long)puVar5 + -0x3c);
        fVar24 = *(float *)(puVar5 + -6);
        fVar25 = *(float *)((long)puVar5 + -0x2c);
        fVar34 = pfVar7[2];
        fVar26 = *(float *)(puVar5 + -4);
        fVar27 = *(float *)((long)puVar5 + -0x1c);
        fVar20 = pfVar7[4];
        fVar17 = pfVar7[5];
        fVar33 = pfVar7[6];
        fVar21 = pfVar7[8];
        fVar18 = pfVar7[9];
        fVar22 = pfVar7[10];
        fVar28 = *(float *)(puVar5 + -7);
        fVar29 = *(float *)(puVar5 + -5);
        fVar30 = *(float *)(puVar5 + -3);
        fVar31 = *(float *)(puVar5 + -2);
        fVar32 = *(float *)((long)puVar5 + -0xc);
        fVar15 = *(float *)(puVar5 + -1);
        local_140 = fVar19 * fVar14 + fVar16 * fVar24 + fVar34 * fVar26;
        local_128 = fVar20 * fVar28 + fVar17 * fVar29 + fVar33 * fVar30;
        local_120 = fVar21 * fVar14 + fVar18 * fVar24 + fVar22 * fVar26;
        fStack_11c = fVar21 * fVar23 + fVar18 * fVar25 + fVar22 * fVar27;
        local_118 = fVar21 * fVar28 + fVar18 * fVar29 + fVar22 * fVar30;
        local_110 = pfVar7[0xc] + fVar19 * fVar31 + fVar16 * fVar32 + fVar34 * fVar15;
        fStack_10c = pfVar7[0xd] + fVar20 * fVar31 + fVar17 * fVar32 + fVar33 * fVar15;
        local_108 = pfVar7[0xe] + fVar21 * fVar31 + fVar18 * fVar32 + fVar22 * fVar15;
        local_13c = CONCAT44(fVar19 * fVar28 + fVar16 * fVar29 + fVar34 * fVar30,
                             fVar19 * fVar23 + fVar16 * fVar25 + fVar34 * fVar27);
        local_134 = 0;
        local_130 = (void *)CONCAT44(fVar20 * fVar23 + fVar17 * fVar25 + fVar33 * fVar27,
                                     fVar20 * fVar14 + fVar17 * fVar24 + fVar33 * fVar26);
        local_124 = 0;
        local_114 = 0;
        local_104 = 0;
        (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,&local_140,&local_160,&local_f0);
        (**(code **)(**(long **)(pbVar2 + 8) + 0x10))
                  (*(long **)(pbVar2 + 8),*(undefined8 *)(pbVar2 + 0x18),&local_100,&local_170);
        if ((local_170 < (float)local_160) || (local_f0 < local_100)) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if ((local_168 < (float)uStack_158) || (local_e8 < fStack_f8)) {
          bVar4 = 0;
        }
        if (((local_16c < local_160._4_4_) || (local_ec < fStack_fc)) || ((bool)(bVar4 ^ 1))) {
          (**(code **)**(undefined8 **)(*(long *)(this + 0x20) + lVar10 * 8))();
          (**(code **)(**(long **)(this + 8) + 0x78))
                    (*(long **)(this + 8),*(undefined8 *)(*(long *)(this + 0x20) + lVar10 * 8));
          *(undefined8 *)(*(long *)(this + 0x20) + lVar10 * 8) = 0;
        }
      }
      lVar10 = lVar10 + 1;
      lVar13 = lVar13 + 0x58;
    } while (lVar10 < iVar8);
  }
  return;
}

