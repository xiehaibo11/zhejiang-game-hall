
/* std::__ndk1::function<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > (cocos2d::ui::RichText*)>::~function() */

void __thiscall
std::__ndk1::
function<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(cocos2d::ui::RichText*)>
::~function(function<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(cocos2d::ui::RichText*)>
            *this)

{
  function<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(cocos2d::ui::RichText*)>
  *pfVar1;
  
  pfVar1 = *(function<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(cocos2d::ui::RichText*)>
             **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00dd4ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(cocos2d::ui::RichText*)>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dd4ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

