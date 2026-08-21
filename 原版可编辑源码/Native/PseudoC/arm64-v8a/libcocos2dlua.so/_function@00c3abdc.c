
/* std::__ndk1::function<void (cocostudio::Armature*, cocostudio::MovementEventType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)>::~function() */

void __thiscall
std::__ndk1::
function<void(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>
::~function(function<void(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>
            *this)

{
  function<void(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>
  *pfVar1;
  
  pfVar1 = *(function<void(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>
             **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00c3ac04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c3abf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

