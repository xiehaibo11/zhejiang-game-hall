
/* cocos2d::ui::ListView::remedyLayoutParameter(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::ListView::remedyLayoutParameter(ListView *this,Widget *param_1)

{
  bool bVar1;
  LinearLayoutParameter *pLVar2;
  long *plVar3;
  long *plVar4;
  Widget *pWVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  pLVar2 = (LinearLayoutParameter *)(**(code **)(*(long *)param_1 + 0x5f8))(param_1);
  bVar1 = pLVar2 == (LinearLayoutParameter *)0x0;
  if (bVar1) {
    pLVar2 = (LinearLayoutParameter *)LinearLayoutParameter::create();
  }
  plVar4 = *(long **)(this + 0x8b8);
  plVar3 = *(long **)(this + 0x8c0);
  plVar7 = plVar3;
  plVar8 = plVar4;
  if (plVar4 != plVar3) {
    pWVar5 = (Widget *)*plVar4;
    plVar6 = plVar4;
                    /* try { // try from 00db5b98 to 00eb5b9b has its CatchHandler @ 00db5c68 */
                    /* try { // try from 00db5b9c to 00eb5c7f has its CatchHandler @ 00db5a38 */
    while ((plVar7 = plVar6, plVar8 = plVar6, pWVar5 != param_1 &&
           (plVar6 = plVar6 + 1, plVar7 = plVar3, plVar8 = plVar3, plVar3 != plVar6))) {
      pWVar5 = (Widget *)*plVar6;
    }
  }
  lVar9 = (long)plVar8 - (long)plVar4 >> 3;
  if (plVar7 == plVar3) {
    lVar9 = -1;
  }
  if (*(int *)(this + 0x7c0) == 2) {
    remedyHorizontalLayoutParameter(this,pLVar2,lVar9);
  }
  else if (*(int *)(this + 0x7c0) == 1) {
    remedyVerticalLayoutParameter(this,pLVar2,lVar9);
  }
  if (!bVar1) {
    return;
  }
  Widget::setLayoutParameter(param_1,(LayoutParameter *)pLVar2);
  return;
}

