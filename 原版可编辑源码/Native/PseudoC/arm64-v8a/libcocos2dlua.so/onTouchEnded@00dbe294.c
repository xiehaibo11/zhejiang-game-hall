
/* cocos2d::ui::ScrollView::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::ui::ScrollView::onTouchEnded(Touch *param_1,Event *param_2)

{
                    /* catch() { ... } // from try @ 00dbdb44 with catch @ 00dbe29c */
  Widget::onTouchEnded(param_1,param_2);
  if (param_1[0x7b1] == (Touch)0x0) {
                    /* catch() { ... } // from try @ 00dbdb60 with catch @ 00dbe2bc */
                    /* catch() { ... } // from try @ 00dbdb18 with catch @ 00dbe2c0 */
                    /* catch() { ... } // from try @ 00dbe0a0 with catch @ 00dbe2c4
                       catch() { ... } // from try @ 00dbe1b8 with catch @ 00dbe2c4 */
    (**(code **)(*(long *)param_1 + 0x7e8))(param_1,param_2);
  }
  param_1[0x7b1] = (Touch)0x0;
  return;
}

