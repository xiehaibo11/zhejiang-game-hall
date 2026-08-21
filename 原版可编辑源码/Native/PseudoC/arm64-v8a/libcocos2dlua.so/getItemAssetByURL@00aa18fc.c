
/* fairygui::UIPackage::getItemAssetByURL(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, fairygui::PackageItemType)
    */

undefined8 fairygui::UIPackage::getItemAssetByURL(basic_string *param_1,int param_2)

{
  PackageItem *pPVar1;
  undefined8 uVar2;
  
  pPVar1 = (PackageItem *)getItemByURL(param_1);
  if ((pPVar1 != (PackageItem *)0x0) && ((param_2 == 8 || (*(int *)(pPVar1 + 0x30) == param_2)))) {
    uVar2 = getItemAsset(*(UIPackage **)(pPVar1 + 0x28),pPVar1);
    return uVar2;
  }
  return 0;
}

