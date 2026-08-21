
/* btTriangleMeshShape::btTriangleMeshShape(btStridingMeshInterface*) */

void __thiscall
btTriangleMeshShape::btTriangleMeshShape(btTriangleMeshShape *this,btStridingMeshInterface *param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float in_s2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  btConcaveShape::btConcaveShape((btConcaveShape *)this);
  *(btStridingMeshInterface **)(this + 0x40) = param_1;
  *(undefined4 *)(this + 8) = 0x15;
  *(undefined ***)this = &PTR__btTriangleMeshShape_01733970;
  uVar1 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
  if ((uVar1 & 1) == 0) {
    local_24 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    local_30 = 0x3f800000;
    fVar2 = (float)(**(code **)(*(long *)this + 0x88))(this,&local_30);
    *(float *)(this + 0x2c) = fVar2 + *(float *)(this + 0x18);
    local_30 = 0xbf800000;
    fVar2 = (float)(**(code **)(*(long *)this + 0x88))(this,&local_30);
    fVar3 = *(float *)(this + 0x18);
    *(float *)(this + 0x1c) = fVar2 - fVar3;
    local_30 = 0;
    uStack_28 = 0;
    local_24 = 0;
    uStack_2c = 0x3f800000;
    (**(code **)(*(long *)this + 0x88))(this,&local_30);
    *(float *)(this + 0x30) = fVar3 + *(float *)(this + 0x18);
    uStack_2c = 0xbf800000;
    (**(code **)(*(long *)this + 0x88))(this,&local_30);
    *(float *)(this + 0x20) = fVar3 - *(float *)(this + 0x18);
    local_30 = 0;
    uStack_2c = 0;
    local_24 = 0;
    uStack_28 = 0x3f800000;
    (**(code **)(*(long *)this + 0x88))(this,&local_30);
    *(float *)(this + 0x34) = in_s2 + *(float *)(this + 0x18);
    uStack_28 = 0xbf800000;
    (**(code **)(*(long *)this + 0x88))(this,&local_30);
    *(float *)(this + 0x24) = in_s2 - *(float *)(this + 0x18);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x60))(param_1,this + 0x1c,this + 0x2c);
  }
  return;
}

