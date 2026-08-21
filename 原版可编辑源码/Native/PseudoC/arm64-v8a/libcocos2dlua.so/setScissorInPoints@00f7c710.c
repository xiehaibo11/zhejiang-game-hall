
/* cocos2d::GLView::setScissorInPoints(float, float, float, float) */

void __thiscall
cocos2d::GLView::setScissorInPoints
          (GLView *this,float param_1,float param_2,float param_3,float param_4)

{
  glScissor((int)(*(float *)(this + 0x60) * param_1 + *(float *)(this + 0x34)),
            (int)(*(float *)(this + 100) * param_2 + *(float *)(this + 0x38)),
            (int)(*(float *)(this + 0x60) * param_3),(int)(*(float *)(this + 100) * param_4));
  return;
}

