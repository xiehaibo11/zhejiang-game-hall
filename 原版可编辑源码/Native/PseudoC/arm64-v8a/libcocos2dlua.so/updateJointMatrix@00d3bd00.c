
/* cocos2d::Bone3D::updateJointMatrix(cocos2d::Vec4*) */

void __thiscall cocos2d::Bone3D::updateJointMatrix(Bone3D *this,Vec4 *param_1)

{
  int iVar1;
  
  if (((DAT_017875c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017875c8), iVar1 != 0)) {
    Mat4::Mat4((Mat4 *)&DAT_01787588);
    __cxa_atexit(Mat4::~Mat4,&DAT_01787588,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_017875c8);
  }
  Mat4::multiply((Mat4 *)(this + 0xe4),(Mat4 *)(this + 0x40),(Mat4 *)&DAT_01787588);
  Vec4::set(param_1,DAT_01787588,DAT_01787598,DAT_017875a8,DAT_017875b8);
  Vec4::set(param_1 + 0x10,DAT_0178758c,DAT_0178759c,DAT_017875ac,DAT_017875bc);
  Vec4::set(param_1 + 0x20,DAT_01787590,DAT_017875a0,DAT_017875b0,DAT_017875c0);
  return;
}

