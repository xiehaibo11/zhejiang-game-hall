
/* btCompoundCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject*, btCollisionObject*,
   btDispatcherInfo const&, btManifoldResult*) */

float __thiscall
btCompoundCollisionAlgorithm::calculateTimeOfImpact
          (btCompoundCollisionAlgorithm *this,btCollisionObject *param_1,btCollisionObject *param_2,
          btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  float *pfVar1;
  btCollisionObject *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
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
  
  uVar3 = *(uint *)(this + 0x14);
  pbVar2 = param_1;
  if (this[0x30] == (btCompoundCollisionAlgorithm)0x0) {
    pbVar2 = param_2;
    param_2 = param_1;
  }
  if ((int)uVar3 < 1) {
    fVar24 = 1.0;
  }
  else {
    lVar9 = *(long *)(param_2 + 200);
    uVar10 = 0;
    lVar11 = 0x20;
    fVar12 = *(float *)(param_2 + 8);
    fVar13 = *(float *)(param_2 + 0xc);
    fVar14 = *(float *)(param_2 + 0x10);
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    fVar15 = *(float *)(param_2 + 0x18);
    fVar16 = *(float *)(param_2 + 0x1c);
    fVar17 = *(float *)(param_2 + 0x20);
    uVar5 = *(undefined4 *)(param_2 + 0x24);
    fVar18 = *(float *)(param_2 + 0x28);
    fVar19 = *(float *)(param_2 + 0x2c);
    fVar20 = *(float *)(param_2 + 0x30);
    fVar21 = *(float *)(param_2 + 0x38);
    uVar6 = *(undefined4 *)(param_2 + 0x34);
    fVar22 = *(float *)(param_2 + 0x3c);
    fVar23 = *(float *)(param_2 + 0x40);
    uVar7 = *(undefined4 *)(param_2 + 0x44);
    fVar25 = 1.0;
    do {
      pfVar1 = (float *)(*(long *)(lVar9 + 0x28) + lVar11);
      fVar24 = pfVar1[-8];
      fVar26 = pfVar1[-7];
      fVar27 = pfVar1[-4];
      fVar28 = pfVar1[-3];
      fVar31 = pfVar1[-6];
      fVar32 = pfVar1[-2];
      fVar34 = pfVar1[4];
      fVar35 = pfVar1[5];
      fVar29 = *pfVar1;
      fVar30 = pfVar1[1];
      fVar33 = pfVar1[2];
      fVar36 = pfVar1[6];
      *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x120) + 1;
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(float *)(param_2 + 8) = fVar12 * fVar24 + fVar13 * fVar27 + fVar14 * fVar29;
      *(float *)(param_2 + 0xc) = fVar12 * fVar26 + fVar13 * fVar28 + fVar14 * fVar30;
      *(float *)(param_2 + 0x10) = fVar12 * fVar31 + fVar13 * fVar32 + fVar14 * fVar33;
      *(float *)(param_2 + 0x18) = fVar15 * fVar24 + fVar16 * fVar27 + fVar17 * fVar29;
      *(float *)(param_2 + 0x1c) = fVar15 * fVar26 + fVar16 * fVar28 + fVar17 * fVar30;
      *(float *)(param_2 + 0x20) = fVar15 * fVar31 + fVar16 * fVar32 + fVar17 * fVar33;
      *(float *)(param_2 + 0x28) = fVar18 * fVar24 + fVar19 * fVar27 + fVar20 * fVar29;
      *(float *)(param_2 + 0x2c) = fVar18 * fVar26 + fVar19 * fVar28 + fVar20 * fVar30;
      *(float *)(param_2 + 0x30) = fVar18 * fVar31 + fVar19 * fVar32 + fVar20 * fVar33;
      *(float *)(param_2 + 0x38) = fVar21 + fVar12 * fVar34 + fVar13 * fVar35 + fVar14 * fVar36;
      *(float *)(param_2 + 0x3c) = fVar22 + fVar15 * fVar34 + fVar16 * fVar35 + fVar17 * fVar36;
      *(float *)(param_2 + 0x40) = fVar23 + fVar18 * fVar34 + fVar19 * fVar35 + fVar20 * fVar36;
      *(undefined4 *)(param_2 + 0x44) = 0;
      plVar8 = *(long **)(*(long *)(this + 0x20) + uVar10 * 8);
      fVar24 = (float)(**(code **)(*plVar8 + 0x18))(plVar8,param_2,pbVar2,param_3,param_4);
      *(float *)(param_2 + 0x10) = fVar14;
      *(float *)(param_2 + 8) = fVar12;
      *(float *)(param_2 + 0xc) = fVar13;
      *(float *)(param_2 + 0x18) = fVar15;
      *(float *)(param_2 + 0x1c) = fVar16;
      *(float *)(param_2 + 0x20) = fVar17;
      *(undefined4 *)(param_2 + 0x14) = uVar4;
      *(float *)(param_2 + 0x28) = fVar18;
      *(float *)(param_2 + 0x2c) = fVar19;
      *(float *)(param_2 + 0x30) = fVar20;
      *(undefined4 *)(param_2 + 0x34) = uVar6;
      *(undefined4 *)(param_2 + 0x24) = uVar5;
      uVar10 = uVar10 + 1;
      if (fVar25 <= fVar24) {
        fVar24 = fVar25;
      }
      *(float *)(param_2 + 0x38) = fVar21;
      lVar11 = lVar11 + 0x58;
      *(float *)(param_2 + 0x3c) = fVar22;
      *(undefined4 *)(param_2 + 0x44) = uVar7;
      *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x120) + 1;
      *(float *)(param_2 + 0x40) = fVar23;
      fVar25 = fVar24;
    } while (uVar3 != uVar10);
  }
  return fVar24;
}

