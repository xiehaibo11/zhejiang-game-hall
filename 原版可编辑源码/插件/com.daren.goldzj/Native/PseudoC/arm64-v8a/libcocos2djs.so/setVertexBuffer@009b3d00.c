
/* cocos2d::renderer::DeviceGraphics::setVertexBuffer(int, cocos2d::renderer::VertexBuffer*, int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setVertexBuffer
          (DeviceGraphics *this,int param_1,VertexBuffer *param_2,int param_3)

{
  State::setVertexBuffer(*(State **)(this + 0xb8),(long)param_1,param_2);
  State::setVertexBufferOffset(*(State **)(this + 0xb8),(long)param_1,param_3);
                    /* try { // try from 009b3d40 to 00ab3d5b has its CatchHandler @ 009b3d8c */
  if (*(int *)(*(long *)(this + 0xb8) + 0x4c) < param_1) {
    *(int *)(*(long *)(this + 0xb8) + 0x4c) = param_1;
  }
                    /* try { // try from 009b3d5c to 00ab3d9f has its CatchHandler @ 009b3cfc */
  return;
}

