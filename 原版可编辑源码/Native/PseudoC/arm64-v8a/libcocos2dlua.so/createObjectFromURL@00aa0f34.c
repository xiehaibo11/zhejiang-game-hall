
/* fairygui::UIPackage::createObjectFromURL(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long * fairygui::UIPackage::createObjectFromURL(basic_string *param_1)

{
  PackageItem *pPVar1;
  long *plVar2;
  
  pPVar1 = (PackageItem *)getItemByURL(param_1);
  if (pPVar1 == (PackageItem *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)UIObjectFactory::newObject(pPVar1);
    if (plVar2 != (long *)0x0) {
      _constructing = _constructing + 1;
      (**(code **)(*plVar2 + 0x40))(plVar2);
      _constructing = _constructing + -1;
    }
  }
  return plVar2;
}

