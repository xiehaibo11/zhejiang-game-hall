
/* cocos2d::ui::CheckBox::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::ui::CheckBox::onTouchEnded(Touch *param_1,Event *param_2)

{
  Touch TVar1;
  long lVar2;
  
  TVar1 = param_1[0x518];
  if (TVar1 == (Touch)0x0) {
    (**(code **)(*(long *)param_1 + 0x680))(param_1,1);
    Widget::onTouchEnded(param_1,param_2);
    lVar2 = *(long *)param_1;
  }
  else {
    (**(code **)(*(long *)param_1 + 0x680))(param_1,0);
                    /* try { // try from 00dc4d28 to 00ec4d37 has its CatchHandler @ 00dc5284 */
    Widget::onTouchEnded(param_1,param_2);
    lVar2 = *(long *)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00dc4d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00dc4d80 to 00ec4d8b has its CatchHandler @ 00dc5220 */
  (**(code **)(lVar2 + 0x6b8))(param_1,TVar1 == (Touch)0x0);
  return;
}

