
/* cocos2d::OBB::OBB(cocos2d::AABB const&) */

void __thiscall cocos2d::OBB::OBB(OBB *this,AABB *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  Vec3::Vec3((Vec3 *)this);
  Vec3::Vec3((Vec3 *)(this + 0xc));
  Vec3::Vec3((Vec3 *)(this + 0x18));
  Vec3::Vec3((Vec3 *)(this + 0x24));
  Vec3::Vec3((Vec3 *)(this + 0x30));
  Vec3::Vec3((Vec3 *)(this + 0x3c));
  Vec3::Vec3((Vec3 *)(this + 0x48));
  Vec3::Vec3((Vec3 *)(this + 0x54));
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0x3f800000;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x1c) = 0x3f800000;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(float *)this = (fVar1 + fVar4) * 0.5;
  *(float *)(this + 4) = (fVar2 + fVar5) * 0.5;
  *(float *)(this + 8) = (fVar3 + fVar6) * 0.5;
  fVar1 = ((float)*(undefined8 *)(param_1 + 0xc) - (float)*(undefined8 *)param_1) * 0.5;
  fVar2 = ((float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) -
          (float)((ulong)*(undefined8 *)param_1 >> 0x20)) * 0.5;
  fVar3 = (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 8)) * 0.5;
  *(ulong *)(this + 0x54) = CONCAT44(fVar2,fVar1);
  *(float *)(this + 0x48) = fVar3 * 0.0;
  *(float *)(this + 0x4c) = fVar3 * 0.0;
  *(float *)(this + 0x5c) = fVar3;
  *(ulong *)(this + 0x30) = CONCAT44(fVar1 * 0.0,fVar1);
  *(ulong *)(this + 0x38) = CONCAT44(fVar2 * 0.0,fVar1 * 0.0);
  *(ulong *)(this + 0x40) = CONCAT44(fVar2 * 0.0,fVar2);
  *(float *)(this + 0x50) = fVar3;
  return;
}

