
/* cocos2d::PUBillboardChain::removeChainElement(unsigned long) */

void __thiscall cocos2d::PUBillboardChain::removeChainElement(PUBillboardChain *this,ulong param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(this + 0x58) + param_1 * 0x18;
  plVar2 = (long *)(lVar1 + 8);
  lVar4 = *plVar2;
  if (lVar4 != -1) {
    plVar3 = (long *)(*(long *)(this + 0x58) + param_1 * 0x18 + 0x10);
    lVar5 = *plVar3;
    if (lVar5 == lVar4) {
      *plVar2 = -1;
      *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    }
    else {
      if (lVar5 == 0) {
        lVar5 = *(long *)(this + 8);
      }
      *plVar3 = lVar5 + -1;
    }
    this[0x1f] = (PUBillboardChain)0x1;
    *(undefined2 *)(this + 0x1d) = 0x101;
  }
  return;
}

