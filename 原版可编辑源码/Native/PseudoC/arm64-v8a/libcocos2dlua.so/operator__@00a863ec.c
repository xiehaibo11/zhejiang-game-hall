
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (fairygui::GObject::*)(fairygui::EventContext*), fairygui::GObject*,
   std::__ndk1::placeholders::__ph<1> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (fairygui::GObject::*)(fairygui::EventContext*), fairygui::GObject*,
   std::__ndk1::placeholders::__ph<1> const&> >, void
   (fairygui::EventContext*)>::TEMPNAMEPLACEHOLDERVALUE(fairygui::EventContext*&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(fairygui::GObject::*)(fairygui::EventContext*),fairygui::GObject*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GObject::*)(fairygui::EventContext*),fairygui::GObject*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::EventContext*)>
::operator()(__func<std::__ndk1::__bind<void(fairygui::GObject::*)(fairygui::EventContext*),fairygui::GObject*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(fairygui::GObject::*)(fairygui::EventContext*),fairygui::GObject*,std::__ndk1::placeholders::__ph<1>const&>>,void(fairygui::EventContext*)>
             *this,EventContext **param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
                    /* try { // try from 00a863f4 to 00b86433 has its CatchHandler @ 00a863f4
                       catch() { ... } // from try @ 00a863f4 with catch @ 00a863f4
                       catch() { ... } // from try @ 00a86470 with catch @ 00a863f4
                       catch() { ... } // from try @ 00a8654c with catch @ 00a863f4 */
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00a86408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_1);
  return;
}

