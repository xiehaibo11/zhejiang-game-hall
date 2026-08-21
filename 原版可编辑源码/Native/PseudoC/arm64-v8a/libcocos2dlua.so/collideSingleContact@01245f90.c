
/* btConvexPlaneCollisionAlgorithm::collideSingleContact(btQuaternion const&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, btDispatcherInfo const&,
   btManifoldResult*) */

void __thiscall
btConvexPlaneCollisionAlgorithm::collideSingleContact
          (btConvexPlaneCollisionAlgorithm *this,btQuaternion *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3,
          btDispatcherInfo *param_4,btManifoldResult *param_5)

{
  btCollisionObjectWrapper *pbVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  
  fVar10 = *(float *)param_1;
  fVar11 = *(float *)(param_1 + 4);
  fVar12 = *(float *)(param_1 + 8);
  fVar13 = *(float *)(param_1 + 0xc);
  pbVar1 = param_2;
  if (this[0x20] == (btConvexPlaneCollisionAlgorithm)0x0) {
    pbVar1 = param_3;
    param_3 = param_2;
  }
  pfVar3 = *(float **)(param_3 + 0x18);
  pfVar2 = *(float **)(pbVar1 + 0x18);
  fVar5 = 2.0 / (fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13);
  fVar26 = fVar11 * fVar5;
  fVar29 = fVar12 * fVar5;
  fVar31 = *pfVar3;
  fVar33 = pfVar3[1];
  fVar9 = pfVar3[2];
  fVar35 = pfVar3[4];
  fVar36 = pfVar3[5];
  fVar22 = pfVar3[6];
  fVar7 = *pfVar2;
  fVar8 = pfVar2[4];
  fVar6 = pfVar2[0xd];
  fVar39 = pfVar3[0xc];
  fVar40 = pfVar3[0xd];
  fVar48 = fVar13 * fVar10 * fVar5;
  fVar24 = fVar10 * fVar10 * fVar5;
  fVar15 = fVar10 * fVar26 - fVar13 * fVar29;
  fVar16 = fVar10 * fVar29 + fVar13 * fVar26;
  fVar14 = fVar10 * fVar26 + fVar13 * fVar29;
  fVar51 = fVar11 * fVar29 - fVar48;
  fVar47 = fVar10 * fVar29 - fVar13 * fVar26;
  fVar48 = fVar11 * fVar29 + fVar48;
  fVar27 = 1.0 - (fVar11 * fVar26 + fVar12 * fVar29);
  fVar5 = 1.0 - (fVar24 + fVar12 * fVar29);
  fVar13 = 1.0 - (fVar24 + fVar11 * fVar26);
  fVar25 = -fVar6;
  fVar41 = (float)*(undefined8 *)(pfVar2 + 1);
  fVar43 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20);
  fVar44 = (float)*(undefined8 *)(pfVar2 + 5);
  fVar46 = (float)((ulong)*(undefined8 *)(pfVar2 + 5) >> 0x20);
  fVar18 = pfVar3[8];
  fVar11 = pfVar3[9];
  fVar17 = pfVar2[8];
  fVar28 = -pfVar2[0xc];
  fVar37 = pfVar3[10];
  fVar24 = (float)*(undefined8 *)(pfVar2 + 9);
  fVar29 = (float)((ulong)*(undefined8 *)(pfVar2 + 9) >> 0x20);
  fVar50 = pfVar2[0xe];
  fVar19 = pfVar3[0xe];
  fVar38 = -fVar50;
  fVar42 = fVar9 * fVar48 + fVar31 * fVar15 + fVar33 * fVar5;
  fVar12 = fVar31 * fVar16 + fVar33 * fVar51 + fVar9 * fVar13;
  fVar32 = pfVar2[1];
  fVar45 = pfVar2[2];
  fVar34 = fVar22 * fVar48 + fVar35 * fVar15 + fVar36 * fVar5;
  fVar49 = pfVar2[5];
  fVar26 = pfVar2[6];
  fVar30 = fVar9 * fVar47 + fVar33 * fVar14 + fVar31 * fVar27;
  fVar10 = fVar22 * fVar47 + fVar36 * fVar14 + fVar35 * fVar27;
  fVar20 = pfVar2[9];
  fVar21 = pfVar2[10];
  lVar4 = *(long *)(pbVar1 + 8);
  fVar23 = fVar35 * fVar16 + fVar36 * fVar51 + fVar22 * fVar13;
  fVar14 = fVar37 * fVar47 + fVar11 * fVar14 + fVar18 * fVar27;
  fVar5 = fVar37 * fVar48 + fVar18 * fVar15 + fVar11 * fVar5;
  fVar13 = fVar18 * fVar16 + fVar11 * fVar51 + fVar37 * fVar13;
  fVar48 = *(float *)(lVar4 + 0x40);
  fVar15 = -*(float *)(lVar4 + 0x3c);
  fVar16 = *(float *)(lVar4 + 0x44);
  local_80 = ((fVar17 * fVar14 + fVar7 * fVar30 + fVar8 * fVar10) * fVar15 -
             (fVar20 * fVar14 + fVar32 * fVar30 + fVar49 * fVar10) * fVar48) -
             (fVar21 * fVar14 + fVar45 * fVar30 + fVar26 * fVar10) * fVar16;
  fVar5 = ((fVar17 * fVar5 + fVar7 * fVar42 + fVar8 * fVar34) * fVar15 -
          (fVar20 * fVar5 + fVar32 * fVar42 + fVar49 * fVar34) * fVar48) -
          (fVar21 * fVar5 + fVar45 * fVar42 + fVar26 * fVar34) * fVar16;
  local_78 = ((fVar17 * fVar13 + fVar7 * fVar12 + fVar8 * fVar23) * fVar15 -
             (fVar20 * fVar13 + fVar32 * fVar12 + fVar49 * fVar23) * fVar48) -
             (fVar21 * fVar13 + fVar45 * fVar12 + fVar26 * fVar23) * fVar16;
  local_74 = 0;
  fStack_7c = fVar5;
  fVar10 = local_78;
  fVar12 = (float)(**(code **)(**(long **)(param_3 + 8) + 0x80))(*(long **)(param_3 + 8),&local_80);
  pfVar2 = *(float **)(pbVar1 + 0x18);
  fVar20 = *(float *)(lVar4 + 0x3c);
  fVar16 = *pfVar2;
  fVar48 = pfVar2[1];
  fVar13 = fVar39 * fVar7 + fVar40 * fVar8 + fVar19 * fVar17 +
           ((fVar7 * fVar28 - fVar8 * fVar6) - fVar17 * fVar50) +
           (fVar9 * fVar7 + fVar22 * fVar8 + fVar37 * fVar17) * fVar10 +
           (fVar31 * fVar7 + fVar35 * fVar8 + fVar18 * fVar17) * fVar12 +
           (fVar33 * fVar7 + fVar36 * fVar8 + fVar11 * fVar17) * fVar5;
  fVar7 = pfVar2[2];
  fVar6 = fVar41 * fVar39 + fVar44 * fVar40 + fVar24 * fVar19 +
          fVar41 * fVar28 + fVar44 * fVar25 + fVar24 * fVar38 +
          (fVar41 * fVar9 + fVar44 * fVar22 + fVar24 * fVar37) * fVar10 +
          (fVar41 * fVar31 + fVar44 * fVar35 + fVar24 * fVar18) * fVar12 +
          (fVar41 * fVar33 + fVar44 * fVar36 + fVar24 * fVar11) * fVar5;
  fVar11 = fVar43 * fVar39 + fVar46 * fVar40 + fVar29 * fVar19 +
           fVar43 * fVar28 + fVar46 * fVar25 + fVar29 * fVar38 +
           (fVar43 * fVar9 + fVar46 * fVar22 + fVar29 * fVar37) * fVar10 +
           (fVar43 * fVar31 + fVar46 * fVar35 + fVar29 * fVar18) * fVar12 +
           (fVar43 * fVar33 + fVar46 * fVar36 + fVar29 * fVar11) * fVar5;
  fVar18 = pfVar2[4];
  fVar12 = pfVar2[5];
  fVar5 = pfVar2[6];
  fVar19 = pfVar2[8];
  fVar8 = pfVar2[9];
  fVar9 = pfVar2[0xc];
  fVar17 = pfVar2[10];
  fVar14 = pfVar2[0xd];
  fVar15 = pfVar2[0xe];
  fVar24 = (float)*(undefined8 *)(lVar4 + 0x40);
  fVar26 = (float)((ulong)*(undefined8 *)(lVar4 + 0x40) >> 0x20);
  fVar29 = (fVar26 * fVar11 + fVar20 * fVar13 + fVar24 * fVar6) - *(float *)(lVar4 + 0x4c);
  fVar10 = (float)btPersistentManifold::getContactBreakingThreshold
                            (*(btPersistentManifold **)(this + 0x18));
  *(undefined8 *)(param_5 + 8) = *(undefined8 *)(this + 0x18);
  if (fVar29 < fVar10) {
    fVar6 = fVar6 - fVar29 * fVar24;
    fVar13 = fVar13 - fVar20 * fVar29;
    pfVar2 = *(float **)(pbVar1 + 0x18);
    fVar11 = fVar11 - fVar29 * fVar26;
    local_88 = fVar13 * fVar19 + fVar6 * fVar8 + fVar11 * fVar17 + fVar15;
    fVar10 = *(float *)(lVar4 + 0x3c);
    fVar8 = *(float *)(lVar4 + 0x40);
    fVar15 = *(float *)(lVar4 + 0x44);
    fStack_8c = fVar11 * fVar5 + fVar18 * fVar13 + fVar12 * fVar6 + fVar14;
    local_90 = fVar7 * fVar11 + fVar16 * fVar13 + fVar48 * fVar6 + fVar9;
    local_80 = *pfVar2 * fVar10 + pfVar2[1] * fVar8 + pfVar2[2] * fVar15;
    fStack_7c = fVar10 * pfVar2[4] + fVar8 * pfVar2[5] + fVar15 * pfVar2[6];
    local_78 = fVar10 * pfVar2[8] + fVar8 * pfVar2[9] + fVar15 * pfVar2[10];
    local_74 = 0;
    local_84 = 0;
    (**(code **)(*(long *)param_5 + 0x20))(fVar29,param_5,&local_80,&local_90);
  }
  return;
}

