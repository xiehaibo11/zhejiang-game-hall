
/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char>
   >::seekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */

undefined1  [16] __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::seekpos
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this,undefined8 param_2,
          __off_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  
                    /* catch() { ... } // from try @ 00a5ad8c with catch @ 00a5addc */
                    /* catch() { ... } // from try @ 00a5ad44 with catch @ 00a5ade0 */
  if (((*(long *)(this + 0x78) == 0) || (iVar1 = (**(code **)(*(long *)this + 0x30))(), iVar1 != 0))
     || (iVar1 = fseeko(*(FILE **)(this + 0x78),param_3,0), iVar1 != 0)) {
                    /* catch() { ... } // from try @ 00a5ad60 with catch @ 00a5ade8 */
    param_2 = 0;
    param_3 = -1;
  }
  else {
    *(undefined8 *)(this + 0x88) = param_2;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  return auVar2;
}

