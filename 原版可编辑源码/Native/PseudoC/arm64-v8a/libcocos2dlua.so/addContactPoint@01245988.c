
/* btPerturbedContactResult::addContactPoint(btVector3 const&, btVector3 const&, float) */

void __thiscall
btPerturbedContactResult::addContactPoint
          (btPerturbedContactResult *this,btVector3 *param_1,btVector3 *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 local_54;
  
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar13 = *(float *)(param_1 + 8);
  fVar3 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 4);
  fVar9 = *(float *)(param_2 + 8);
  fVar1 = fVar6 * param_3 + fVar3;
  fVar2 = fVar7 * param_3 + fVar4;
  fVar10 = fVar13 * param_3 + fVar9;
  if (this[0xf8] == (btPerturbedContactResult)0x0) {
    fVar21 = *(float *)(this + 0x78);
    fVar20 = *(float *)(this + 0x7c);
    fVar26 = *(float *)(this + 0x88);
    fVar22 = *(float *)(this + 0x8c);
    fVar17 = *(float *)(this + 0x98);
    fVar14 = *(float *)(this + 0x9c);
    fVar25 = *(float *)(this + 0xac);
    fVar13 = *(float *)(this + 0xb8);
    fVar5 = *(float *)(this + 0xbc);
    fVar24 = *(float *)(this + 200);
    fVar28 = *(float *)(this + 0xcc);
    fVar6 = *(float *)(this + 0xd8);
    fVar7 = *(float *)(this + 0xdc);
    fVar29 = -*(float *)(this + 0xa8);
    fVar19 = *(float *)(this + 0x80);
    fVar16 = *(float *)(this + 0x90);
    fVar27 = *(float *)(this + 0xc0);
    fVar11 = *(float *)(this + 0xa0);
    fVar23 = *(float *)(this + 0xd0);
    fVar8 = *(float *)(this + 0xe0);
    fVar12 = *(float *)(this + 0xb0);
    fVar18 = (fVar21 * fVar29 - fVar26 * fVar25) - fVar17 * fVar12;
    fVar15 = (fVar20 * fVar29 - fVar22 * fVar25) - fVar14 * fVar12;
    fVar12 = (fVar19 * fVar29 - fVar16 * fVar25) - fVar11 * fVar12;
    local_58 = fVar18 * fVar6 + fVar15 * fVar7 + fVar12 * fVar8 + *(float *)(this + 0xf0) +
               fVar9 * (fVar17 * fVar6 + fVar14 * fVar7 + fVar11 * fVar8) +
               fVar3 * (fVar21 * fVar6 + fVar20 * fVar7 + fVar19 * fVar8) +
               fVar4 * (fVar26 * fVar6 + fVar22 * fVar7 + fVar16 * fVar8);
    local_60 = fVar9 * (fVar17 * fVar13 + fVar14 * fVar5 + fVar11 * fVar27) +
               fVar3 * (fVar21 * fVar13 + fVar20 * fVar5 + fVar19 * fVar27) +
               fVar4 * (fVar26 * fVar13 + fVar22 * fVar5 + fVar16 * fVar27) +
               fVar13 * fVar18 + fVar15 * fVar5 + fVar12 * fVar27 + *(float *)(this + 0xe8);
    fStack_5c = fVar9 * (fVar17 * fVar24 + fVar14 * fVar28 + fVar11 * fVar23) +
                fVar3 * (fVar21 * fVar24 + fVar20 * fVar28 + fVar19 * fVar23) +
                fVar4 * (fVar26 * fVar24 + fVar22 * fVar28 + fVar16 * fVar23) +
                fVar18 * fVar24 + fVar15 * fVar28 + fVar12 * fVar23 + *(float *)(this + 0xec);
    fVar1 = (fVar1 - local_60) * *(float *)param_1 + (fVar2 - fStack_5c) * *(float *)(param_1 + 4) +
            (fVar10 - local_58) * *(float *)(param_1 + 8);
  }
  else {
    fVar20 = *(float *)(this + 0x38);
    fVar21 = *(float *)(this + 0x3c);
    fVar18 = *(float *)(this + 0xb8);
    fVar19 = *(float *)(this + 0xbc);
    fVar24 = *(float *)(this + 0x48);
    fVar22 = *(float *)(this + 0x4c);
    fVar14 = *(float *)(this + 0x58);
    fVar16 = *(float *)(this + 0x5c);
    fVar26 = *(float *)(this + 200);
    fVar28 = *(float *)(this + 0xcc);
    fVar30 = *(float *)(this + 0xd8);
    fVar31 = *(float *)(this + 0xdc);
    fVar27 = *(float *)(this + 0x6c);
    fVar29 = -*(float *)(this + 0x68);
    fVar25 = *(float *)(this + 0x50);
    fVar11 = *(float *)(this + 0x40);
    fVar23 = *(float *)(this + 0xc0);
    fVar32 = *(float *)(this + 0x60);
    fVar5 = *(float *)(this + 0xd0);
    fVar8 = *(float *)(this + 0xe0);
    fVar12 = *(float *)(this + 0x70);
    fVar15 = (fVar20 * fVar29 - fVar24 * fVar27) - fVar14 * fVar12;
    fVar17 = (fVar21 * fVar29 - fVar22 * fVar27) - fVar16 * fVar12;
    fVar12 = (fVar11 * fVar29 - fVar25 * fVar27) - fVar32 * fVar12;
    local_60 = fVar10 * (fVar14 * fVar18 + fVar16 * fVar19 + fVar32 * fVar23) +
               fVar1 * (fVar20 * fVar18 + fVar21 * fVar19 + fVar11 * fVar23) +
               fVar2 * (fVar24 * fVar18 + fVar22 * fVar19 + fVar25 * fVar23) +
               fVar18 * fVar15 + fVar17 * fVar19 + fVar12 * fVar23 + *(float *)(this + 0xe8);
    fStack_5c = fVar10 * (fVar14 * fVar26 + fVar16 * fVar28 + fVar32 * fVar5) +
                fVar1 * (fVar20 * fVar26 + fVar21 * fVar28 + fVar11 * fVar5) +
                fVar2 * (fVar24 * fVar26 + fVar22 * fVar28 + fVar25 * fVar5) +
                fVar15 * fVar26 + fVar17 * fVar28 + fVar12 * fVar5 + *(float *)(this + 0xec);
    local_58 = fVar15 * fVar30 + fVar17 * fVar31 + fVar12 * fVar8 + *(float *)(this + 0xf0) +
               fVar10 * (fVar14 * fVar30 + fVar16 * fVar31 + fVar32 * fVar8) +
               fVar1 * (fVar20 * fVar30 + fVar21 * fVar31 + fVar11 * fVar8) +
               fVar2 * (fVar24 * fVar30 + fVar22 * fVar31 + fVar25 * fVar8);
    fVar1 = fVar6 * (local_60 - fVar3) + fVar7 * (fStack_5c - fVar4) + fVar13 * (local_58 - fVar9);
    fStack_5c = fStack_5c + fVar7 * fVar1;
    local_60 = local_60 + fVar6 * fVar1;
    local_58 = local_58 + fVar13 * fVar1;
  }
  local_54 = 0;
  (**(code **)(**(long **)(this + 0x30) + 0x20))(fVar1,*(long **)(this + 0x30),param_1,&local_60);
  return;
}

