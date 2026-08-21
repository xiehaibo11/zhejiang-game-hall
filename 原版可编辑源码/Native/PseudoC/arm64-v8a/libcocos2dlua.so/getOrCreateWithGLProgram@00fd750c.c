
/* cocos2d::GLProgramState::getOrCreateWithGLProgram(cocos2d::GLProgram*) */

void cocos2d::GLProgramState::getOrCreateWithGLProgram(GLProgram *param_1)

{
  GLProgramStateCache *this;
  
  this = (GLProgramStateCache *)GLProgramStateCache::getInstance();
  GLProgramStateCache::getGLProgramState(this,param_1);
  return;
}

