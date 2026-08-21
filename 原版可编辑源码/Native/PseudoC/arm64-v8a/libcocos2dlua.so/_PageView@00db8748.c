
/* non-virtual thunk to cocos2d::ui::PageView::~PageView() */

void __thiscall cocos2d::ui::PageView::~PageView(PageView *this)

{
  PageView *pPVar1;
  code *pcVar2;
  
  *(undefined ***)(this + -0x4f0) = &PTR__PageView_016da3a0;
  *(undefined ***)(this + -0x1d8) = &PTR__PageView_016dabb8;
  *(undefined ***)this = &PTR__PageView_016dabe0;
  pPVar1 = *(PageView **)(this + 0x4c0);
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  if (this + 0x4a0 == pPVar1) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x20);
  }
  else {
    if (pPVar1 == (PageView *)0x0) goto LAB_00db87b8;
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00db87b8:
  ListView::~ListView((ListView *)(this + -0x4f0));
  return;
}

