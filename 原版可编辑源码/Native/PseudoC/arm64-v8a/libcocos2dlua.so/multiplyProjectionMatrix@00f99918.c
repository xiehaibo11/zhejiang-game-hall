
/* cocos2d::Director::multiplyProjectionMatrix(cocos2d::Mat4 const&, unsigned long) */

void __thiscall
cocos2d::Director::multiplyProjectionMatrix(Director *this,Mat4 *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x58) + param_2 * 0x30;
  uVar2 = (*(long *)(lVar1 + 0x28) + *(long *)(lVar1 + 0x20)) - 1;
  Mat4::multiply((Mat4 *)(*(long *)(*(long *)(lVar1 + 8) + (uVar2 >> 3 & 0x1ffffffffffffff8)) +
                         (uVar2 & 0x3f) * 0x40),param_1);
  return;
}

