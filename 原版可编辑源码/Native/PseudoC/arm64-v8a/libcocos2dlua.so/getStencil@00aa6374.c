
/* fairygui::FUIContainer::getStencil() const */

undefined8 __thiscall fairygui::FUIContainer::getStencil(FUIContainer *this)

{
  if (*(undefined8 **)(this + 0x308) != (undefined8 *)0x0) {
    return **(undefined8 **)(this + 0x308);
  }
  return 0;
}

