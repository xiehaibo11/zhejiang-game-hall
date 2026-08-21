
/* cocos2d::ui::Layout::setLayoutType(cocos2d::ui::Layout::Type) */

void __thiscall cocos2d::ui::Layout::setLayoutType(Layout *this,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  Widget *pWVar4;
  
  puVar1 = *(undefined8 **)(this + 0x178);
  puVar2 = *(undefined8 **)(this + 0x180);
  *(undefined4 *)(this + 0x5a8) = param_2;
                    /* try { // try from 00db005c to 00eb00bf has its CatchHandler @ 00db0118 */
  if (puVar1 != puVar2) {
    pWVar4 = (Widget *)*puVar1;
    while( true ) {
      if ((pWVar4 != (Widget *)0x0) &&
         (lVar3 = __dynamic_cast(pWVar4,&Node::typeinfo,&Widget::typeinfo,0), lVar3 != 0)) {
        supplyTheLayoutParameterLackToChild(this,pWVar4);
      }
      puVar1 = puVar1 + 1;
      if (puVar2 == puVar1) break;
      pWVar4 = (Widget *)*puVar1;
    }
  }
  this[0x7b0] = (Layout)0x1;
                    /* try { // try from 00db00c0 to 00eb0133 has its CatchHandler @ 00daff04 */
  return;
}

