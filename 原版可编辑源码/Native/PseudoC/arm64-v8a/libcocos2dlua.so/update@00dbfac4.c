
/* cocos2d::ui::ScrollViewBar::update(float) */

void __thiscall cocos2d::ui::ScrollViewBar::update(ScrollViewBar *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if (((this[0x34d] != (ScrollViewBar)0x0) && (0.0 < *(float *)(this + 0x354))) &&
     (this[0x34c] == (ScrollViewBar)0x0)) {
    fVar1 = *(float *)(this + 0x354) - param_1;
    *(float *)(this + 0x354) = fVar1;
    if (fVar1 <= *(float *)(this + 0x350)) {
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      fVar2 = (float)NEON_ucvtf((uint)(byte)this[0x340]);
      *(float *)(this + 0x354) = fVar1;
      Node::setOpacity((Node *)this,(uchar)(int)((fVar1 / *(float *)(this + 0x350)) * fVar2));
      return;
    }
  }
  return;
}

