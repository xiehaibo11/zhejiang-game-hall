
/* cocos2d::Director::multiplyMatrix(cocos2d::MATRIX_STACK_TYPE, cocos2d::Mat4 const&) */

void __thiscall cocos2d::Director::multiplyMatrix(Director *this,int param_2,Mat4 *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (param_2 == 2) {
    uVar1 = (*(long *)(this + 0x98) + *(long *)(this + 0x90)) - 1;
    this = this + 0x78;
  }
  else if (param_2 == 1) {
    lVar2 = *(long *)(this + 0x58);
    this = (Director *)(lVar2 + 8);
    uVar1 = (*(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x20)) - 1;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    uVar1 = (*(long *)(this + 0x50) + *(long *)(this + 0x48)) - 1;
    this = this + 0x30;
  }
  Mat4::multiply((Mat4 *)(*(long *)(*(long *)this + (uVar1 >> 3 & 0x1ffffffffffffff8)) +
                         (uVar1 & 0x3f) * 0x40),param_3);
  return;
}

