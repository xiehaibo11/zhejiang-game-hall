
/* cocos2d::ui::Layout::findFirstFocusEnabledWidgetIndex() */

ulong __thiscall cocos2d::ui::Layout::findFirstFocusEnabledWidgetIndex(Layout *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  Widget *this_00;
  ulong uVar5;
  ulong uVar6;
  
                    /* try { // try from 00db0c7c to 00eb0c9f has its CatchHandler @ 00db0e4c */
  plVar3 = (long *)(**(code **)(*(long *)this + 0x240))();
  lVar1 = *plVar3;
  lVar2 = plVar3[1];
  if (0 < lVar2 - lVar1) {
                    /* try { // try from 00db0ca0 to 00eb0cc3 has its CatchHandler @ 00db0e34 */
    uVar6 = 0;
    do {
      lVar4 = *(long *)(*(long *)(this + 0x178) + uVar6 * 8);
      if (((lVar4 != 0) &&
          (this_00 = (Widget *)__dynamic_cast(lVar4,&Node::typeinfo,&Widget::typeinfo,0),
          this_00 != (Widget *)0x0)) && (uVar5 = Widget::isFocusEnabled(this_00), (uVar5 & 1) != 0))
      goto LAB_00db0cf8;
      uVar6 = uVar6 + 1;
                    /* try { // try from 00db0cc4 to 00eb0cd3 has its CatchHandler @ 00db0e10 */
    } while ((long)uVar6 < lVar2 - lVar1 >> 3);
  }
  uVar6 = 0;
LAB_00db0cf8:
  return uVar6 & 0xffffffff;
}

