
/* cocos2d::ui::Layout::supplyTheLayoutParameterLackToChild(cocos2d::ui::Widget*) */

void __thiscall
cocos2d::ui::Layout::supplyTheLayoutParameterLackToChild(Layout *this,Widget *param_1)

{
  long lVar1;
  LayoutParameter *pLVar2;
  
  if (param_1 == (Widget *)0x0) {
    return;
  }
  if (*(int *)(this + 0x5a8) - 1U < 2) {
                    /* try { // try from 00daea44 to 00eaea53 has its CatchHandler @ 00daed18 */
    lVar1 = (**(code **)(*(long *)param_1 + 0x5f8))(param_1);
                    /* try { // try from 00daea54 to 00eaea67 has its CatchHandler @ 00daed14 */
    if ((lVar1 != 0) &&
       (lVar1 = __dynamic_cast(lVar1,&LayoutParameter::typeinfo,&LinearLayoutParameter::typeinfo,0),
       lVar1 != 0)) {
      return;
    }
    pLVar2 = (LayoutParameter *)LinearLayoutParameter::create();
  }
  else {
    if (*(int *)(this + 0x5a8) != 3) {
      return;
    }
                    /* try { // try from 00daea80 to 00eaea8f has its CatchHandler @ 00daed10 */
    lVar1 = (**(code **)(*(long *)param_1 + 0x5f8))(param_1);
                    /* try { // try from 00daea90 to 00eaeaa3 has its CatchHandler @ 00daed0c */
    if ((lVar1 != 0) &&
       (lVar1 = __dynamic_cast(lVar1,&LayoutParameter::typeinfo,&RelativeLayoutParameter::typeinfo,0
                              ), lVar1 != 0)) {
      return;
    }
                    /* try { // try from 00daeabc to 00eaeacb has its CatchHandler @ 00daed08 */
    pLVar2 = (LayoutParameter *)RelativeLayoutParameter::create();
  }
                    /* try { // try from 00daeacc to 00eaeadf has its CatchHandler @ 00daed04 */
  Widget::setLayoutParameter(param_1,pLVar2);
  return;
}

