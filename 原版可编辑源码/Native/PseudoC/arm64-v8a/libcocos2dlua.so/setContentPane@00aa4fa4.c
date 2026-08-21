
/* fairygui::Window::setContentPane(fairygui::GComponent*) */

void __thiscall fairygui::Window::setContentPane(Window *this,GComponent *param_1)

{
  long lVar1;
  long lVar2;
  Ref *this_00;
  undefined8 uVar3;
  GObject *pGVar4;
  GComponent *pGVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pGVar4 = *(GObject **)(this + 0x280);
  if (pGVar4 != (GObject *)param_1) {
    if (pGVar4 != (GObject *)0x0) {
      GComponent::removeChild((GComponent *)this,pGVar4);
      if (*(Ref **)(this + 0x290) != (Ref *)0x0) {
        cocos2d::Ref::release(*(Ref **)(this + 0x290));
      }
      cocos2d::Ref::release(*(Ref **)(this + 0x280));
    }
    *(GComponent **)(this + 0x280) = param_1;
    if (param_1 == (GComponent *)0x0) {
      *(undefined8 *)(this + 0x290) = 0;
    }
    else {
      cocos2d::Ref::retain((Ref *)param_1);
                    /* try { // try from 00aa500c to 00ba5057 has its CatchHandler @ 00aa500c
                       catch() { ... } // from try @ 00aa500c with catch @ 00aa500c
                       catch() { ... } // from try @ 00aa505c with catch @ 00aa500c */
      GComponent::addChild((GComponent *)this,*(GObject **)(this + 0x280));
      GObject::setSize((GObject *)this,*(float *)(*(long *)(this + 0x280) + 200),
                       *(float *)(*(long *)(this + 0x280) + 0xcc),false);
      GObject::addRelation(*(GObject **)(this + 0x280),this,0x18,0);
      pGVar5 = *(GComponent **)(this + 0x280);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,"frame");
                    /* try { // try from 00aa5058 to 00ba505b has its CatchHandler @ 00aa5090 */
                    /* try { // try from 00aa505c to 00ba50a3 has its CatchHandler @ 00aa500c */
      lVar2 = GComponent::getChild(pGVar5,(basic_string *)local_50);
      this_00 = (Ref *)0x0;
      if (lVar2 != 0) {
        this_00 = (Ref *)__dynamic_cast(lVar2,&GObject::typeinfo,&GComponent::typeinfo,0);
      }
      *(Ref **)(this + 0x290) = this_00;
      if (((byte)local_50[0] & 1) != 0) {
        operator_delete(local_40);
                    /* catch() { ... } // from try @ 00aa5058 with catch @ 00aa5090 */
        this_00 = *(Ref **)(this + 0x290);
      }
      if (this_00 != (Ref *)0x0) {
        cocos2d::Ref::retain(this_00);
        pGVar5 = *(GComponent **)(this + 0x290);
                    /* try { // try from 00aa50a4 to 00ba521b has its CatchHandler @ 00aa50a4
                       catch() { ... } // from try @ 00aa50a4 with catch @ 00aa50a4
                       catch() { ... } // from try @ 00aa529c with catch @ 00aa50a4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_50,"closeButton");
        pGVar4 = (GObject *)GComponent::getChild(pGVar5,(basic_string *)local_50);
        setCloseButton(this,pGVar4);
        if (((byte)local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        pGVar5 = *(GComponent **)(this + 0x290);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_50,"dragArea");
        pGVar4 = (GObject *)GComponent::getChild(pGVar5,(basic_string *)local_50);
        setDragArea(this,pGVar4);
        if (((byte)local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        pGVar5 = *(GComponent **)(this + 0x290);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_50,"contentArea");
        uVar3 = GComponent::getChild(pGVar5,(basic_string *)local_50);
        *(undefined8 *)(this + 0x2b0) = uVar3;
        if (((byte)local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

