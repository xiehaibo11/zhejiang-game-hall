
/* btTriangleMeshShape::recalcLocalAabb() */

void btTriangleMeshShape::recalcLocalAabb(void)

{
  long *in_x0;
  float fVar1;
  float fVar2;
  float in_s2;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  local_34 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_40 = 0x3f800000;
  fVar1 = (float)(**(code **)(*in_x0 + 0x88))(in_x0,&local_40);
  *(float *)((long)in_x0 + 0x2c) = fVar1 + *(float *)(in_x0 + 3);
  local_40 = 0xbf800000;
  fVar1 = (float)(**(code **)(*in_x0 + 0x88))();
  fVar2 = *(float *)(in_x0 + 3);
  *(float *)((long)in_x0 + 0x1c) = fVar1 - fVar2;
  local_40 = 0;
  uStack_38 = 0;
  local_34 = 0;
  uStack_3c = 0x3f800000;
  (**(code **)(*in_x0 + 0x88))();
  *(float *)(in_x0 + 6) = fVar2 + *(float *)(in_x0 + 3);
  uStack_3c = 0xbf800000;
  (**(code **)(*in_x0 + 0x88))();
  *(float *)(in_x0 + 4) = fVar2 - *(float *)(in_x0 + 3);
  local_40 = 0;
  uStack_3c = 0;
  local_34 = 0;
  uStack_38 = 0x3f800000;
  (**(code **)(*in_x0 + 0x88))();
  *(float *)((long)in_x0 + 0x34) = in_s2 + *(float *)(in_x0 + 3);
  uStack_38 = 0xbf800000;
  (**(code **)(*in_x0 + 0x88))();
  *(float *)((long)in_x0 + 0x24) = in_s2 - *(float *)(in_x0 + 3);
  return;
}

