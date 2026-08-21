
/* cocos2d::ui::AbstractCheckButton::backGroundTextureScaleChangedWithSize() */

void __thiscall
cocos2d::ui::AbstractCheckButton::backGroundTextureScaleChangedWithSize(AbstractCheckButton *this)

{
  long lVar1;
  Size *pSVar2;
  undefined8 uVar3;
  float fVar4;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x387] == (AbstractCheckButton)0x0) {
    pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x4f0) + 0x168))();
    Size::Size((Size *)&local_40,pSVar2);
    if ((local_40 <= 0.0) || (local_3c <= 0.0)) {
      (**(code **)(**(long **)(this + 0x4f0) + 0x80))(0x3f800000);
      uVar3 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(this + 0x534) = uVar3;
      goto LAB_00dc4144;
    }
    fVar4 = *(float *)(this + 0x84);
    *(float *)(this + 0x534) = *(float *)(this + 0x80) / local_40;
    *(float *)(this + 0x538) = fVar4 / local_3c;
    (**(code **)(**(long **)(this + 0x4f0) + 0x50))();
    (**(code **)(**(long **)(this + 0x4f0) + 0x60))(fVar4 / local_3c);
  }
  else {
    (**(code **)(**(long **)(this + 0x4f0) + 0x80))(0x3f800000);
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x534) = uVar3;
  }
  (**(code **)(**(long **)(this + 0x4f0) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
LAB_00dc4144:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

