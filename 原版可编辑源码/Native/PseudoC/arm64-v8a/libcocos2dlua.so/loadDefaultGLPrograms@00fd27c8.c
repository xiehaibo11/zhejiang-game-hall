
/* cocos2d::GLProgramCache::loadDefaultGLPrograms() */

void __thiscall cocos2d::GLProgramCache::loadDefaultGLPrograms(GLProgramCache *this)

{
  GLProgramCache *pGVar1;
  long lVar2;
  GLProgram *pGVar3;
  long lVar4;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00fd27f8 to 010d27fb has its CatchHandler @ 00fd2814 */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd27f8 with catch @ 00fd2814
                        */
  GLProgram::initWithByteArrays(pGVar3,ccPositionTextureColor_vert,ccPositionTextureColor_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
  pGVar1 = this + 0x28;
                    /* try { // try from 00fd285c to 010d285f has its CatchHandler @ 00fd2870 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd285c with catch @ 00fd2870
                        */
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays
            (pGVar3,ccPositionTextureColor_noMVP_vert,ccPositionTextureColor_noMVP_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd28b8 to 010d28bb has its CatchHandler @ 00fd28d4 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd28b8 with catch @ 00fd28d4
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays
            (pGVar3,ccPositionTextureColor_vert,ccPositionTextureColorAlphaTest_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd2918 to 010d291b has its CatchHandler @ 00fd2934 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_TEXTURE_ALPHA_TEST);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2918 with catch @ 00fd2934
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays
            (pGVar3,ccPositionTextureColor_noMVP_vert,ccPositionTextureColorAlphaTest_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd297c to 010d297f has its CatchHandler @ 00fd2990 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_TEXTURE_ALPHA_TEST_NO_MV
            );
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd297c with catch @ 00fd2990
                        */
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccPositionColor_vert,ccPositionColor_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd29d8 to 010d29db has its CatchHandler @ 00fd29f4 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_COLOR);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd29d8 with catch @ 00fd29f4
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccPositionColorTextureAsPointsize_vert,ccPositionColor_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd2a38 to 010d2a3b has its CatchHandler @ 00fd2a54 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_COLOR_TEXASPOINTSIZE);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2a38 with catch @ 00fd2a54
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccPositionTextureColor_noMVP_vert,ccPositionColor_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd2a9c to 010d2a9f has its CatchHandler @ 00fd2ab0 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_COLOR_NO_MVP);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2a9c with catch @ 00fd2ab0
                        */
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccPositionTexture_vert,ccPositionTexture_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd2af8 to 010d2afb has its CatchHandler @ 00fd2b14 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_TEXTURE);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2af8 with catch @ 00fd2b14
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccPositionTexture_uColor_vert,ccPositionTexture_uColor_frag);
  GLProgram::link(pGVar3);
                    /* try { // try from 00fd2b58 to 010d2b5b has its CatchHandler @ 00fd2b74 */
  GLProgram::updateUniforms(pGVar3);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_TEXTURE_U_COLOR);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2b58 with catch @ 00fd2b74
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccPositionTextureA8Color_vert,ccPositionTextureA8Color_frag);
  GLProgram::link(pGVar3);
                    /* try { // try from 00fd2bbc to 010d2bbf has its CatchHandler @ 00fd2bd0 */
  GLProgram::updateUniforms(pGVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2bbc with catch @ 00fd2bd0
                        */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_TEXTURE_A8_COLOR);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  loadDefaultGLProgram(this,pGVar3,10);
                    /* try { // try from 00fd2c18 to 010d2c1b has its CatchHandler @ 00fd2c34 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_U_COLOR);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2c18 with catch @ 00fd2c34
                        */
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays
            (pGVar3,ccPositionColorLengthTexture_vert,ccPositionColorLengthTexture_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd2c78 to 010d2c7b has its CatchHandler @ 00fd2c94 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_LENGTH_TEXTURE_COLOR);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2c78 with catch @ 00fd2c94
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccLabel_vert,ccLabelDistanceFieldNormal_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd2cdc to 010d2cdf has its CatchHandler @ 00fd2cf0 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_LABEL_DISTANCEFIELD_NORMAL);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2cdc with catch @ 00fd2cf0
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccLabel_vert,ccLabelDistanceFieldGlow_frag);
  GLProgram::link(pGVar3);
                    /* try { // try from 00fd2d38 to 010d2d3b has its CatchHandler @ 00fd2d54 */
  GLProgram::updateUniforms(pGVar3);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_LABEL_DISTANCEFIELD_GLOW);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2d38 with catch @ 00fd2d54
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays
            (pGVar3,ccPositionTextureColor_noMVP_vert,ccPositionTexture_GrayScale_frag);
  GLProgram::link(pGVar3);
                    /* try { // try from 00fd2d98 to 010d2d9b has its CatchHandler @ 00fd2db4 */
  GLProgram::updateUniforms(pGVar3);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_POSITION_GRAYSCALE);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2d98 with catch @ 00fd2db4
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccLabel_vert,ccLabelNormal_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd2dfc to 010d2dff has its CatchHandler @ 00fd2e10 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_LABEL_NORMAL);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2dfc with catch @ 00fd2e10
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccLabel_vert,ccLabelOutline_frag);
  GLProgram::link(pGVar3);
                    /* try { // try from 00fd2e58 to 010d2e5b has its CatchHandler @ 00fd2e74 */
  GLProgram::updateUniforms(pGVar3);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_LABEL_OUTLINE);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2e58 with catch @ 00fd2e74
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,cc3D_PositionTex_vert,cc3D_Color_frag);
                    /* try { // try from 00fd2eb8 to 010d2ebb has its CatchHandler @ 00fd2ed4 */
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2eb8 with catch @ 00fd2ed4
                        */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_POSITION);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,cc3D_PositionTex_vert,cc3D_ColorTex_frag);
  GLProgram::link(pGVar3);
                    /* try { // try from 00fd2f1c to 010d2f1f has its CatchHandler @ 00fd2f30 */
  GLProgram::updateUniforms(pGVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2f1c with catch @ 00fd2f30
                        */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_POSITION_TEXTURE);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,cc3D_SkinPositionTex_vert,cc3D_ColorTex_frag);
                    /* try { // try from 00fd2f78 to 010d2f7b has its CatchHandler @ 00fd2f94 */
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2f78 with catch @ 00fd2f94
                        */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_SKINPOSITION_TEXTURE);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  loadDefaultGLProgram(this,pGVar3,0x14);
                    /* try { // try from 00fd2fd8 to 010d2fdb has its CatchHandler @ 00fd2ff4 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_POSITION_NORMAL);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2fd8 with catch @ 00fd2ff4
                        */
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  loadDefaultGLProgram(this,pGVar3,0x15);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_POSITION_NORMAL_TEXTURE);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00fd303c to 010d303f has its CatchHandler @ 00fd3050 */
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd303c with catch @ 00fd3050
                        */
  loadDefaultGLProgram(this,pGVar3,0x16);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_SKINPOSITION_NORMAL_TEXTURE);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
                    /* try { // try from 00fd3098 to 010d309b has its CatchHandler @ 00fd30b4 */
  loadDefaultGLProgram(this,pGVar3,0x17);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3098 with catch @ 00fd30b4
                        */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_POSITION_BUMPEDNORMAL_TEXTURE);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  loadDefaultGLProgram(this,pGVar3,0x18);
                    /* try { // try from 00fd30f8 to 010d30fb has its CatchHandler @ 00fd3114 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_SKINPOSITION_BUMPEDNORMAL_TEXTURE);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd30f8 with catch @ 00fd3114
                        */
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,cc3D_Particle_vert,cc3D_Particle_color_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd315c to 010d315f has its CatchHandler @ 00fd3170 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_PARTICLE_COLOR);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd315c with catch @ 00fd3170
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,cc3D_Particle_vert,cc3D_Particle_tex_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* try { // try from 00fd31b8 to 010d31bb has its CatchHandler @ 00fd31d4 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_PARTICLE_TEXTURE);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd31b8 with catch @ 00fd31d4
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,cc3D_Skybox_vert,cc3D_Skybox_frag);
  GLProgram::link(pGVar3);
                    /* try { // try from 00fd3218 to 010d321b has its CatchHandler @ 00fd3234 */
  GLProgram::updateUniforms(pGVar3);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_SKYBOX);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3218 with catch @ 00fd3234
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,cc3D_Terrain_vert,cc3D_Terrain_frag);
  GLProgram::link(pGVar3);
                    /* try { // try from 00fd327c to 010d327f has its CatchHandler @ 00fd3290 */
  GLProgram::updateUniforms(pGVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd327c with catch @ 00fd3290
                        */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_3D_TERRAIN);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
                    /* try { // try from 00fd32d8 to 010d32db has its CatchHandler @ 00fd32f4 */
  GLProgram::initWithByteArrays(pGVar3,ccCameraClearVert,ccCameraClearFrag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd32d8 with catch @ 00fd32f4
                        */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_CAMERA_CLEAR);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
                    /* try { // try from 00fd3338 to 010d333b has its CatchHandler @ 00fd3354 */
  GLProgram::initWithByteArrays
            (pGVar3,ccPositionTextureColor_vert,ccETC1ASPositionTextureColor_frag);
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3338 with catch @ 00fd3354
                        */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_ETC1AS_POSITION_TEXTURE_COLOR);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays
            (pGVar3,ccPositionTextureColor_noMVP_vert,ccETC1ASPositionTextureColor_frag);
  GLProgram::link(pGVar3);
                    /* try { // try from 00fd339c to 010d339f has its CatchHandler @ 00fd33b0 */
  GLProgram::updateUniforms(pGVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd339c with catch @ 00fd33b0
                        */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,
             (GLProgram **)&GLProgram::SHADER_NAME_ETC1AS_POSITION_TEXTURE_COLOR_NO_MVP);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccPositionTextureColor_vert,ccETC1ASPositionTextureGray_frag)
  ;
                    /* try { // try from 00fd33f8 to 010d33fb has its CatchHandler @ 00fd3414 */
  GLProgram::link(pGVar3);
  GLProgram::updateUniforms(pGVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd33f8 with catch @ 00fd3414
                        */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_NAME_ETC1AS_POSITION_TEXTURE_GRAY);
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays
            (pGVar3,ccPositionTextureColor_noMVP_vert,ccETC1ASPositionTextureGray_frag);
  GLProgram::link(pGVar3);
                    /* try { // try from 00fd3458 to 010d345b has its CatchHandler @ 00fd3474 */
  GLProgram::updateUniforms(pGVar3);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,
             (GLProgram **)&GLProgram::SHADER_NAME_ETC1AS_POSITION_TEXTURE_GRAY_NO_MVP);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3458 with catch @ 00fd3474
                        */
  pGVar3 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pGVar3 != (GLProgram *)0x0) {
    GLProgram::GLProgram(pGVar3);
  }
  GLProgram::initWithByteArrays(pGVar3,ccPosition_vert,ccShader_LayerRadialGradient_frag);
  GLProgram::link(pGVar3);
                    /* try { // try from 00fd34bc to 010d34bf has its CatchHandler @ 00fd34d0 */
  GLProgram::updateUniforms(pGVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd34bc with catch @ 00fd34d0
                        */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
  ::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>
            ((char **)pGVar1,(GLProgram **)&GLProgram::SHADER_LAYER_RADIAL_GRADIENT);
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

