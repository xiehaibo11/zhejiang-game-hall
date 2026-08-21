
/* cocos2d::DrawPrimitives::init() */

void cocos2d::DrawPrimitives::init(void)

{
  long lVar1;
  GLProgram *pGVar2;
  GLProgramCache *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_0178f778 & 1) == 0) {
    this = (GLProgramCache *)GLProgramCache::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(abStack_50,GLProgram::SHADER_NAME_POSITION_U_COLOR);
    DAT_0178f770 = (GLProgram *)GLProgramCache::getGLProgram(this,(basic_string *)abStack_50);
    if (((byte)abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
    Ref::retain((Ref *)DAT_0178f770);
    pGVar2 = DAT_0178f770;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(abStack_50,"u_color");
    DAT_01777928 = GLProgram::getUniformLocation(pGVar2,(basic_string *)abStack_50);
    if (((byte)abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
    pGVar2 = DAT_0178f770;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(abStack_50,"u_pointSize");
    DAT_0177792c = GLProgram::getUniformLocation(pGVar2,(basic_string *)abStack_50);
    if (((byte)abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
    DAT_0178f778 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

