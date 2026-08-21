
/* cocos2d::ui::LoadingBar::setPercent(float) */

void __thiscall cocos2d::ui::LoadingBar::setPercent(LoadingBar *this,float param_1)

{
  long lVar1;
  long *plVar2;
  Size *pSVar3;
  Size aSStack_48 [8];
  float local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (100.0 < param_1) {
    param_1 = 100.0;
  }
  if (*(float *)(this + 0x4f4) != param_1) {
    *(float *)(this + 0x4f4) = param_1;
    if (0.0 < *(float *)(this + 0x4f8)) {
      if (this[0x524] == (LoadingBar)0x0) {
        Rect::Rect((Rect *)aSStack_48,(Rect *)(*(long *)(this + 0x500) + 0x408));
        local_40[0] = (param_1 / 100.0) * *(float *)(this + 0x50c);
        plVar2 = *(long **)(this + 0x500);
        (**(code **)(*plVar2 + 0x560))(plVar2,aSStack_48,(char)plVar2[0x83],local_40);
      }
      else {
        pSVar3 = *(Size **)(this + 0x500);
        Size::Size(aSStack_48,(param_1 / 100.0) * *(float *)(this + 0x4f8),*(float *)(this + 0x84));
        Scale9Sprite::setPreferredSize(pSVar3);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

