
/* cocos2d::GLProgram::initWithByteArrays(char const*, char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall
cocos2d::GLProgram::initWithByteArrays
          (GLProgram *this,char *param_1,char *param_2,basic_string *param_3)

{
  long lVar1;
  uint uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* try { // try from 00fceaec to 010ceaef has its CatchHandler @ 00fceb04 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fceaec with catch @ 00fceb04
                        */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"");
  uVar2 = initWithByteArrays(this,param_1,param_2,(basic_string *)local_60,param_3);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 00fceb4c to 010ceb4f has its CatchHandler @ 00fceb6c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fceb4c with catch @ 00fceb6c
                        */
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

