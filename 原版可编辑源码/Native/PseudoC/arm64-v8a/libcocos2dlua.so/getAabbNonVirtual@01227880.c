
/* btConvexShape::getAabbNonVirtual(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btConvexShape::getAabbNonVirtual
          (btConvexShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_80 [8];
  
  switch(*(uint *)(this + 8)) {
  case 0:
  case 0xd:
    fVar3 = *(float *)(this + 0x38);
    fVar4 = fVar3 + *(float *)(this + 0x28);
    fVar5 = fVar3 + *(float *)(this + 0x2c);
    fVar3 = fVar3 + *(float *)(this + 0x30);
    fVar7 = *(float *)(param_1 + 0x38);
    fVar6 = fVar4 * ABS(*(float *)param_1) + fVar5 * ABS(*(float *)(param_1 + 4)) +
            fVar3 * ABS(*(float *)(param_1 + 8));
    fVar8 = fVar4 * ABS(*(float *)(param_1 + 0x10)) + fVar5 * ABS(*(float *)(param_1 + 0x14)) +
            fVar3 * ABS(*(float *)(param_1 + 0x18));
    fVar3 = fVar4 * ABS(*(float *)(param_1 + 0x20)) + fVar5 * ABS(*(float *)(param_1 + 0x24)) +
            fVar3 * ABS(*(float *)(param_1 + 0x28));
    fVar4 = *(float *)(param_1 + 0x30) - fVar6;
    fVar10 = *(float *)(param_1 + 0x34) - fVar8;
    fVar11 = fVar7 - fVar3;
    fVar6 = fVar6 + *(float *)(param_1 + 0x30);
    fVar8 = fVar8 + *(float *)(param_1 + 0x34);
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case 1:
    fVar3 = *(float *)(this + 0x38);
    lVar2 = 0;
    do {
      local_80[4] = 0.0;
      local_80[5] = 0.0;
      local_80[6] = 0.0;
      local_80[7] = 0.0;
      *(undefined4 *)((long)local_80 + lVar2 + 0x10) = 0x3f800000;
      fVar5 = local_80[6] * *(float *)(param_1 + 0x28);
      fVar4 = *(float *)param_1 * local_80[4] + *(float *)(param_1 + 0x10) * local_80[5] +
              *(float *)(param_1 + 0x20) * local_80[6];
      local_80[1] = local_80[4] * *(float *)(param_1 + 4) + local_80[5] * *(float *)(param_1 + 0x14)
                    + local_80[6] * *(float *)(param_1 + 0x24);
      local_80[2] = local_80[4] * *(float *)(param_1 + 8) + local_80[5] * *(float *)(param_1 + 0x18)
                    + fVar5;
      local_80[3] = 0.0;
      local_80[0] = fVar4;
      fVar7 = (float)localGetSupportVertexWithoutMarginNonVirtual((btVector3 *)this);
      local_80[0] = fVar7 * *(float *)param_1 + fVar4 * *(float *)(param_1 + 4) +
                    fVar5 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
      local_80[1] = fVar7 * *(float *)(param_1 + 0x10) + fVar4 * *(float *)(param_1 + 0x14) +
                    fVar5 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
      local_80[2] = fVar7 * *(float *)(param_1 + 0x20) + fVar4 * *(float *)(param_1 + 0x24) +
                    fVar5 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
      local_80[3] = 0.0;
      *(float *)(param_3 + lVar2) = fVar3 + *(float *)((long)local_80 + lVar2);
      *(undefined4 *)((long)local_80 + lVar2 + 0x10) = 0xbf800000;
      fVar5 = local_80[6] * *(float *)(param_1 + 0x28);
      fVar4 = *(float *)param_1 * local_80[4] + *(float *)(param_1 + 0x10) * local_80[5] +
              *(float *)(param_1 + 0x20) * local_80[6];
      fVar7 = (float)localGetSupportVertexWithoutMarginNonVirtual((btVector3 *)this);
      local_80[0] = *(float *)param_1 * fVar7 + fVar4 * *(float *)(param_1 + 4) +
                    fVar5 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
      local_80[1] = fVar7 * *(float *)(param_1 + 0x10) + fVar4 * *(float *)(param_1 + 0x14) +
                    fVar5 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
      local_80[2] = fVar7 * *(float *)(param_1 + 0x20) + fVar4 * *(float *)(param_1 + 0x24) +
                    fVar5 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
      *(float *)(param_2 + lVar2) = *(float *)((long)local_80 + lVar2) - fVar3;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0xc);
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x01227bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x10))(this,param_1,param_2,param_3);
    return;
  case 4:
  case 5:
    if ((*(uint *)(this + 8) & 0xfffffffe) == 4) {
      fVar3 = *(float *)(this + 0x38);
    }
    else {
      fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
    }
    fVar7 = (*(float *)(this + 0x58) + *(float *)(this + 0x48)) * 0.5;
    fVar4 = (*(float *)(this + 0x5c) + *(float *)(this + 0x4c)) * 0.5;
    fVar5 = (*(float *)(this + 0x60) + *(float *)(this + 0x50)) * 0.5;
    fVar10 = fVar3 + (*(float *)(this + 0x58) - *(float *)(this + 0x48)) * 0.5;
    fVar11 = fVar3 + (*(float *)(this + 0x5c) - *(float *)(this + 0x4c)) * 0.5;
    fVar3 = fVar3 + (*(float *)(this + 0x60) - *(float *)(this + 0x50)) * 0.5;
    fVar9 = fVar7 * *(float *)param_1 + fVar4 * *(float *)(param_1 + 4) +
            fVar5 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
    fVar8 = fVar7 * *(float *)(param_1 + 0x10) + fVar4 * *(float *)(param_1 + 0x14) +
            fVar5 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
    fVar4 = fVar7 * *(float *)(param_1 + 0x20) + fVar4 * *(float *)(param_1 + 0x24) +
            fVar5 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
    fVar5 = fVar10 * ABS(*(float *)param_1) + fVar11 * ABS(*(float *)(param_1 + 4)) +
            fVar3 * ABS(*(float *)(param_1 + 8));
    fVar6 = fVar10 * ABS(*(float *)(param_1 + 0x10)) + fVar11 * ABS(*(float *)(param_1 + 0x14)) +
            fVar3 * ABS(*(float *)(param_1 + 0x18));
    fVar3 = fVar10 * ABS(*(float *)(param_1 + 0x20)) + fVar11 * ABS(*(float *)(param_1 + 0x24)) +
            fVar3 * ABS(*(float *)(param_1 + 0x28));
    *(undefined4 *)(param_2 + 0xc) = 0;
    fVar7 = fVar3 + fVar4;
    *(float *)param_2 = fVar9 - fVar5;
    *(float *)(param_2 + 4) = fVar8 - fVar6;
    *(float *)(param_2 + 8) = fVar4 - fVar3;
    *(float *)param_3 = fVar5 + fVar9;
    *(float *)(param_3 + 4) = fVar6 + fVar8;
    goto LAB_01227ea8;
  case 8:
    fVar4 = *(float *)(param_1 + 0x30);
    fVar5 = *(float *)(param_1 + 0x34);
    fVar3 = *(float *)(this + 0x28) + *(float *)(this + 0x28) * *(float *)(this + 0x18);
    fVar7 = *(float *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(float *)param_2 = fVar4 - fVar3;
    *(float *)(param_2 + 4) = fVar5 - fVar3;
    *(float *)(param_2 + 8) = fVar7 - fVar3;
    fVar4 = *(float *)(param_1 + 0x34);
    fVar7 = fVar3 + *(float *)(param_1 + 0x38);
    *(float *)param_3 = fVar3 + *(float *)(param_1 + 0x30);
    *(float *)(param_3 + 4) = fVar3 + fVar4;
    goto LAB_01227ea8;
  case 10:
    iVar1 = *(int *)(this + 0x40);
    local_80[4] = *(float *)(this + (long)((iVar1 + 2) % 3) * 4 + 0x28);
    local_80[5] = local_80[4];
    local_80[6] = local_80[4];
    local_80[(long)iVar1 + 4] = *(float *)(this + (long)iVar1 * 4 + 0x28) + local_80[4];
    fVar3 = *(float *)(this + 0x38);
    local_80[4] = fVar3 + local_80[4];
    local_80[5] = fVar3 + local_80[5];
    fVar6 = *(float *)(param_1 + 0x30);
    fVar8 = *(float *)(param_1 + 0x34);
    fVar3 = fVar3 + local_80[6];
    fVar7 = *(float *)(param_1 + 0x38);
    fVar5 = fVar3 * ABS(*(float *)(param_1 + 8)) +
            ABS(*(float *)param_1) * local_80[4] + ABS(*(float *)(param_1 + 4)) * local_80[5];
    fVar9 = fVar3 * ABS(*(float *)(param_1 + 0x18)) +
            ABS(*(float *)(param_1 + 0x10)) * local_80[4] +
            ABS(*(float *)(param_1 + 0x14)) * local_80[5];
    fVar3 = fVar3 * ABS(*(float *)(param_1 + 0x28)) +
            ABS(*(float *)(param_1 + 0x20)) * local_80[4] +
            ABS(*(float *)(param_1 + 0x24)) * local_80[5];
    *(undefined4 *)(param_2 + 0xc) = 0;
    fVar4 = fVar6 - fVar5;
    fVar10 = fVar8 - fVar9;
    fVar11 = fVar7 - fVar3;
    fVar6 = fVar6 + fVar5;
    fVar8 = fVar8 + fVar9;
  }
  fVar7 = fVar7 + fVar3;
  *(float *)param_2 = fVar4;
  *(float *)(param_2 + 4) = fVar10;
  *(float *)(param_2 + 8) = fVar11;
  *(float *)param_3 = fVar6;
  *(float *)(param_3 + 4) = fVar8;
LAB_01227ea8:
  *(float *)(param_3 + 8) = fVar7;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}

