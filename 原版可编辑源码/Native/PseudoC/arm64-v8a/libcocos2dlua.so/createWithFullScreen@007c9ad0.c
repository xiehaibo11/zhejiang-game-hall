
/* cocos2d::GLViewImpl::createWithFullScreen(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

GLView * cocos2d::GLViewImpl::createWithFullScreen(basic_string *param_1)

{
  GLView *this;
  
  this = operator_new(0x78);
  GLView::GLView(this);
  *(undefined ***)this = &PTR__GLViewImpl_01697ea8;
  glGenVertexArraysOESEXT = eglGetProcAddress("glGenVertexArraysOES");
  glBindVertexArrayOESEXT = eglGetProcAddress("glBindVertexArrayOES");
  glDeleteVertexArraysOESEXT = eglGetProcAddress("glDeleteVertexArraysOES");
  Ref::autorelease((Ref *)this);
  return this;
}

