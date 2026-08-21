
/* std::__ndk1::deque<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4>
   >::deque(std::__ndk1::deque<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4> > const&) */

void __thiscall
std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::deque
          (deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this,deque *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
                    /* try { // try from 00f9bf58 to 0109bf67 has its CatchHandler @ 00f9c174 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 8);
  plVar1 = (long *)(lVar4 + (uVar5 >> 3 & 0x1ffffffffffffff8));
  if (*(long *)(param_1 + 0x10) == lVar4) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar1 + (uVar5 & 0x3f) * 0x40;
  }
  plVar2 = (long *)(lVar4 + (*(long *)(param_1 + 0x28) + uVar5 >> 3 & 0x1ffffffffffffff8));
  if (*(long *)(param_1 + 0x10) == lVar4) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar2 + (*(long *)(param_1 + 0x28) + uVar5 & 0x3f) * 0x40;
  }
  __append<std::__ndk1::__deque_iterator<cocos2d::Mat4,cocos2d::Mat4_const*,cocos2d::Mat4_const&,cocos2d::Mat4_const*const*,long,64l>>
            (this,plVar1,lVar3,plVar2,lVar4,0);
  return;
}

