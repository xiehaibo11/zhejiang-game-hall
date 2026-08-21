
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (fairygui::GRoot::*)(int),
   fairygui::GRoot*, std::__ndk1::placeholders::__ph<1> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void (fairygui::GRoot::*)(int), fairygui::GRoot*,
   std::__ndk1::placeholders::__ph<1> const&> >, void
   (int)>::__clone(std::__ndk1::__function::__base<void (int)>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GRoot::*)(int),fairygui::GRoot*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GRoot::*)(int),fairygui::GRoot*,std::__ndk1::placeholders::__ph<1>const&>>,void(int)>
::__clone(__func<std::__ndk1::__bind<void(fairygui::GRoot::*)(int),fairygui::GRoot*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GRoot::*)(int),fairygui::GRoot*,std::__ndk1::placeholders::__ph<1>const&>>,void(int)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_016a6710;
                    /* try { // try from 00a8a414 to 00b8a4b7 has its CatchHandler @ 00a8a644 */
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

