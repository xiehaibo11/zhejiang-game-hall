
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (fairygui::GRoot::*)(int),
   fairygui::GRoot*, std::__ndk1::placeholders::__ph<1> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void (fairygui::GRoot::*)(int), fairygui::GRoot*,
   std::__ndk1::placeholders::__ph<1> const&> >, void (int)>::__clone() const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GRoot::*)(int),fairygui::GRoot*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GRoot::*)(int),fairygui::GRoot*,std::__ndk1::placeholders::__ph<1>const&>>,void(int)>
::__clone(__func<std::__ndk1::__bind<void(fairygui::GRoot::*)(int),fairygui::GRoot*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GRoot::*)(int),fairygui::GRoot*,std::__ndk1::placeholders::__ph<1>const&>>,void(int)>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00a8a3c8 to 00b8a3fb has its CatchHandler @ 00a8a62c */
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR_FUN_016a6710;
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x18);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
                    /* try { // try from 00a8a3fc to 00b8a413 has its CatchHandler @ 00a8a1d0 */
  return;
}

