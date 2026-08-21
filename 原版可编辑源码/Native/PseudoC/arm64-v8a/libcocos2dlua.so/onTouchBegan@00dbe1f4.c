
/* cocos2d::ui::ScrollView::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

uint cocos2d::ui::ScrollView::onTouchBegan(Touch *param_1,Event *param_2)

{
  uint uVar1;
  
  uVar1 = Widget::onTouchBegan(param_1,param_2);
  if ((param_1[0x7b1] == (Touch)0x0) && (param_1[0x3b4] != (Touch)0x0)) {
    (**(code **)(*(long *)param_1 + 0x7d8))(param_1,param_2);
  }
                    /* try { // try from 00dbe240 to 00ebe247 has its CatchHandler @ 00dbe250 */
                    /* try { // try from 00dbe248 to 00ebe24f has its CatchHandler @ 00dbe258 */
  return uVar1 & 1;
}

