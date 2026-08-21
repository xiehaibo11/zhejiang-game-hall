
/* fairygui::GComboBox::constructExtension(fairygui::ByteBuffer*) */

void __thiscall fairygui::GComboBox::constructExtension(GComboBox *this,ByteBuffer *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  basic_string *pbVar4;
  long lVar5;
  Ref *this_00;
  UIEventDispatcher *this_01;
  code *pcVar6;
  GComponent *this_02;
  undefined **local_70;
  code *local_68;
  void *pvStack_60;
  GComboBox *local_58;
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  ByteBuffer::seek(param_1,0,6);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"button");
  uVar3 = GComponent::getController((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x300) = uVar3;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"title");
  uVar3 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x290) = uVar3;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"icon");
  uVar3 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x298) = uVar3;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  pbVar4 = (basic_string *)ByteBuffer::readS(param_1);
  uVar1 = (ulong)((byte)*pbVar4 >> 1);
  if (((byte)*pbVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar4 + 8);
  }
  if (uVar1 != 0) {
    lVar5 = UIPackage::createObjectFromURL(pbVar4);
    this_00 = (Ref *)0x0;
    if (lVar5 != 0) {
      this_00 = (Ref *)__dynamic_cast(lVar5,&GObject::typeinfo,&GComponent::typeinfo,0);
    }
    *(Ref **)(this + 0x288) = this_00;
    cocos2d::Ref::retain(this_00);
                    /* try { // try from 00a6f1ec to 00b6f23f has its CatchHandler @ 00a6f1ec
                       catch() { ... } // from try @ 00a6f1ec with catch @ 00a6f1ec
                       catch() { ... } // from try @ 00a6f2e4 with catch @ 00a6f1ec
                       catch() { ... } // from try @ 00a6f344 with catch @ 00a6f1ec */
    this_02 = *(GComponent **)(this + 0x288);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,"list");
    lVar5 = GComponent::getChild(this_02,(basic_string *)&local_70);
    this_01 = (UIEventDispatcher *)0x0;
    if (lVar5 != 0) {
      this_01 = (UIEventDispatcher *)__dynamic_cast(lVar5,&GObject::typeinfo,&GList::typeinfo,0);
    }
    *(UIEventDispatcher **)(this + 0x2a0) = this_01;
    if (((byte)local_70._0_1_ & 1) != 0) {
      operator_delete(pvStack_60);
      this_01 = *(UIEventDispatcher **)(this + 0x2a0);
    }
                    /* try { // try from 00a6f240 to 00b6f27b has its CatchHandler @ 00a6f384 */
    local_70 = &PTR_FUN_016a5110;
    pvStack_60 = (void *)0x0;
    local_68 = onClickItem;
    local_58 = this;
    local_50 = (long *)&local_70;
    UIEventDispatcher::addEventListener
              (this_01,0x32,(function *)&local_70,(EventTag *)&EventTag::None);
    if (&local_70 == (undefined ***)local_50) {
      pcVar6 = *(code **)(*local_50 + 0x20);
LAB_00a6f29c:
      (*pcVar6)();
    }
    else if (local_50 != (long *)0x0) {
                    /* try { // try from 00a6f288 to 00b6f2e3 has its CatchHandler @ 00a6f388 */
      pcVar6 = *(code **)(*local_50 + 0x28);
      goto LAB_00a6f29c;
    }
    GObject::addRelation(*(GObject **)(this + 0x2a0),*(undefined8 *)(this + 0x288),0xe,0);
    GObject::removeRelation(*(undefined8 *)(this + 0x2a0),*(undefined8 *)(this + 0x288),0xf);
    GObject::addRelation(*(GObject **)(this + 0x288),*(undefined8 *)(this + 0x2a0),0xf,0);
                    /* try { // try from 00a6f2e4 to 00b6f317 has its CatchHandler @ 00a6f1ec */
    GObject::removeRelation(*(undefined8 *)(this + 0x288),*(undefined8 *)(this + 0x2a0),0xe);
    local_70 = &PTR_FUN_016a5110;
    pvStack_60 = (void *)0x0;
    local_68 = onPopupWinClosed;
    local_58 = this;
    local_50 = (long *)&local_70;
                    /* try { // try from 00a6f318 to 00b6f32b has its CatchHandler @ 00a6f384 */
    UIEventDispatcher::addEventListener
              (*(UIEventDispatcher **)(this + 0x288),1,(function *)&local_70,
               (EventTag *)&EventTag::None);
    if (&local_70 == (undefined ***)local_50) {
                    /* try { // try from 00a6f344 to 00b6f3a3 has its CatchHandler @ 00a6f1ec */
      pcVar6 = *(code **)(*local_50 + 0x20);
    }
    else {
                    /* try { // try from 00a6f330 to 00b6f343 has its CatchHandler @ 00a6f388 */
      if (local_50 == (long *)0x0) goto LAB_00a6f34c;
      pcVar6 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar6)();
  }
