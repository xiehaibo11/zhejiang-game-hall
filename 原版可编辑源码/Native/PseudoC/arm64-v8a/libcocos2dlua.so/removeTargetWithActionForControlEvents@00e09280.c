
/* cocos2d::extension::Control::removeTargetWithActionForControlEvents(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*, cocos2d::extension::Control::EventType),
   cocos2d::extension::Control::EventType) */

void cocos2d::extension::Control::removeTargetWithActionForControlEvents
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               uint param_5)

{
  if ((param_5 & 1) != 0) {
    removeTargetWithActionForControlEvent(param_1,param_2,param_3,param_4,1);
  }
  if ((param_5 >> 1 & 1) != 0) {
                    /* try { // try from 00e092fc to 00f0932f has its CatchHandler @ 00e096b0 */
    removeTargetWithActionForControlEvent(param_1,param_2,param_3,param_4,2);
  }
  if ((param_5 >> 2 & 1) != 0) {
    removeTargetWithActionForControlEvent(param_1,param_2,param_3,param_4,4);
  }
  if ((param_5 >> 3 & 1) != 0) {
                    /* try { // try from 00e09338 to 00f0933f has its CatchHandler @ 00e0968c */
                    /* try { // try from 00e09340 to 00f0934b has its CatchHandler @ 00e0967c */
    removeTargetWithActionForControlEvent(param_1,param_2,param_3,param_4,8);
  }
  if ((param_5 >> 4 & 1) != 0) {
                    /* try { // try from 00e09360 to 00f09387 has its CatchHandler @ 00e096b0 */
    removeTargetWithActionForControlEvent(param_1,param_2,param_3,param_4,0x10);
  }
  if ((param_5 >> 5 & 1) != 0) {
    removeTargetWithActionForControlEvent(param_1,param_2,param_3,param_4,0x20);
  }
  if ((param_5 >> 6 & 1) != 0) {
    removeTargetWithActionForControlEvent(param_1,param_2,param_3,param_4,0x40);
  }
  if ((param_5 >> 7 & 1) != 0) {
    removeTargetWithActionForControlEvent(param_1,param_2,param_3,param_4,0x80);
  }
  if ((param_5 >> 8 & 1) != 0) {
    removeTargetWithActionForControlEvent(param_1,param_2,param_3,param_4,0x100);
    return;
  }
  return;
}

