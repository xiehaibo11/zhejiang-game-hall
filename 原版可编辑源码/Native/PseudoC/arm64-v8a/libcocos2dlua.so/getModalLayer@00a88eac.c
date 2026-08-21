
/* fairygui::GRoot::getModalLayer() */

long __thiscall fairygui::GRoot::getModalLayer(GRoot *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x290);
  if (lVar1 == 0) {
    createModalLayer(this);
    lVar1 = *(long *)(this + 0x290);
  }
  return lVar1;
}

