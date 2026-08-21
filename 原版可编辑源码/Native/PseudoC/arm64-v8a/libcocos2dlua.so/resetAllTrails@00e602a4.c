
/* cocos2d::PURibbonTrail::resetAllTrails() */

void __thiscall cocos2d::PURibbonTrail::resetAllTrails(PURibbonTrail *this)

{
  Node *pNVar1;
  
  if (*(long *)(this + 0xf0) != *(long *)(this + 0xe8)) {
    pNVar1 = (Node *)0x0;
    do {
      resetTrail((ulong)this,pNVar1);
      pNVar1 = pNVar1 + 1;
    } while (pNVar1 < (Node *)(*(long *)(this + 0xf0) - *(long *)(this + 0xe8) >> 3));
  }
  return;
}

