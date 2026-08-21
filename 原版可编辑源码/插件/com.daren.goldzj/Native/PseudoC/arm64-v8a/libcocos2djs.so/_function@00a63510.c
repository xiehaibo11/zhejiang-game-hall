
/* std::__ndk1::function<bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::extension::ManifestAsset)>::~function() */

void __thiscall
std::__ndk1::
function<bool(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::extension::ManifestAsset)>
::~function(function<bool(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::extension::ManifestAsset)>
            *this)

{
  function<bool(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::extension::ManifestAsset)>
  *pfVar1;
  
  pfVar1 = *(function<bool(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::extension::ManifestAsset)>
             **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00a63538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<bool(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::extension::ManifestAsset)>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a6352c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

