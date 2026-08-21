
/* cocos2d::ui::LoadingBar::barRendererScaleChangedWithSize() */

void __thiscall cocos2d::ui::LoadingBar::barRendererScaleChangedWithSize(LoadingBar *this)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  Size *pSVar4;
  float fVar5;
  float local_40;
  float local_3c;
  long local_38;
  
                    /* try { // try from 00dcad18 to 00ecaee7 has its CatchHandler @ 00dcab94 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x381] == (LoadingBar)0x0) {
    if (this[0x387] == (LoadingBar)0x0) {
      *(float *)(this + 0x4f8) = *(float *)(this + 0x80);
      if (this[0x524] != (LoadingBar)0x0) {
        pSVar4 = *(Size **)(this + 0x500);
        Size::Size((Size *)&local_40,(*(float *)(this + 0x4f4) / 100.0) * *(float *)(this + 0x80),
                   *(float *)(this + 0x84));
        Scale9Sprite::setPreferredSize(pSVar4);
        plVar2 = *(long **)(this + 0x500);
        goto LAB_00dcadc4;
      }
      Size::Size((Size *)&local_40,(Size *)(this + 0x50c));
      if ((local_40 <= 0.0) || (local_3c <= 0.0)) {
        (**(code **)(**(long **)(this + 0x500) + 0x80))(0x3f800000);
        goto LAB_00dcae28;
      }
      fVar5 = *(float *)(this + 0x84) / local_3c;
      (**(code **)(**(long **)(this + 0x500) + 0x50))(*(float *)(this + 0x80) / local_40);
      pcVar3 = *(code **)(**(long **)(this + 0x500) + 0x60);
    }
    else {
      if (this[0x524] != (LoadingBar)0x0) goto LAB_00dcadd4;
      plVar2 = *(long **)(this + 0x500);
      *(undefined4 *)(this + 0x4f8) = *(undefined4 *)(this + 0x50c);
LAB_00dcadc4:
      fVar5 = 1.0;
      pcVar3 = *(code **)(*plVar2 + 0x80);
    }
    (*pcVar3)(fVar5);
  }
  else {
    *(undefined4 *)(this + 0x4f8) = *(undefined4 *)(this + 0x80);
    setPercent(this,*(float *)(this + 0x4f4));
  }
LAB_00dcadd4:
  if (*(int *)(this + 0x4f0) == 1) {
    local_3c = *(float *)(this + 0x84);
    local_40 = *(float *)(this + 0x4f8);
    plVar2 = *(long **)(this + 0x500);
  }
  else {
    if (*(int *)(this + 0x4f0) != 0) goto LAB_00dcae28;
    local_3c = *(float *)(this + 0x84);
    plVar2 = *(long **)(this + 0x500);
    local_40 = 0.0;
  }
  local_3c = local_3c * 0.5;
  (**(code **)(*plVar2 + 0x98))(plVar2,&local_40);
LAB_00dcae28:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

