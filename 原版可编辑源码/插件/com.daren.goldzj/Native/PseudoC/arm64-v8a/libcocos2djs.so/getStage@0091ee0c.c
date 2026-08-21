
/* cocos2d::renderer::Pass::getStage() const */

Pass * __thiscall cocos2d::renderer::Pass::getStage(Pass *this)

{
  ulong uVar1;
  Pass PVar2;
  Pass *pPVar3;
  
  pPVar3 = this;
  while( true ) {
    if (pPVar3 == (Pass *)0x0) {
      return this + 0xf0;
    }
    PVar2 = pPVar3[0xf0];
    uVar1 = (ulong)((byte)PVar2 >> 1);
    if (((byte)PVar2 & 1) != 0) {
      uVar1 = *(ulong *)(pPVar3 + 0xf8);
    }
    if (uVar1 != 0) break;
    pPVar3 = *(Pass **)(pPVar3 + 0x30);
  }
  return pPVar3 + 0xf0;
}

