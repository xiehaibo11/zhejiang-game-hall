
/* cocos2d::ui::Slider::setPercent(int) */

void __thiscall cocos2d::ui::Slider::setPercent(Slider *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x558);
  if (param_1 <= (int)*(uint *)(this + 0x558)) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (*(uint *)(this + 0x554) == uVar1) {
    return;
  }
  *(uint *)(this + 0x554) = uVar1;
  updateVisualSlider(this);
  percentChangedEvent(this,0);
  return;
}

