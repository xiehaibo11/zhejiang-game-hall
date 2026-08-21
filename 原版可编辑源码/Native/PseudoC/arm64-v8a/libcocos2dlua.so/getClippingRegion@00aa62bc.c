
/* fairygui::FUIContainer::getClippingRegion() const */

undefined1 * __thiscall fairygui::FUIContainer::getClippingRegion(FUIContainer *this)

{
  undefined1 *puVar1;
  
  puVar1 = cocos2d::Rect::ZERO;
  if (*(undefined1 **)(this + 0x300) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(this + 0x300);
  }
  return puVar1;
}

