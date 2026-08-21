
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (fairygui::GearXY::*)(),
   fairygui::GearXY*>, std::__ndk1::allocator<std::__ndk1::__bind<void (fairygui::GearXY::*)(),
   fairygui::GearXY*> >, void ()>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>>,void()>
::operator()(__func<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearXY::*)(),fairygui::GearXY*>>,void()>
             *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00ab65e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

