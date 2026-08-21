
/* fairygui::GRoot::getTopWindow() */

long __thiscall fairygui::GRoot::getTopWindow(GRoot *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = GComponent::numChildren((GComponent *)this);
  do {
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = iVar1 + -1;
    lVar2 = GComponent::getChildAt((GComponent *)this,iVar1);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = __dynamic_cast(lVar2,&GObject::typeinfo,&Window::typeinfo,0);
    }
  } while (lVar3 == 0);
  return lVar2;
}

