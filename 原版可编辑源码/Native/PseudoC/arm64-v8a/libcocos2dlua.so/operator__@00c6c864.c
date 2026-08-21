
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocostudio::ArmatureMovementDispatcher::*)(cocostudio::Armature*, cocostudio::MovementEventType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&), cocostudio::ArmatureMovementDispatcher*&, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&, std::__ndk1::placeholders::__ph<3> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocostudio::ArmatureMovementDispatcher::*)(cocostudio::Armature*, cocostudio::MovementEventType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&), cocostudio::ArmatureMovementDispatcher*&, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&, std::__ndk1::placeholders::__ph<3> const&> >, void
   (cocostudio::Armature*, cocostudio::MovementEventType, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)>::TEMPNAMEPLACEHOLDERVALUE(cocostudio::Armature*&&, cocostudio::MovementEventType&&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void std::__ndk1::__function::
     __func<std::__ndk1::__bind<void(cocostudio::ArmatureMovementDispatcher::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),cocostudio::ArmatureMovementDispatcher*&,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocostudio::ArmatureMovementDispatcher::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),cocostudio::ArmatureMovementDispatcher*&,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>>,void(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>
     ::operator()(Armature **param_1,MovementEventType *param_2,basic_string *param_3)

{
  Armature *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = param_1[1];
  if (((ulong)param_1[2] & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(Armature **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1[3] + ((long)param_1[2] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00c6c884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)
            (param_1[3] + ((long)param_1[2] >> 1),*(undefined8 *)param_2,*(undefined4 *)param_3);
  return;
}

