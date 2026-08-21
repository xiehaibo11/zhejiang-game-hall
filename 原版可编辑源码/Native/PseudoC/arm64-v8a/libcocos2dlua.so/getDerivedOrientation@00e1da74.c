
/* cocos2d::PUParticleSystem3D::getDerivedOrientation() */

void cocos2d::PUParticleSystem3D::getDerivedOrientation(void)

{
  long lVar1;
  long *in_x0;
  Quaternion *in_x8;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((char)in_x0[0x92] == '\0') {
    Quaternion::Quaternion(in_x8);
                    /* try { // try from 00e1dac8 to 00f1dadb has its CatchHandler @ 00e1e128 */
    (**(code **)(*in_x0 + 0x430))(aMStack_78);
    Mat4::decompose(aMStack_78,(Vec3 *)0x0,in_x8,(Vec3 *)0x0);
    Mat4::~Mat4(aMStack_78);
  }
  else {
    (**(code **)(*in_x0 + 0x1a8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

