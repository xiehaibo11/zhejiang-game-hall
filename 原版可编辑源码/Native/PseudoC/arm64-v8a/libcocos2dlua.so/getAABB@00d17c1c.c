
/* cocos2d::BatchSprite3D::getAABB() const */

AABB * __thiscall cocos2d::BatchSprite3D::getAABB(BatchSprite3D *this)

{
  AABB *this_00;
  long lVar1;
  Mat4 aMStack_a8 [64];
  Mat4 aMStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x430))(aMStack_68);
  this_00 = (AABB *)(this + 0x31c);
  *(undefined8 *)(this + 0x324) = *(undefined8 *)(this + 0x30c);
  *(undefined8 *)this_00 = *(undefined8 *)(this + 0x304);
  *(undefined8 *)(this + 0x32c) = *(undefined8 *)(this + 0x314);
  Mat4::Mat4(aMStack_a8,aMStack_68);
  AABB::transform(this_00,aMStack_a8);
  Mat4::~Mat4(aMStack_a8);
  Mat4::~Mat4(aMStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

