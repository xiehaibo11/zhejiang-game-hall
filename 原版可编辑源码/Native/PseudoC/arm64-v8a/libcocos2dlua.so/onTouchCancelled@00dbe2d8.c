
/* cocos2d::ui::ScrollView::onTouchCancelled(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::ui::ScrollView::onTouchCancelled(Touch *param_1,Event *param_2)

{
                    /* catch() { ... } // from try @ 00dbdcec with catch @ 00dbe2d8 */
                    /* catch() { ... } // from try @ 00dbdc90 with catch @ 00dbe2dc */
                    /* catch() { ... } // from try @ 00dbde30 with catch @ 00dbe2e0 */
  Widget::onTouchCancelled(param_1,param_2);
  if (param_1[0x7b1] == (Touch)0x0) {
                    /* catch() { ... } // from try @ 00dbdc14 with catch @ 00dbe300 */
                    /* catch() { ... } // from try @ 00dbe048 with catch @ 00dbe304 */
    (**(code **)(*(long *)param_1 + 0x7e8))(param_1,param_2);
  }
  param_1[0x7b1] = (Touch)0x0;
  return;
}

