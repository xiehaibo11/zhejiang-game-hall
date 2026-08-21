
/* cocos2d::PUGeometryRotator::updatePUAffector(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUGeometryRotator::updatePUAffector
          (PUGeometryRotator *this,PUParticle3D *param_1,float param_2)

{
  Quaternion *this_00;
  long lVar1;
  PUGeometryRotator *pPVar2;
  float fVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0xb0] == (PUGeometryRotator)0x0) {
    fVar3 = (float)PUDynamicAttributeHelper::calculate
                             ((PUDynamicAttributeHelper *)(this + 0xdd),
                              *(PUDynamicAttribute **)(this + 0xb8),*(float *)(param_1 + 0x134),0.0)
    ;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x100);
  }
  this_00 = (Quaternion *)(this + 0xc0);
  *(float *)(this + 0xac) = fVar3 * param_2;
  Quaternion::set(this_00,0.0,0.0,0.0,1.0);
  pPVar2 = (PUGeometryRotator *)param_1;
  if (this[0xdc] != (PUGeometryRotator)0x0) {
    pPVar2 = this;
  }
  Quaternion::set(this_00,(Vec3 *)(pPVar2 + 0xd0),*(float *)(this + 0xac));
  Quaternion::Quaternion((Quaternion *)&local_58,this_00);
  Quaternion::multiply((Quaternion *)&local_58,(Quaternion *)(param_1 + 0x14));
  *(undefined8 *)(param_1 + 0x1c) = uStack_50;
  *(undefined8 *)(param_1 + 0x14) = local_58;
  Quaternion::~Quaternion((Quaternion *)&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