LAB_00a6f34c:
  local_70 = &PTR_FUN_016a5110;
  pvStack_60 = (void *)0x0;
  local_68 = onRollover;
  local_58 = this;
  local_50 = (long *)&local_70;
                    /* catch() { ... } // from try @ 00a6f240 with catch @ 00a6f384
                       catch() { ... } // from try @ 00a6f318 with catch @ 00a6f384 */
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xe,(function *)&local_70,(EventTag *)&EventTag::None);
                    /* catch() { ... } // from try @ 00a6f288 with catch @ 00a6f388
                       catch() { ... } // from try @ 00a6f330 with catch @ 00a6f388 */
  if (&local_70 == (undefined ***)local_50) {
                    /* try { // try from 00a6f3a4 to 00b6f3f7 has its CatchHandler @ 00a6f3a4
                       catch() { ... } // from try @ 00a6f3a4 with catch @ 00a6f3a4
                       catch() { ... } // from try @ 00a6f49c with catch @ 00a6f3a4
                       catch() { ... } // from try @ 00a6f4fc with catch @ 00a6f3a4 */
    pcVar6 = *(code **)(*local_50 + 0x20);
LAB_00a6f3ac:
    (*pcVar6)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar6 = *(code **)(*local_50 + 0x28);
    goto LAB_00a6f3ac;
  }
  local_70 = &PTR_FUN_016a5110;
  pvStack_60 = (void *)0x0;
  local_68 = onRollout;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xf,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
LAB_00a6f410:
    (*pcVar6)();
  }
  else {
                    /* try { // try from 00a6f3f8 to 00b6f433 has its CatchHandler @ 00a6f53c */
    if (local_50 != (long *)0x0) {
      pcVar6 = *(code **)(*local_50 + 0x28);
      goto LAB_00a6f410;
    }
  }
  local_70 = &PTR_FUN_016a5110;
  pvStack_60 = (void *)0x0;
  local_68 = onTouchBegin;
  local_58 = this;
  local_50 = (long *)&local_70;
                    /* try { // try from 00a6f440 to 00b6f49b has its CatchHandler @ 00a6f540 */
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,10,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
LAB_00a6f474:
    (*pcVar6)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar6 = *(code **)(*local_50 + 0x28);
    goto LAB_00a6f474;
  }
  local_70 = &PTR_FUN_016a5110;
  pvStack_60 = (void *)0x0;
  local_68 = onTouchEnd;
  local_58 = this;
  local_50 = (long *)&local_70;
                    /* try { // try from 00a6f49c to 00b6f4cf has its CatchHandler @ 00a6f3a4 */
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xc,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
                    /* try { // try from 00a6f4d0 to 00b6f4e3 has its CatchHandler @ 00a6f53c */
    pcVar6 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00a6f4dc;
    pcVar6 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar6)();
LAB_00a6f4dc:
                    /* try { // try from 00a6f4e8 to 00b6f4fb has its CatchHandler @ 00a6f540 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00a6f4fc to 00b6f55b has its CatchHandler @ 00a6f3a4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

