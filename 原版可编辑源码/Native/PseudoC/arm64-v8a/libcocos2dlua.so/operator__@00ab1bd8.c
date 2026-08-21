
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (fairygui::GearColor::*)(),
   fairygui::GearColor*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (fairygui::GearColor::*)(), fairygui::GearColor*> >, void ()>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>>,void()>
::operator()(__func<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearColor::*)(),fairygui::GearColor*>>,void()>
             *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00ab1bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00ab1bf0 to 00bb1c03 has its CatchHandler @ 00ab1c64 */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

