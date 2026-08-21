
/* cocos2d::ui::LayoutComponent::bindLayoutComponent(cocos2d::Node*) */

Component * cocos2d::ui::LayoutComponent::bindLayoutComponent(Node *param_1)

{
  long lVar1;
  Component *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar2;
  Component *pCVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"__ui_layout");
  this = (Component *)Node::getComponent(param_1,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if ((this != (Component *)0x0) ||
     (this = operator_new(0x90,(nothrow_t *)&std::nothrow), this == (Component *)0x0))
  goto LAB_00def744;
  Component::Component(this);
  *(undefined4 *)(this + 0x6c) = 0;
  this[0x70] = (Component)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined2 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  this[0x80] = (Component)0x0;
  *(undefined4 *)(this + 0x84) = 0;
  this[0x88] = (Component)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  this[0x68] = (Component)0x0;
  *(undefined ***)this = &PTR__LayoutComponent_016e64f8;
  *(undefined2 *)(this + 0x89) = 1;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x30);
  if (((byte)*this_00 & 1) == 0) {
    pCVar3 = this + 0x31;
LAB_00def824:
                    /* catch() { ... } // from try @ 00def874 with catch @ 00def82c */
    *(undefined4 *)(pCVar3 + 7) = 0x74756f79;
    *(undefined8 *)pCVar3 = 0x79616c5f69755f5f;
    pCVar3[0xb] = (Component)0x0;
    if (((byte)*this_00 & 1) == 0) {
      *this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                 0x16;
    }
    else {
      *(undefined8 *)(this + 0x38) = 0xb;
    }
  }
  else {
    uVar2 = (*(ulong *)this_00 & 0xfffffffffffffffe) - 1;
    if (10 < uVar2) {
      pCVar3 = *(Component **)(this + 0x40);
      goto LAB_00def824;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (this_00,uVar2,0xc - (*(ulong *)this_00 & 0xfffffffffffffffe),*(ulong *)(this + 0x38),
               0,*(ulong *)(this + 0x38),0xb,"__ui_layout");
  }
  uVar2 = (**(code **)(*(long *)this + 0x10))(this);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)this + 8))(this);
    this = (Component *)0x0;
  }
  else {
                    /* try { // try from 00def86c to 00eef873 has its CatchHandler @ 00def8f0 */
    Ref::autorelease((Ref *)this);
                    /* try { // try from 00def874 to 00eef90b has its CatchHandler @ 00def82c */
    (**(code **)(*(long *)param_1 + 0x460))(param_1,this);
  }
LAB_00def744:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

