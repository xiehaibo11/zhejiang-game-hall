
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (fairygui::GearXY::*)(),
   fairygui::GearXY*>, std::__ndk1::allocator<std::__ndk1::__bind<void (fairygui::GearXY::*)(),
   fairygui::GearXY*> >, void ()>::target(std::type_info const&) const */

__func<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>>,void()>
* __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>>,void()>
::target(__func<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>>,void()>
         *this,type_info *param_1)

{
  __func<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>>,void()>
  *p_Var1;
  
  p_Var1 = this + 8;
                    /* try { // try from 00ab65f8 to 00bb665b has its CatchHandler @ 00ab65f8
                       catch() { ... } // from try @ 00ab65f8 with catch @ 00ab65f8
                       catch() { ... } // from try @ 00ab6698 with catch @ 00ab65f8
                       catch() { ... } // from try @ 00ab66e4 with catch @ 00ab65f8 */
  if (*(char **)(param_1 + 8) != "NSt6__ndk16__bindIMN8fairygui6GearXYEFvvEJPS2_EEE") {
    p_Var1 = (__func<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>>,void()>
              *)0x0;
  }
  return p_Var1;
}

