
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (fairygui::GearLook::*)(fairygui::GTweener*), fairygui::GearLook*,
   std::__ndk1::placeholders::__ph<1> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (fairygui::GearLook::*)(fairygui::GTweener*), fairygui::GearLook*,
   std::__ndk1::placeholders::__ph<1> const&> >, void (fairygui::GTweener*)>::__clone() const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GearLook::*)(fairygui::GTweener*),fairygui::GearLook*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearLook::*)(fairygui::GTweener*),fairygui::GearLook*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::GTweener*)>
::__clone(__func<std::__ndk1::__bind<void(fairygui::GearLook::*)(fairygui::GTweener*),fairygui::GearLook*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearLook::*)(fairygui::GTweener*),fairygui::GearLook*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::GTweener*)>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR_FUN_016aa338;
                    /* try { // try from 00ab4334 to 00bb4363 has its CatchHandler @ 00ab4288 */
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x18);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}

