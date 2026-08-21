
/* fairygui::UIPackage::createObject(fairygui::PackageItem*) */

long * __thiscall fairygui::UIPackage::createObject(UIPackage *this,PackageItem *param_1)

{
  long *plVar1;
  
                    /* try { // try from 00aa139c to 00ba13f3 has its CatchHandler @ 00aa139c
                       catch() { ... } // from try @ 00aa139c with catch @ 00aa139c
                       catch() { ... } // from try @ 00aa147c with catch @ 00aa139c
                       catch() { ... } // from try @ 00aa14c4 with catch @ 00aa139c */
  plVar1 = (long *)UIObjectFactory::newObject(param_1);
  if (plVar1 != (long *)0x0) {
    _constructing = _constructing + 1;
    (**(code **)(*plVar1 + 0x40))(plVar1);
    _constructing = _constructing + -1;
  }
  return plVar1;
}

