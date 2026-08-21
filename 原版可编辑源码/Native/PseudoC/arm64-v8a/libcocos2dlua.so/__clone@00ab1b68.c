
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (fairygui::GearColor::*)(),
   fairygui::GearColor*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (fairygui::GearColor::*)(), fairygui::GearColor*> >, void ()>::__clone() const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>>,void()>
::__clone(__func<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>>,void()>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00ab1b6c to 00bb1bab has its CatchHandler @ 00ab1c64 */
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR_FUN_016aa0a8;
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x18);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}

