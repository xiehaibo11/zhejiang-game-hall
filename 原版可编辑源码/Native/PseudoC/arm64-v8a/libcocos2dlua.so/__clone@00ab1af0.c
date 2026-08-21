
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (fairygui::GearColor::*)(fairygui::GTweener*), fairygui::GearColor*,
   std::__ndk1::placeholders::__ph<1> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (fairygui::GearColor::*)(fairygui::GTweener*), fairygui::GearColor*,
   std::__ndk1::placeholders::__ph<1> const&> >, void
   (fairygui::GTweener*)>::__clone(std::__ndk1::__function::__base<void (fairygui::GTweener*)>*)
   const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GearColor::*)(fairygui::GTweener*),fairygui::GearColor*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearColor::*)(fairygui::GTweener*),fairygui::GearColor*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::GTweener*)>
::__clone(__func<std::__ndk1::__bind<void(fairygui::GearColor::*)(fairygui::GTweener*),fairygui::GearColor*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearColor::*)(fairygui::GTweener*),fairygui::GearColor*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::GTweener*)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_016a9ff8;
                    /* catch() { ... } // from try @ 00ab1a00 with catch @ 00ab1b00 */
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

