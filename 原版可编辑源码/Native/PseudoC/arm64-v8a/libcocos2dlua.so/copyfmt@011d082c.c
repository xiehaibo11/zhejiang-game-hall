
/* std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::copyfmt(std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> > const&) */

basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>>::copyfmt
          (basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_ios *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (this != (basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>> *)param_1) {
    if (*(long *)(this + 0x48) != 0) {
      lVar3 = *(long *)(this + 0x48) + -1;
      do {
        (**(code **)(*(long *)(this + 0x38) + lVar3 * 8))
                  (0,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar3 * 4));
        lVar3 = lVar3 + -1;
      } while (lVar3 != -1);
    }
    ios_base::copyfmt((ios_base *)this,(ios_base *)param_1);
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
    if (*(long *)(this + 0x48) != 0) {
      lVar3 = *(long *)(this + 0x48) + -1;
      do {
        (**(code **)(*(long *)(this + 0x38) + lVar3 * 8))
                  (2,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar3 * 4));
        lVar3 = lVar3 + -1;
      } while (lVar3 != -1);
    }
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar2 = *(uint *)(this + 0x20) | (uint)(*(long *)(this + 0x28) == 0);
    *(uint *)(this + 0x20) = uVar2;
    *(uint *)(this + 0x24) = uVar1;
    if ((uVar2 & uVar1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
  }
  return this;
}

