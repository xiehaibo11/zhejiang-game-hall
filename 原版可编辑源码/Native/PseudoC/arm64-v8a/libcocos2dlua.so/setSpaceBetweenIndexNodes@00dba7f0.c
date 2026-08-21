
/* cocos2d::ui::PageViewIndicator::setSpaceBetweenIndexNodes(float) */

void __thiscall
cocos2d::ui::PageViewIndicator::setSpaceBetweenIndexNodes(PageViewIndicator *this,float param_1)

{
  if (*(float *)(this + 0x340) == param_1) {
    return;
  }
  *(float *)(this + 0x340) = param_1;
  rearrange(this);
  return;
}

