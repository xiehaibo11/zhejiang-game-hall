
/* fairygui::HtmlObject::createButton() */

void __thiscall fairygui::HtmlObject::createButton(HtmlObject *this)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  Ref *this_00;
  long lVar6;
  GButton *this_01;
  ulong uVar7;
  HtmlElement *pHVar8;
  long *plVar9;
  basic_string *pbVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar7 = (ulong)((byte)buttonResource >> 1);
  if (((byte)buttonResource & 1) != 0) {
    uVar7 = DAT_01782a28;
  }
  if (uVar7 == 0) {
    this_00 = operator_new(0x280,(nothrow_t *)&std::nothrow);
    if (this_00 != (Ref *)0x0) {
      GComponent::GComponent((GComponent *)this_00);
      uVar7 = GObject::init((GObject *)this_00);
      if ((uVar7 & 1) == 0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
        this_00 = (Ref *)0x0;
      }
      else {
        cocos2d::Ref::autorelease(this_00);
      }
    }
  }
  else {
    this_00 = (Ref *)GObjectPool::getObject
                               ((GObjectPool *)objectPool,(basic_string *)&buttonResource);
  }
  *(Ref **)(this + 0x18) = this_00;
  cocos2d::Ref::retain(this_00);
  pHVar8 = *(HtmlElement **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"width");
  iVar4 = HtmlElement::getInt(pHVar8,(basic_string *)local_50,
                              (int)*(float *)(*(long *)(this + 0x18) + 0x78));
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  pHVar8 = *(HtmlElement **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"height");
  iVar5 = HtmlElement::getInt(pHVar8,(basic_string *)local_50,
                              (int)*(float *)(*(long *)(this + 0x18) + 0x7c));
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  GObject::setSize(*(GObject **)(this + 0x18),(float)iVar4,(float)iVar5,false);
  plVar9 = *(long **)(this + 0x18);
  pbVar10 = *(basic_string **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,"value");
  HtmlElement::getString(pbVar10,(basic_string *)local_68);
  (**(code **)(*plVar9 + 0x18))(plVar9,local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (((byte)local_68[0] & 1) == 0) {
    lVar6 = *(long *)(this + 0x18);
  }
  else {
    operator_delete(local_58);
    lVar6 = *(long *)(this + 0x18);
  }
  if ((lVar6 != 0) &&
     (this_01 = (GButton *)__dynamic_cast(lVar6,&GObject::typeinfo,&GButton::typeinfo,0),
     this_01 != (GButton *)0x0)) {
    pbVar10 = *(basic_string **)(this + 8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,"checked");
    HtmlElement::getString(pbVar10,(basic_string *)local_68);
    uVar7 = (ulong)((byte)local_50[0] >> 1);
    if (((byte)local_50[0] & 1) != 0) {
      uVar7 = local_48;
    }
    if (uVar7 == 4) {
      piVar1 = (int *)((ulong)local_50 | 1);
      if (((byte)local_50[0] & 1) != 0) {
        piVar1 = local_40;
      }
      bVar3 = *piVar1 == 0x65757274;
    }
    else {
      bVar3 = false;
    }
    GButton::setSelected(this_01,bVar3);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00abb92c to 00bbb99f has its CatchHandler @ 00abb92c
                       catch() { ... } // from try @ 00abb92c with catch @ 00abb92c
                       catch() { ... } // from try @ 00abb9ac with catch @ 00abb92c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

