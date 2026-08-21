
/* cocos2d::renderer::State::setVertexBufferOffset(unsigned long, int) */

void __thiscall
cocos2d::renderer::State::setVertexBufferOffset(State *this,ulong param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  vector<int,std::__ndk1::allocator<int>> *this_00;
  
  this_00 = (vector<int,std::__ndk1::allocator<int>> *)(this + 0x68);
  lVar2 = *(long *)this_00;
  uVar3 = *(long *)(this + 0x70) - lVar2 >> 2;
  if (uVar3 <= param_1) {
    uVar1 = param_1 + 1;
    if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
      if (uVar1 < uVar3) {
        *(ulong *)(this + 0x70) = lVar2 + uVar1 * 4;
      }
    }
    else {
      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append(this_00,uVar1 - uVar3);
      lVar2 = *(long *)this_00;
    }
  }
  *(int *)(lVar2 + param_1 * 4) = param_2;
  return;
}

