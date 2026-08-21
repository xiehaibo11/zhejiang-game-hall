
/* cocos2d::ui::TabHeader::getTitleColor() const */

undefined4 * __thiscall cocos2d::ui::TabHeader::getTitleColor(TabHeader *this)

{
  undefined4 *puVar1;
  
  puVar1 = &Color4B::WHITE;
  if (*(long *)(this + 0x5c0) != 0) {
    puVar1 = (undefined4 *)(*(long *)(this + 0x5c0) + 0x4b0);
  }
  return puVar1;
}

