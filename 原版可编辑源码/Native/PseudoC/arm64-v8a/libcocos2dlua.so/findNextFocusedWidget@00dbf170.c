
/* cocos2d::ui::ScrollView::findNextFocusedWidget(cocos2d::ui::Widget::FocusDirection,
   cocos2d::ui::Widget*) */

void __thiscall
cocos2d::ui::ScrollView::findNextFocusedWidget
          (ScrollView *this,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)this + 0x698))();
                    /* try { // try from 00dbf1a4 to 00ebf1b3 has its CatchHandler @ 00dbf3bc */
  if ((iVar1 != 1) && (iVar1 = (**(code **)(*(long *)this + 0x698))(this), iVar1 != 2)) {
    Widget::findNextFocusedWidget((Widget *)this,param_2,param_3);
    return;
  }
                    /* try { // try from 00dbf1b8 to 00ebf1c7 has its CatchHandler @ 00dbf39c */
                    /* WARNING: Could not recover jumptable at 0x00dbf1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x7b8) + 0x618))(*(long **)(this + 0x7b8),param_2,param_3);
  return;
}

