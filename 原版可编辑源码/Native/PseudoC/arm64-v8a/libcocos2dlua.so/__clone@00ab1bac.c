
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (fairygui::GearColor::*)(),
   fairygui::GearColor*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (fairygui::GearColor::*)(), fairygui::GearColor*> >, void
   ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>>,void()>
::__clone(__func<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>>,void()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00ab1bac to 00bb1bc3 has its CatchHandler @ 00ab1c60 */
  *(undefined ***)param_1 = &PTR_FUN_016aa0a8;
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
                    /* try { // try from 00ab1bc4 to 00bb1bef has its CatchHandler @ 00ab1b1c */
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

