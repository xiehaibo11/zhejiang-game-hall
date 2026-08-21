
/* btCompoundLeafCallback::ProcessChildShape(btCollisionShape const*, int) */

void __thiscall
btCompoundLeafCallback::ProcessChildShape
          (btCompoundLeafCallback *this,btCollisionShape *param_1,int param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  code *pcVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
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
  long local_128;
  btCollisionShape *pbStack_120;
  undefined8 local_118;
  float *pfStack_110;
  undefined4 local_108;
  int iStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
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
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  
  pfVar5 = *(float **)(*(long *)(this + 8) + 0x18);
  fVar19 = *pfVar5;
  fVar14 = pfVar5[1];
  fVar31 = pfVar5[2];
  fVar18 = pfVar5[4];
  fVar15 = pfVar5[5];
  pfVar8 = (float *)(*(long *)(*(long *)(*(long *)(this + 8) + 8) + 0x28) + (long)param_2 * 0x58);
  fVar11 = *pfVar8;
  fVar21 = pfVar8[1];
  fVar22 = pfVar8[4];
  fVar23 = pfVar8[5];
  fVar13 = pfVar8[8];
  fVar25 = pfVar8[9];
  fVar24 = pfVar5[6];
  fVar17 = pfVar5[8];
  fVar16 = pfVar5[9];
  fVar20 = pfVar5[10];
  fVar26 = pfVar8[2];
  fVar27 = pfVar8[6];
  fVar28 = pfVar8[10];
  fVar29 = pfVar8[0xc];
  fVar30 = pfVar8[0xd];
  fVar12 = pfVar8[0xe];
  local_c0 = fVar19 * fVar11 + fVar14 * fVar22 + fVar31 * fVar13;
  fStack_bc = fVar19 * fVar21 + fVar14 * fVar23 + fVar31 * fVar25;
  local_b8 = fVar19 * fVar26 + fVar14 * fVar27 + fVar31 * fVar28;
  local_b0 = fVar18 * fVar11 + fVar15 * fVar22 + fVar24 * fVar13;
  fStack_ac = fVar18 * fVar21 + fVar15 * fVar23 + fVar24 * fVar25;
  local_a8 = fVar18 * fVar26 + fVar15 * fVar27 + fVar24 * fVar28;
  local_a0 = fVar17 * fVar11 + fVar16 * fVar22 + fVar20 * fVar13;
  fStack_9c = fVar17 * fVar21 + fVar16 * fVar23 + fVar20 * fVar25;
  local_98 = fVar17 * fVar26 + fVar16 * fVar27 + fVar20 * fVar28;
  local_90 = pfVar5[0xc] + fVar19 * fVar29 + fVar14 * fVar30 + fVar31 * fVar12;
  fStack_8c = pfVar5[0xd] + fVar18 * fVar29 + fVar15 * fVar30 + fVar24 * fVar12;
  local_88 = pfVar5[0xe] + fVar17 * fVar29 + fVar16 * fVar30 + fVar20 * fVar12;
  local_b4 = 0;
  local_a4 = 0;
  local_94 = 0;
  local_84 = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_c0,&local_d0,&local_e0);
  plVar2 = *(long **)(*(long *)(this + 0x10) + 8);
  (**(code **)(*plVar2 + 0x10))
            (plVar2,*(undefined8 *)(*(long *)(this + 0x10) + 0x18),&local_f0,&local_100);
  if ((gCompoundChildShapePairCallback == (code *)0x0) ||
     (uVar3 = (*gCompoundChildShapePairCallback)
                        (*(undefined8 *)(*(long *)(this + 0x10) + 8),param_1), (uVar3 & 1) != 0)) {
    if ((local_100 < local_d0) || (local_e0 < local_f0)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    if ((local_f8 < local_c8) || (local_d8 < local_e8)) {
      bVar1 = 0;
    }
    if (((local_cc <= local_fc) && (local_ec <= local_dc)) && (!(bool)(bVar1 ^ 1))) {
      lVar6 = *(long *)(this + 8);
      pfStack_110 = &local_c0;
      local_118 = *(undefined8 *)(lVar6 + 0x10);
      local_108 = 0xffffffff;
      lVar9 = (long)param_2;
      local_128 = lVar6;
      pbStack_120 = param_1;
      iStack_104 = param_2;
      if (*(long *)(*(long *)(this + 0x30) + lVar9 * 8) == 0) {
        uVar4 = (**(code **)(**(long **)(this + 0x18) + 0x10))
                          (*(long **)(this + 0x18),&local_128,*(undefined8 *)(this + 0x10),
                           *(undefined8 *)(this + 0x38));
        *(undefined8 *)(*(long *)(this + 0x30) + lVar9 * 8) = uVar4;
        lVar6 = *(long *)(this + 8);
      }
      plVar2 = *(long **)(this + 0x28);
      lVar10 = plVar2[2];
      if (*(long *)(lVar10 + 0x10) == *(long *)(lVar6 + 0x10)) {
        plVar2[2] = (long)&local_128;
        pcVar7 = *(code **)(*plVar2 + 0x10);
      }
      else {
        lVar10 = plVar2[3];
        plVar2[3] = (long)&local_128;
        pcVar7 = *(code **)(*plVar2 + 0x18);
      }
      (*pcVar7)(plVar2,0xffffffff,param_2);
      plVar2 = *(long **)(*(long *)(this + 0x30) + lVar9 * 8);
      (**(code **)(*plVar2 + 0x10))
                (plVar2,&local_128,*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20),
                 *(undefined8 *)(this + 0x28));
      plVar2 = (long *)(*(long *)(this + 0x28) + 0x10);
      if (*(long *)(*plVar2 + 0x10) != *(long *)(*(long *)(this + 8) + 0x10)) {
        plVar2 = (long *)(*(long *)(this + 0x28) + 0x18);
      }
      *plVar2 = lVar10;
    }
  }
  return;
}

