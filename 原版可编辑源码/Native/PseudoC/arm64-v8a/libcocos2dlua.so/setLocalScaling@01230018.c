
/* btTriangleMeshShape::setLocalScaling(btVector3 const&) */

void btTriangleMeshShape::setLocalScaling(btVector3 *param_1)

{
  undefined8 *in_x1;
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float in_s2;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  lVar1 = *(long *)(param_1 + 0x40);
  uVar3 = *in_x1;
  *(undefined8 *)(lVar1 + 0x10) = in_x1[1];
  *(undefined8 *)(lVar1 + 8) = uVar3;
  local_34 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_40 = 0x3f800000;
  fVar2 = (float)(**(code **)(*(long *)param_1 + 0x88))(param_1,&local_40);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x18) + fVar2;
  local_40 = 0xbf800000;
  fVar2 = (float)(**(code **)(*(long *)param_1 + 0x88))(param_1,&local_40);
  fVar4 = *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x1c) = fVar2 - fVar4;
  local_40 = 0;
  uStack_38 = 0;
  local_34 = 0;
  uStack_3c = 0x3f800000;
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_40);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x18) + fVar4;
  uStack_3c = 0xbf800000;
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_40);
  *(float *)(param_1 + 0x20) = fVar4 - *(float *)(param_1 + 0x18);
  local_40 = 0;
  uStack_3c = 0;
  local_34 = 0;
  uStack_38 = 0x3f800000;
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_40);
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x18) + in_s2;
  uStack_38 = 0xbf800000;
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_40);
  *(float *)(param_1 + 0x24) = in_s2 - *(float *)(param_1 + 0x18);
  return;
}

