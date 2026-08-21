
/* cocos2d::renderer::IndexBuffer::destroy() */

void __thiscall cocos2d::renderer::IndexBuffer::destroy(IndexBuffer *this)

{
  IndexBuffer *pIVar1;
  
  pIVar1 = this + 0xc;
  if (*(int *)pIVar1 != 0) {
    ccDeleteBuffers(1,(uint *)pIVar1);
    *(undefined4 *)pIVar1 = 0;
  }
  return;
}

