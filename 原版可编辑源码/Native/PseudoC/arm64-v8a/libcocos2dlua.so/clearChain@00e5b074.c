
/* cocos2d::PUBillboardChain::clearChain(unsigned long) */

void __thiscall cocos2d::PUBillboardChain::clearChain(PUBillboardChain *this,ulong param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x58) + param_1 * 0x18;
  *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
  this[0x1f] = (PUBillboardChain)0x1;
  *(undefined2 *)(this + 0x1d) = 0x101;
  return;
}

