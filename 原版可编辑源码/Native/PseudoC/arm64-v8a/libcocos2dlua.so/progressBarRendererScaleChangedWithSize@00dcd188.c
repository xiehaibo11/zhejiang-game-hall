
/* cocos2d::ui::Slider::progressBarRendererScaleChangedWithSize() */

void __thiscall cocos2d::ui::Slider::progressBarRendererScaleChangedWithSize(Slider *this)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x381] == (Slider)0x0) {
    if (this[0x387] == (Slider)0x0) {
      if (this[0x55c] == (Slider)0x0) {
        Size::Size((Size *)&local_40,(Size *)(this + 0x518));
        if ((local_40 <= 0.0) || (local_3c <= 0.0)) {
          (**(code **)(**(long **)(this + 0x4f8) + 0x80))(0x3f800000);
          goto LAB_00dcd260;
        }
        plVar2 = *(long **)(this + 0x4f8);
        goto LAB_00dcd1e8;
      }
      Scale9Sprite::setPreferredSize(*(Size **)(this + 0x4f8));
      fVar4 = 1.0;
      pcVar3 = *(code **)(**(long **)(this + 0x4f8) + 0x80);
    }
    else {
      if (this[0x55c] != (Slider)0x0) goto LAB_00dcd238;
      Size::Size((Size *)&local_40,(Size *)(this + 0x518));
      plVar2 = *(long **)(this + 0x4f8);
LAB_00dcd1e8:
      fVar4 = *(float *)(this + 0x84) / local_3c;
      (**(code **)(*plVar2 + 0x50))(*(float *)(this + 0x80) / local_40);
      pcVar3 = *(code **)(**(long **)(this + 0x4f8) + 0x60);
    }
    (*pcVar3)(fVar4);
  }
  else {
    Scale9Sprite::setPreferredSize(*(Size **)(this + 0x4f8));
  }
LAB_00dcd238:
  (**(code **)(**(long **)(this + 0x4f8) + 200))(0,*(float *)(this + 0x84) * 0.5);
  updateVisualSlider(this);
LAB_00dcd260:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

