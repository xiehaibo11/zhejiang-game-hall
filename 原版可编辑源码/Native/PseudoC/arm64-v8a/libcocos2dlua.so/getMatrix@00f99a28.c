
/* cocos2d::Director::getMatrix(cocos2d::MATRIX_STACK_TYPE) const */

long __thiscall cocos2d::Director::getMatrix(Director *this,int param_2)

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
    uVar1 = (*(long *)(this + 0x50) + *(long *)(this + 0x48)) - 1;
    this = this + 0x30;
  }
                    /* try { // try from 00f99a80 to 01099a87 has its CatchHandler @ 00f99b18 */
                    /* try { // try from 00f99a88 to 01099b4f has its CatchHandler @ 00f999cc */
  return *(long *)(*(long *)this + (uVar1 >> 3 & 0x1ffffffffffffff8)) + (uVar1 & 0x3f) * 0x40;
}

