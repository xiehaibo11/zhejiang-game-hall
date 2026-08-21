
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (fairygui::GScrollBar::*)(fairygui::EventContext*), fairygui::GScrollBar*,
   std::__ndk1::placeholders::__ph<1> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (fairygui::GScrollBar::*)(fairygui::EventContext*), fairygui::GScrollBar*,
   std::__ndk1::placeholders::__ph<1> const&> >, void (fairygui::EventContext*)>::__clone() const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GScrollBar::*)(fairygui::EventContext*),fairygui::GScrollBar*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GScrollBar::*)(fairygui::EventContext*),fairygui::GScrollBar*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::EventContext*)>
::__clone(__func<std::__ndk1::__bind<void(fairygui::GScrollBar::*)(fairygui::EventContext*),fairygui::GScrollBar*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GScrollBar::*)(fairygui::EventContext*),fairygui::GScrollBar*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::EventContext*)>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x20);
                    /* try { // try from 00a8acdc to 00b8ad27 has its CatchHandler @ 00a8acdc
                       catch() { ... } // from try @ 00a8acdc with catch @ 00a8acdc
                       catch() { ... } // from try @ 00a8ad44 with catch @ 00a8acdc */
  *puVar1 = &PTR_FUN_016a68e8;
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x18);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}

