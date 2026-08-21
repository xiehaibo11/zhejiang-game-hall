
/* fairygui::ScrollPane::killTween() */

void __thiscall fairygui::ScrollPane::killTween(ScrollPane *this)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* try { // try from 00a959a8 to 00b959b7 has its CatchHandler @ 00a95df8 */
                    /* try { // try from 00a959b8 to 00b959cf has its CatchHandler @ 00a95dd8 */
  if (*(int *)(this + 0xd0) == 1) {
    plVar2 = *(long **)(this + 0x108);
    fVar3 = *(float *)(this + 0xd4);
    fVar4 = *(float *)(this + 0xd8);
    fVar5 = *(float *)(this + 0xdc);
    fVar6 = *(float *)(this + 0xe0);
    lVar1 = (**(code **)(*(long *)plVar2[0x32] + 0x168))();
                    /* try { // try from 00a959f0 to 00b95a03 has its CatchHandler @ 00a95dd4 */
                    /* try { // try from 00a95a04 to 00b95b0b has its CatchHandler @ 00a954f4 */
    (**(code **)(*plVar2 + 200))(fVar3 + fVar5,*(float *)(lVar1 + 4) - (fVar4 + fVar6),plVar2);
    UIEventDispatcher::dispatchEvent
              (*(UIEventDispatcher **)(this + 0xf8),0x28,(void *)0x0,(Value *)&cocos2d::Value::Null)
    ;
  }
  *(undefined4 *)(this + 0xd0) = 0;
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule(*(_func_void_float **)(lVar1 + 0xa0),(Ref *)tweenUpdate);
  UIEventDispatcher::dispatchEvent
            (*(UIEventDispatcher **)(this + 0xf8),0x29,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

