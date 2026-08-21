
/* cocos2d::ui::Widget::interceptTouchEvent(cocos2d::ui::Widget::TouchEventType,
   cocos2d::ui::Widget*, cocos2d::Touch*) */

void __thiscall
cocos2d::ui::Widget::interceptTouchEvent
          (Widget *this,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00dabb8c with catch @ 00daba64 */
  lVar1 = (**(code **)(*(long *)this + 0x260))();
  if ((lVar1 != 0) &&
     (plVar2 = (long *)__dynamic_cast(lVar1,&Node::typeinfo,&typeinfo,0), plVar2 != (long *)0x0)) {
    plVar2[0x77] = *(long *)(this + 0x3b8);
    (**(code **)(*plVar2 + 0x620))(plVar2,param_2,param_3,param_4);
    plVar2[0x77] = 0;
  }
                    /* try { // try from 00dabad8 to 00eabadf has its CatchHandler @ 00dabb94 */
  return;
}

