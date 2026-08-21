
/* fairygui::FUIContainer::isClippingEnabled() const */

bool __thiscall fairygui::FUIContainer::isClippingEnabled(FUIContainer *this)

{
  if (*(long *)(this + 0x300) != 0) {
    return *(char *)(*(long *)(this + 0x300) + 0x10) != '\0';
  }
  return false;
}

