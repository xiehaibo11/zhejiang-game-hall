
/* cocos2d::ui::Slider::barRendererScaleChangedWithSize() */

void __thiscall cocos2d::ui::Slider::barRendererScaleChangedWithSize(Slider *this)

{
  long lVar1;
  code *pcVar2;
  float fVar3;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x381] != (Slider)0x0) {
    *(undefined4 *)(this + 0x550) = *(undefined4 *)(this + 0x80);
    Scale9Sprite::setPreferredSize(*(Size **)(this + 0x4f0));
    goto LAB_00dcd138;
  }
  if (this[0x387] != (Slider)0x0) {
    (**(code **)(**(long **)(this + 0x4f0) + 0x80))(0x3f800000);
    *(undefined4 *)(this + 0x550) = *(undefined4 *)(this + 0x80);
    goto LAB_00dcd138;
  }
  *(undefined4 *)(this + 0x550) = *(undefined4 *)(this + 0x80);
  if (this[0x55c] == (Slider)0x0) {
    Size::Size((Size *)&local_40,(Size *)(this + 0x500));
    if ((local_40 <= 0.0) || (local_3c <= 0.0)) goto LAB_00dcd124;
    fVar3 = *(float *)(this + 0x84) / local_3c;
    (**(code **)(**(long **)(this + 0x4f0) + 0x50))(*(float *)(this + 0x80) / local_40);
    pcVar2 = *(code **)(**(long **)(this + 0x4f0) + 0x60);
  }
  else {
    Scale9Sprite::setPreferredSize(*(Size **)(this + 0x4f0));
LAB_00dcd124:
    fVar3 = 1.0;
    pcVar2 = *(code **)(**(long **)(this + 0x4f0) + 0x80);
  }
  (*pcVar2)(fVar3);
LAB_00dcd138:
  (**(code **)(**(long **)(this + 0x4f0) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
  updateVisualSlider(this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

