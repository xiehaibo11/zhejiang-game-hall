
/* cocos2d::ui::Text::labelScaleChangedWithSize() */

void __thiscall cocos2d::ui::Text::labelScaleChangedWithSize(Text *this)

{
  long lVar1;
  Size *pSVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x387] == (Text)0x0) {
    Label::setDimensions(*(Label **)(this + 0x528),*(float *)(this + 0x80),*(float *)(this + 0x84));
    pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x528) + 0x168))();
    Size::Size((Size *)&local_40,pSVar2);
    if ((local_40 <= 0.0) || (local_3c <= 0.0)) {
      (**(code **)(**(long **)(this + 0x528) + 0x80))(0x3f800000);
      goto LAB_00dc8844;
    }
    fVar4 = *(float *)(this + 0x80);
    fVar5 = *(float *)(this + 0x84);
    (**(code **)(**(long **)(this + 0x528) + 0x50))(fVar4 / local_40);
    (**(code **)(**(long **)(this + 0x528) + 0x60))(fVar5 / local_3c);
    *(float *)(this + 0x4fc) = fVar4 / local_40;
    *(float *)(this + 0x500) = fVar5 / local_3c;
  }
  else {
    (**(code **)(*(long *)*(Label **)(this + 0x528) + 0x80))(0x3f800000);
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x4fc) = uVar3;
  }
  (**(code **)(**(long **)(this + 0x528) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
LAB_00dc8844:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

