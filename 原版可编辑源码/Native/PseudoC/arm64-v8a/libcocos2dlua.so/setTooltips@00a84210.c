
/* fairygui::GObject::setTooltips(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GObject::setTooltips(GObject *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  code *pcVar4;
  EventTag aEStack_78 [8];
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  GObject *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x108);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
  if (((byte)*this_00 & 1) == 0) {
    if ((byte)*this_00 >> 1 == 0) goto LAB_00a84374;
  }
  else if (*(long *)(this + 0x110) == 0) goto LAB_00a84374;
  local_50 = &local_70;
  local_70 = &PTR_FUN_016a6310;
  uStack_60 = 0;
  local_68 = onRollOver;
  local_58 = this;
  EventTag::EventTag(aEStack_78,this);
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xe,(function *)&local_70,aEStack_78);
  EventTag::~EventTag(aEStack_78);
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
LAB_00a842f8:
    (*pcVar4)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar4 = (code *)(*local_50)[5];
    goto LAB_00a842f8;
  }
  local_70 = &PTR_FUN_016a6310;
  local_50 = &local_70;
  uStack_60 = 0;
  local_68 = onRollOut;
  local_58 = this;
  EventTag::EventTag(aEStack_78,this);
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xf,(function *)&local_70,aEStack_78);
  EventTag::~EventTag(aEStack_78);
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00a84374;
    pcVar4 = (code *)(*local_50)[5];
  }
  (*pcVar4)();
LAB_00a84374:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

