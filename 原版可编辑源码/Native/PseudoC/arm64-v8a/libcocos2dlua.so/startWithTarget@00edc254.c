
/* cocos2d::ActionInterval::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ActionInterval::startWithTarget(ActionInterval *this,Node *param_1)

{
                    /* try { // try from 00edc25c to 00fdc383 has its CatchHandler @ 00edc134 */
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  return;
}

