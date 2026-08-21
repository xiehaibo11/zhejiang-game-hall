
/* btConvexInternalShape::getAabbSlow(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btConvexInternalShape::getAabbSlow
          (btConvexInternalShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80 [8];
  
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))();
  lVar1 = 0;
  do {
    local_80[4] = 0.0;
    local_80[5] = 0.0;
    local_80[6] = 0.0;
    local_80[7] = 0.0;
    *(undefined4 *)((long)local_80 + lVar1 + 0x10) = 0x3f800000;
    fVar5 = local_80[6] * *(float *)(param_1 + 0x28);
    fVar4 = *(float *)param_1 * local_80[4] + *(float *)(param_1 + 0x10) * local_80[5] +
            *(float *)(param_1 + 0x20) * local_80[6];
    local_80[1] = local_80[4] * *(float *)(param_1 + 4) + local_80[5] * *(float *)(param_1 + 0x14) +
                  local_80[6] * *(float *)(param_1 + 0x24);
    local_80[2] = local_80[4] * *(float *)(param_1 + 8) + local_80[5] * *(float *)(param_1 + 0x18) +
                  fVar5;
    local_80[3] = 0.0;
    local_80[0] = fVar4;
    fVar3 = (float)(**(code **)(*(long *)this + 0x80))(this,local_80);
    local_80[0] = fVar3 * *(float *)param_1 + fVar4 * *(float *)(param_1 + 4) +
                  fVar5 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
    local_80[1] = fVar3 * *(float *)(param_1 + 0x10) + fVar4 * *(float *)(param_1 + 0x14) +
                  fVar5 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
    local_80[2] = fVar3 * *(float *)(param_1 + 0x20) + fVar4 * *(float *)(param_1 + 0x24) +
                  fVar5 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
    local_80[3] = 0.0;
    *(float *)(param_3 + lVar1) = fVar2 + *(float *)((long)local_80 + lVar1);
    *(undefined4 *)((long)local_80 + lVar1 + 0x10) = 0xbf800000;
    fVar5 = local_80[6] * *(float *)(param_1 + 0x28);
    fVar4 = *(float *)param_1 * local_80[4] + *(float *)(param_1 + 0x10) * local_80[5] +
            *(float *)(param_1 + 0x20) * local_80[6];
    fStack_8c = local_80[4] * *(float *)(param_1 + 4) + local_80[5] * *(float *)(param_1 + 0x14) +
                local_80[6] * *(float *)(param_1 + 0x24);
    local_88 = local_80[4] * *(float *)(param_1 + 8) + local_80[5] * *(float *)(param_1 + 0x18) +
               fVar5;
    local_84 = 0;
    local_90 = fVar4;
    fVar3 = (float)(**(code **)(*(long *)this + 0x80))(this,&local_90);
    local_80[0] = *(float *)param_1 * fVar3 + fVar4 * *(float *)(param_1 + 4) +
                  fVar5 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
    local_80[1] = fVar3 * *(float *)(param_1 + 0x10) + fVar4 * *(float *)(param_1 + 0x14) +
                  fVar5 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
    local_80[2] = fVar3 * *(float *)(param_1 + 0x20) + fVar4 * *(float *)(param_1 + 0x24) +
                  fVar5 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
    *(float *)(param_2 + lVar1) = *(float *)((long)local_80 + lVar1) - fVar2;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0xc);
  return;
}

