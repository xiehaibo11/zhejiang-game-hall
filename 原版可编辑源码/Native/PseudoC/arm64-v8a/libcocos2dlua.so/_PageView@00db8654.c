
/* cocos2d::ui::PageView::~PageView() */

void __thiscall cocos2d::ui::PageView::~PageView(PageView *this)

{
  PageView *pPVar1;
  code *pcVar2;
  
  pPVar1 = *(PageView **)(this + 0x9b0);
  *(undefined8 *)(this + 0x970) = 0;
  *(undefined ***)this = &PTR__PageView_016da3a0;
                    /* try { // try from 00db868c to 00eb8697 has its CatchHandler @ 00db87f4 */
  *(undefined ***)(this + 0x318) = &PTR__PageView_016dabb8;
  *(undefined ***)(this + 0x4f0) = &PTR__PageView_016dabe0;
  *(undefined8 *)(this + 0x980) = 0;
  *(undefined8 *)(this + 0x978) = 0;
  if (this + 0x990 == pPVar1) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x20);
  }
  else {
    if (pPVar1 == (PageView *)0x0) goto LAB_00db86bc;
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00db86bc:
  ListView::~ListView((ListView *)this);
  return;
}

