
/* cocos2d::GLViewImpl::GLViewImpl() */

void __thiscall cocos2d::GLViewImpl::GLViewImpl(GLViewImpl *this)

{
  GLView::GLView((GLView *)this);
  *(undefined ***)this = &PTR__GLViewImpl_01697ea8;
  glGenVertexArraysOESEXT = eglGetProcAddress("glGenVertexArraysOES");
  glBindVertexArrayOESEXT = eglGetProcAddress("glBindVertexArrayOES");
  glDeleteVertexArraysOESEXT = eglGetProcAddress("glDeleteVertexArraysOES");
  return;
}

