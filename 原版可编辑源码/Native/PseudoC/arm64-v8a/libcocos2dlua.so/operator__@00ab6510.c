
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (fairygui::GearXY::*)(fairygui::GTweener*), fairygui::GearXY*, std::__ndk1::placeholders::__ph<1>
   const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (fairygui::GearXY::*)(fairygui::GTweener*), fairygui::GearXY*, std::__ndk1::placeholders::__ph<1>
   const&> >, void (fairygui::GTweener*)>::TEMPNAMEPLACEHOLDERVALUE(fairygui::GTweener*&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GearXY::*)(fairygui::GTweener*),fairygui::GearXY*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearXY::*)(fairygui::GTweener*),fairygui::GearXY*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::GTweener*)>
::operator()(__func<std::__ndk1::__bind<void(fairygui::GearXY::*)(fairygui::GTweener*),fairygui::GearXY*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GearXY::*)(fairygui::GTweener*),fairygui::GearXY*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::GTweener*)>
             *this,GTweener **param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* catch() { ... } // from try @ 00ab6400 with catch @ 00ab6528
                       catch() { ... } // from try @ 00ab64cc with catch @ 00ab6528 */
                    /* WARNING: Could not recover jumptable at 0x00ab652c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00ab6308 with catch @ 00ab652c
                       catch() { ... } // from try @ 00ab64bc with catch @ 00ab652c */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_1);
  return;
}

