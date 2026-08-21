
/* btPoint2PointConstraint::buildJacobian() */

void __thiscall btPoint2PointConstraint::buildJacobian(btPoint2PointConstraint *this)

{
  long lVar1;
  long lVar2;
  btPoint2PointConstraint *this_00;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  float fStack_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar3 = 0;
  this_00 = this + 0x48;
  *(undefined4 *)(this + 0x38) = 0;
  local_50 = 0;
  uStack_48 = 0;
  do {
    *(undefined4 *)((long)&local_50 + lVar3) = 0x3f800000;
    lVar2 = *(long *)(this + 0x28);
    local_80 = *(undefined4 *)(lVar2 + 8);
    local_7c = *(undefined4 *)(lVar2 + 0x18);
    local_78 = *(undefined4 *)(lVar2 + 0x28);
    uStack_74 = 0;
    local_70 = *(undefined4 *)(lVar2 + 0xc);
    local_6c = *(undefined4 *)(lVar2 + 0x1c);
    local_68 = *(undefined4 *)(lVar2 + 0x2c);
    fStack_58 = *(float *)(lVar2 + 0x30);
    uStack_64 = 0;
    local_60 = *(undefined4 *)(lVar2 + 0x10);
    local_5c = *(undefined4 *)(lVar2 + 0x20);
    local_54 = 0;
    lVar1 = *(long *)(this + 0x30);
    local_b0 = *(undefined4 *)(lVar1 + 8);
    local_ac = *(undefined4 *)(lVar1 + 0x18);
    local_a8 = *(undefined4 *)(lVar1 + 0x28);
    uStack_a4 = 0;
    local_a0 = *(undefined4 *)(lVar1 + 0xc);
    local_9c = *(undefined4 *)(lVar1 + 0x1c);
    local_98 = *(undefined4 *)(lVar1 + 0x2c);
    uStack_94 = 0;
    local_90 = *(undefined4 *)(lVar1 + 0x10);
    local_8c = *(undefined4 *)(lVar1 + 0x20);
    local_88 = *(float *)(lVar1 + 0x30);
    uStack_84 = 0;
    fVar4 = *(float *)(this + 0x144);
    fVar5 = *(float *)(this + 0x148);
    fVar6 = *(float *)(this + 0x14c);
    local_c0 = (fVar4 * *(float *)(lVar2 + 8) + fVar5 * *(float *)(lVar2 + 0xc) +
                fVar6 * *(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 0x38)) -
               *(float *)(lVar2 + 0x38);
    fStack_bc = (fVar4 * *(float *)(lVar2 + 0x18) + fVar5 * *(float *)(lVar2 + 0x1c) +
                 fVar6 * *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x3c)) -
                *(float *)(lVar2 + 0x3c);
    local_b8 = (fVar4 * *(float *)(lVar2 + 0x28) + fVar5 * *(float *)(lVar2 + 0x2c) +
                fVar6 * fStack_58 + *(float *)(lVar2 + 0x40)) - *(float *)(lVar2 + 0x40);
    local_b4 = 0;
    fVar4 = *(float *)(this + 0x154);
    fVar5 = *(float *)(this + 0x158);
    fVar6 = *(float *)(this + 0x15c);
    local_d0 = (fVar4 * *(float *)(lVar1 + 8) + fVar5 * *(float *)(lVar1 + 0xc) +
                fVar6 * *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x38)) -
               *(float *)(lVar1 + 0x38);
    fStack_cc = (fVar4 * *(float *)(lVar1 + 0x18) + fVar5 * *(float *)(lVar1 + 0x1c) +
                 fVar6 * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x3c)) -
                *(float *)(lVar1 + 0x3c);
    local_c8 = (fVar4 * *(float *)(lVar1 + 0x28) + fVar5 * *(float *)(lVar1 + 0x2c) +
                fVar6 * local_88 + *(float *)(lVar1 + 0x40)) - *(float *)(lVar1 + 0x40);
    local_c4 = 0;
    btJacobianEntry::btJacobianEntry
              ((btJacobianEntry *)this_00,(btMatrix3x3 *)&local_80,(btMatrix3x3 *)&local_b0,
               (btVector3 *)&local_c0,(btVector3 *)&local_d0,(btVector3 *)&local_50,
               (btVector3 *)(*(long *)(this + 0x28) + 0x1a8),
               *(float *)(*(long *)(this + 0x28) + 0x174),
               (btVector3 *)(*(long *)(this + 0x30) + 0x1a8),
               *(float *)(*(long *)(this + 0x30) + 0x174));
    *(undefined4 *)((long)&local_50 + lVar3) = 0;
    lVar3 = lVar3 + 4;
    this_00 = this_00 + 0x54;
  } while (lVar3 != 0xc);
  return;
}

