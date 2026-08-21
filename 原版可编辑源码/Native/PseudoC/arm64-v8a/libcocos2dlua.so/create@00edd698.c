
/* cocos2d::RepeatForever::create(cocos2d::ActionInterval*) */

Action * cocos2d::RepeatForever::create(ActionInterval *param_1)

{
  Action *this;
  
                    /* catch() { ... } // from try @ 00edd34c with catch @ 00edd69c */
                    /* catch() { ... } // from try @ 00edd320 with catch @ 00edd6ac */
                    /* catch() { ... } // from try @ 00edd278 with catch @ 00edd6b0 */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00edd32c with catch @ 00edd6b8
                       catch() { ... } // from try @ 00edd5a8 with catch @ 00edd6b8 */
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* catch() { ... } // from try @ 00edd2f8 with catch @ 00edd6d0
                       catch() { ... } // from try @ 00edd59c with catch @ 00edd6d0 */
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__RepeatForever_016f8630;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8690;
    if (param_1 == (ActionInterval *)0x0) {
      log("RepeatForever::initWithAction error:action is nullptr!");
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      Ref::retain((Ref *)param_1);
      *(ActionInterval **)(this + 0x58) = param_1;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

