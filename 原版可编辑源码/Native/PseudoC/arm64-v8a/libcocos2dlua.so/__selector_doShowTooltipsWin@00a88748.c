
/* fairygui::GRoot::__selector_doShowTooltipsWin(float) */

void fairygui::GRoot::__selector_doShowTooltipsWin(float param_1)

{
  GRoot *in_x0;
  long lVar1;
  
                    /* try { // try from 00a88758 to 00b88767 has its CatchHandler @ 00a89618 */
  lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a88768 to 00b8878b has its CatchHandler @ 00a881e4 */
  cocos2d::Scheduler::unschedule
            (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doShowTooltipsWin);
  doShowTooltipsWin(in_x0);
  return;
}

