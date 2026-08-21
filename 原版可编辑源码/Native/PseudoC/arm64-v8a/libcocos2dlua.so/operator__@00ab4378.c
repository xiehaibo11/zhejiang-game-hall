
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (fairygui::GearLook::*)(fairygui::GTweener*), fairygui::GearLook*,
   std::__ndk1::placeholders::__ph<1> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (fairygui::GearLook::*)(fairygui::GTweener*), fairygui::GearLook*,
   std::__ndk1::placeholders::__ph<1> const&> >, void
   (fairygui::GTweener*)>::TEMPNAMEPLACEHOLDERVALUE(fairygui::GTweener*&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GearLook::*)(fairygui::GTweener*),fairygui::GearLook*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearLook::*)(fairygui::GTweener*),fairygui::GearLook*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::GTweener*)>
::operator()(__func<std::__ndk1::__bind<void(fairygui::GearLook::*)(fairygui::GTweener*),fairygui::GearLook*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearLook::*)(fairygui::GTweener*),fairygui::GearLook*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::GTweener*)>
             *this,GTweener **param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 00ab4378 to 00bb43d3 has its CatchHandler @ 00ab4288 */
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00ab4394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_1);
  return;
}

