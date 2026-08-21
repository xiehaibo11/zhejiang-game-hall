
/* non-virtual thunk to cocos2d::ui::PageView::~PageView() */

void __thiscall cocos2d::ui::PageView::~PageView(PageView *this)

{
  PageView *pPVar1;
  code *pcVar2;
  ListView *this_00;
  
  this_00 = (ListView *)(this + -0x318);
  *(undefined ***)this_00 = &PTR__PageView_016da3a0;
  *(undefined ***)this = &PTR__PageView_016dabb8;
  *(undefined ***)(this + 0x1d8) = &PTR__PageView_016dabe0;
  pPVar1 = *(PageView **)(this + 0x698);
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined8 *)(this + 0x668) = 0;
  *(undefined8 *)(this + 0x660) = 0;
  if (this + 0x678 == pPVar1) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x20);
  }
  else {
    if (pPVar1 == (PageView *)0x0) goto LAB_00db88b4;
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00db88b4:
  ListView::~ListView(this_00);
  operator_delete(this_00);
  return;
}

