
/* cocos2d::Pass::getHash() const */

uint __thiscall cocos2d::Pass::getHash(Pass *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((this[0x28] == (Pass)0x0) && (uVar4 = RenderState::StateBlock::isDirty(), (uVar4 & 1) == 0)) {
    uVar3 = *(uint *)(this + 0x24);
  }
  else {
    uVar1 = *(uint *)(*(long *)(*(long *)(this + 0x60) + 0xd0) + 0x24);
    if (*(Texture2D **)(this + 0x58) == (Texture2D *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = Texture2D::getName(*(Texture2D **)(this + 0x58));
    }
    uVar3 = RenderState::StateBlock::getHash();
    uVar3 = uVar2 ^ uVar1 ^ uVar3;
    *(uint *)(this + 0x24) = uVar3;
    this[0x28] = (Pass)0x0;
  }
  return uVar3;
}

