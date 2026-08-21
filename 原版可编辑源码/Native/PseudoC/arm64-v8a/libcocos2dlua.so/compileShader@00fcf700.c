
/* cocos2d::GLProgram::compileShader(unsigned int*, unsigned int, char const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

uint __thiscall
cocos2d::GLProgram::compileShader
          (GLProgram *this,uint *param_1,uint param_2,char *param_3,basic_string *param_4)

{
  long lVar1;
  uint uVar2;
  GLProgram *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* try { // try from 00fcf714 to 010cf71b has its CatchHandler @ 00fcf784 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00fcf71c to 010cf79f has its CatchHandler @ 00fcf6ec */
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (GLProgram *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_60,"");
  uVar2 = compileShader(this_00,param_1,param_2,param_3,(basic_string *)local_60,param_4);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00fcf714 with catch @ 00fcf784 */
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

