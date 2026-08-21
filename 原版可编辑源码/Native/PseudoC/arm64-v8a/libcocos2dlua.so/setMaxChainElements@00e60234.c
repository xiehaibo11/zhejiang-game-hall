
/* cocos2d::PURibbonTrail::setMaxChainElements(unsigned long) */

void __thiscall cocos2d::PURibbonTrail::setMaxChainElements(PURibbonTrail *this,ulong param_1)

{
  Node *pNVar1;
  float fVar2;
  
  PUBillboardChain::setMaxChainElements((PUBillboardChain *)this,param_1);
  fVar2 = *(float *)(this + 0x158) / (float)*(ulong *)(this + 8);
  *(float *)(this + 0x15c) = fVar2;
  *(float *)(this + 0x160) = fVar2 * fVar2;
  if (*(long *)(this + 0xf0) != *(long *)(this + 0xe8)) {
    pNVar1 = (Node *)0x0;
    do {
      resetTrail((ulong)this,pNVar1);
      pNVar1 = pNVar1 + 1;
    } while (pNVar1 < (Node *)(*(long *)(this + 0xf0) - *(long *)(this + 0xe8) >> 3));
  }
  return;
}

