
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (fairygui::GearXY::*)(fairygui::GTweener*), fairygui::GearXY*, std::__ndk1::placeholders::__ph<1>
   const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (fairygui::GearXY::*)(fairygui::GTweener*), fairygui::GearXY*, std::__ndk1::placeholders::__ph<1>
   const&> >, void (fairygui::GTweener*)>::__clone() const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GearXY::*)(fairygui::GTweener*),fairygui::GearXY*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearXY::*)(fairygui::GTweener*),fairygui::GearXY*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::GTweener*)>
::__clone(__func<std::__ndk1::__bind<void(fairygui::GearXY::*)(fairygui::GTweener*),fairygui::GearXY*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearXY::*)(fairygui::GTweener*),fairygui::GearXY*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::GTweener*)>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00ab64b0 to 00bb64b7 has its CatchHandler @ 00ab6530 */
  puVar1 = operator_new(0x20);
                    /* try { // try from 00ab64bc to 00bb64c3 has its CatchHandler @ 00ab652c */
  *puVar1 = &PTR_FUN_016aa718;
                    /* try { // try from 00ab64cc to 00bb64d3 has its CatchHandler @ 00ab6528 */
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x18);
                    /* try { // try from 00ab64d4 to 00bb658f has its CatchHandler @ 00ab6184 */
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}

