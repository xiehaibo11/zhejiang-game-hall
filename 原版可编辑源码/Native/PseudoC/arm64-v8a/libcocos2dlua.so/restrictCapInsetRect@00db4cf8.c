
/* cocos2d::ui::Helper::restrictCapInsetRect(cocos2d::Rect const&, cocos2d::Size const&) */

void __thiscall cocos2d::ui::Helper::restrictCapInsetRect(Helper *this,Rect *param_1,Size *param_2)

{
  Rect *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar5 = *(float *)param_1;
  fVar4 = *(float *)(this + 0xc);
  if (fVar3 <= fVar5) {
    fVar1 = *(float *)this;
  }
  else {
    fVar1 = fVar5 * 0.5;
    fVar3 = 1.0;
    if (fVar5 <= 0.0) {
      fVar3 = 0.0;
    }
  }
  fVar5 = *(float *)(param_1 + 4);
  if (fVar5 < fVar4) {
    fVar2 = fVar5 * 0.5;
    fVar4 = 1.0;
    if (fVar5 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  Rect::Rect(in_x8,fVar1,fVar2,fVar3,fVar4);
  return;
}

