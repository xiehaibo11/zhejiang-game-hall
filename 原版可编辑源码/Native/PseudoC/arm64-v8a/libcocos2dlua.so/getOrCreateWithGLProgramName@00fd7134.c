
/* cocos2d::GLProgramState::getOrCreateWithGLProgramName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::GLProgramState::getOrCreateWithGLProgramName(basic_string *param_1)

{
  GLProgramCache *this;
  GLProgram *pGVar1;
  GLProgramStateCache *this_00;
  
  this = (GLProgramCache *)GLProgramCache::getInstance();
  pGVar1 = (GLProgram *)GLProgramCache::getGLProgram(this,param_1);
  if (pGVar1 != (GLProgram *)0x0) {
    this_00 = (GLProgramStateCache *)GLProgramStateCache::getInstance();
    GLProgramStateCache::getGLProgramState(this_00,pGVar1);
    return;
  }
  return;
}

