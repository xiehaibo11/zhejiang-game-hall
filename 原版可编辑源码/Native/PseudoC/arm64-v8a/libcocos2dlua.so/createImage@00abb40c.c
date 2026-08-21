
/* fairygui::HtmlObject::createImage() */

void __thiscall fairygui::HtmlObject::createImage(HtmlObject *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  basic_string *pbVar6;
  HtmlElement *pHVar7;
  GLoader *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pbVar6 = *(basic_string **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"src");
  HtmlElement::getString(pbVar6,(basic_string *)local_78);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  uVar5 = (ulong)((byte)local_60[0] >> 1);
  if (((byte)local_60[0] & 1) != 0) {
    uVar5 = local_58;
  }
  if ((uVar5 == 0) || (lVar4 = UIPackage::getItemByURL(local_60), lVar4 == 0)) {
    iVar3 = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lVar4 + 0x68);
    iVar3 = *(int *)(lVar4 + 0x6c);
  }
  pHVar7 = *(HtmlElement **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"width");
  iVar2 = HtmlElement::getInt(pHVar7,(basic_string *)local_78,iVar2);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  pHVar7 = *(HtmlElement **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"height");
  iVar3 = HtmlElement::getInt(pHVar7,(basic_string *)local_78,iVar3);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (loaderPool == DAT_01782a98) {
    this_00 = operator_new(0x238,(nothrow_t *)&std::nothrow);
    if (this_00 != (GLoader *)0x0) {
      GLoader::GLoader(this_00);
      uVar5 = GObject::init((GObject *)this_00);
      if ((uVar5 & 1) == 0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
        this_00 = (GLoader *)0x0;
      }
      else {
        cocos2d::Ref::autorelease((Ref *)this_00);
      }
    }
    cocos2d::Ref::retain((Ref *)this_00);
  }
  else {
    this_00 = (GLoader *)DAT_01782a98[-1];
    cocos2d::Ref::retain((Ref *)this_00);
    DAT_01782a98 = DAT_01782a98 + -1;
    cocos2d::Ref::release((Ref *)*DAT_01782a98);
  }
  *(GLoader **)(this + 0x18) = this_00;
  if ((0 < iVar2) && (0 < iVar3)) {
    GObject::setSize((GObject *)this_00,(float)iVar2,(float)iVar3,false);
  }
  GLoader::setFill(this_00,4);
  GLoader::setURL(this_00,local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

