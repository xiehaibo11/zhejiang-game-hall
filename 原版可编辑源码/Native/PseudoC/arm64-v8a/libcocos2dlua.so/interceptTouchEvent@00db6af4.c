
/* cocos2d::ui::ListView::interceptTouchEvent(cocos2d::ui::Widget::TouchEventType,
   cocos2d::ui::Widget*, cocos2d::Touch*) */

void cocos2d::ui::ListView::interceptTouchEvent(ListView *param_1,int param_2,Widget *param_3)

{
  long lVar1;
  Widget *pWVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  ScrollView::interceptTouchEvent();
  if (param_2 == 1) {
    return;
  }
  pWVar2 = param_3;
  if (param_1[900] == (ListView)0x0) {
    return;
  }
  while (pWVar2 != (Widget *)0x0) {
    lVar1 = (**(code **)(*(long *)pWVar2 + 0x260))(pWVar2);
    if (lVar1 == *(long *)(param_1 + 0x7b8)) {
      puVar4 = *(undefined8 **)(param_1 + 0x8b8);
      puVar5 = *(undefined8 **)(param_1 + 0x8c0);
      puVar7 = puVar5;
      puVar8 = puVar4;
      if ((puVar4 == puVar5) || (puVar7 = puVar4, puVar6 = puVar4, (Widget *)*puVar4 == pWVar2))
      goto LAB_00db6bec;
      goto LAB_00db6bac;
    }
    lVar1 = (**(code **)(*(long *)pWVar2 + 0x260))(pWVar2);
    if (lVar1 == 0) break;
    pWVar2 = (Widget *)__dynamic_cast(lVar1,&Node::typeinfo,&Widget::typeinfo,0);
  }
  goto LAB_00db6c00;
  while (puVar7 = puVar6, puVar8 = puVar6, (Widget *)*puVar6 != pWVar2) {
LAB_00db6bac:
    puVar6 = puVar6 + 1;
    puVar7 = puVar5;
    puVar8 = puVar5;
    if (puVar5 == puVar6) break;
  }
LAB_00db6bec:
  lVar1 = (long)puVar8 - (long)puVar4 >> 3;
  if (puVar7 == puVar5) {
    lVar1 = -1;
  }
  *(long *)(param_1 + 0x8f8) = lVar1;
LAB_00db6c00:
  uVar3 = Widget::isHighlighted(param_3);
  if ((uVar3 & 1) == 0) {
    return;
  }
  selectedItemEvent(param_1,param_2);
  return;
}

