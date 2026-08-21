
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (fairygui::GearSize::*)(),
   fairygui::GearSize*>, std::__ndk1::allocator<std::__ndk1::__bind<void (fairygui::GearSize::*)(),
   fairygui::GearSize*> >, void ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GearSize::*)(),fairygui::GearSize*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearSize::*)(),fairygui::GearSize*>>,void()>
::__clone(__func<std::__ndk1::__bind<void(fairygui::GearSize::*)(),fairygui::GearSize*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearSize::*)(),fairygui::GearSize*>>,void()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00ab5774 to 00bb5787 has its CatchHandler @ 00ab580c */
  *(undefined ***)param_1 = &PTR_FUN_016aa5a8;
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

