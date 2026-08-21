
/* cocos2d::GLViewImpl::createWithRect(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Rect, float) */

GLView * cocos2d::GLViewImpl::createWithRect(undefined8 param_1,Rect *param_2)

{
  long lVar1;
  GLView *this;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x78);
  GLView::GLView(this);
  *(undefined ***)this = &PTR__GLViewImpl_01697ea8;
  glGenVertexArraysOESEXT = eglGetProcAddress("glGenVertexArraysOES");
  glBindVertexArrayOESEXT = eglGetProcAddress("glBindVertexArrayOES");
  glDeleteVertexArraysOESEXT = eglGetProcAddress("glDeleteVertexArraysOES");
  Rect::Rect(aRStack_48,param_2);
  Ref::autorelease((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

