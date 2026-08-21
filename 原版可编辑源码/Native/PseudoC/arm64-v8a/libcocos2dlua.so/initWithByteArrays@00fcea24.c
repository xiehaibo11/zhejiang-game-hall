
/* cocos2d::GLProgram::initWithByteArrays(char const*, char const*) */

uint __thiscall cocos2d::GLProgram::initWithByteArrays(GLProgram *this,char *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00fcea28 to 010cea2b has its CatchHandler @ 00fcea40 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcea28 with catch @ 00fcea40
                        */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"");
  uVar2 = initWithByteArrays(this,param_1,param_2,(basic_string *)local_50,
                             (basic_string *)&DAT_017925a8);
                    /* try { // try from 00fcea84 to 010cea87 has its CatchHandler @ 00fceaa4 */
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcea84 with catch @ 00fceaa4
                        */
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

