
/* cocos2d::ui::ListView::copyClonedWidgetChildren(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::ListView::copyClonedWidgetChildren(ListView *this,Widget *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x8c0);
  for (puVar2 = *(undefined8 **)(param_1 + 0x8b8); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    uVar1 = Widget::clone((Widget *)*puVar2);
                    /* try { // try from 00db79c8 to 00eb79d3 has its CatchHandler @ 00db7bc4 */
    (**(code **)(*(long *)this + 0x800))(this,uVar1);
                    /* try { // try from 00db79dc to 00eb7a03 has its CatchHandler @ 00db7bc8 */
    (**(code **)(*(long *)this + 0x208))(this,uVar1);
    (**(code **)(*(long *)this + 0x6a8))(this);
  }
                    /* try { // try from 00db7a04 to 00eb7bdb has its CatchHandler @ 00db7940 */
  return;
}

