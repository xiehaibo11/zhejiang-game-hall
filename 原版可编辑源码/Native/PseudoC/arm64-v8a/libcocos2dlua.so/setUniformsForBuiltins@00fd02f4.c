
/* cocos2d::GLProgram::setUniformsForBuiltins() */

void __thiscall cocos2d::GLProgram::setUniformsForBuiltins(GLProgram *this)

{
  Mat4 *pMVar1;
  
  pMVar1 = (Mat4 *)Director::getMatrix(*(Director **)(this + 0xe8),0);
  setUniformsForBuiltins(this,pMVar1);
  return;
}

