
/* gjkepa2_impl::GJK::EncloseOrigin() */

undefined8 __thiscall gjkepa2_impl::GJK::EncloseOrigin(GJK *this)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
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
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  float local_60 [4];
  
  plVar8 = *(long **)(this + 0x1c0);
  switch((int)plVar8[6]) {
  case 1:
    local_60[3] = 0.0;
    local_60[1] = 0.0;
    local_60[2] = 0.0;
    local_60[0] = 1.0;
    *(undefined4 *)((long)plVar8 + 0x24) = 0;
    iVar3 = *(int *)(this + 0x1b8);
    *(uint *)(this + 0x1b8) = iVar3 - 1U;
    plVar8[*(uint *)(plVar8 + 6)] = *(long *)(this + (ulong)(iVar3 - 1U) * 8 + 0x198);
    uVar4 = *(uint *)(plVar8 + 6);
    *(uint *)(plVar8 + 6) = uVar4 + 1;
    getsupport(this,(btVector3 *)local_60,(sSV *)plVar8[uVar4]);
    uVar6 = EncloseOrigin(this);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    lVar10 = *(long *)(this + 0x1c0);
    uVar5 = *(int *)(lVar10 + 0x30) - 1;
    *(uint *)(lVar10 + 0x30) = uVar5;
    uVar4 = *(uint *)(this + 0x1b8);
    uVar9 = *(undefined8 *)(lVar10 + (ulong)uVar5 * 8);
    *(uint *)(this + 0x1b8) = uVar4 + 1;
    *(undefined8 *)(this + (ulong)uVar4 * 8 + 0x198) = uVar9;
    lVar10 = *(long *)(this + 0x1c0);
    local_64 = 0;
    local_70 = -local_60[0];
    fStack_6c = -local_60[1];
    local_68 = -local_60[2];
    *(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 4 + 0x20) = 0;
    iVar3 = *(int *)(this + 0x1b8);
    *(uint *)(this + 0x1b8) = iVar3 - 1U;
    *(undefined8 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 8) =
         *(undefined8 *)(this + (ulong)(iVar3 - 1U) * 8 + 0x198);
    uVar4 = *(uint *)(lVar10 + 0x30);
    *(uint *)(lVar10 + 0x30) = uVar4 + 1;
    getsupport(this,(btVector3 *)&local_70,*(sSV **)(lVar10 + (ulong)uVar4 * 8));
    uVar6 = EncloseOrigin(this);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    lVar10 = *(long *)(this + 0x1c0);
    uVar5 = *(int *)(lVar10 + 0x30) - 1;
    *(uint *)(lVar10 + 0x30) = uVar5;
    uVar4 = *(uint *)(this + 0x1b8);
    uVar9 = *(undefined8 *)(lVar10 + (ulong)uVar5 * 8);
    *(uint *)(this + 0x1b8) = uVar4 + 1;
    *(undefined8 *)(this + (ulong)uVar4 * 8 + 0x198) = uVar9;
    local_60[0] = 0.0;
    local_60[2] = 0.0;
    local_60[3] = 0.0;
    local_60[1] = 1.0;
    lVar10 = *(long *)(this + 0x1c0);
    *(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 4 + 0x20) = 0;
    iVar3 = *(int *)(this + 0x1b8);
    *(uint *)(this + 0x1b8) = iVar3 - 1U;
    *(undefined8 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 8) =
         *(undefined8 *)(this + (ulong)(iVar3 - 1U) * 8 + 0x198);
    uVar4 = *(uint *)(lVar10 + 0x30);
    *(uint *)(lVar10 + 0x30) = uVar4 + 1;
    getsupport(this,(btVector3 *)local_60,*(sSV **)(lVar10 + (ulong)uVar4 * 8));
    uVar6 = EncloseOrigin(this);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    lVar10 = *(long *)(this + 0x1c0);
    uVar5 = *(int *)(lVar10 + 0x30) - 1;
    *(uint *)(lVar10 + 0x30) = uVar5;
    uVar4 = *(uint *)(this + 0x1b8);
    uVar9 = *(undefined8 *)(lVar10 + (ulong)uVar5 * 8);
    *(uint *)(this + 0x1b8) = uVar4 + 1;
    *(undefined8 *)(this + (ulong)uVar4 * 8 + 0x198) = uVar9;
    lVar10 = *(long *)(this + 0x1c0);
    local_64 = 0;
    local_70 = -local_60[0];
    fStack_6c = -local_60[1];
    local_68 = -local_60[2];
    *(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 4 + 0x20) = 0;
    iVar3 = *(int *)(this + 0x1b8);
    *(uint *)(this + 0x1b8) = iVar3 - 1U;
    *(undefined8 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 8) =
         *(undefined8 *)(this + (ulong)(iVar3 - 1U) * 8 + 0x198);
    uVar4 = *(uint *)(lVar10 + 0x30);
    *(uint *)(lVar10 + 0x30) = uVar4 + 1;
    getsupport(this,(btVector3 *)&local_70,*(sSV **)(lVar10 + (ulong)uVar4 * 8));
    uVar6 = EncloseOrigin(this);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    lVar10 = *(long *)(this + 0x1c0);
    uVar5 = *(int *)(lVar10 + 0x30) - 1;
    *(uint *)(lVar10 + 0x30) = uVar5;
    uVar4 = *(uint *)(this + 0x1b8);
    uVar9 = *(undefined8 *)(lVar10 + (ulong)uVar5 * 8);
    *(uint *)(this + 0x1b8) = uVar4 + 1;
    *(undefined8 *)(this + (ulong)uVar4 * 8 + 0x198) = uVar9;
    local_60[0] = 0.0;
    local_60[1] = 0.0;
    local_60[2] = 1.0;
    plVar8 = *(long **)(this + 0x1c0);
    *(undefined4 *)((long)plVar8 + (ulong)*(uint *)(plVar8 + 6) * 4 + 0x20) = 0;
    iVar3 = *(int *)(this + 0x1b8);
    *(uint *)(this + 0x1b8) = iVar3 - 1U;
    lVar10 = *(long *)(this + (ulong)(iVar3 - 1U) * 8 + 0x198);
    goto LAB_0124d348;
  case 2:
    lVar10 = *plVar8;
    lVar1 = plVar8[1];
    uVar6 = 0;
    fVar12 = *(float *)(lVar1 + 0x10) - *(float *)(lVar10 + 0x10);
    fVar13 = *(float *)(lVar1 + 0x14) - *(float *)(lVar10 + 0x14);
    fVar14 = *(float *)(lVar1 + 0x18) - *(float *)(lVar10 + 0x18);
    do {
      local_60[0] = 0.0;
      local_60[1] = 0.0;
      local_60[2] = 0.0;
      local_60[3] = 0.0;
      local_60[uVar6] = 1.0;
      local_64 = 0;
      local_70 = fVar13 * local_60[2] - fVar14 * local_60[1];
      fStack_6c = fVar14 * local_60[0] - fVar12 * local_60[2];
      local_68 = fVar12 * local_60[1] - fVar13 * local_60[0];
      if (0.0 < local_70 * local_70 + fStack_6c * fStack_6c + local_68 * local_68) {
        lVar10 = *(long *)(this + 0x1c0);
        *(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 4 + 0x20) = 0;
        iVar3 = *(int *)(this + 0x1b8);
        *(uint *)(this + 0x1b8) = iVar3 - 1U;
        *(undefined8 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 8) =
             *(undefined8 *)(this + (ulong)(iVar3 - 1U) * 8 + 0x198);
        uVar4 = *(uint *)(lVar10 + 0x30);
        *(uint *)(lVar10 + 0x30) = uVar4 + 1;
        getsupport(this,(btVector3 *)&local_70,*(sSV **)(lVar10 + (ulong)uVar4 * 8));
        uVar7 = EncloseOrigin(this);
        if ((uVar7 & 1) != 0) {
          return 1;
        }
        lVar10 = *(long *)(this + 0x1c0);
        uVar5 = *(int *)(lVar10 + 0x30) - 1;
        *(uint *)(lVar10 + 0x30) = uVar5;
        uVar4 = *(uint *)(this + 0x1b8);
        uVar9 = *(undefined8 *)(lVar10 + (ulong)uVar5 * 8);
        *(uint *)(this + 0x1b8) = uVar4 + 1;
        *(undefined8 *)(this + (ulong)uVar4 * 8 + 0x198) = uVar9;
        lVar10 = *(long *)(this + 0x1c0);
        local_74 = 0;
        local_80 = -local_70;
        fStack_7c = -fStack_6c;
        local_78 = -local_68;
        *(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 4 + 0x20) = 0;
        iVar3 = *(int *)(this + 0x1b8);
        *(uint *)(this + 0x1b8) = iVar3 - 1U;
        *(undefined8 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 8) =
             *(undefined8 *)(this + (ulong)(iVar3 - 1U) * 8 + 0x198);
        uVar4 = *(uint *)(lVar10 + 0x30);
        *(uint *)(lVar10 + 0x30) = uVar4 + 1;
        getsupport(this,(btVector3 *)&local_80,*(sSV **)(lVar10 + (ulong)uVar4 * 8));
        uVar7 = EncloseOrigin(this);
        if ((uVar7 & 1) != 0) {
          return 1;
        }
        lVar10 = *(long *)(this + 0x1c0);
        uVar5 = *(int *)(lVar10 + 0x30) - 1;
        *(uint *)(lVar10 + 0x30) = uVar5;
        uVar4 = *(uint *)(this + 0x1b8);
        uVar9 = *(undefined8 *)(lVar10 + (ulong)uVar5 * 8);
        *(uint *)(this + 0x1b8) = uVar4 + 1;
        *(undefined8 *)(this + (ulong)uVar4 * 8 + 0x198) = uVar9;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 3);
    break;
  case 3:
    lVar10 = *plVar8;
    lVar1 = plVar8[1];
    lVar11 = plVar8[2];
    fVar12 = *(float *)(lVar1 + 0x10) - *(float *)(lVar10 + 0x10);
    fVar15 = *(float *)(lVar11 + 0x10) - *(float *)(lVar10 + 0x10);
    fVar13 = *(float *)(lVar1 + 0x14) - *(float *)(lVar10 + 0x14);
    fVar14 = *(float *)(lVar1 + 0x18) - *(float *)(lVar10 + 0x18);
    fVar16 = *(float *)(lVar11 + 0x14) - *(float *)(lVar10 + 0x14);
    fVar17 = *(float *)(lVar11 + 0x18) - *(float *)(lVar10 + 0x18);
    local_60[0] = fVar13 * fVar17 - fVar14 * fVar16;
    local_60[1] = fVar14 * fVar15 - fVar12 * fVar17;
    local_60[2] = fVar12 * fVar16 - fVar13 * fVar15;
    if (local_60[0] * local_60[0] + local_60[1] * local_60[1] + local_60[2] * local_60[2] <= 0.0) {
      return 0;
    }
    *(undefined4 *)((long)plVar8 + 0x2c) = 0;
    iVar3 = *(int *)(this + 0x1b8);
    *(uint *)(this + 0x1b8) = iVar3 - 1U;
    lVar10 = *(long *)(this + (ulong)(iVar3 - 1U) * 8 + 0x198);
LAB_0124d348:
    local_60[3] = 0.0;
    plVar8[*(uint *)(plVar8 + 6)] = lVar10;
    uVar4 = *(uint *)(plVar8 + 6);
    *(uint *)(plVar8 + 6) = uVar4 + 1;
    getsupport(this,(btVector3 *)local_60,(sSV *)plVar8[uVar4]);
    uVar6 = EncloseOrigin(this);
    if ((uVar6 & 1) == 0) {
      lVar10 = *(long *)(this + 0x1c0);
      uVar5 = *(int *)(lVar10 + 0x30) - 1;
      *(uint *)(lVar10 + 0x30) = uVar5;
      uVar4 = *(uint *)(this + 0x1b8);
      uVar9 = *(undefined8 *)(lVar10 + (ulong)uVar5 * 8);
      *(uint *)(this + 0x1b8) = uVar4 + 1;
      *(undefined8 *)(this + (ulong)uVar4 * 8 + 0x198) = uVar9;
      lVar10 = *(long *)(this + 0x1c0);
      local_64 = 0;
      local_70 = -local_60[0];
      fStack_6c = -local_60[1];
      local_68 = -local_60[2];
      *(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 4 + 0x20) = 0;
      iVar3 = *(int *)(this + 0x1b8);
      *(uint *)(this + 0x1b8) = iVar3 - 1U;
      *(undefined8 *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x30) * 8) =
           *(undefined8 *)(this + (ulong)(iVar3 - 1U) * 8 + 0x198);
      uVar4 = *(uint *)(lVar10 + 0x30);
      *(uint *)(lVar10 + 0x30) = uVar4 + 1;
      getsupport(this,(btVector3 *)&local_70,*(sSV **)(lVar10 + (ulong)uVar4 * 8));
      uVar6 = EncloseOrigin(this);
      if ((uVar6 & 1) == 0) {
        lVar10 = *(long *)(this + 0x1c0);
        uVar5 = *(int *)(lVar10 + 0x30) - 1;
        *(uint *)(lVar10 + 0x30) = uVar5;
        uVar4 = *(uint *)(this + 0x1b8);
        uVar9 = *(undefined8 *)(lVar10 + (ulong)uVar5 * 8);
        *(uint *)(this + 0x1b8) = uVar4 + 1;
        *(undefined8 *)(this + (ulong)uVar4 * 8 + 0x198) = uVar9;
        return 0;
      }
    }
    return 1;
  case 4:
    lVar10 = plVar8[2];
    lVar11 = plVar8[3];
    lVar1 = *plVar8;
    lVar2 = plVar8[1];
    fVar15 = *(float *)(lVar11 + 0x10);
    fVar16 = *(float *)(lVar11 + 0x14);
    fVar17 = *(float *)(lVar11 + 0x18);
    fVar12 = *(float *)(lVar1 + 0x10) - fVar15;
    fVar18 = *(float *)(lVar2 + 0x10) - fVar15;
    fVar15 = *(float *)(lVar10 + 0x10) - fVar15;
    fVar13 = *(float *)(lVar1 + 0x14) - fVar16;
    fVar14 = *(float *)(lVar1 + 0x18) - fVar17;
    fVar20 = *(float *)(lVar2 + 0x18) - fVar17;
    fVar19 = *(float *)(lVar2 + 0x14) - fVar16;
    fVar16 = *(float *)(lVar10 + 0x14) - fVar16;
    fVar17 = *(float *)(lVar10 + 0x18) - fVar17;
    fVar12 = (fVar12 * fVar19 * fVar17 +
             (((fVar13 * fVar20 * fVar15 + fVar14 * fVar18 * fVar16) - fVar12 * fVar20 * fVar16) -
             fVar13 * fVar18 * fVar17)) - fVar14 * fVar19 * fVar15;
    if (fVar12 < 0.0) {
      return 1;
    }
    if (fVar12 != 0.0) {
      return 1;
    }
  }
  return 0;
}

