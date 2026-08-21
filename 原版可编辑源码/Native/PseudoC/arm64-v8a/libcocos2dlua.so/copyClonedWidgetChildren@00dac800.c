
/* cocos2d::ui::Widget::copyClonedWidgetChildren(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::Widget::copyClonedWidgetChildren(Widget *this,Widget *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  Widget *pWVar4;
  Widget *this_00;
  
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  plVar1 = (long *)*plVar2;
  plVar2 = (long *)plVar2[1];
  if (plVar1 != plVar2) {
    lVar3 = *plVar1;
    while( true ) {
      if ((lVar3 != 0) &&
         (pWVar4 = (Widget *)__dynamic_cast(lVar3,&Node::typeinfo,&typeinfo,0),
         pWVar4 != (Widget *)0x0)) {
        this_00 = (Widget *)(**(code **)(*(long *)pWVar4 + 0x668))();
        copyProperties(this_00,pWVar4);
        (**(code **)(*(long *)this_00 + 0x678))(this_00,pWVar4);
        (**(code **)(*(long *)this + 0x208))(this,this_00);
      }
      plVar1 = plVar1 + 1;
      if (plVar2 == plVar1) break;
      lVar3 = *plVar1;
    }
  }
  return;
}

