
/* btDiscreteDynamicsWorld::integrateTransforms(float) */

void __thiscall
btDiscreteDynamicsWorld::integrateTransforms(btDiscreteDynamicsWorld *this,float param_1)

{
  btCollisionObject *this_00;
  undefined4 uVar1;
  bool bVar2;
  CProfileManager *pCVar3;
  btRigidBody *pbVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float extraout_s0;
  float extraout_s0_00;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_168;
  float local_160;
  undefined4 local_15c;
  undefined4 local_140;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_d8;
  btRigidBody *pbStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  btTransform local_b0 [48];
  float local_80;
  float fStack_7c;
  float fStack_78;
  
  pCVar3 = (CProfileManager *)CProfileManager::Start_Profile("integrateTransforms");
  if (0 < *(int *)(this + 0x144)) {
    lVar5 = 0;
    do {
      pbVar4 = *(btRigidBody **)(*(long *)(this + 0x150) + lVar5 * 8);
      *(undefined4 *)(pbVar4 + 0x110) = 0x3f800000;
      if ((*(int *)(pbVar4 + 0xec) != 2 && *(int *)(pbVar4 + 0xec) != 5) &&
         (((byte)pbVar4[0xe0] & 3) == 0)) {
        btRigidBody::predictIntegratedTransform(pbVar4,param_1,local_b0);
        if ((this[0x40] != (btDiscreteDynamicsWorld)0x0) &&
           ((fVar9 = *(float *)(pbVar4 + 0x118) * *(float *)(pbVar4 + 0x118), fVar9 != 0.0 &&
            (fVar10 = local_80 - *(float *)(pbVar4 + 0x38),
            fVar11 = fStack_7c - (float)*(undefined8 *)(pbVar4 + 0x3c),
            fVar12 = fStack_78 - (float)((ulong)*(undefined8 *)(pbVar4 + 0x3c) >> 0x20),
            fVar9 < fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12)))) {
          pCVar3 = (CProfileManager *)CProfileManager::Start_Profile("CCD motion clamping");
          if (*(int *)(*(long *)(pbVar4 + 200) + 8) < 0x14) {
            gNumClampedCcdMotions = gNumClampedCcdMotions + 1;
            local_c0 = (**(code **)(**(long **)(this + 0x60) + 0x48))();
            uStack_b8 = *(undefined8 *)(this + 0x28);
            local_120 = 0xffff00013f800000;
            uStack_110 = *(undefined8 *)(pbVar4 + 0x40);
            local_118 = *(undefined8 *)(pbVar4 + 0x38);
            local_d8 = 0;
            local_c8 = 0;
            local_128 = &PTR__ConvexResultCallback_0172db78;
            uVar1 = *(undefined4 *)(pbVar4 + 0x114);
            pbStack_d0 = pbVar4;
            btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)&local_168);
            local_168 = &PTR__btConvexShape_01733760;
            local_160 = 1.12104e-44;
            local_c8 = *(undefined4 *)(this + 0x54);
            local_120 = CONCAT26(*(undefined2 *)(*(long *)(pbVar4 + 0xc0) + 10),
                                 CONCAT24(*(undefined2 *)(*(long *)(pbVar4 + 0xc0) + 8),
                                          (float)local_120));
            uStack_1a8 = *(ulong *)(pbVar4 + 0x10);
            local_1b0 = *(undefined8 *)(pbVar4 + 8);
            uStack_198 = *(undefined8 *)(pbVar4 + 0x20);
            local_1a0 = *(undefined8 *)(pbVar4 + 0x18);
            uStack_188 = *(undefined8 *)(pbVar4 + 0x30);
            local_190 = *(undefined8 *)(pbVar4 + 0x28);
            local_140 = uVar1;
            local_130 = uVar1;
            btCollisionWorld::convexSweepTest
                      ((btCollisionWorld *)this,(btConvexShape *)&local_168,
                       (btTransform *)(pbVar4 + 8),(btTransform *)&local_1b0,
                       (ConvexResultCallback *)&local_128,0.0);
            bVar2 = (float)local_120 < 1.0;
            if (bVar2) {
              *(float *)(pbVar4 + 0x110) = (float)local_120;
              btRigidBody::predictIntegratedTransform(pbVar4,(float)local_120 * param_1,local_b0);
              *(undefined4 *)(pbVar4 + 0x110) = 0;
              btRigidBody::proceedToTransform((btTransform *)pbVar4);
            }
            pCVar3 = (CProfileManager *)btConvexShape::~btConvexShape((btConvexShape *)&local_168);
            if (!bVar2) goto LAB_011cce7c;
          }
          else {
LAB_011cce7c:
            bVar2 = false;
          }
          pCVar3 = (CProfileManager *)CProfileManager::Stop_Profile(pCVar3);
          if (bVar2) goto LAB_011cce94;
        }
        pCVar3 = (CProfileManager *)btRigidBody::proceedToTransform((btTransform *)pbVar4);
      }
LAB_011cce94:
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(this + 0x144));
  }
  if (this[0x17b] != (btDiscreteDynamicsWorld)0x0) {
    pCVar3 = (CProfileManager *)
             CProfileManager::Start_Profile("apply speculative contact restitution");
    if (0 < *(int *)(this + 0x1ac)) {
      lVar5 = 0;
      do {
        lVar6 = *(long *)(*(long *)(this + 0x1b8) + lVar5 * 8);
        this_00 = (btCollisionObject *)0x0;
        if (((byte)(*(btCollisionObject **)(lVar6 + 0x308))[0x100] & 2) != 0) {
          this_00 = *(btCollisionObject **)(lVar6 + 0x308);
        }
        pbVar4 = (btRigidBody *)0x0;
        if (((byte)(*(btRigidBody **)(lVar6 + 0x310))[0x100] & 2) != 0) {
          pbVar4 = *(btRigidBody **)(lVar6 + 0x310);
        }
        if (0 < *(int *)(lVar6 + 0x318)) {
          if (this_00 == (btCollisionObject *)0x0) {
            lVar7 = 0;
            pfVar8 = (float *)(lVar6 + 0x48);
            do {
              pCVar3 = (CProfileManager *)
                       btManifoldResult::calculateCombinedRestitution
                                 ((btCollisionObject *)0x0,(btCollisionObject *)pbVar4);
              if ((0.0 < extraout_s0_00) && (fVar9 = pfVar8[0xf], fVar9 != 0.0)) {
                local_1c0 = extraout_s0_00 * *pfVar8 * fVar9;
                fStack_1bc = extraout_s0_00 * pfVar8[1] * fVar9;
                local_128 = (undefined **)
                            CONCAT44(-(extraout_s0_00 * pfVar8[1] * fVar9),
                                     -(extraout_s0_00 * *pfVar8 * fVar9));
                local_120 = (ulong)(uint)-(extraout_s0_00 * pfVar8[2] * fVar9);
                local_1b8 = extraout_s0_00 * pfVar8[2] * fVar9;
                local_160 = pfVar8[-2] - fRam0000000000000040;
                local_168 = (undefined **)
                            CONCAT44(pfVar8[-3] - fRam000000000000003c,
                                     pfVar8[-4] - fRam0000000000000038);
                local_15c = 0;
                local_1b0 = CONCAT44(pfVar8[-7] - *(float *)(pbVar4 + 0x3c),
                                     pfVar8[-8] - *(float *)(pbVar4 + 0x38));
                uStack_1a8 = (ulong)(uint)(pfVar8[-6] - *(float *)(pbVar4 + 0x40));
                local_1b4 = 0;
                pCVar3 = (CProfileManager *)
                         btRigidBody::applyImpulse
                                   (pbVar4,(btVector3 *)&local_1c0,(btVector3 *)&local_1b0);
              }
              lVar7 = lVar7 + 1;
              pfVar8 = pfVar8 + 0x30;
            } while (lVar7 < *(int *)(lVar6 + 0x318));
          }
          else {
            lVar7 = 0;
            pfVar8 = (float *)(lVar6 + 0x48);
            do {
              pCVar3 = (CProfileManager *)
                       btManifoldResult::calculateCombinedRestitution
                                 (this_00,(btCollisionObject *)pbVar4);
              if ((0.0 < extraout_s0) && (fVar9 = pfVar8[0xf], fVar9 != 0.0)) {
                local_128 = (undefined **)
                            CONCAT44(-(extraout_s0 * pfVar8[1] * fVar9),
                                     -(extraout_s0 * *pfVar8 * fVar9));
                local_120 = (ulong)(uint)-(extraout_s0 * pfVar8[2] * fVar9);
                local_15c = 0;
                local_160 = pfVar8[-2] - *(float *)(this_00 + 0x40);
                local_168 = (undefined **)
                            CONCAT44(pfVar8[-3] - *(float *)(this_00 + 0x3c),
                                     pfVar8[-4] - *(float *)(this_00 + 0x38));
                local_1b0 = CONCAT44(pfVar8[-7] - *(float *)(pbVar4 + 0x3c),
                                     pfVar8[-8] - *(float *)(pbVar4 + 0x38));
                uStack_1a8 = (ulong)(uint)(pfVar8[-6] - *(float *)(pbVar4 + 0x40));
                btRigidBody::applyImpulse
                          ((btRigidBody *)this_00,(btVector3 *)&local_128,(btVector3 *)&local_168);
                local_1b4 = 0;
                local_1c0 = -(float)local_128;
                fStack_1bc = -local_128._4_4_;
                local_1b8 = -(float)local_120;
                pCVar3 = (CProfileManager *)
                         btRigidBody::applyImpulse
                                   (pbVar4,(btVector3 *)&local_1c0,(btVector3 *)&local_1b0);
              }
              lVar7 = lVar7 + 1;
              pfVar8 = pfVar8 + 0x30;
            } while (lVar7 < *(int *)(lVar6 + 0x318));
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(this + 0x1ac));
    }
    pCVar3 = (CProfileManager *)CProfileManager::Stop_Profile(pCVar3);
  }
  CProfileManager::Stop_Profile(pCVar3);
  return;
}

