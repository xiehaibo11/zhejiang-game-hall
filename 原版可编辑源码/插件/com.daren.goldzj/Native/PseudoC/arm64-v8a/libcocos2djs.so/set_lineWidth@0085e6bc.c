
/* cocos2d::CanvasRenderingContext2D::set_lineWidth(float) */

void __thiscall
cocos2d::CanvasRenderingContext2D::set_lineWidth(CanvasRenderingContext2D *this,float param_1)

{
  *(float *)(this + 8) = param_1;
  CanvasRenderingContext2DImpl::setLineWidth
            (*(CanvasRenderingContext2DImpl **)(this + 0x100),param_1);
  return;
}

