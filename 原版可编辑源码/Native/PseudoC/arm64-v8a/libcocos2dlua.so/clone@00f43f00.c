
/* covariant return thunk to cocos2d::SpriteFrame::clone() const */

long __thiscall cocos2d::SpriteFrame::clone(SpriteFrame *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = clone(this + -0x28);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

