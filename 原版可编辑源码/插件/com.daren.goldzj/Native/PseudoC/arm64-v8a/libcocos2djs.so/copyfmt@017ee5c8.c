
/* std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char>
   >::copyfmt(std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> > const&) */

basic_ios<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::copyfmt
          (basic_ios<char,std::__ndk1::char_traits<char>> *this,basic_ios *param_1)

{
  long lVar1;
  
  if (this != (basic_ios<char,std::__ndk1::char_traits<char>> *)param_1) {
    if (*(long *)(this + 0x48) != 0) {
      lVar1 = *(long *)(this + 0x48) + -1;
      do {
        (**(code **)(*(long *)(this + 0x38) + lVar1 * 8))
                  (0,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar1 * 4));
        lVar1 = lVar1 + -1;
      } while (lVar1 != -1);
    }
    ios_base::copyfmt((ios_base *)this,(ios_base *)param_1);
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
    if (*(long *)(this + 0x48) != 0) {
      lVar1 = *(long *)(this + 0x48) + -1;
      do {
        (**(code **)(*(long *)(this + 0x38) + lVar1 * 8))
                  (2,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar1 * 4));
        lVar1 = lVar1 + -1;
      } while (lVar1 != -1);
    }
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    ios_base::clear((ios_base *)this,*(uint *)(this + 0x20));
  }
  return this;
}

