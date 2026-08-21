
/* WARNING: Type propagation algorithm not settling */
/* btCompoundCompoundCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btCompoundCompoundCollisionAlgorithm::processCollision
          (btCompoundCompoundCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  long *plVar7;
  btPersistentManifold *this_00;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  btHashedSimplePairCache *this_01;
  long lVar24;
  long lVar25;
  uint uVar26;
  btCompoundCompoundCollisionAlgorithm *pbVar27;
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
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float local_150;
  undefined4 local_14c;
  float local_148;
  float fStack_144;
  float local_140;
  undefined4 local_13c;
  float local_138;
  float fStack_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 uStack_e8;
  int local_e4;
  int iStack_e0;
  btCollisionObjectWrapper *local_d8;
  btCollisionObjectWrapper *local_d0;
  undefined8 uStack_c8;
  btDispatcherInfo *local_c0;
  btManifoldResult *pbStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  lVar11 = *(long *)(param_1 + 8);
  lVar16 = *(long *)(param_2 + 8);
  if ((*(int *)(lVar11 + 0x60) != *(int *)(this + 0x44)) ||
     (*(int *)(lVar16 + 0x60) != *(int *)(this + 0x48))) {
    this_01 = *(btHashedSimplePairCache **)(this + 0x10);
    uVar23 = (ulong)*(uint *)(this_01 + 0xc);
    if (0 < (int)*(uint *)(this_01 + 0xc)) {
      lVar19 = 8;
      do {
        puVar20 = *(undefined8 **)(*(long *)(this_01 + 0x18) + lVar19);
        if (puVar20 != (undefined8 *)0x0) {
          (**(code **)*puVar20)(puVar20);
          (**(code **)(**(long **)(this + 8) + 0x78))(*(long **)(this + 8),puVar20);
        }
        uVar23 = uVar23 - 1;
        lVar19 = lVar19 + 0x10;
      } while (uVar23 != 0);
      this_01 = *(btHashedSimplePairCache **)(this + 0x10);
    }
    btHashedSimplePairCache::removeAllPairs(this_01);
  }
  pbVar27 = this + 0x10;
  local_d0 = (btCollisionObjectWrapper *)CONCAT71(local_d0._1_7_,1);
  local_d8 = (void *)0x0;
  iStack_e0 = 0;
  lVar19 = *(long *)pbVar27;
  iVar10 = *(int *)(lVar19 + 0xc);
  if (0 < iVar10) {
    lVar24 = 0;
    do {
      local_e4 = 0;
      plVar7 = *(long **)(*(long *)(lVar19 + 0x18) + lVar24 * 0x10 + 8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7,&uStack_e8);
        iVar10 = local_e4;
        if (0 < local_e4) {
          lVar25 = 0;
          do {
            this_00 = *(btPersistentManifold **)((long)local_d8 + lVar25 * 8);
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
              iVar10 = local_e4;
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 < iVar10);
        }
        if (iVar10 < 0) {
          if (iStack_e0 < 0) {
            if ((local_d8 != (void *)0x0) && ((char)local_d0 != '\0')) {
              btAlignedFreeInternal(local_d8);
            }
            local_d0 = (btCollisionObjectWrapper *)CONCAT71(local_d0._1_7_,1);
            local_d8 = (void *)0x0;
            iStack_e0 = 0;
          }
          lVar25 = (long)iVar10;
          do {
            *(undefined8 *)((long)local_d8 + lVar25 * 8) = 0;
            lVar25 = lVar25 + 1;
          } while (lVar25 != 0);
        }
        iVar10 = *(int *)(lVar19 + 0xc);
      }
      local_e4 = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < iVar10);
    if ((local_d8 != (void *)0x0) && ((char)local_d0 != '\0')) {
      btAlignedFreeInternal(local_d8);
    }
  }
  uStack_c8 = *(undefined8 *)(this + 8);
  local_b0 = *(undefined8 *)pbVar27;
  uStack_a8 = *(undefined8 *)(this + 0x38);
  iStack_e0 = 0;
  uStack_e8 = 0x1734308;
  local_e4 = 0;
  lVar19 = **(long **)(lVar11 + 0x58);
  local_d8 = param_1;
  local_d0 = param_2;
  local_c0 = param_3;
  pbStack_b8 = param_4;
  if ((lVar19 != 0) && (lVar24 = **(long **)(lVar16 + 0x58), lVar24 != 0)) {
    pfVar12 = *(float **)(param_1 + 0x18);
    fVar28 = *pfVar12;
    pfVar14 = *(float **)(param_2 + 0x18);
    fVar29 = pfVar12[1];
    fVar30 = pfVar12[8];
    fVar53 = pfVar12[4];
    fVar49 = pfVar12[5];
    fVar31 = pfVar12[2];
    fVar54 = pfVar12[9];
    fVar32 = pfVar12[0xc];
    fVar50 = pfVar12[6];
    fVar51 = pfVar12[10];
    fVar56 = pfVar12[0xd];
    fVar33 = pfVar12[0xe];
    fVar34 = *pfVar14;
    fVar35 = pfVar14[1];
    fVar36 = pfVar14[4];
    fVar37 = pfVar14[5];
    fVar38 = pfVar14[8];
    fVar39 = pfVar14[9];
    fVar40 = pfVar14[2];
    fVar41 = pfVar14[6];
    fVar42 = pfVar14[10];
    fVar43 = pfVar14[0xc];
    fVar44 = pfVar14[0xd];
    fVar45 = pfVar14[0xe];
    plVar7 = (long *)btAlignedAllocInternal(0x800,0x10);
    plVar7[1] = CONCAT44(uStack_15c,fStack_160);
    *plVar7 = CONCAT44(fStack_164,local_168);
    uVar23 = 1;
    iVar10 = 0x7c;
    uVar26 = 0x80;
    plVar7[3] = CONCAT44(uStack_15c,fStack_160);
    plVar7[2] = CONCAT44(fStack_164,local_168);
    uVar18 = 0x80;
    plVar7[5] = CONCAT44(uStack_15c,fStack_160);
    plVar7[4] = CONCAT44(fStack_164,local_168);
    plVar7[7] = CONCAT44(uStack_15c,fStack_160);
    plVar7[6] = CONCAT44(fStack_164,local_168);
    plVar7[9] = CONCAT44(uStack_15c,fStack_160);
    plVar7[8] = CONCAT44(fStack_164,local_168);
    plVar7[0xb] = CONCAT44(uStack_15c,fStack_160);
    plVar7[10] = CONCAT44(fStack_164,local_168);
    plVar7[0xd] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xc] = CONCAT44(fStack_164,local_168);
    plVar7[0xf] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xe] = CONCAT44(fStack_164,local_168);
    plVar7[0x11] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x10] = CONCAT44(fStack_164,local_168);
    plVar7[0x13] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x12] = CONCAT44(fStack_164,local_168);
    plVar7[0x15] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x14] = CONCAT44(fStack_164,local_168);
    plVar7[0x17] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x16] = CONCAT44(fStack_164,local_168);
    plVar7[0x19] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x18] = CONCAT44(fStack_164,local_168);
    plVar7[0x1b] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x1a] = CONCAT44(fStack_164,local_168);
    plVar7[0x1d] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x1c] = CONCAT44(fStack_164,local_168);
    plVar7[0x1f] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x1e] = CONCAT44(fStack_164,local_168);
    plVar7[0x21] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x20] = CONCAT44(fStack_164,local_168);
    plVar7[0x23] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x22] = CONCAT44(fStack_164,local_168);
    plVar7[0x25] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x24] = CONCAT44(fStack_164,local_168);
    plVar7[0x27] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x26] = CONCAT44(fStack_164,local_168);
    plVar7[0x29] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x28] = CONCAT44(fStack_164,local_168);
    plVar7[0x2b] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x2a] = CONCAT44(fStack_164,local_168);
    plVar7[0x2d] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x2c] = CONCAT44(fStack_164,local_168);
    plVar7[0x2f] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x2e] = CONCAT44(fStack_164,local_168);
    plVar7[0x31] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x30] = CONCAT44(fStack_164,local_168);
    plVar7[0x33] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x32] = CONCAT44(fStack_164,local_168);
    plVar7[0x35] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x34] = CONCAT44(fStack_164,local_168);
    plVar7[0x37] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x36] = CONCAT44(fStack_164,local_168);
    plVar7[0x39] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x38] = CONCAT44(fStack_164,local_168);
    plVar7[0x3b] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x3a] = CONCAT44(fStack_164,local_168);
    plVar7[0x3d] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x3c] = CONCAT44(fStack_164,local_168);
    plVar7[0x3f] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x3e] = CONCAT44(fStack_164,local_168);
    plVar7[0x41] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x40] = CONCAT44(fStack_164,local_168);
    plVar7[0x43] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x42] = CONCAT44(fStack_164,local_168);
    plVar7[0x45] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x44] = CONCAT44(fStack_164,local_168);
    plVar7[0x47] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x46] = CONCAT44(fStack_164,local_168);
    plVar7[0x49] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x48] = CONCAT44(fStack_164,local_168);
    plVar7[0x4b] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x4a] = CONCAT44(fStack_164,local_168);
    plVar7[0x4d] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x4c] = CONCAT44(fStack_164,local_168);
    plVar7[0x4f] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x4e] = CONCAT44(fStack_164,local_168);
    plVar7[0x51] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x50] = CONCAT44(fStack_164,local_168);
    plVar7[0x53] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x52] = CONCAT44(fStack_164,local_168);
    plVar7[0x55] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x54] = CONCAT44(fStack_164,local_168);
    plVar7[0x57] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x56] = CONCAT44(fStack_164,local_168);
    plVar7[0x59] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x58] = CONCAT44(fStack_164,local_168);
    plVar7[0x5b] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x5a] = CONCAT44(fStack_164,local_168);
    plVar7[0x5d] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x5c] = CONCAT44(fStack_164,local_168);
    plVar7[0x5f] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x5e] = CONCAT44(fStack_164,local_168);
    plVar7[0x61] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x60] = CONCAT44(fStack_164,local_168);
    plVar7[99] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x62] = CONCAT44(fStack_164,local_168);
    plVar7[0x65] = CONCAT44(uStack_15c,fStack_160);
    plVar7[100] = CONCAT44(fStack_164,local_168);
    plVar7[0x67] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x66] = CONCAT44(fStack_164,local_168);
    plVar7[0x69] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x68] = CONCAT44(fStack_164,local_168);
    plVar7[0x6b] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x6a] = CONCAT44(fStack_164,local_168);
    plVar7[0x6d] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x6c] = CONCAT44(fStack_164,local_168);
    plVar7[0x6f] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x6e] = CONCAT44(fStack_164,local_168);
    plVar7[0x71] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x70] = CONCAT44(fStack_164,local_168);
    plVar7[0x73] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x72] = CONCAT44(fStack_164,local_168);
    plVar7[0x75] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x74] = CONCAT44(fStack_164,local_168);
    plVar7[0x77] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x76] = CONCAT44(fStack_164,local_168);
    plVar7[0x79] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x78] = CONCAT44(fStack_164,local_168);
    plVar7[0x7b] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x7a] = CONCAT44(fStack_164,local_168);
    plVar7[0x7d] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x7c] = CONCAT44(fStack_164,local_168);
    plVar7[0x7f] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x7e] = CONCAT44(fStack_164,local_168);
    plVar7[0x81] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x80] = CONCAT44(fStack_164,local_168);
    plVar7[0x83] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x82] = CONCAT44(fStack_164,local_168);
    plVar7[0x85] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x84] = CONCAT44(fStack_164,local_168);
    plVar7[0x87] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x86] = CONCAT44(fStack_164,local_168);
    plVar7[0x89] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x88] = CONCAT44(fStack_164,local_168);
    plVar7[0x8b] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x8a] = CONCAT44(fStack_164,local_168);
    plVar7[0x8d] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x8c] = CONCAT44(fStack_164,local_168);
    plVar7[0x8f] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x8e] = CONCAT44(fStack_164,local_168);
    plVar7[0x91] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x90] = CONCAT44(fStack_164,local_168);
    plVar7[0x93] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x92] = CONCAT44(fStack_164,local_168);
    plVar7[0x95] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x94] = CONCAT44(fStack_164,local_168);
    plVar7[0x97] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x96] = CONCAT44(fStack_164,local_168);
    plVar7[0x99] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x98] = CONCAT44(fStack_164,local_168);
    plVar7[0x9b] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x9a] = CONCAT44(fStack_164,local_168);
    plVar7[0x9d] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x9c] = CONCAT44(fStack_164,local_168);
    plVar7[0x9f] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0x9e] = CONCAT44(fStack_164,local_168);
    plVar7[0xa1] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xa0] = CONCAT44(fStack_164,local_168);
    plVar7[0xa3] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xa2] = CONCAT44(fStack_164,local_168);
    plVar7[0xa5] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xa4] = CONCAT44(fStack_164,local_168);
    plVar7[0xa7] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xa6] = CONCAT44(fStack_164,local_168);
    plVar7[0xa9] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xa8] = CONCAT44(fStack_164,local_168);
    plVar7[0xab] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xaa] = CONCAT44(fStack_164,local_168);
    plVar7[0xad] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xac] = CONCAT44(fStack_164,local_168);
    plVar7[0xaf] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xae] = CONCAT44(fStack_164,local_168);
    plVar7[0xb1] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xb0] = CONCAT44(fStack_164,local_168);
    plVar7[0xb3] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xb2] = CONCAT44(fStack_164,local_168);
    plVar7[0xb5] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xb4] = CONCAT44(fStack_164,local_168);
    plVar7[0xb7] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xb6] = CONCAT44(fStack_164,local_168);
    plVar7[0xb9] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xb8] = CONCAT44(fStack_164,local_168);
    plVar7[0xbb] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xba] = CONCAT44(fStack_164,local_168);
    plVar7[0xbd] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xbc] = CONCAT44(fStack_164,local_168);
    plVar7[0xbf] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xbe] = CONCAT44(fStack_164,local_168);
    plVar7[0xc1] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xc0] = CONCAT44(fStack_164,local_168);
    plVar7[0xc3] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xc2] = CONCAT44(fStack_164,local_168);
    plVar7[0xc5] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xc4] = CONCAT44(fStack_164,local_168);
    plVar7[199] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xc6] = CONCAT44(fStack_164,local_168);
    plVar7[0xc9] = CONCAT44(uStack_15c,fStack_160);
    plVar7[200] = CONCAT44(fStack_164,local_168);
    plVar7[0xcb] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xca] = CONCAT44(fStack_164,local_168);
    plVar7[0xcd] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xcc] = CONCAT44(fStack_164,local_168);
    plVar7[0xcf] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xce] = CONCAT44(fStack_164,local_168);
    plVar7[0xd1] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xd0] = CONCAT44(fStack_164,local_168);
    plVar7[0xd3] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xd2] = CONCAT44(fStack_164,local_168);
    plVar7[0xd5] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xd4] = CONCAT44(fStack_164,local_168);
    plVar7[0xd7] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xd6] = CONCAT44(fStack_164,local_168);
    plVar7[0xd9] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xd8] = CONCAT44(fStack_164,local_168);
    plVar7[0xdb] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xda] = CONCAT44(fStack_164,local_168);
    plVar7[0xdd] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xdc] = CONCAT44(fStack_164,local_168);
    fVar32 = -fVar32;
    plVar7[0xdf] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xde] = CONCAT44(fStack_164,local_168);
    plVar7[0xe1] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xe0] = CONCAT44(fStack_164,local_168);
    plVar7[0xe3] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xe2] = CONCAT44(fStack_164,local_168);
    plVar7[0xe5] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xe4] = CONCAT44(fStack_164,local_168);
    plVar7[0xe7] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xe6] = CONCAT44(fStack_164,local_168);
    plVar7[0xe9] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xe8] = CONCAT44(fStack_164,local_168);
    plVar7[0xeb] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xea] = CONCAT44(fStack_164,local_168);
    fVar58 = fVar28 * fVar34 + fVar53 * fVar36 + fVar30 * fVar38;
    plVar7[0xed] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xec] = CONCAT44(fStack_164,local_168);
    fVar52 = fVar28 * fVar35 + fVar53 * fVar37 + fVar30 * fVar39;
    fVar55 = fVar28 * fVar40 + fVar53 * fVar41 + fVar30 * fVar42;
    fVar57 = fVar29 * fVar34 + fVar49 * fVar36 + fVar54 * fVar38;
    plVar7[0xef] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xee] = CONCAT44(fStack_164,local_168);
    fVar59 = fVar29 * fVar35 + fVar49 * fVar37 + fVar54 * fVar39;
    fVar60 = fVar29 * fVar40 + fVar49 * fVar41 + fVar54 * fVar42;
    fVar34 = fVar31 * fVar34 + fVar50 * fVar36 + fVar51 * fVar38;
    plVar7[0xf1] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xf0] = CONCAT44(fStack_164,local_168);
    fVar35 = fVar31 * fVar35 + fVar50 * fVar37 + fVar51 * fVar39;
    fVar36 = fVar31 * fVar40 + fVar50 * fVar41 + fVar51 * fVar42;
    plVar7[0xf3] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xf2] = CONCAT44(fStack_164,local_168);
    plVar7[0xf5] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xf4] = CONCAT44(fStack_164,local_168);
    plVar7[0xf7] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xf6] = CONCAT44(fStack_164,local_168);
    plVar7[0xf9] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xf8] = CONCAT44(fStack_164,local_168);
    plVar7[0xfb] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xfa] = CONCAT44(fStack_164,local_168);
    plVar7[0xfd] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xfc] = CONCAT44(fStack_164,local_168);
    *plVar7 = lVar19;
    plVar7[1] = lVar24;
    plVar7[0xff] = CONCAT44(uStack_15c,fStack_160);
    plVar7[0xfe] = CONCAT44(fStack_164,local_168);
    plVar8 = plVar7;
    plVar17 = plVar7;
    do {
      while( true ) {
        iVar21 = (int)uVar23;
        lVar19 = (long)iVar21;
        uVar23 = lVar19 - 1;
        pfVar12 = (float *)plVar17[uVar23 * 2];
        pfVar14 = (float *)(plVar17 + uVar23 * 2)[1];
        fVar42 = (pfVar14[4] + *pfVar14) * 0.5;
        fVar41 = (pfVar14[5] + pfVar14[1]) * 0.5;
        fVar40 = (pfVar14[6] + pfVar14[2]) * 0.5;
        fVar39 = (pfVar14[4] - *pfVar14) * 0.5 + 0.0;
        fVar38 = (pfVar14[5] - pfVar14[1]) * 0.5 + 0.0;
        fVar37 = (pfVar14[6] - pfVar14[2]) * 0.5 + 0.0;
        fVar47 = ((fVar28 * fVar32 - fVar53 * fVar56) - fVar30 * fVar33) +
                 fVar28 * fVar43 + fVar53 * fVar44 + fVar30 * fVar45 +
                 fVar58 * fVar42 + fVar52 * fVar41 + fVar55 * fVar40;
        fVar48 = ABS(fVar58) * fVar39 + ABS(fVar52) * fVar38 + ABS(fVar55) * fVar37;
        uVar22 = (uint)uVar23;
        if ((*pfVar12 <= fVar48 + fVar47) && (fVar47 - fVar48 <= pfVar12[4])) break;
joined_r0x01241c20:
        if (uVar22 == 0) goto LAB_01241c98;
      }
      fVar47 = ((fVar29 * fVar32 - fVar49 * fVar56) - fVar54 * fVar33) +
               fVar29 * fVar43 + fVar49 * fVar44 + fVar54 * fVar45 +
               fVar57 * fVar42 + fVar59 * fVar41 + fVar60 * fVar40;
      fVar48 = ABS(fVar57) * fVar39 + ABS(fVar59) * fVar38 + ABS(fVar60) * fVar37;
      if ((fVar48 + fVar47 < pfVar12[1]) || (pfVar12[5] < fVar47 - fVar48)) goto joined_r0x01241c20;
      fVar40 = ((fVar31 * fVar32 - fVar50 * fVar56) - fVar51 * fVar33) +
               fVar31 * fVar43 + fVar50 * fVar44 + fVar51 * fVar45 +
               fVar34 * fVar42 + fVar35 * fVar41 + fVar36 * fVar40;
      fVar37 = ABS(fVar34) * fVar39 + ABS(fVar35) * fVar38 + ABS(fVar36) * fVar37;
      if ((fVar37 + fVar40 < pfVar12[2]) || (pfVar12[6] < fVar40 - fVar37)) goto joined_r0x01241c20;
      if (iVar10 < (int)uVar22) {
        uVar5 = uVar26 * 2;
        plVar9 = plVar7;
        if ((int)-uVar26 < 0 != SBORROW4(uVar26,uVar5)) {
          if ((int)uVar18 < (int)uVar5) {
            uVar18 = uVar5;
            if (uVar26 == 0) {
              plVar8 = (long *)0x0;
LAB_01241b10:
              bVar2 = plVar17 == (long *)0x0;
              plVar9 = plVar8;
              plVar17 = plVar8;
              if (bVar2) goto LAB_01241b54;
            }
            else {
              plVar8 = (long *)btAlignedAllocInternal
                                         (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) &
                                          0xfffffff000000000 | (ulong)uVar5 << 4,0x10);
              if ((int)uVar26 < 1) goto LAB_01241b10;
              lVar24 = 0;
              lVar25 = (long)(int)uVar26;
              do {
                uVar46 = *(undefined8 *)((long)plVar17 + lVar24);
                lVar25 = lVar25 + -1;
                ((undefined8 *)((long)plVar8 + lVar24))[1] =
                     ((undefined8 *)((long)plVar17 + lVar24))[1];
                *(undefined8 *)((long)plVar8 + lVar24) = uVar46;
                lVar24 = lVar24 + 0x10;
              } while (lVar25 != 0);
            }
            btAlignedFreeInternal(plVar7);
            plVar9 = plVar8;
            plVar17 = plVar8;
          }
LAB_01241b54:
          lVar24 = (long)(int)uVar5 - (long)(int)uVar26;
          plVar7 = plVar17 + (long)(int)uVar26 * 2;
          do {
            lVar24 = lVar24 + -1;
            plVar7[1] = CONCAT44(uStack_15c,fStack_160);
            *plVar7 = CONCAT44(fStack_164,local_168);
            plVar7 = plVar7 + 2;
          } while (lVar24 != 0);
        }
        iVar10 = uVar5 - 4;
        plVar7 = plVar9;
        uVar26 = uVar5;
      }
      if (*(long *)(pfVar12 + 0xc) != 0) {
        if (*(long *)(pfVar14 + 0xc) != 0) {
          lVar24 = *(long *)(pfVar14 + 10);
          uVar22 = iVar21 + 3;
          plVar17[uVar23 * 2] = *(long *)(pfVar12 + 10);
          (plVar17 + uVar23 * 2)[1] = lVar24;
          lVar24 = *(long *)(pfVar14 + 10);
          plVar9 = plVar17 + lVar19 * 2;
          *plVar9 = *(long *)(pfVar12 + 0xc);
          plVar9[1] = lVar24;
          lVar19 = *(long *)(pfVar14 + 0xc);
          plVar9[2] = *(long *)(pfVar12 + 10);
          plVar9[3] = lVar19;
          lVar19 = *(long *)(pfVar14 + 0xc);
          plVar9[4] = *(long *)(pfVar12 + 0xc);
          plVar9[5] = lVar19;
          goto joined_r0x01241bd0;
        }
        plVar17[uVar23 * 2] = *(long *)(pfVar12 + 10);
        (plVar17 + uVar23 * 2)[1] = (long)pfVar14;
        uVar22 = iVar21 + 1;
        uVar23 = (ulong)uVar22;
        plVar17[lVar19 * 2] = *(long *)(pfVar12 + 0xc);
        (plVar17 + lVar19 * 2)[1] = (long)pfVar14;
        goto joined_r0x01241c20;
      }
      if (*(long *)(pfVar14 + 0xc) != 0) {
        lVar24 = *(long *)(pfVar14 + 10);
        uVar22 = iVar21 + 1;
        plVar17[uVar23 * 2] = (long)pfVar12;
        (plVar17 + uVar23 * 2)[1] = lVar24;
        lVar24 = *(long *)(pfVar14 + 0xc);
        plVar17[lVar19 * 2] = (long)pfVar12;
        (plVar17 + lVar19 * 2)[1] = lVar24;
joined_r0x01241bd0:
        uVar23 = (ulong)uVar22;
        goto joined_r0x01241c20;
      }
      (**(code **)(CONCAT44(local_e4,uStack_e8) + 0x10))(&uStack_e8,pfVar12,pfVar14);
    } while (uVar22 != 0);
LAB_01241c98:
    if (plVar17 != (long *)0x0) {
      btAlignedFreeInternal(plVar8);
    }
  }
  lVar19 = *(long *)pbVar27;
  if (0 < *(int *)(lVar19 + 0xc)) {
    lVar24 = 0;
    do {
      puVar20 = *(undefined8 **)(*(long *)(lVar19 + 0x18) + lVar24 * 0x10 + 8);
      if (puVar20 != (undefined8 *)0x0) {
        pfVar12 = *(float **)(param_1 + 0x18);
        fVar35 = *pfVar12;
        fVar30 = pfVar12[1];
        fVar51 = pfVar12[2];
        fVar33 = pfVar12[4];
        fVar31 = pfVar12[5];
        pfVar14 = (float *)(*(long *)(lVar11 + 0x28) +
                           (long)*(int *)(*(long *)(lVar19 + 0x18) + lVar24 * 0x10) * 0x58);
        fVar28 = *pfVar14;
        fVar37 = pfVar14[1];
        fVar38 = pfVar14[4];
        fVar39 = pfVar14[5];
        fVar40 = pfVar14[8];
        fVar41 = pfVar14[9];
        fVar50 = pfVar12[6];
        fVar34 = pfVar12[8];
        fVar32 = pfVar12[9];
        fVar36 = pfVar12[10];
        fVar42 = pfVar14[2];
        fVar43 = pfVar14[6];
        fVar44 = pfVar14[10];
        fVar45 = pfVar14[0xc];
        fVar49 = pfVar14[0xd];
        fVar29 = pfVar14[0xe];
        local_168 = fVar35 * fVar28 + fVar30 * fVar38 + fVar51 * fVar40;
        fStack_164 = fVar35 * fVar37 + fVar30 * fVar39 + fVar51 * fVar41;
        fStack_160 = fVar35 * fVar42 + fVar30 * fVar43 + fVar51 * fVar44;
        local_158 = fVar33 * fVar28 + fVar31 * fVar38 + fVar50 * fVar40;
        fStack_154 = fVar33 * fVar37 + fVar31 * fVar39 + fVar50 * fVar41;
        local_150 = fVar33 * fVar42 + fVar31 * fVar43 + fVar50 * fVar44;
        local_148 = fVar34 * fVar28 + fVar32 * fVar38 + fVar36 * fVar40;
        fStack_144 = fVar34 * fVar37 + fVar32 * fVar39 + fVar36 * fVar41;
        local_140 = fVar34 * fVar42 + fVar32 * fVar43 + fVar36 * fVar44;
        local_138 = pfVar12[0xc] + fVar35 * fVar45 + fVar30 * fVar49 + fVar51 * fVar29;
        fStack_134 = pfVar12[0xd] + fVar33 * fVar45 + fVar31 * fVar49 + fVar50 * fVar29;
        local_130 = pfVar12[0xe] + fVar34 * fVar45 + fVar32 * fVar49 + fVar36 * fVar29;
        uStack_15c = 0;
        local_14c = 0;
        local_13c = 0;
        local_12c = 0;
        (**(code **)(**(long **)(pfVar14 + 0x10) + 0x10))
                  (*(long **)(pfVar14 + 0x10),&local_168,&local_f8,&local_108);
        pfVar12 = *(float **)(param_2 + 0x18);
        pfVar14 = (float *)(*(long *)(lVar16 + 0x28) +
                           (long)*(int *)(*(long *)(lVar19 + 0x18) + lVar24 * 0x10 + 4) * 0x58);
        fVar35 = *pfVar12;
        fVar30 = pfVar12[1];
        fVar28 = *pfVar14;
        fVar37 = pfVar14[1];
        fVar38 = pfVar14[4];
        fVar39 = pfVar14[5];
        fVar51 = pfVar12[2];
        fVar40 = pfVar14[8];
        fVar41 = pfVar14[9];
        fVar34 = pfVar12[4];
        fVar31 = pfVar12[5];
        fVar50 = pfVar12[6];
        fVar33 = pfVar12[8];
        fVar32 = pfVar12[9];
        fVar36 = pfVar12[10];
        fVar42 = pfVar14[2];
        fVar43 = pfVar14[6];
        fVar44 = pfVar14[10];
        fVar45 = pfVar14[0xc];
        fVar49 = pfVar14[0xd];
        fVar29 = pfVar14[0xe];
        local_168 = fVar35 * fVar28 + fVar30 * fVar38 + fVar51 * fVar40;
        fStack_164 = fVar35 * fVar37 + fVar30 * fVar39 + fVar51 * fVar41;
        fStack_160 = fVar35 * fVar42 + fVar30 * fVar43 + fVar51 * fVar44;
        local_158 = fVar34 * fVar28 + fVar31 * fVar38 + fVar50 * fVar40;
        fStack_154 = fVar34 * fVar37 + fVar31 * fVar39 + fVar50 * fVar41;
        local_150 = fVar34 * fVar42 + fVar31 * fVar43 + fVar50 * fVar44;
        local_148 = fVar33 * fVar28 + fVar32 * fVar38 + fVar36 * fVar40;
        fStack_144 = fVar33 * fVar37 + fVar32 * fVar39 + fVar36 * fVar41;
        local_140 = fVar33 * fVar42 + fVar32 * fVar43 + fVar36 * fVar44;
        local_138 = pfVar12[0xc] + fVar35 * fVar45 + fVar30 * fVar49 + fVar51 * fVar29;
        fStack_134 = pfVar12[0xd] + fVar34 * fVar45 + fVar31 * fVar49 + fVar50 * fVar29;
        local_130 = pfVar12[0xe] + fVar33 * fVar45 + fVar32 * fVar49 + fVar36 * fVar29;
        uStack_15c = 0;
        local_14c = 0;
        local_13c = 0;
        local_12c = 0;
        (**(code **)(**(long **)(pfVar14 + 0x10) + 0x10))
                  (*(long **)(pfVar14 + 0x10),&local_168,&local_118,&local_128);
        if ((local_128 < local_f8) || (local_108 < local_118)) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        if ((local_120 < local_f0) || (local_100 < local_110)) {
          bVar6 = 0;
        }
        if (((local_124 < local_f4) || (local_104 < local_114)) || ((bool)(bVar6 ^ 1))) {
          (**(code **)*puVar20)(puVar20);
          (**(code **)(**(long **)(this + 8) + 0x78))(*(long **)(this + 8),puVar20);
          iVar10 = *(int *)(this + 0x1c);
          puVar1 = (undefined4 *)(*(long *)(lVar19 + 0x18) + lVar24 * 0x10);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          if (iVar10 == *(int *)(this + 0x20)) {
            uVar18 = iVar10 << 1;
            if (iVar10 == 0) {
              uVar18 = 1;
            }
            if (iVar10 < (int)uVar18) {
              if (uVar18 == 0) {
                lVar25 = 0;
              }
              else {
                lVar25 = btAlignedAllocInternal
                                   (-(ulong)(uVar18 >> 0x1f) & 0xfffffff000000000 |
                                    (ulong)uVar18 << 4,0x10);
                iVar10 = *(int *)(this + 0x1c);
              }
              if (0 < iVar10) {
                lVar15 = 0;
                lVar13 = (long)iVar10;
                do {
                  lVar13 = lVar13 + -1;
                  uVar46 = *(undefined8 *)(*(long *)(this + 0x28) + lVar15);
                  ((undefined8 *)(lVar25 + lVar15))[1] =
                       ((undefined8 *)(*(long *)(this + 0x28) + lVar15))[1];
                  *(undefined8 *)(lVar25 + lVar15) = uVar46;
                  lVar15 = lVar15 + 0x10;
                } while (lVar13 != 0);
              }
              if (*(void **)(this + 0x28) != (void *)0x0) {
                if (this[0x30] != (btCompoundCompoundCollisionAlgorithm)0x0) {
                  btAlignedFreeInternal(*(void **)(this + 0x28));
                }
                *(undefined8 *)(this + 0x28) = 0;
              }
              iVar10 = *(int *)(this + 0x1c);
              this[0x30] = (btCompoundCompoundCollisionAlgorithm)0x1;
              *(long *)(this + 0x28) = lVar25;
              *(uint *)(this + 0x20) = uVar18;
            }
          }
          puVar1 = (undefined4 *)(*(long *)(this + 0x28) + (long)iVar10 * 0x10);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          *(undefined8 *)(puVar1 + 2) = 0;
          *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
        }
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < *(int *)(lVar19 + 0xc));
  }
  if (0 < *(int *)(this + 0x1c)) {
    lVar16 = 0;
    lVar11 = 0;
    do {
      (**(code **)(**(long **)(this + 0x10) + 0x10))
                (*(long **)(this + 0x10),*(undefined4 *)(*(long *)(this + 0x28) + lVar16),
                 ((undefined4 *)(*(long *)(this + 0x28) + lVar16))[1]);
      lVar11 = lVar11 + 1;
      lVar16 = lVar16 + 0x10;
    } while (lVar11 < *(int *)(this + 0x1c));
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    if (this[0x30] != (btCompoundCompoundCollisionAlgorithm)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x28));
    }
    *(undefined8 *)(this + 0x28) = 0;
  }
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (btCompoundCompoundCollisionAlgorithm)0x1;
  *(undefined8 *)(this + 0x1c) = 0;
  return;
}

