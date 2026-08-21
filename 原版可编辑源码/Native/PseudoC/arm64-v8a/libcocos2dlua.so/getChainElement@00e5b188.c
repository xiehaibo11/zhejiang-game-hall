
/* cocos2d::PUBillboardChain::getChainElement(unsigned long, unsigned long) const */

long __thiscall
cocos2d::PUBillboardChain::getChainElement(PUBillboardChain *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 8);
  plVar3 = (long *)(*(long *)(this + 0x58) + param_1 * 0x18);
  uVar1 = plVar3[1] + param_2;
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = uVar1 / uVar4;
  }
  return *(long *)(this + 0x40) + (*plVar3 + (uVar1 - uVar2 * uVar4)) * 0x34;
}

