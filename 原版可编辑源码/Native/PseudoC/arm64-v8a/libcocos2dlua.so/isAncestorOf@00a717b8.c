
/* fairygui::GComponent::isAncestorOf(fairygui::GObject const*) const */

undefined8 __thiscall fairygui::GComponent::isAncestorOf(GComponent *this,GObject *param_1)

{
  GComponent *pGVar1;
  
  if (param_1 != (GObject *)0x0) {
    for (pGVar1 = *(GComponent **)(param_1 + 0xa0); pGVar1 != (GComponent *)0x0;
        pGVar1 = *(GComponent **)(pGVar1 + 0xa0)) {
      if (pGVar1 == this) {
        return 1;
      }
    }
  }
  return 0;
}

