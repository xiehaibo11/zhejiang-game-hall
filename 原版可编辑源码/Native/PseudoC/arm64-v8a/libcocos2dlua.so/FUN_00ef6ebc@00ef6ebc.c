
void FUN_00ef6ebc(void)

{
  long lVar1;
  GLProgram *pGVar2;
  GLProgramCache *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_0178f778 & 1) == 0) {
    this = (GLProgramCache *)cocos2d::GLProgramCache::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,cocos2d::GLProgram::SHADER_NAME_POSITION_U_COLOR);
    DAT_0178f770 = (GLProgram *)cocos2d::GLProgramCache::getGLProgram(this,(basic_string *)local_50)
    ;
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    cocos2d::Ref::retain((Ref *)DAT_0178f770);
    pGVar2 = DAT_0178f770;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"u_color");
    DAT_01777928 = cocos2d::GLProgram::getUniformLocation(pGVar2,(basic_string *)local_50);
    if (((byte)local_50[0] & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef6fac with catch @ 00ef6f60
                        */
      operator_delete(local_40);
    }
    pGVar2 = DAT_0178f770;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"u_pointSize");
    DAT_0177792c = cocos2d::GLProgram::getUniformLocation(pGVar2,(basic_string *)local_50);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
                    /* try { // try from 00ef6fa4 to 00ff6fab has its CatchHandler @ 00ef6ff4 */
    DAT_0178f778 = 1;
  }
                    /* try { // try from 00ef6fac to 00ff6ff7 has its CatchHandler @ 00ef6f60 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

