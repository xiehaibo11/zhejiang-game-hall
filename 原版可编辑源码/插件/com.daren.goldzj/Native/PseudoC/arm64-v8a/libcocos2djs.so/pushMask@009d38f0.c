
/* cocos2d::renderer::StencilManager::pushMask(bool) */

void __thiscall cocos2d::renderer::StencilManager::pushMask(StencilManager *this,bool param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 0x10);
  if ((ulong)(long)(int)*(uint *)this < uVar3 + 1) {
    log("StencilManager:pushMask _maxLevel:%d is out of range",(ulong)*(uint *)this);
    uVar3 = *(ulong *)(this + 0x10);
  }
  if (uVar3 == *(long *)(this + 0x18) * 0x40) {
    if ((long)(uVar3 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009d3974 with catch @ 009d39b4
                        */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar3 < 0x3fffffffffffffff) {
      uVar1 = *(long *)(this + 0x18) << 7;
      uVar3 = uVar3 + 0x40 & 0xffffffffffffffc0;
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = 0x7fffffffffffffff;
    }
    std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::reserve
              ((vector<bool,std::__ndk1::allocator<bool>> *)(this + 8),uVar3);
    uVar3 = *(ulong *)(this + 0x10);
  }
                    /* try { // try from 009d3974 to 00ad3993 has its CatchHandler @ 009d39b4 */
  lVar2 = *(long *)(this + 8);
  *(ulong *)(this + 0x10) = uVar3 + 1;
  uVar1 = uVar3 >> 6;
  uVar3 = 1L << (uVar3 & 0x3f);
  if (param_1) {
    uVar3 = *(ulong *)(lVar2 + uVar1 * 8) | uVar3;
  }
  else {
    uVar3 = *(ulong *)(lVar2 + uVar1 * 8) & (uVar3 ^ 0xffffffffffffffff);
  }
  *(ulong *)(lVar2 + uVar1 * 8) = uVar3;
  return;
}

