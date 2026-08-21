
/* cocos2d::ui::Layout::setBackGroundColorVector(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::Layout::setBackGroundColorVector(Layout *this,Vec2 *param_1)

{
  *(undefined8 *)(this + 0x59c) = *(undefined8 *)param_1;
  if (*(LayerGradient **)(this + 0x588) != (LayerGradient *)0x0) {
    LayerGradient::setVector(*(LayerGradient **)(this + 0x588),param_1);
    return;
  }
  return;
}

