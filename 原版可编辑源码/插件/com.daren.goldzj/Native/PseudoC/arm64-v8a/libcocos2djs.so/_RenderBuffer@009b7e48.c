
/* cocos2d::renderer::RenderBuffer::~RenderBuffer() */

void __thiscall cocos2d::renderer::RenderBuffer::~RenderBuffer(RenderBuffer *this)

{
  *(undefined ***)this = &PTR__RenderBuffer_01c6aea0;
  if (*(int *)(this + 0xc) == 0) {
    __android_log_print(6,"renderer"," (43): The render-buffer (%p) is invalid!\n",this);
  }
  else {
    glDeleteRenderbuffers(1);
  }
  GraphicsHandle::~GraphicsHandle((GraphicsHandle *)this);
  operator_delete(this);
  return;
}

