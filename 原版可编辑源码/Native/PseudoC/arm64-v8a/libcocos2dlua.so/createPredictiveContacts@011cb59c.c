
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* btDiscreteDynamicsWorld::createPredictiveContacts(float) */

void __thiscall
btDiscreteDynamicsWorld::createPredictiveContacts(btDiscreteDynamicsWorld *this,float param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  CProfileManager *pCVar4;
  btManifoldPoint *pbVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  btRigidBody *this_00;
  btRigidBody *pbVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_2a0;
  undefined8 uStack_298;
  float local_290;
  float fStack_28c;
  float local_288;
  undefined4 local_284;
  float local_250;
  undefined8 local_24c;
  undefined4 local_244;
  undefined8 local_230;
  undefined1 local_228;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 uStack_214;
  undefined8 uStack_20c;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined **local_198;
  undefined4 local_190;
  undefined4 local_170;
  undefined4 local_160;
  undefined **local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_128;
  float fStack_124;
  float fStack_120;
  btCollisionObject *local_108;
  btRigidBody *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  btTransform local_e0 [48];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  
  CProfileManager::Start_Profile("createPredictiveContacts");
  CProfileManager::Start_Profile("release predictive contact manifolds");
  pCVar4 = *(CProfileManager **)(this + 0x1b8);
  if (0 < *(int *)(this + 0x1ac)) {
    lVar9 = 0;
    do {
      (**(code **)(**(long **)(this + 0x28) + 0x20))
                (*(long **)(this + 0x28),*(undefined8 *)(pCVar4 + lVar9 * 8));
      pCVar4 = *(CProfileManager **)(this + 0x1b8);
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(this + 0x1ac));
  }
  if (pCVar4 != (CProfileManager *)0x0) {
    if (this[0x1c0] != (btDiscreteDynamicsWorld)0x0) {
      pCVar4 = (CProfileManager *)btAlignedFreeInternal(pCVar4);
    }
    *(undefined8 *)(this + 0x1b8) = 0;
  }
  *(undefined8 *)(this + 0x1b8) = 0;
  this[0x1c0] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x1ac) = 0;
  pCVar4 = (CProfileManager *)CProfileManager::Stop_Profile(pCVar4);
  if (0 < *(int *)(this + 0x144)) {
    lVar9 = 0;
    do {
      this_00 = *(btRigidBody **)(*(long *)(this + 0x150) + lVar9 * 8);
      *(undefined4 *)(this_00 + 0x110) = 0x3f800000;
      if ((*(int *)(this_00 + 0xec) != 2 && *(int *)(this_00 + 0xec) != 5) &&
         (((byte)this_00[0xe0] & 3) == 0)) {
        pCVar4 = (CProfileManager *)
                 btRigidBody::predictIntegratedTransform(this_00,param_1,local_e0);
        pbVar10 = this_00 + 0x38;
        if ((this[0x40] != (btDiscreteDynamicsWorld)0x0) &&
           ((fVar11 = *(float *)(this_00 + 0x118) * *(float *)(this_00 + 0x118), fVar11 != 0.0 &&
            (fVar15 = fStack_ac - (float)*(undefined8 *)(this_00 + 0x3c),
            fVar17 = fStack_a8 - (float)((ulong)*(undefined8 *)(this_00 + 0x3c) >> 0x20),
            fVar11 < (local_b0 - *(float *)pbVar10) * (local_b0 - *(float *)pbVar10) +
                     fVar15 * fVar15 + fVar17 * fVar17)))) {
          pCVar4 = (CProfileManager *)CProfileManager::Start_Profile("predictive convexSweepTest");
          if (*(int *)(*(long *)(this_00 + 200) + 8) < 0x14) {
            gNumClampedCcdMotions = gNumClampedCcdMotions + 1;
            local_f0 = (**(code **)(**(long **)(this + 0x60) + 0x48))();
            uStack_140 = *(undefined8 *)(this_00 + 0x40);
            local_148 = *(undefined8 *)pbVar10;
            local_e8 = *(undefined8 *)(this + 0x28);
            local_108 = (btCollisionObject *)0x0;
            local_f8 = 0;
            local_158 = &PTR__ConvexResultCallback_0172db78;
            local_150 = 0xffff00013f800000;
            uVar12 = *(undefined4 *)(this_00 + 0x114);
            local_100 = this_00;
            btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)&local_198);
            local_198 = &PTR__btConvexShape_01733760;
            local_190 = 8;
            local_f8 = *(undefined4 *)(this + 0x54);
            local_150 = CONCAT26(*(undefined2 *)(*(long *)(this_00 + 0xc0) + 10),
                                 CONCAT24(*(undefined2 *)(*(long *)(this_00 + 0xc0) + 8),
                                          (float)local_150));
            uStack_1d8 = *(undefined8 *)(this_00 + 0x10);
            local_1e0 = *(undefined8 *)(this_00 + 8);
            uStack_1c8 = *(undefined8 *)(this_00 + 0x20);
            local_1d0 = *(undefined8 *)(this_00 + 0x18);
            uStack_1b8 = *(undefined8 *)(this_00 + 0x30);
            local_1c0 = *(undefined8 *)(this_00 + 0x28);
            local_170 = uVar12;
            local_160 = uVar12;
            btCollisionWorld::convexSweepTest
                      ((btCollisionWorld *)this,(btConvexShape *)&local_198,
                       (btTransform *)(this_00 + 8),(btTransform *)&local_1e0,
                       (ConvexResultCallback *)&local_158,0.0);
            fVar16 = fStack_a8;
            fVar2 = fStack_ac;
            fVar18 = local_b0;
            fVar22 = fStack_120;
            fVar17 = fStack_124;
            fVar15 = local_128;
            fVar11 = (float)local_150;
            if ((float)local_150 < 1.0) {
              fVar20 = *(float *)(this_00 + 0x38);
              fVar19 = *(float *)(this_00 + 0x3c);
              fVar21 = *(float *)(this_00 + 0x40);
              pbVar5 = (btManifoldPoint *)
                       (**(code **)(**(long **)(this + 0x28) + 0x18))
                                 (*(long **)(this + 0x28),this_00,local_108);
              iVar3 = *(int *)(this + 0x1ac);
              if (iVar3 == *(int *)(this + 0x1b0)) {
                uVar1 = iVar3 << 1;
                if (iVar3 == 0) {
                  uVar1 = 1;
                }
                if (iVar3 < (int)uVar1) {
                  if (uVar1 == 0) {
                    lVar6 = 0;
                  }
                  else {
                    lVar6 = btAlignedAllocInternal
                                      (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar1 << 3,0x10);
                    iVar3 = *(int *)(this + 0x1ac);
                  }
                  if (0 < iVar3) {
                    lVar7 = 0;
                    do {
                      lVar8 = lVar7 * 8;
                      lVar7 = lVar7 + 1;
                      *(undefined8 *)(lVar6 + lVar8) =
                           *(undefined8 *)(*(long *)(this + 0x1b8) + lVar8);
                    } while (iVar3 != lVar7);
                  }
                  if (*(void **)(this + 0x1b8) != (void *)0x0) {
                    if (this[0x1c0] != (btDiscreteDynamicsWorld)0x0) {
                      btAlignedFreeInternal(*(void **)(this + 0x1b8));
                      iVar3 = *(int *)(this + 0x1ac);
                    }
                    *(undefined8 *)(this + 0x1b8) = 0;
                  }
                  this[0x1c0] = (btDiscreteDynamicsWorld)0x1;
                  *(long *)(this + 0x1b8) = lVar6;
                  *(uint *)(this + 0x1b0) = uVar1;
                }
              }
              fVar16 = fVar11 * (fVar16 - fVar21);
              *(btManifoldPoint **)(*(long *)(this + 0x1b8) + (long)iVar3 * 8) = pbVar5;
              fVar18 = fVar11 * (fVar18 - fVar20);
              fVar11 = fVar11 * (fVar2 - fVar19);
              *(int *)(this + 0x1ac) = iVar3 + 1;
              local_250 = (-(fVar11 * fVar17) - fVar18 * fVar15) - fVar16 * fVar22;
              fVar18 = fVar18 + *(float *)(this_00 + 0x38);
              fVar11 = fVar11 + *(float *)(this_00 + 0x3c);
              fVar16 = fVar16 + *(float *)(this_00 + 0x40);
              fVar17 = *(float *)(local_108 + 0x3c);
              fVar22 = *(float *)(local_108 + 0x40);
              fVar15 = -*(float *)(local_108 + 0x38);
              local_290 = fVar18 * *(float *)(local_108 + 8) + fVar11 * *(float *)(local_108 + 0x18)
                          + fVar16 * *(float *)(local_108 + 0x28) +
                          ((*(float *)(local_108 + 8) * fVar15 -
                           *(float *)(local_108 + 0x18) * fVar17) -
                          *(float *)(local_108 + 0x28) * fVar22);
              fStack_28c = fVar18 * *(float *)(local_108 + 0xc) +
                           fVar11 * *(float *)(local_108 + 0x1c) +
                           fVar16 * *(float *)(local_108 + 0x2c) +
                           ((*(float *)(local_108 + 0xc) * fVar15 -
                            *(float *)(local_108 + 0x1c) * fVar17) -
                           *(float *)(local_108 + 0x2c) * fVar22);
              local_288 = fVar18 * *(float *)(local_108 + 0x10) +
                          fVar11 * *(float *)(local_108 + 0x20) +
                          fVar16 * *(float *)(local_108 + 0x30) +
                          ((*(float *)(local_108 + 0x10) * fVar15 -
                           *(float *)(local_108 + 0x20) * fVar17) -
                          *(float *)(local_108 + 0x30) * fVar22);
              uStack_298 = 0;
              local_2a0 = 0;
              local_284 = 0;
              local_24c = 0;
              local_244 = 0;
              local_230 = 0;
              local_228 = 0;
              uStack_21c = 0;
              local_224 = 0;
              uStack_20c = 0;
              uStack_214 = 0;
              iVar3 = btPersistentManifold::addManifoldPoint(pbVar5,SUB81(&local_2a0,0));
              *(undefined4 *)(pbVar5 + (long)iVar3 * 0xc0 + 100) = 0;
              uVar12 = btManifoldResult::calculateCombinedFriction
                                 ((btCollisionObject *)this_00,local_108);
              *(undefined4 *)(pbVar5 + (long)iVar3 * 0xc0 + 0x5c) = uVar12;
              uVar14 = *(undefined8 *)(this_00 + 0x40);
              uVar13 = *(undefined8 *)pbVar10;
              *(float *)(pbVar5 + (long)iVar3 * 0xc0 + 0x28) = fVar18;
              *(float *)(pbVar5 + (long)iVar3 * 0xc0 + 0x2c) = fVar11;
              *(float *)(pbVar5 + (long)iVar3 * 0xc0 + 0x30) = fVar16;
              *(undefined8 *)(pbVar5 + (long)iVar3 * 0xc0 + 0x40) = uVar14;
              *(undefined8 *)(pbVar5 + (long)iVar3 * 0xc0 + 0x38) = uVar13;
              *(undefined4 *)(pbVar5 + (long)iVar3 * 0xc0 + 0x34) = 0;
            }
            pCVar4 = (CProfileManager *)btConvexShape::~btConvexShape((btConvexShape *)&local_198);
          }
          pCVar4 = (CProfileManager *)CProfileManager::Stop_Profile(pCVar4);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(this + 0x144));
  }
  CProfileManager::Stop_Profile(pCVar4);
  return;
}

