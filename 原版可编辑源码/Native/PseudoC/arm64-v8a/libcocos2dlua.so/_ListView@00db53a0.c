
/* cocos2d::ui::ListView::~ListView() */

void __thiscall cocos2d::ui::ListView::~ListView(ListView *this)

{
  ListView *pLVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 00db53a0 to 00eb53a7 has its CatchHandler @ 00db5530 */
  puVar3 = *(undefined8 **)(this + 0x8b8);
  puVar4 = *(undefined8 **)(this + 0x8c0);
  *(undefined ***)this = &PTR__ListView_016d9b08;
  *(undefined ***)(this + 0x318) = &PTR__ListView_016da320;
  *(undefined ***)(this + 0x4f0) = &PTR__ListView_016da348;
  *(undefined8 *)(this + 0x908) = 0;
  *(undefined8 *)(this + 0x918) = 0;
  *(undefined8 *)(this + 0x910) = 0;
  if (puVar3 != puVar4) {
    do {
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
                    /* try { // try from 00db5400 to 00eb5407 has its CatchHandler @ 00db54e8 */
    } while (puVar4 != puVar3);
                    /* try { // try from 00db5408 to 00eb5547 has its CatchHandler @ 00db51f0 */
    puVar3 = *(undefined8 **)(this + 0x8b8);
  }
  *(undefined8 **)(this + 0x8c0) = puVar3;
  if (*(Ref **)(this + 0x8b0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x8b0));
  }
  pLVar1 = *(ListView **)(this + 0x940);
  if (this + 0x920 == pLVar1) {
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x20);
  }
  else {
    if (pLVar1 == (ListView *)0x0) goto LAB_00db5448;
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00db5448:
  puVar3 = *(undefined8 **)(this + 0x8b8);
  puVar4 = *(undefined8 **)(this + 0x8c0);
  if (puVar3 != puVar4) {
    do {
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x8b8);
  }
  *(undefined8 **)(this + 0x8c0) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x8c0) = puVar3;
    operator_delete(puVar3);
  }
  ScrollView::~ScrollView((ScrollView *)this);
  return;
}

