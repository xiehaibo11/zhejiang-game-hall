
/* cocos2d::PUParticleSystem3D::calulateRotationOffset() */

void cocos2d::PUParticleSystem3D::calulateRotationOffset(void)

{
  long lVar1;
  PUParticleSystem3D *in_x0;
  PUParticleSystem3D *this;
  undefined4 uVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  Quaternion aQStack_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  Quaternion aQStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = in_x0;
  if (in_x0[0x490] != (PUParticleSystem3D)0x0) {
    this = *(PUParticleSystem3D **)(in_x0 + 0x4c0);
  }
  uVar2 = getDerivedPosition(this);
  *(undefined4 *)(in_x0 + 0x454) = uVar2;
  *(undefined4 *)(in_x0 + 0x458) = in_s1;
  *(undefined4 *)(in_x0 + 0x45c) = in_s2;
  Quaternion::Quaternion(aQStack_38,(Quaternion *)(in_x0 + 0x4ac));
  Quaternion::inverse(aQStack_38);
  getDerivedOrientation();
  Quaternion::Quaternion((Quaternion *)&local_48,aQStack_58);
  Quaternion::multiply((Quaternion *)&local_48,aQStack_38);
  *(undefined8 *)(in_x0 + 0x44c) = uStack_40;
  *(undefined8 *)(in_x0 + 0x444) = local_48;
  Quaternion::~Quaternion((Quaternion *)&local_48);
  Quaternion::~Quaternion(aQStack_58);
  Quaternion::~Quaternion(aQStack_38);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

