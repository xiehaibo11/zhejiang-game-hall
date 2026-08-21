
/* cocos2d::ui::ListView::handleReleaseLogic(cocos2d::Touch*) */

void cocos2d::ui::ListView::handleReleaseLogic(Touch *param_1)

{
                    /* try { // try from 00db55e0 to 00eb55fb has its CatchHandler @ 00db564c */
  ScrollView::handleReleaseLogic(param_1);
  if (param_1[0x81d] != (Touch)0x0) {
                    /* try { // try from 00db5600 to 00eb561b has its CatchHandler @ 00db5648 */
    return;
  }
  startMagneticScroll((ListView *)param_1);
  return;
}

