
/* cocos2d::Sprite::setStretchEnabled(bool) */

void __thiscall cocos2d::Sprite::setStretchEnabled(Sprite *this,bool param_1)

{
  long lVar1;
  Rect aRStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x52c] != (Sprite)param_1) {
    this[0x52c] = (Sprite)param_1;
    if (!param_1) {
      Rect::Rect(aRStack_38,0.0,0.0,1.0,1.0);
      (**(code **)(*(long *)this + 0x570))(this,aRStack_38);
    }
    updateStretchFactor(this);
    updatePoly(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

