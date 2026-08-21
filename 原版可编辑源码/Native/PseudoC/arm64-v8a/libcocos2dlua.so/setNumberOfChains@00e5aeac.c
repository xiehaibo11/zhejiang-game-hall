
/* cocos2d::PUBillboardChain::setNumberOfChains(unsigned long) */

void __thiscall cocos2d::PUBillboardChain::setNumberOfChains(PUBillboardChain *this,ulong param_1)

{
  *(ulong *)(this + 0x10) = param_1;
  (**(code **)(*(long *)this + 0xb8))();
  *(undefined2 *)(this + 0x1e) = 0x101;
  this[0x1c] = (PUBillboardChain)0x1;
  return;
}

