
/* cocos2d::Camera::unprojectGL(cocos2d::Size const&, cocos2d::Vec3 const*, cocos2d::Vec3*) const */

void __thiscall cocos2d::Camera::unprojectGL(Camera *this,Size *param_1,Vec3 *param_2,Vec3 *param_3)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 local_88;
  float local_80;
  float local_7c;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Vec4::Vec4((Vec4 *)&local_88,*(float *)param_2 / *(float *)param_1,
             *(float *)(param_2 + 4) / *(float *)(param_1 + 4),*(float *)(param_2 + 8),1.0);
  uVar3 = NEON_fmov(0xbf800000,4);
  fVar2 = (float)((ulong)local_88 >> 0x20);
  local_88 = CONCAT44(fVar2 + fVar2 + (float)((ulong)uVar3 >> 0x20),
                      (float)local_88 + (float)local_88 + (float)uVar3);
  local_80 = local_80 + local_80 + -1.0;
  getViewMatrix(this);
  if (this[0x428] != (Camera)0x0) {
    this[0x428] = (Camera)0x0;
    Mat4::multiply((Mat4 *)(this + 0x300),(Mat4 *)(this + 0x340),(Mat4 *)(this + 0x3c0));
  }
  Mat4::getInversed();
  Mat4::transformVector(aMStack_78,(Vec4 *)&local_88,(Vec4 *)&local_88);
  Mat4::~Mat4(aMStack_78);
  if (local_7c != 0.0) {
    local_80 = local_80 / local_7c;
    local_88 = CONCAT44((float)((ulong)local_88 >> 0x20) / local_7c,(float)local_88 / local_7c);
  }
  *(undefined8 *)param_3 = local_88;
  *(float *)(param_3 + 8) = local_80;
  Vec4::~Vec4((Vec4 *)&local_88);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

