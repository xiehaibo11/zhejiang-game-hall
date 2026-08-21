
/* cocos2d::ui::ScrollView::~ScrollView() */

void __thiscall cocos2d::ui::ScrollView::~ScrollView(ScrollView *this)

{
  ScrollView *pSVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ScrollView *pSVar5;
  
                    /* try { // try from 00dbaec8 to 00ebaecf has its CatchHandler @ 00dbaf14 */
                    /* try { // try from 00dbaed0 to 00ebaf2f has its CatchHandler @ 00dbaea4 */
  *(undefined ***)this = &PTR__ScrollView_016db2e0;
  *(undefined ***)(this + 0x318) = &PTR__ScrollView_016dbae8;
  *(undefined ***)(this + 0x4f0) = &PTR__ScrollView_016dbb10;
  *(undefined8 *)(this + 0x860) = 0;
  *(undefined8 *)(this + 0x858) = 0;
  *(undefined8 *)(this + 0x870) = 0;
  *(undefined8 *)(this + 0x868) = 0;
  *(undefined8 *)(this + 0x878) = 0;
  pSVar1 = *(ScrollView **)(this + 0x8a0);
                    /* catch() { ... } // from try @ 00dbaec8 with catch @ 00dbaf14 */
  if (this + 0x880 == pSVar1) {
                    /* try { // try from 00dbaf30 to 00ebaf7b has its CatchHandler @ 00dbaf30
                       catch() { ... } // from try @ 00dbaf30 with catch @ 00dbaf30
                       catch() { ... } // from try @ 00dbaf98 with catch @ 00dbaf30 */
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (ScrollView *)0x0) goto LAB_00dbaf38;
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00dbaf38:
  if (*(long *)(this + 0x808) != 0) {
    lVar3 = *(long *)(this + 0x7f8);
    pSVar1 = *(ScrollView **)(this + 0x800);
    lVar4 = *(long *)pSVar1;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    *(undefined8 *)(this + 0x808) = 0;
    while (pSVar1 != this + 0x7f8) {
      pSVar5 = *(ScrollView **)(pSVar1 + 8);
      operator_delete(pSVar1);
                    /* try { // try from 00dbaf7c to 00ebaf97 has its CatchHandler @ 00dbafd4 */
      pSVar1 = pSVar5;
    }
  }
  if (*(long *)(this + 0x7f0) != 0) {
    lVar3 = *(long *)(this + 0x7e0);
    pSVar1 = *(ScrollView **)(this + 0x7e8);
                    /* try { // try from 00dbaf98 to 00ebafef has its CatchHandler @ 00dbaf30 */
    lVar4 = *(long *)pSVar1;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    *(undefined8 *)(this + 0x7f0) = 0;
    while (pSVar1 != this + 0x7e0) {
      pSVar5 = *(ScrollView **)(pSVar1 + 8);
      operator_delete(pSVar1);
      pSVar1 = pSVar5;
    }
  }
                    /* catch() { ... } // from try @ 00dbaf7c with catch @ 00dbafd4 */
  Layout::~Layout((Layout *)this);
  return;
}

