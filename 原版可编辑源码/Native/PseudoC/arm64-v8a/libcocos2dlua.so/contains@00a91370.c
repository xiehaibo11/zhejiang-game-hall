
/* fairygui::Relations::contains(fairygui::GObject*) */

undefined8 __thiscall fairygui::Relations::contains(Relations *this,GObject *param_1)

{
  GObject *pGVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 != *(long **)(this + 0x18)) {
    do {
      plVar3 = plVar2 + 1;
      pGVar1 = (GObject *)WeakPtr::ptr((WeakPtr *)(*plVar2 + 8));
      if (pGVar1 == param_1) {
        return 1;
      }
      plVar2 = plVar3;
    } while (plVar3 != *(long **)(this + 0x18));
  }
  return 0;
}

