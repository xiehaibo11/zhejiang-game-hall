
/* cocos2d::ui::PageViewIndicator::setIndexNodesOpacity(unsigned char) */

void __thiscall
cocos2d::ui::PageViewIndicator::setIndexNodesOpacity(PageViewIndicator *this,uchar param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x318);
  puVar2 = *(undefined8 **)(this + 800);
  this[0x34b] = (PageViewIndicator)param_1;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x490))((long *)*puVar1,param_1);
  }
  return;
}

