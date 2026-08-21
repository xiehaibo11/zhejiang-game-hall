
/* dragonBones::CCSlot::getTexture() const */

undefined8 __thiscall dragonBones::CCSlot::getTexture(CCSlot *this)

{
  SpriteFrame *this_00;
  undefined8 uVar1;
  
  if ((*(long *)(this + 0x168) != 0) &&
     (this_00 = *(SpriteFrame **)(*(long *)(this + 0x168) + 0x48), this_00 != (SpriteFrame *)0x0)) {
    uVar1 = cocos2d::middleware::SpriteFrame::getTexture(this_00);
    return uVar1;
  }
  return 0;
}

