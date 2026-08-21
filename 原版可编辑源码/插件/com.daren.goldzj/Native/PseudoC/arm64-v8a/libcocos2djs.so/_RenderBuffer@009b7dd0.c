
/* cocos2d::renderer::RenderBuffer::~RenderBuffer() */

void __thiscall cocos2d::renderer::RenderBuffer::~RenderBuffer(RenderBuffer *this)

{
                    /* try { // try from 009b7dd8 to 00ab7de3 has its CatchHandler @ 009b7fbc */
                    /* try { // try from 009b7de4 to 00ab7def has its CatchHandler @ 009b7fb8 */
                    /* try { // try from 009b7df0 to 00ab7f3f has its CatchHandler @ 009b7fd0 */
  *(undefined ***)this = &PTR__RenderBuffer_01c6aea0;
  if (*(int *)(this + 0xc) == 0) {
    __android_log_print(6,"renderer"," (43): The render-buffer (%p) is invalid!\n",this);
  }
  else {
    glDeleteRenderbuffers(1);
  }
  GraphicsHandle::~GraphicsHandle((GraphicsHandle *)this);
  return;
}

