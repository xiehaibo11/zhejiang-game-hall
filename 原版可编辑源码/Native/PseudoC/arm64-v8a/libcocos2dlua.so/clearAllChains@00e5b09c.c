
/* cocos2d::PUBillboardChain::clearAllChains() */

void __thiscall cocos2d::PUBillboardChain::clearAllChains(PUBillboardChain *this)

{
  ulong uVar1;
  
  if (*(long *)(this + 0x10) != 0) {
    uVar1 = 0;
    do {
      (**(code **)(*(long *)this + 0xa8))(this,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulong *)(this + 0x10));
  }
  return;
}

