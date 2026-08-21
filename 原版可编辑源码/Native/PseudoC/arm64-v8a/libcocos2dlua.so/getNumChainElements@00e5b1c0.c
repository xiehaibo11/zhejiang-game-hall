
/* cocos2d::PUBillboardChain::getNumChainElements(unsigned long) const */

long __thiscall cocos2d::PUBillboardChain::getNumChainElements(PUBillboardChain *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x58) + param_1 * 0x18;
  uVar1 = *(ulong *)(lVar3 + 8);
  uVar2 = *(ulong *)(lVar3 + 0x10);
  lVar3 = uVar2 - uVar1;
  if (uVar2 < uVar1) {
    lVar3 = *(long *)(this + 8) + lVar3;
  }
  return lVar3 + 1;
}

