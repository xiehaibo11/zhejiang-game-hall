
/* cocos2d::LabelBMFont::setFntFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Vec2 const&) */

void __thiscall
cocos2d::LabelBMFont::setFntFile(LabelBMFont *this,basic_string *param_1,Vec2 *param_2)

{
  size_t __n;
  ulong uVar1;
  basic_string *__s2;
  int iVar2;
  LabelBMFont *__s1;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  __s2 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00f11f84 to 010120df has its CatchHandler @ 00f11e3c */
  if (((byte)*param_1 & 1) == 0) {
    __s2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  if (((byte)this[0x308] & 1) == 0) {
    uVar3 = (ulong)((byte)this[0x308] >> 1);
    __s1 = this + 0x309;
  }
  else {
    uVar3 = *(ulong *)(this + 0x310);
    __s1 = *(LabelBMFont **)(this + 0x318);
  }
  __n = uVar1;
  if (uVar3 <= uVar1) {
    __n = uVar3;
  }
  if (((__n == 0) || (iVar2 = memcmp(__s1,__s2,__n), iVar2 == 0)) && (uVar3 == uVar1)) {
    return;
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x308) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x308),(char *)__s2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00f12028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 800) + 0x540))(0,*(long **)(this + 800),param_1,param_2);
  return;
}

