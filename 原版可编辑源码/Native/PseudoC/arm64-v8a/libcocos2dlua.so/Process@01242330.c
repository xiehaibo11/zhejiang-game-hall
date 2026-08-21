
/* btCompoundCompoundLeafCallback::Process(btDbvtNode const*, btDbvtNode const*) */

void __thiscall
btCompoundCompoundLeafCallback::Process
          (btCompoundCompoundLeafCallback *this,btDbvtNode *param_1,btDbvtNode *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  long *plVar10;
  long *plVar11;
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
  long local_1a0;
  long *plStack_198;
  undefined8 local_190;
  float *pfStack_188;
  undefined4 local_180;
  int iStack_17c;
  long local_178;
  long *plStack_170;
  undefined8 local_168;
  float *pfStack_160;
  undefined4 local_158;
  int iStack_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  iVar2 = *(int *)(param_1 + 0x28);
  pfVar8 = *(float **)(*(long *)(this + 0x10) + 0x18);
  fVar19 = *pfVar8;
  fVar14 = pfVar8[1];
  fVar17 = pfVar8[4];
  fVar15 = pfVar8[5];
  pfVar9 = (float *)(*(long *)(*(long *)(*(long *)(this + 0x10) + 8) + 0x28) + (long)iVar2 * 0x58);
  fVar18 = pfVar8[8];
  fVar16 = pfVar8[9];
  fVar12 = *pfVar9;
  fVar21 = pfVar9[1];
  fVar32 = pfVar8[2];
  fVar24 = pfVar9[8];
  fVar25 = pfVar9[9];
  fVar29 = pfVar9[0xc];
  fVar30 = pfVar9[0xd];
  fVar31 = pfVar8[6];
  fVar20 = pfVar8[10];
  fVar22 = pfVar9[4];
  fVar23 = pfVar9[5];
  fVar26 = pfVar9[2];
  fVar27 = pfVar9[6];
  fVar28 = pfVar9[10];
  fVar13 = pfVar9[0xe];
  iVar3 = *(int *)(param_2 + 0x28);
  local_d0 = fVar19 * fVar12 + fVar14 * fVar22 + fVar32 * fVar24;
  fStack_cc = fVar19 * fVar21 + fVar14 * fVar23 + fVar32 * fVar25;
  local_c8 = fVar19 * fVar26 + fVar14 * fVar27 + fVar32 * fVar28;
  local_c0 = fVar17 * fVar12 + fVar15 * fVar22 + fVar31 * fVar24;
  fStack_bc = fVar17 * fVar21 + fVar15 * fVar23 + fVar31 * fVar25;
  local_b8 = fVar17 * fVar26 + fVar15 * fVar27 + fVar31 * fVar28;
  local_b0 = fVar18 * fVar12 + fVar16 * fVar22 + fVar20 * fVar24;
  fStack_ac = fVar18 * fVar21 + fVar16 * fVar23 + fVar20 * fVar25;
  local_a8 = fVar18 * fVar26 + fVar16 * fVar27 + fVar20 * fVar28;
  local_a0 = pfVar8[0xc] + fVar19 * fVar29 + fVar14 * fVar30 + fVar32 * fVar13;
  fStack_9c = pfVar8[0xd] + fVar17 * fVar29 + fVar15 * fVar30 + fVar31 * fVar13;
  local_98 = pfVar8[0xe] + fVar18 * fVar29 + fVar16 * fVar30 + fVar20 * fVar13;
  plVar11 = *(long **)(pfVar9 + 0x10);
  plVar10 = *(long **)(*(long *)(*(long *)(*(long *)(this + 0x18) + 8) + 0x28) + (long)iVar3 * 0x58
                      + 0x40);
  local_c4 = 0;
  local_b4 = 0;
  local_a4 = 0;
  local_94 = 0;
  pfVar9 = *(float **)(*(long *)(this + 0x18) + 0x18);
  pfVar8 = (float *)(*(long *)(*(long *)(*(long *)(this + 0x18) + 8) + 0x28) + (long)iVar3 * 0x58);
  fVar14 = *pfVar8;
  fVar15 = pfVar8[1];
  fVar16 = pfVar8[4];
  fVar17 = pfVar8[5];
  fVar22 = *pfVar9;
  fVar23 = pfVar9[1];
  fVar12 = pfVar8[8];
  fVar31 = pfVar8[9];
  fVar24 = pfVar9[2];
  fVar18 = pfVar8[2];
  fVar19 = pfVar8[6];
  fVar32 = pfVar8[10];
  fVar20 = pfVar8[0xc];
  fVar21 = pfVar8[0xd];
  fVar25 = pfVar9[4];
  fVar26 = pfVar9[5];
  fVar27 = pfVar9[6];
  fVar28 = pfVar9[8];
  fVar29 = pfVar9[9];
  fVar30 = pfVar9[10];
  fVar13 = pfVar8[0xe];
  local_f0 = fVar28 * fVar14 + fVar29 * fVar16 + fVar30 * fVar12;
  local_110 = fVar22 * fVar14 + fVar23 * fVar16 + fVar24 * fVar12;
  fStack_10c = fVar22 * fVar15 + fVar23 * fVar17 + fVar24 * fVar31;
  local_108 = fVar22 * fVar18 + fVar23 * fVar19 + fVar24 * fVar32;
  local_100 = fVar25 * fVar14 + fVar26 * fVar16 + fVar27 * fVar12;
  fStack_fc = fVar25 * fVar15 + fVar26 * fVar17 + fVar27 * fVar31;
  local_f8 = fVar25 * fVar18 + fVar26 * fVar19 + fVar27 * fVar32;
  fStack_ec = fVar28 * fVar15 + fVar29 * fVar17 + fVar30 * fVar31;
  local_e8 = fVar28 * fVar18 + fVar29 * fVar19 + fVar30 * fVar32;
  local_e0 = pfVar9[0xc] + fVar22 * fVar20 + fVar23 * fVar21 + fVar24 * fVar13;
  fStack_dc = pfVar9[0xd] + fVar25 * fVar20 + fVar26 * fVar21 + fVar27 * fVar13;
  local_d8 = pfVar9[0xe] + fVar28 * fVar20 + fVar29 * fVar21 + fVar30 * fVar13;
  local_104 = 0;
  local_f4 = 0;
  local_e4 = 0;
  local_d4 = 0;
  (**(code **)(*plVar11 + 0x10))(plVar11,&local_d0,&local_120,&local_130);
  (**(code **)(*plVar10 + 0x10))(plVar10,&local_110,&local_140,&local_150);
  if ((gCompoundCompoundChildShapePairCallback == (code *)0x0) ||
     (uVar5 = (*gCompoundCompoundChildShapePairCallback)(plVar11,plVar10), (uVar5 & 1) != 0)) {
    if ((local_150 < local_120) || (local_130 < local_140)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    if ((local_148 < local_118) || (local_128 < local_138)) {
      bVar4 = 0;
    }
    if (((local_11c <= local_14c) && (local_13c <= local_12c)) && (!(bool)(bVar4 ^ 1))) {
      local_178 = *(long *)(this + 0x10);
      local_168 = *(undefined8 *)(local_178 + 0x10);
      pfStack_160 = &local_d0;
      local_158 = 0xffffffff;
      local_1a0 = *(long *)(this + 0x18);
      local_190 = *(undefined8 *)(local_1a0 + 0x10);
      pfStack_188 = &local_110;
      local_180 = 0xffffffff;
      plStack_198 = plVar10;
      iStack_17c = iVar3;
      plStack_170 = plVar11;
      iStack_154 = iVar2;
      lVar6 = btHashedSimplePairCache::findPair
                        (*(btHashedSimplePairCache **)(this + 0x38),iVar2,iVar3);
      if (lVar6 == 0) {
        plVar10 = (long *)(**(code **)(**(long **)(this + 0x20) + 0x10))
                                    (*(long **)(this + 0x20),&local_178,&local_1a0,
                                     *(undefined8 *)(this + 0x40));
        lVar6 = (**(code **)(**(long **)(this + 0x38) + 0x18))(*(long **)(this + 0x38),iVar2,iVar3);
        *(long **)(lVar6 + 8) = plVar10;
      }
      else {
        plVar10 = *(long **)(lVar6 + 8);
      }
      plVar11 = *(long **)(this + 0x30);
      lVar6 = plVar11[2];
      lVar1 = plVar11[3];
      plVar11[2] = (long)&local_178;
      plVar11[3] = (long)&local_1a0;
      (**(code **)(*plVar11 + 0x10))(plVar11,0xffffffff,iVar2);
      (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0xffffffff,iVar3);
      (**(code **)(*plVar10 + 0x10))
                (plVar10,&local_178,&local_1a0,*(undefined8 *)(this + 0x28),
                 *(undefined8 *)(this + 0x30));
      lVar7 = *(long *)(this + 0x30);
      *(long *)(lVar7 + 0x10) = lVar6;
      *(long *)(lVar7 + 0x18) = lVar1;
    }
  }
  return;
}

