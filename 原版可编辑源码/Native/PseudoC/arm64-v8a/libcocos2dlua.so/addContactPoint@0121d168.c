
/* btBridgedManifoldResult::addContactPoint(btVector3 const&, btVector3 const&, float) */

void __thiscall
btBridgedManifoldResult::addContactPoint
          (btBridgedManifoldResult *this,btVector3 *param_1,btVector3 *param_2,float param_3)

{
  long lVar1;
  btBridgedManifoldResult *pbVar2;
  btBridgedManifoldResult *pbVar3;
  long lVar4;
  long lVar5;
  btBridgedManifoldResult *pbVar6;
  btBridgedManifoldResult *pbVar7;
  btBridgedManifoldResult *pbVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  
  pbVar3 = this + 0x10;
  lVar4 = *(long *)(*(long *)pbVar3 + 0x10);
  lVar5 = *(long *)(*(long *)(this + 8) + 0x308);
  local_a0 = *(float *)param_1 * param_3 + *(float *)param_2;
  fStack_9c = *(float *)(param_1 + 4) * param_3 + *(float *)(param_2 + 4);
  local_98 = *(float *)(param_1 + 8) * param_3 + *(float *)(param_2 + 8);
  if (lVar5 == lVar4) {
    fVar9 = local_a0 - *(float *)(lVar5 + 0x38);
    fVar10 = fStack_9c - *(float *)(lVar5 + 0x3c);
    fVar11 = local_98 - *(float *)(lVar5 + 0x40);
    local_d0 = fVar9 * *(float *)(lVar5 + 8) + fVar10 * *(float *)(lVar5 + 0x18) +
               fVar11 * *(float *)(lVar5 + 0x28);
    fStack_cc = fVar9 * *(float *)(lVar5 + 0xc) + fVar10 * *(float *)(lVar5 + 0x1c) +
                fVar11 * *(float *)(lVar5 + 0x2c);
    local_c8 = fVar9 * *(float *)(lVar5 + 0x10) + fVar10 * *(float *)(lVar5 + 0x20) +
               fVar11 * *(float *)(lVar5 + 0x30);
    pbVar2 = this + 0x18;
  }
  else {
    lVar1 = *(long *)(*(long *)(this + 0x18) + 0x10);
    fVar9 = local_a0 - *(float *)(lVar1 + 0x38);
    fVar10 = fStack_9c - *(float *)(lVar1 + 0x3c);
    fVar11 = local_98 - *(float *)(lVar1 + 0x40);
    local_d0 = fVar9 * *(float *)(lVar1 + 8) + fVar10 * *(float *)(lVar1 + 0x18) +
               fVar11 * *(float *)(lVar1 + 0x28);
    fStack_cc = fVar9 * *(float *)(lVar1 + 0xc) + fVar10 * *(float *)(lVar1 + 0x1c) +
                fVar11 * *(float *)(lVar1 + 0x2c);
    local_c8 = fVar9 * *(float *)(lVar1 + 0x10) + fVar10 * *(float *)(lVar1 + 0x20) +
               fVar11 * *(float *)(lVar1 + 0x30);
    pbVar2 = pbVar3;
  }
  lVar1 = *(long *)(*(long *)pbVar2 + 0x10);
  fVar9 = *(float *)param_2 - *(float *)(lVar1 + 0x38);
  fVar10 = *(float *)(param_2 + 4) - *(float *)(lVar1 + 0x3c);
  fVar11 = *(float *)(param_2 + 8) - *(float *)(lVar1 + 0x40);
  local_c0 = fVar9 * *(float *)(lVar1 + 8) + fVar10 * *(float *)(lVar1 + 0x18) +
             fVar11 * *(float *)(lVar1 + 0x28);
  fStack_bc = fVar9 * *(float *)(lVar1 + 0xc) + fVar10 * *(float *)(lVar1 + 0x1c) +
              fVar11 * *(float *)(lVar1 + 0x2c);
  local_b8 = fVar9 * *(float *)(lVar1 + 0x10) + fVar10 * *(float *)(lVar1 + 0x20) +
             fVar11 * *(float *)(lVar1 + 0x30);
  local_c4 = 0;
  local_b4 = 0;
  uStack_88 = *(undefined8 *)(param_1 + 8);
  local_90 = *(undefined8 *)param_1;
  local_7c = 0;
  local_74 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_3c = 0;
  local_44 = 0;
  uStack_4c = 0;
  local_54 = 0;
  local_94 = 0;
  uStack_a8 = *(undefined8 *)(param_2 + 8);
  local_b0 = *(undefined8 *)param_2;
  if (lVar5 == lVar4) {
    pbVar2 = this + 0x20;
    pbVar6 = this + 0x24;
    pbVar7 = this + 0x28;
    pbVar8 = this + 0x2c;
  }
  else {
    pbVar2 = this + 0x24;
    pbVar6 = this + 0x20;
    pbVar7 = this + 0x2c;
    pbVar8 = this + 0x28;
  }
  local_70 = *(undefined4 *)pbVar2;
  uStack_6c = *(undefined4 *)pbVar6;
  local_68 = *(undefined4 *)pbVar7;
  uStack_64 = *(undefined4 *)pbVar8;
  pbVar2 = pbVar3;
  pbVar6 = this + 0x18;
  if (lVar5 == lVar4) {
    pbVar2 = this + 0x18;
    pbVar6 = pbVar3;
  }
  local_80 = param_3;
  (**(code **)(**(long **)(this + 0x30) + 0x18))
            (*(long **)(this + 0x30),&local_d0,*(undefined8 *)pbVar6,local_70,local_68,
             *(undefined8 *)pbVar2);
  return;
}

