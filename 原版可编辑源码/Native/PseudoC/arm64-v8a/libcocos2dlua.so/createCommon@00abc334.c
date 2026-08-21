
/* fairygui::HtmlObject::createCommon() */

void __thiscall fairygui::HtmlObject::createCommon(HtmlObject *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Ref *this_00;
  ulong uVar4;
  basic_string *pbVar5;
  HtmlElement *pHVar6;
  long *plVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 00abc344 to 00bbc3df has its CatchHandler @ 00abbd8c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar5 = *(basic_string **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,"src");
  HtmlElement::getString(pbVar5,(basic_string *)local_68);
  if (((byte)local_68[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00abc2f8 with catch @ 00abc390 */
    operator_delete(local_58);
  }
                    /* catch() { ... } // from try @ 00abc310 with catch @ 00abc394 */
  uVar4 = (ulong)((byte)local_50[0] >> 1);
  if (((byte)local_50[0] & 1) != 0) {
    uVar4 = local_48;
  }
  if (uVar4 == 0) {
    this_00 = operator_new(0x280,(nothrow_t *)&std::nothrow);
    if (this_00 != (Ref *)0x0) {
      GComponent::GComponent((GComponent *)this_00);
      uVar4 = GObject::init((GObject *)this_00);
      if ((uVar4 & 1) == 0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
        this_00 = (Ref *)0x0;
      }
      else {
        cocos2d::Ref::autorelease(this_00);
      }
    }
  }
  else {
    this_00 = (Ref *)GObjectPool::getObject((GObjectPool *)objectPool,local_50);
  }
  *(Ref **)(this + 0x18) = this_00;
                    /* catch() { ... } // from try @ 00abc2c4 with catch @ 00abc3c4 */
  cocos2d::Ref::retain(this_00);
  pHVar6 = *(HtmlElement **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,"width");
  iVar2 = HtmlElement::getInt(pHVar6,(basic_string *)local_68,
                              (int)*(float *)(*(long *)(this + 0x18) + 0x78));
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  pHVar6 = *(HtmlElement **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,"height");
  iVar3 = HtmlElement::getInt(pHVar6,(basic_string *)local_68,
                              (int)*(float *)(*(long *)(this + 0x18) + 0x7c));
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  GObject::setSize(*(GObject **)(this + 0x18),(float)iVar2,(float)iVar3,false);
  plVar7 = *(long **)(this + 0x18);
  pbVar5 = *(basic_string **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"title");
  HtmlElement::getString(pbVar5,(basic_string *)local_80);
  (**(code **)(*plVar7 + 0x18))(plVar7,local_68);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  plVar7 = *(long **)(this + 0x18);
  pbVar5 = *(basic_string **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"icon");
  HtmlElement::getString(pbVar5,(basic_string *)local_80);
  (**(code **)(*plVar7 + 0x28))(plVar7,local_68);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

