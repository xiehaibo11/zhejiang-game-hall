
/* cocos2d::ui::TextBMFont::labelBMFontScaleChangedWithSize() */

void __thiscall cocos2d::ui::TextBMFont::labelBMFontScaleChangedWithSize(TextBMFont *this)

{
  long lVar1;
  Size *pSVar2;
  code *pcVar3;
  float fVar4;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x387] == (TextBMFont)0x0) {
    pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x4f0) + 0x168))();
    Size::Size((Size *)&local_40,pSVar2);
    if ((local_40 <= 0.0) || (local_3c <= 0.0)) {
                    /* try { // try from 00dca0cc to 00eca0d7 has its CatchHandler @ 00dca390 */
      (**(code **)(**(long **)(this + 0x4f0) + 0x80))(0x3f800000);
      goto LAB_00dca0e0;
    }
    fVar4 = *(float *)(this + 0x84) / local_3c;
    (**(code **)(**(long **)(this + 0x4f0) + 0x50))(*(float *)(this + 0x80) / local_40);
    pcVar3 = *(code **)(**(long **)(this + 0x4f0) + 0x60);
  }
  else {
    fVar4 = 1.0;
    pcVar3 = *(code **)(**(long **)(this + 0x4f0) + 0x80);
  }
  (*pcVar3)(fVar4);
  (**(code **)(**(long **)(this + 0x4f0) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
LAB_00dca0e0:
                    /* try { // try from 00dca0ec to 00eca10f has its CatchHandler @ 00dca3dc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

