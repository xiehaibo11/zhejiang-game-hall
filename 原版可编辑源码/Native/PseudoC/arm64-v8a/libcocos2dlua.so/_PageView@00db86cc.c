
/* non-virtual thunk to cocos2d::ui::PageView::~PageView() */

void __thiscall cocos2d::ui::PageView::~PageView(PageView *this)

{
  PageView *pPVar1;
  code *pcVar2;
  
  *(undefined ***)(this + -0x318) = &PTR__PageView_016da3a0;
                    /* try { // try from 00db86f4 to 00eb86fb has its CatchHandler @ 00db87dc */
  *(undefined ***)this = &PTR__PageView_016dabb8;
                    /* try { // try from 00db86fc to 00eb880b has its CatchHandler @ 00db84d4 */
  *(undefined ***)(this + 0x1d8) = &PTR__PageView_016dabe0;
  pPVar1 = *(PageView **)(this + 0x698);
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined8 *)(this + 0x668) = 0;
  *(undefined8 *)(this + 0x660) = 0;
  if (this + 0x678 == pPVar1) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x20);
  }
  else {
    if (pPVar1 == (PageView *)0x0) goto LAB_00db8738;
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00db8738:
  ListView::~ListView((ListView *)(this + -0x318));
  return;
}

