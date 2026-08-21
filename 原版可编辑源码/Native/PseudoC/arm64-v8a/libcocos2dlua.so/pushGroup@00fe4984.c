
/* cocos2d::Renderer::pushGroup(int) */

void __thiscall cocos2d::Renderer::pushGroup(Renderer *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(this + 0x18);
  lVar3 = *(long *)(this + 0x38);
  uVar1 = 0;
  if (*(long *)(this + 0x20) - lVar2 != 0) {
    uVar1 = (*(long *)(this + 0x20) - lVar2) * 0x80 - 1;
  }
  uVar4 = lVar3 + *(long *)(this + 0x30);
                    /* try { // try from 00fe49b4 to 010e49c3 has its CatchHandler @ 00fe49d4 */
  if (uVar1 == uVar4) {
    std::__ndk1::deque<int,std::__ndk1::allocator<int>>::__add_back_capacity
              ((deque<int,std::__ndk1::allocator<int>> *)(this + 0x10));
    lVar3 = *(long *)(this + 0x38);
    lVar2 = *(long *)(this + 0x18);
    uVar4 = *(long *)(this + 0x30) + lVar3;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe49b4 with catch @ 00fe49d4
                        */
  *(int *)(*(long *)(lVar2 + (uVar4 >> 7 & 0x1fffffffffffff8)) + (uVar4 & 0x3ff) * 4) = param_1;
  *(long *)(this + 0x38) = lVar3 + 1;
  return;
}

