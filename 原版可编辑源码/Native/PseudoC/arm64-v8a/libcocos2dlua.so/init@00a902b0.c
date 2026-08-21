
/* fairygui::PopupMenu::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall fairygui::PopupMenu::init(PopupMenu *this,basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  Ref *this_00;
  GList *this_01;
  code *pcVar5;
  undefined8 uVar6;
  GComponent *this_02;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  void *local_78;
  undefined **local_70;
  code *local_68;
  void *pvStack_60;
  PopupMenu *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_88,param_1);
  uVar1 = (ulong)((byte)local_88[0] >> 1);
  if (((byte)local_88[0] & 1) != 0) {
    uVar1 = local_80;
  }
  if (uVar1 == 0) {
    uVar1 = DAT_01782798;
    pcVar3 = DAT_017827a0;
    if ((UIConfig::popupMenu & 1) == 0) {
      uVar1 = (ulong)(UIConfig::popupMenu >> 1);
      pcVar3 = &DAT_01782791;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(local_88,pcVar3,uVar1);
    uVar1 = (ulong)((byte)local_88[0] >> 1);
    if (((byte)local_88[0] & 1) != 0) {
      uVar1 = local_80;
    }
    if (uVar1 == 0) {
      uVar6 = 0;
      goto joined_r0x00a904c0;
    }
  }
  lVar4 = UIPackage::createObjectFromURL((basic_string *)local_88);
  this_00 = (Ref *)0x0;
  if (lVar4 != 0) {
    this_00 = (Ref *)__dynamic_cast(lVar4,&GObject::typeinfo,&GComponent::typeinfo,0);
  }
  *(Ref **)(this + 0x28) = this_00;
  cocos2d::Ref::retain(this_00);
  local_70 = &PTR_FUN_016a7250;
  pvStack_60 = (void *)0x0;
  local_68 = onEnter;
  local_58 = this;
  local_50 = &local_70;
  UIEventDispatcher::addEventListener
            (*(UIEventDispatcher **)(this + 0x28),0,(function *)&local_70,
             (EventTag *)&EventTag::None);
  if (&local_70 == local_50) {
    pcVar5 = (code *)(*local_50)[4];
LAB_00a903c8:
    (*pcVar5)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar5 = (code *)(*local_50)[5];
    goto LAB_00a903c8;
  }
  this_02 = *(GComponent **)(this + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"list");
  lVar4 = GComponent::getChild(this_02,(basic_string *)&local_70);
  this_01 = (GList *)0x0;
  if (lVar4 != 0) {
    this_01 = (GList *)__dynamic_cast(lVar4,&GObject::typeinfo,&GList::typeinfo,0);
  }
  *(GList **)(this + 0x30) = this_01;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(pvStack_60);
    this_01 = *(GList **)(this + 0x30);
  }
  GList::removeChildrenToPool(this_01);
  GObject::addRelation(*(GObject **)(this + 0x30),*(undefined8 *)(this + 0x28),0xe,0);
  GObject::removeRelation(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x28),0xf);
  GObject::addRelation(*(GObject **)(this + 0x28),*(undefined8 *)(this + 0x30),0xf,0);
  local_70 = &PTR_FUN_016a7250;
  pvStack_60 = (void *)0x0;
  local_68 = onClickItem;
  local_58 = this;
  local_50 = &local_70;
  UIEventDispatcher::addEventListener
            (*(UIEventDispatcher **)(this + 0x30),0x32,(function *)&local_70,
             (EventTag *)&EventTag::None);
  if (&local_70 == local_50) {
    pcVar5 = (code *)(*local_50)[4];
LAB_00a904b0:
    (*pcVar5)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar5 = (code *)(*local_50)[5];
    goto LAB_00a904b0;
  }
  uVar6 = 1;
joined_r0x00a904c0:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

