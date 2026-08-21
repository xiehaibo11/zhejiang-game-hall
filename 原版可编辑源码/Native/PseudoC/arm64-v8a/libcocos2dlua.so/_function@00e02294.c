
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
                    /* try { // try from 00e022a0 to 00f022ab has its CatchHandler @ 00e02530 */
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00e022bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<bool(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::extension::ManifestAsset)>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e022b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00e022b0 to 00f022b7 has its CatchHandler @ 00e0252c */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

