
/* std::__ndk1::__deque_base<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4> >::clear() */

void __thiscall
std::__ndk1::__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::clear
          (__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this)

{
  Mat4 *pMVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar6;
  Mat4 *this_00;
  long *plVar7;
  undefined8 *puVar5;
  
  puVar2 = *(undefined8 **)(this + 8);
  puVar5 = *(undefined8 **)(this + 0x10);
  if (puVar5 != puVar2) {
    uVar6 = *(ulong *)(this + 0x20);
    plVar7 = (long *)((long)puVar2 + (uVar6 >> 3 & 0x1ffffffffffffff8));
    this_00 = (Mat4 *)(*plVar7 + (uVar6 & 0x3f) * 0x40);
    pMVar1 = (Mat4 *)(*(long *)((long)puVar2 +
                               (*(long *)(this + 0x28) + uVar6 >> 3 & 0x1ffffffffffffff8)) +
                     (*(long *)(this + 0x28) + uVar6 & 0x3f) * 0x40);
    if (pMVar1 != this_00) {
      do {
        cocos2d::Mat4::~Mat4(this_00);
        this_00 = this_00 + 0x40;
        if ((long)this_00 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          this_00 = (Mat4 *)*plVar7;
        }
      } while (pMVar1 != this_00);
      puVar2 = *(undefined8 **)(this + 8);
      puVar5 = *(undefined8 **)(this + 0x10);
    }
  }
  *(undefined8 *)(this + 0x28) = 0;
  lVar4 = (long)puVar5 - (long)puVar2;
  while (uVar6 = lVar4 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(this + 8) + 8);
    *(undefined8 **)(this + 8) = puVar2;
    lVar4 = *(long *)(this + 0x10) - (long)puVar2;
  }
  if (uVar6 == 1) {
    uVar3 = 0x20;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    uVar3 = 0x40;
  }
  *(undefined8 *)(this + 0x20) = uVar3;
                    /* try { // try from 00f9b3c4 to 0109b3cf has its CatchHandler @ 00f9c190 */
  return;
}

