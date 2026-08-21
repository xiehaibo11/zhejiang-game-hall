
/* cocos2d::Director::pushProjectionMatrix(unsigned long) */

void __thiscall cocos2d::Director::pushProjectionMatrix(Director *this,ulong param_1)

{
  ulong uVar1;
  Mat4 *this_00;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)(this + 0x58) + param_1 * 0x30;
  plVar8 = (long *)(lVar7 + 0x28);
  lVar2 = *(long *)(lVar7 + 8);
  uVar3 = *(long *)(lVar7 + 0x20) + *plVar8;
  uVar5 = uVar3 - 1;
  lVar6 = *(long *)(lVar2 + (uVar5 >> 3 & 0x1ffffffffffffff8));
  lVar4 = *(long *)(lVar7 + 0x10);
  uVar1 = 0;
  if (lVar4 - lVar2 != 0) {
    uVar1 = (lVar4 - lVar2) * 8 - 1;
  }
  if (uVar1 == uVar3) {
    std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__add_back_capacity
              ((deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)
               (*(long *)(this + 0x58) + param_1 * 0x30));
                    /* try { // try from 00f999cc to 01099a7f has its CatchHandler @ 00f999cc
                       catch() { ... } // from try @ 00f999cc with catch @ 00f999cc
                       catch() { ... } // from try @ 00f99a88 with catch @ 00f999cc */
    lVar2 = *(long *)(lVar7 + 8);
    lVar4 = *(long *)(lVar7 + 0x10);
    uVar3 = *(long *)(lVar7 + 0x20) + *plVar8;
  }
  if (lVar4 == lVar2) {
    this_00 = (Mat4 *)0x0;
  }
  else {
    this_00 = (Mat4 *)(*(long *)(lVar2 + (uVar3 >> 3 & 0x1ffffffffffffff8)) + (uVar3 & 0x3f) * 0x40)
    ;
  }
  Mat4::Mat4(this_00,(Mat4 *)(lVar6 + (uVar5 & 0x3f) * 0x40));
  *plVar8 = *plVar8 + 1;
  return;
}

