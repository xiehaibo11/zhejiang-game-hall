
/* cocos2d::GLProgramState::getOrCreateWithGLProgramName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Texture2D*) */

undefined8
cocos2d::GLProgramState::getOrCreateWithGLProgramName(basic_string *param_1,Texture2D *param_2)

{
  size_t __n;
  basic_string bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  size_t sVar5;
  GLProgramCache *pGVar6;
  GLProgram *pGVar7;
  GLProgramStateCache *pGVar8;
  undefined8 uVar9;
  basic_string *pbVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* try { // try from 00fd6ecc to 010d6ecf has its CatchHandler @ 00fd6f50 */
                    /* try { // try from 00fd6ed0 to 010d6f7b has its CatchHandler @ 00fd6e5c */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((param_2 == (Texture2D *)0x0) ||
     (iVar4 = Texture2D::getAlphaTextureName(param_2),
     puVar3 = GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR, iVar4 == 0)) goto LAB_00fd6fd0;
  sVar5 = strlen(GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR);
  bVar1 = *param_1;
  __n = (ulong)((byte)bVar1 >> 1);
  if (((byte)bVar1 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  if (sVar5 == __n) {
    if (sVar5 != 0) {
      if (sVar5 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar10 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar1 & 1) == 0) {
        pbVar10 = param_1 + 1;
      }
      iVar4 = memcmp(pbVar10,puVar3,sVar5);
      if (iVar4 != 0) goto LAB_00fd6f48;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,GLProgram::SHADER_NAME_ETC1AS_POSITION_TEXTURE_COLOR);
    pGVar6 = (GLProgramCache *)GLProgramCache::getInstance();
                    /* try { // try from 00fd7020 to 010d7027 has its CatchHandler @ 00fd70c0 */
    pGVar7 = (GLProgram *)GLProgramCache::getGLProgram(pGVar6,(basic_string *)local_60);
    uVar9 = 0;
    if (pGVar7 != (GLProgram *)0x0) {
      pGVar8 = (GLProgramStateCache *)GLProgramStateCache::getInstance();
      uVar9 = GLProgramStateCache::getGLProgramState(pGVar8,pGVar7);
    }
LAB_00fd70ac:
                    /* catch() { ... } // from try @ 00fd7048 with catch @ 00fd70b0 */
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
LAB_00fd6f48:
    puVar3 = GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP;
                    /* catch() { ... } // from try @ 00fd6ecc with catch @ 00fd6f50 */
    sVar5 = strlen(GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP);
                    /* catch() { ... } // from try @ 00fd6ea4 with catch @ 00fd6f60 */
    if (sVar5 == __n) {
      if (__n != 0) {
        if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        pbVar10 = *(basic_string **)(param_1 + 0x10);
        if (((byte)bVar1 & 1) == 0) {
          pbVar10 = param_1 + 1;
        }
        iVar4 = memcmp(pbVar10,puVar3,__n);
        if (iVar4 != 0) goto LAB_00fd6f8c;
      }
                    /* try { // try from 00fd7048 to 010d704b has its CatchHandler @ 00fd70b0 */
                    /* try { // try from 00fd704c to 010d70db has its CatchHandler @ 00fd6ff4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                (local_60,GLProgram::SHADER_NAME_ETC1AS_POSITION_TEXTURE_COLOR_NO_MVP);
      pGVar6 = (GLProgramCache *)GLProgramCache::getInstance();
      pGVar7 = (GLProgram *)GLProgramCache::getGLProgram(pGVar6,(basic_string *)local_60);
      uVar9 = 0;
      if (pGVar7 != (GLProgram *)0x0) {
        pGVar8 = (GLProgramStateCache *)GLProgramStateCache::getInstance();
        uVar9 = GLProgramStateCache::getGLProgramState(pGVar8,pGVar7);
      }
      goto LAB_00fd70ac;
    }
LAB_00fd6f8c:
    puVar3 = GLProgram::SHADER_NAME_POSITION_GRAYSCALE;
    sVar5 = strlen(GLProgram::SHADER_NAME_POSITION_GRAYSCALE);
    if (sVar5 == __n) {
      if (__n != 0) {
        if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        pbVar10 = *(basic_string **)(param_1 + 0x10);
        if (((byte)bVar1 & 1) == 0) {
          pbVar10 = param_1 + 1;
        }
        iVar4 = memcmp(pbVar10,puVar3,__n);
        if (iVar4 != 0) goto LAB_00fd6fd0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                (local_60,GLProgram::SHADER_NAME_ETC1AS_POSITION_TEXTURE_GRAY_NO_MVP);
      pGVar6 = (GLProgramCache *)GLProgramCache::getInstance();
      pGVar7 = (GLProgram *)GLProgramCache::getGLProgram(pGVar6,(basic_string *)local_60);
      uVar9 = 0;
      if (pGVar7 != (GLProgram *)0x0) {
        pGVar8 = (GLProgramStateCache *)GLProgramStateCache::getInstance();
        uVar9 = GLProgramStateCache::getGLProgramState(pGVar8,pGVar7);
      }
      goto LAB_00fd70ac;
    }
LAB_00fd6fd0:
    pGVar6 = (GLProgramCache *)GLProgramCache::getInstance();
    pGVar7 = (GLProgram *)GLProgramCache::getGLProgram(pGVar6,param_1);
    uVar9 = 0;
    if (pGVar7 != (GLProgram *)0x0) {
      pGVar8 = (GLProgramStateCache *)GLProgramStateCache::getInstance();
      uVar9 = GLProgramStateCache::getGLProgramState(pGVar8,pGVar7);
                    /* catch() { ... } // from try @ 00fd704c with catch @ 00fd6ff4 */
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return uVar9;
      }
      goto LAB_00fd70e8;
    }
  }
                    /* catch() { ... } // from try @ 00fd7020 with catch @ 00fd70c0 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar9;
  }
LAB_00fd70e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

