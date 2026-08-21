
/* cocos2d::RepeatForever::initWithAction(cocos2d::ActionInterval*) */

bool __thiscall cocos2d::RepeatForever::initWithAction(RepeatForever *this,ActionInterval *param_1)

{
  if (param_1 == (ActionInterval *)0x0) {
    log("RepeatForever::initWithAction error:action is nullptr!");
  }
  else {
                    /* try { // try from 00edd760 to 00fdd8cf has its CatchHandler @ 00edd760
                       catch() { ... } // from try @ 00edd760 with catch @ 00edd760
                       catch() { ... } // from try @ 00edd8d4 with catch @ 00edd760
                       catch() { ... } // from try @ 00edd988 with catch @ 00edd760 */
    Ref::retain((Ref *)param_1);
    *(ActionInterval **)(this + 0x58) = param_1;
  }
  return param_1 != (ActionInterval *)0x0;
}

