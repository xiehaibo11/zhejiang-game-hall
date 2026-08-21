
/* fairygui::GObject::getRoot() const */

long __thiscall fairygui::GObject::getRoot(GObject *this)

{
  long lVar1;
  GObject *pGVar2;
  
  do {
    pGVar2 = this;
    this = *(GObject **)(pGVar2 + 0xa0);
  } while (*(GObject **)(pGVar2 + 0xa0) != (GObject *)0x0);
  if ((pGVar2 != (GObject *)0x0) &&
     (lVar1 = __dynamic_cast(pGVar2,&typeinfo,&GRoot::typeinfo,0), lVar1 != 0)) {
    return lVar1;
  }
  return GRoot::_inst;
}

