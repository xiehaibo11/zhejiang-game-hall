
/* cocos2d::GLViewImpl::isOpenGLReady() */

bool __thiscall cocos2d::GLViewImpl::isOpenGLReady(GLViewImpl *this)

{
  if (*(float *)(this + 0x24) != 0.0) {
    return *(float *)(this + 0x28) != 0.0;
  }
  return false;
}

